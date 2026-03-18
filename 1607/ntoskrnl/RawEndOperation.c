/*
 * XREFs of RawEndOperation @ 0x140007250
 * Callers:
 *     RawCompletionRoutine @ 0x1400071BC (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x1403E9AF8 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1403EC220 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140529A54 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x140683008 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140683084 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x140683308 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1406833A4 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140007280 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
