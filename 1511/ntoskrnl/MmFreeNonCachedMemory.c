/*
 * XREFs of MmFreeNonCachedMemory @ 0x1406234E8
 * Callers:
 *     VerifierMmFreeNonCachedMemory @ 0x1406CFD40 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140011F04 (MmFreePagesFromMdl.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  _BOOL8 v3; // rsi
  __int64 *PteAddress; // rdi
  unsigned __int64 v5; // rcx
  struct _MDL *v6; // rbx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = (NumberOfBytes & 0xFFF) != 0;
  PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)BaseAddress);
  v7 = MI_READ_PTE_LOCK_FREE(PteAddress);
  v5 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v7) - 0x58000000000LL;
  v6 = *(struct _MDL **)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 128LL;
  MmFreePagesFromMdl(v6);
  ExFreePoolWithTag(v6, 0);
  MiReleasePtes((__int64)&qword_1402FF7B0, PteAddress, v3 + (NumberOfBytes >> 12));
}
