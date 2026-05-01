/*
 * XREFs of RmpActivityHostDelete @ 0x1800083A8
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x180037430 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 *     RmpActivatorUnregister @ 0x18003B5B8 (RmpActivatorUnregister.c)
 *     RmpCoreApiUnregisterActivityHost @ 0x1800421D4 (RmpCoreApiUnregisterActivityHost.c)
 * Callees:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800081A0 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpPolicyScratchResizeIntelligently @ 0x180009D00 (RmpPolicyScratchResizeIntelligently.c)
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D044 (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x18003BE70 (RmpActivityHostRemoveFromRemediationGroup.c)
 */

__int64 __fastcall RmpActivityHostDelete(PVOID **P)
{
  PVOID *v2; // rcx
  char **v4; // r8
  PVOID *v5; // rdx

  if ( P[108] )
    RmpActivityHostRemoveFromRemediationGroup(P);
  RmpActivityHostRemoveFromTables((struct _RM_ACTIVITY_HOST *)P);
  RmpActivityHostCleanupTypeSpecificState((struct _RM_ACTIVITY_HOST *)P);
  v2 = P[105];
  if ( v2 )
  {
    v4 = (char **)P[106];
    v5 = P[107];
    if ( v4[1] != (char *)(P + 106) || *v5 != P + 106 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (char *)v5;
    --*((_DWORD *)v2 + 8);
  }
  RmpPolicyScratchResizeIntelligently((char *)RmSvcGlobals + 1632, *((unsigned int *)RmSvcGlobals + 6));
  return RmpObjectRelease(P);
}
