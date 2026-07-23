/*
 * XREFs of MmAllocateNonCachedMemory @ 0x1406588A8
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MmFreePagesFromMdl @ 0x1400996F0 (MmFreePagesFromMdl.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rsi
  struct _MDL *PagesForMdl; // rbp
  unsigned __int64 v4; // r8
  ULONG_PTR v5; // rdi
  struct _MDL *v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v8; // r9
  ULONG_PTR v9; // r14
  __int64 v10; // rcx

  if ( NumberOfBytes >= 0x100000000LL )
    return 0LL;
  v2 = ((NumberOfBytes & 0xFFF) != 0) + (NumberOfBytes >> 12);
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (__int64)MiSystemPartition,
                                 0LL,
                                 0xFFFFFFFFFFFFFFFFuLL,
                                 0LL,
                                 NumberOfBytes,
                                 MiPlatformCacheAttributes[0],
                                 *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600)
                                          + 146LL),
                                 4);
  if ( !PagesForMdl )
    return 0LL;
  v5 = MiReservePtes((__int64)&qword_1403278B0, (unsigned int)v2, v4);
  if ( !v5 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  v6 = PagesForMdl + 1;
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x57FFFFFFFF0LL) = PagesForMdl;
  v7 = (__int64)(v5 << 25) >> 16;
  v8 = MiMakeValidKernelPte(-1LL, 12, v5) | 0x42;
  v9 = (ULONG_PTR)v6 - v5;
  do
  {
    *(_QWORD *)v5 = (v8 ^ (*(_QWORD *)(v9 + v5) << 12)) & 0xFFFFFFFFF000LL ^ v8;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow(v10, v8);
    v5 += 8LL;
    --v2;
  }
  while ( v2 );
  return (PVOID)v7;
}
