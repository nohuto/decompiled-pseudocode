/*
 * XREFs of RmpActivityHostDelete @ 0x180004E58
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpActivityHostCheckDelete @ 0x180017F40 (RmpActivityHostCheckDelete.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     RmpCoreApiUnregisterActivityHost @ 0x18002E450 (RmpCoreApiUnregisterActivityHost.c)
 *     RmpActivatorUnregister @ 0x18002E718 (RmpActivatorUnregister.c)
 * Callees:
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004EC0 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004F3C (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpPolicyResizeScratchBuffers @ 0x1800053B0 (RmpPolicyResizeScratchBuffers.c)
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018668 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x18002F518 (RmpActivityHostRemoveFromRemediationGroup.c)
 */

void __fastcall RmpActivityHostDelete(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)a1 + 5);
  if ( *((_QWORD *)a1 + 131) )
    RmpActivityHostRemoveFromRemediationGroup(a1);
  RmpActivityHostRemoveFromTables(a1);
  RmpActivityHostCleanupTypeSpecificState(a1);
  RmpActivityHostCleanupCommonState(a1);
  RmpPolicyResizeScratchBuffers(v2 + 1784, *(unsigned int *)(v2 + 16), 0LL);
  RmpObjectRelease((volatile signed __int32 *)a1);
}
