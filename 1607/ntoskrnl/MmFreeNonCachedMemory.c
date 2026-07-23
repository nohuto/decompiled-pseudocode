/*
 * XREFs of MmFreeNonCachedMemory @ 0x140658A2C
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MmFreePagesFromMdl @ 0x1400996F0 (MmFreePagesFromMdl.c)
 *     MiSetPfnOriginalPte @ 0x140171DDC (MiSetPfnOriginalPte.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  _BOOL8 v3; // rsi
  __int64 PteAddress; // rdi
  struct _MDL *v5; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v7; // r9
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = (NumberOfBytes & 0xFFF) != 0;
  PteAddress = MiGetPteAddress((unsigned __int64)BaseAddress);
  v8 = MI_READ_PTE_LOCK_FREE(PteAddress);
  v5 = *(struct _MDL **)(MI_GET_PFN_FROM_PTE((__int64)&v8) + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  MiSetPfnOriginalPte(v7, DemandZeroPte);
  MmFreePagesFromMdl(v5);
  ExFreePoolWithTag(v5, 0);
  MiReleasePtes((__int64)&qword_1403278B0, PteAddress, v3 + (NumberOfBytes >> 12));
}
