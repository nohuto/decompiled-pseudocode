/*
 * XREFs of CcChargeDirtyPages @ 0x1400B2C7C
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14012DA30 (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 */

__int64 __fastcall CcChargeDirtyPages(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
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
        *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
  }
  if ( CcCoalescingState && (unsigned __int64)CcGlobalDirtyPageStatistics >= 0x2000 )
    CcScheduleLazyWriteScan(1, 0);
  if ( CcForcedDisableLazywriteScan )
  {
    CcScheduleLazyWriteScan(0, 0);
    CcForcedDisableLazywriteScan = 0;
  }
  return CcAdjustWriteBehindThreadPoolIfNeeded(0LL);
}
