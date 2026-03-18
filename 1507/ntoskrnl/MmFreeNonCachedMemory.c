/*
 * XREFs of MmFreeNonCachedMemory @ 0x1406A27D0
 * Callers:
 *     VerifierMmFreeNonCachedMemory @ 0x14075380C (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     MiSetPfnOriginalPte @ 0x140195D70 (MiSetPfnOriginalPte.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rsi
  unsigned __int64 *v3; // rdi
  unsigned __int64 PteShadow; // rbx
  struct _MDL *v5; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = ((NumberOfBytes & 0xFFF) != 0) + (NumberOfBytes >> 12);
  v3 = (unsigned __int64 *)((((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v3;
  if ( MiPteInShadowRange((__int64)v3) )
    PteShadow = MiReadPteShadow((__int64)v3, PteShadow);
  v8 = PteShadow;
  if ( MiPteInShadowRange((__int64)&v8) )
    PteShadow = MiReadPteShadow((__int64)&v8, PteShadow);
  v5 = *(struct _MDL **)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  MiSetPfnOriginalPte(v7, DemandZeroPte);
  MmFreePagesFromMdl(v5);
  ExFreePoolWithTag(v5, 0);
  MiReleasePtes((__int64)&qword_14034FC70, v3, v2);
}
