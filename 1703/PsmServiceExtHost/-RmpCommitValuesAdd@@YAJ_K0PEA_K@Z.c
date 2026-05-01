/*
 * XREFs of ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000450C
 * Callers:
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x1800044AC (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 *     ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z @ 0x180004898 (-RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006300 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080A0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180017224 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCommitValuesAdd(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned int v5; // ecx
  unsigned __int64 v7; // rax

  v3 = -1LL;
  if ( a2 == -1 || a1 == -1LL )
  {
    *a3 = -1LL;
    return 0;
  }
  v7 = a1 + a2;
  if ( a1 + a2 >= a1 )
    v3 = a1 + a2;
  v5 = a1 + a2 < a1 ? 0xC0000095 : 0;
  *a3 = v3;
  if ( v7 >= a1 )
    return 0;
  return v5;
}
