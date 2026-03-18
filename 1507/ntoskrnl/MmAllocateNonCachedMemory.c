/*
 * XREFs of MmAllocateNonCachedMemory @ 0x1406A2544
 * Callers:
 *     VerifierMmAllocateNonCachedMemory @ 0x140753474 (VerifierMmAllocateNonCachedMemory.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rsi
  struct _MDL *PagesForMdl; // rbx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  char *v6; // rdi
  struct _MDL *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
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
  v5 = (unsigned __int64)MiReservePtes((__int64)&qword_14034FC70, v2, v4);
  v6 = (char *)v5;
  if ( !v5 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  v7 = PagesForMdl + 1;
  v8 = (__int64)(v5 << 25) >> 16;
  *(_QWORD *)(48 * ((__int64)&PagesForMdl[1].Next[-2624702237LL].MappedSystemVa + 3)) = PagesForMdl;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5) )
    v9 |= 0x100uLL;
  v10 = v9 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
  v11 = (char *)v7 - v6;
  do
  {
    v10 ^= (v10 ^ (*(_QWORD *)&v6[v11] << 12)) & 0xFFFFFFFFF000LL;
    *(_QWORD *)v6 = v10;
    if ( MiPteInShadowRange((__int64)v6) )
      MiWritePteShadow((__int64)v6, v10);
    v6 += 8;
    --v2;
  }
  while ( v2 );
  return (PVOID)v8;
}
