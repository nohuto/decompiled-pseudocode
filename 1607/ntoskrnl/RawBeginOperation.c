/*
 * XREFs of RawBeginOperation @ 0x140006CCC
 * Callers:
 *     RawReadWriteDeviceControl @ 0x1403EB128 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1403ED850 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140529F94 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1406830EC (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140683168 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1406833EC (RawQueryInformation.c)
 *     RawSetInformation @ 0x140683488 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006D00 (ExAcquireRundownProtectionCacheAwareEx.c)
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
