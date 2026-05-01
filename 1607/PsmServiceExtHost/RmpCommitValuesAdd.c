/*
 * XREFs of RmpCommitValuesAdd @ 0x180007008
 * Callers:
 *     ?RmpActivityHostGetCommitThresholdsAndLevel@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K2PEAW4_RM_COMMIT_LEVEL@@2@Z @ 0x1800071DC (-RmpActivityHostGetCommitThresholdsAndLevel@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K2PEAW4_RM_COMMIT_L.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x1800353A0 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCommitValuesAdd(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  if ( a2 == -1 || a1 == -1LL )
  {
    *a3 = -1LL;
    return 0LL;
  }
  if ( a1 + a2 >= a1 )
  {
    *a3 = a1 + a2;
    return 0LL;
  }
  *a3 = -1LL;
  return 3221225621LL;
}
