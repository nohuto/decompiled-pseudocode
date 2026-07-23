/*
 * XREFs of HvFreeHive @ 0x1404F76B4
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     CmpDoReconcileNextHive @ 0x14047F42C (CmpDoReconcileNextHive.c)
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmpFreeAllMemory @ 0x1405FCB30 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x140606018 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x14060D354 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     CmpFreeBootRegistry @ 0x1401B73C4 (CmpFreeBootRegistry.c)
 *     HvpFreeMap @ 0x1404CC7DC (HvpFreeMap.c)
 *     HvViewMapCleanup @ 0x1404D0F70 (HvViewMapCleanup.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvpFreeBin @ 0x1404F78FC (HvpFreeBin.c)
 *     CmpFree @ 0x1404F7940 (CmpFree.c)
 *     CmpReleaseGlobalQuota @ 0x1404F7960 (CmpReleaseGlobalQuota.c)
 */

__int64 __fastcall HvFreeHive(__int64 a1, char a2)
{
  __int64 *v2; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  int v7; // r12d
  unsigned int v8; // ebx
  __int64 CellMap; // r15
  __int64 FreeBin; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 result; // rax
  __int64 v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // rbp
  unsigned int v22; // eax
  unsigned int v23; // [rsp+70h] [rbp+8h]
  unsigned int v25; // [rsp+80h] [rbp+18h]

  v2 = (__int64 *)(a1 + 1408);
  v4 = 0;
  v5 = a2 != 0;
  v6 = 0;
  *(_DWORD *)(a1 + 144) &= ~1u;
  v7 = *(_DWORD *)(a1 + 144) & 0x10;
  v23 = (unsigned __int8)v5;
  do
  {
    v8 = v6;
    v25 = v6 + *((_DWORD *)v2 - 2);
    if ( *v2 && v6 + *((_DWORD *)v2 - 2) > v6 )
    {
      do
      {
        if ( v7 )
          break;
        CellMap = HvpGetCellMap(a1, v8);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        v12 = FreeBin;
        if ( FreeBin )
        {
          v22 = *(_DWORD *)(FreeBin + 16);
          v8 += v22;
          if ( (*(_DWORD *)(v12 + 24) & 1) != 0 )
            HvpFreeBin(
              a1,
              v22,
              v4,
              *(_QWORD *)(CellMap + 8) & 0xFFFFFFF0,
              *(_QWORD *)(CellMap + 16) & 0xFFFFFFFFFFFFFFF0uLL);
          else
            CmpReleaseGlobalQuota(v22);
          (*(void (__fastcall **)(__int64, __int64))(a1 + 32))(v12, 32LL);
        }
        else
        {
          HvpFreeBin(
            a1,
            *(_DWORD *)(v11 + 32),
            v4,
            *(_DWORD *)(v11 + 8) & 0xFFFFFFF0,
            *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
          v8 += *(_DWORD *)(CellMap + 32);
        }
      }
      while ( v8 < v25 );
      v13 = (unsigned int)((*((_DWORD *)v2 - 2) >> 12) - 1) >> 9;
      HvpFreeMap(a1, *v2, 0, v13);
      if ( v13 )
      {
        CmpFree(*v2, 0x2000LL);
        *v2 = 0LL;
      }
      v5 = v23;
    }
    *((_DWORD *)v2 - 2) = 0;
    ++v4;
    v2 += 79;
    v6 += 0x80000000;
  }
  while ( v4 <= v5 );
  *(_BYTE *)(a1 + 124) &= ~4u;
  HvViewMapCleanup(a1 + 200, a1, 1);
  if ( v7 && _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  v14 = *(_QWORD *)(a1 + 64);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v14, *(unsigned int *)(a1 + 116));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v15 = *(_QWORD *)(a1 + 80);
  if ( v15 )
  {
    CmpFree(v15, *(unsigned int *)(a1 + 92));
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v16 = *(_QWORD *)(a1 + 104);
  if ( v16 )
  {
    CmpFree(v16, *(unsigned int *)(a1 + 92));
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v17 = (_QWORD *)(a1 + 1448);
  result = a2 != 0;
  v19 = (unsigned int)(result + 1);
  do
  {
    v20 = v17;
    v21 = 24LL;
    do
    {
      if ( *v20 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*v20, *((unsigned int *)v20 - 4));
        *((_DWORD *)v20 - 2) = 0;
        *v20 = 0LL;
        *((_DWORD *)v20 - 4) = 0;
      }
      v20 += 3;
      --v21;
    }
    while ( v21 );
    v17 += 79;
    --v19;
  }
  while ( v19 );
  return result;
}
