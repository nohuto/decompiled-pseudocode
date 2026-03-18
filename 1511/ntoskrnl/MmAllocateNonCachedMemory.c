/*
 * XREFs of MmAllocateNonCachedMemory @ 0x140623364
 * Callers:
 *     VerifierMmAllocateNonCachedMemory @ 0x1406CF9A8 (VerifierMmAllocateNonCachedMemory.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140011F04 (MmFreePagesFromMdl.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rsi
  struct _MDL *PagesForMdl; // rbp
  unsigned __int64 v4; // r8
  ULONG_PTR v5; // rax
  __int64 v6; // r9
  char *v7; // rdi
  struct _MDL *v8; // r14
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  signed __int64 v11; // r14

  if ( NumberOfBytes >= 0x100000000LL )
    return 0LL;
  v2 = ((NumberOfBytes & 0xFFF) != 0) + (NumberOfBytes >> 12);
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (__int64)MiSystemPartition,
                                 0LL,
                                 -1LL,
                                 0LL,
                                 NumberOfBytes,
                                 MiPlatformCacheAttributes[0],
                                 *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600)
                                          + 146LL),
                                 4u);
  if ( !PagesForMdl )
    return 0LL;
  v5 = MiReservePtes((__int64)&qword_1402FF7B0, v2, v4);
  v7 = (char *)v5;
  if ( !v5 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  v8 = PagesForMdl + 1;
  *(_QWORD *)(48 * ((__int64)&PagesForMdl[1].Next[-2624702237LL].MappedSystemVa + 3)) = PagesForMdl;
  v9 = (__int64)(v5 << 25) >> 16;
  v10 = MiMakeValidKernelPte(-1LL, 12, v5, v6) | 0x42;
  v11 = (char *)v8 - v7;
  do
  {
    v10 ^= (v10 ^ (*(_QWORD *)&v7[v11] << 12)) & 0xFFFFFFFFF000LL;
    *(_QWORD *)v7 = v10;
    if ( MiPteInShadowRange((__int64)v7) )
      MiWritePteShadow((__int64)v7, v10);
    v7 += 8;
    --v2;
  }
  while ( v2 );
  return (PVOID)v9;
}
