/*
 * XREFs of RawEndOperation @ 0x1400073C0
 * Callers:
 *     RawCompletionRoutine @ 0x14000732C (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x1403EB128 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1403ED850 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140529F94 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1406830EC (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140683168 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1406833EC (RawQueryInformation.c)
 *     RawSetInformation @ 0x140683488 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
