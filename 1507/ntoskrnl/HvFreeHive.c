/*
 * XREFs of HvFreeHive @ 0x1404A06B4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmpFreeAllMemory @ 0x1406541E4 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x14065DE68 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x140661D60 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CmpFreeBootRegistry @ 0x1401E1138 (CmpFreeBootRegistry.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvpFreeBin @ 0x1404A086C (HvpFreeBin.c)
 *     CmpFree @ 0x1404A08B0 (CmpFree.c)
 *     CmpReleaseGlobalQuota @ 0x1404A08D0 (CmpReleaseGlobalQuota.c)
 *     HvpFreeMap @ 0x140558618 (HvpFreeMap.c)
 *     HvViewMapCleanup @ 0x14055B2E4 (HvViewMapCleanup.c)
 */

__int64 __fastcall HvFreeHive(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 CellMap; // rbp
  __int64 FreeBin; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v19; // eax
  unsigned int v20; // [rsp+70h] [rbp+8h]
  unsigned int v22; // [rsp+80h] [rbp+18h]

  v3 = (_QWORD *)(BugCheckParameter2 + 1408);
  v5 = 0;
  v6 = a2 != 0;
  v7 = 0;
  *(_DWORD *)(BugCheckParameter2 + 144) &= ~1u;
  v8 = *(_DWORD *)(BugCheckParameter2 + 144) & 0x10;
  v20 = (unsigned __int8)v6;
  do
  {
    v9 = v7;
    v22 = v7 + *((_DWORD *)v3 - 2);
    if ( *v3 && v7 + *((_DWORD *)v3 - 2) > v7 )
    {
      do
      {
        if ( v8 )
          break;
        CellMap = HvpGetCellMap(BugCheckParameter2, v9);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9, 0xA0uLL);
        FreeBin = HvpMapEntryGetFreeBin();
        v13 = FreeBin;
        if ( FreeBin )
        {
          v19 = *(_DWORD *)(FreeBin + 16);
          v9 += v19;
          if ( (*(_DWORD *)(v13 + 24) & 1) != 0 )
            HvpFreeBin(
              BugCheckParameter2,
              v19,
              v5,
              *(_QWORD *)(CellMap + 8) & 0xFFFFFFF0,
              *(_QWORD *)(CellMap + 16) & 0xFFFFFFFFFFFFFFF0uLL);
          else
            CmpReleaseGlobalQuota(v19);
          (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v13, 32LL);
        }
        else
        {
          HvpFreeBin(
            BugCheckParameter2,
            *(_DWORD *)(v12 + 32),
            v5,
            *(_DWORD *)(v12 + 8) & 0xFFFFFFF0,
            *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
          v9 += *(_DWORD *)(CellMap + 32);
        }
      }
      while ( v9 < v22 );
      v14 = (unsigned int)((*((_DWORD *)v3 - 2) >> 12) - 1) >> 9;
      HvpFreeMap(BugCheckParameter2, *v3, 0LL, v14);
      if ( v14 )
      {
        CmpFree(*v3, 0x2000LL);
        *v3 = 0LL;
      }
      v6 = v20;
    }
    *((_DWORD *)v3 - 2) = 0;
    ++v5;
    v3 += 79;
    v7 += 0x80000000;
  }
  while ( v5 <= v6 );
  *(_BYTE *)(BugCheckParameter2 + 124) &= ~4u;
  LOBYTE(a3) = 1;
  HvViewMapCleanup(BugCheckParameter2 + 200, BugCheckParameter2, a3);
  if ( v8 && _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
    *(_QWORD *)(BugCheckParameter2 + 64),
    *(unsigned int *)(BugCheckParameter2 + 116));
  v16 = *(_QWORD *)(BugCheckParameter2 + 80);
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  if ( v16 )
  {
    CmpFree(v16, *(unsigned int *)(BugCheckParameter2 + 92));
    *(_QWORD *)(BugCheckParameter2 + 80) = 0LL;
  }
  v17 = *(_QWORD *)(BugCheckParameter2 + 104);
  if ( v17 )
  {
    CmpFree(v17, *(unsigned int *)(BugCheckParameter2 + 92));
    *(_QWORD *)(BugCheckParameter2 + 104) = 0LL;
  }
  LOBYTE(v15) = a2;
  return HvpFreeHiveFreeDisplay(BugCheckParameter2, v15);
}
