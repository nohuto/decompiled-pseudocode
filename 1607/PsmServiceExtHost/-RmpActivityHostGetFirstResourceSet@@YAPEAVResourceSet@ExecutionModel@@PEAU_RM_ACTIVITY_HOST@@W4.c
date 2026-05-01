/*
 * XREFs of ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418
 * Callers:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     RmpActivityHostPopulateRunnabilitySettings @ 0x180007CD0 (RmpActivityHostPopulateRunnabilitySettings.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostPopulateMetrics @ 0x1800090B0 (RmpActivityHostPopulateMetrics.c)
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x18001A1E8 (RmpActivityHostFindProcessResourceSet.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     RmpActivityHostRevokeResourceSets @ 0x18002F600 (RmpActivityHostRevokeResourceSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostGetFirstResourceSet(__int64 a1, int a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(a1 + 8 * (3LL * a2 + 77));
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  else
    return *v2 - 1376LL;
}
