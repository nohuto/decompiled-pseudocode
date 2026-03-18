/*
 * XREFs of RawBeginOperation @ 0x140006B5C
 * Callers:
 *     RawReadWriteDeviceControl @ 0x1403E9AF8 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1403EC220 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140529A54 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x140683008 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140683084 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x140683308 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1406833A4 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006B90 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall RawBeginOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 200);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  return result;
}
