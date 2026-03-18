/*
 * XREFs of RawEndOperation @ 0x1400C33B8
 * Callers:
 *     RawCompletionRoutine @ 0x1400C3328 (RawCompletionRoutine.c)
 *     RawQueryFsSizeInfo @ 0x140484B94 (RawQueryFsSizeInfo.c)
 *     RawQueryFsVolumeInfo @ 0x140484E10 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x1404D5F20 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x1404EB368 (RawUserFsCtrl.c)
 *     RawQueryInformation @ 0x140643F48 (RawQueryInformation.c)
 *     RawSetInformation @ 0x140643FE4 (RawSetInformation.c)
 *     RawQueryFsDeviceInfo @ 0x140644088 (RawQueryFsDeviceInfo.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
