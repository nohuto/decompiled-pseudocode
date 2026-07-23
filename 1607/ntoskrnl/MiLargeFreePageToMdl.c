/*
 * XREFs of MiLargeFreePageToMdl @ 0x140089824
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiTryUnlinkNodeLargePage @ 0x1400899E0 (MiTryUnlinkNodeLargePage.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // r15
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = MiLargePageSizes[a2];
  v5 = a1 & ~(v4 - 1);
  if ( (int)MiTryUnlinkNodeLargePage(v5) > 1 )
    return 0LL;
  v13 = 0LL;
  v7 = 48 * v5 - 0x58000000000LL;
  v8 = (_QWORD *)(v7 + 48 * v4);
  v9 = v5 + v4;
  if ( (*(_BYTE *)(v7 + 34) & 7) == 1 )
    MiSetOriginalPtePfnFromFreeList(&v13);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = (_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL);
  do
  {
    --v9;
    v11 -= 6;
    MiLockPageAtDpcInline((__int64)(v8 - 6));
    v12 = v13;
    v8 = v11 - 5;
    *(v11 - 5) = 0LL;
    *(v11 - 3) = v12;
    MiSetPfnBlink(v11 - 5, 0LL, 1LL);
    *v11 &= 0xFFFFFFF000000000uLL;
    *((_BYTE *)v11 - 6) = *((_BYTE *)v11 - 6) & 0xF8 | 5;
    _InterlockedAnd64(v11 - 2, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v9 & 0xF) == 0 && KeShouldYieldProcessor() )
    {
      __writecr8(CurrentIrql);
      CurrentIrql = 17;
    }
    if ( a3 )
      *a3++ = v9;
    if ( CurrentIrql == 17 )
    {
      if ( v8 == (_QWORD *)v7 )
        return 1LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
  }
  while ( (unsigned __int64)v8 > v7 );
  __writecr8(CurrentIrql);
  return 1LL;
}
