/*
 * XREFs of CcChargeDirtyPages @ 0x14006F774
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1401347DC (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 */

__int64 __fastcall CcChargeDirtyPages(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rcx

  v5 = a4;
  CcGlobalDirtyPageStatistics += a4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += a4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 504) + 32LL) += a4;
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL) += a4;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) == -1LL )
      {
        v5 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
      }
    }
  }
  if ( CcCoalescingState && (unsigned __int64)CcGlobalDirtyPageStatistics >= 0x2000 )
  {
    LOBYTE(v5) = 1;
    CcScheduleLazyWriteScan(v5, 0LL);
  }
  if ( CcForcedDisableLazywriteScan )
  {
    CcScheduleLazyWriteScan(0LL, 0LL);
    CcForcedDisableLazywriteScan = 0;
  }
  return CcAdjustWriteBehindThreadPoolIfNeeded(0LL);
}
