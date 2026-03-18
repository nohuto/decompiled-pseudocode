/*
 * XREFs of HvFreeHivePartial @ 0x14044D4F0
 * Callers:
 *     HvpTruncateBins @ 0x14044D444 (HvpTruncateBins.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvpFreeBin @ 0x1404A086C (HvpFreeBin.c)
 *     CmpFree @ 0x1404A08B0 (CmpFree.c)
 *     CmpReleaseGlobalQuota @ 0x1404A08D0 (CmpReleaseGlobalQuota.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1404AF334 (HvpAdjustHiveFreeDisplay.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1404AF5C0 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpFreeMap @ 0x140558618 (HvpFreeMap.c)
 */

__int64 __fastcall HvFreeHivePartial(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r12
  unsigned int v7; // edi
  __int64 result; // rax
  int v9; // esi
  unsigned int v10; // r13d
  __int64 FreeBin; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  void *CellMap; // rax
  unsigned int v17; // r8d
  int v18; // edx
  ULONG v19; // r14d
  ULONG v20; // ebx
  int v21; // ebx
  unsigned int v22; // [rsp+68h] [rbp+10h]

  v5 = 632LL * (int)a3;
  v7 = a2;
  result = *(unsigned int *)(v5 + BugCheckParameter2 + 1400);
  v22 = result;
  if ( a2 != (_DWORD)result )
  {
    v9 = a3 << 31;
    do
    {
      v10 = v7;
      if ( !HvpGetCellMap(BugCheckParameter2, v9 + v7) )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9 + v7, 0x177uLL);
      FreeBin = HvpMapEntryGetFreeBin();
      v13 = FreeBin;
      if ( FreeBin )
      {
        if ( (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
          HvpFreeBin(
            BugCheckParameter2,
            *(_DWORD *)(FreeBin + 16),
            a3,
            *(_DWORD *)(v12 + 8) & 0xFFFFFFF0,
            *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
        else
          CmpReleaseGlobalQuota(*(unsigned int *)(FreeBin + 16));
        v14 = *(_QWORD *)v13;
        v15 = *(_QWORD **)(v13 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || *v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        v7 += *(_DWORD *)(v13 + 16);
        CmpFree(v13, 32LL);
      }
      else
      {
        v18 = *(_DWORD *)(v12 + 32);
        v7 += v18;
        if ( v18 )
          HvpFreeBin(
            BugCheckParameter2,
            v18,
            a3,
            *(_DWORD *)(v12 + 8) & 0xFFFFFFF0,
            *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      do
      {
        CellMap = (void *)HvpGetCellMap(BugCheckParameter2, v9 + v10);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9 + v10, 0x1B3uLL);
        memset(CellMap, 0, 0x28uLL);
        v10 += 4096;
      }
      while ( v10 < v7 );
    }
    while ( v7 < v22 );
    if ( a2 )
      v17 = (a2 - 1) >> 21;
    else
      v17 = -1;
    HvpFreeMap(
      BugCheckParameter2,
      *(_QWORD *)(v5 + BugCheckParameter2 + 1408),
      v17 + 1,
      (unsigned int)((*(_DWORD *)(v5 + BugCheckParameter2 + 1400) >> 12) - 1) >> 9);
    if ( !a3 )
      CmpUpdateSystemHiveHysteresis(BugCheckParameter2, a2 & 0x7FFFFFFF, *(unsigned int *)(BugCheckParameter2 + 1400));
    *(_DWORD *)(v5 + BugCheckParameter2 + 1400) = a2 & 0x7FFFFFFF;
    if ( !a3 )
    {
      v19 = a2 >> 9;
      v20 = *(_DWORD *)(BugCheckParameter2 + 72) - v19;
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v19, v20);
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 96), v19, v20);
      *(_QWORD *)(BugCheckParameter2 + 80) = *(_QWORD *)(BugCheckParameter2 + 80);
      *(_DWORD *)(BugCheckParameter2 + 72) = v19;
      *(_QWORD *)(BugCheckParameter2 + 104) = *(_QWORD *)(BugCheckParameter2 + 104);
      *(_DWORD *)(BugCheckParameter2 + 96) = v19;
      v21 = *(_DWORD *)(BugCheckParameter2 + 88);
      *(_DWORD *)(BugCheckParameter2 + 88) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
      *(_DWORD *)(BugCheckParameter2 + 112) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
      _InterlockedExchangeAdd(&CmpDirtySectorCount, *(_DWORD *)(BugCheckParameter2 + 88) - v21);
    }
    return HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(unsigned int *)(v5 + BugCheckParameter2 + 1400), a3);
  }
  return result;
}
