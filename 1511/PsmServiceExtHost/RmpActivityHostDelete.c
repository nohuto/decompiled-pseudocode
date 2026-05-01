/*
 * XREFs of RmpActivityHostDelete @ 0x180007508
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x18003D6D0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 *     RmpActivatorUnregister @ 0x180040988 (RmpActivatorUnregister.c)
 *     RmpCoreApiUnregisterActivityHost @ 0x180046E38 (RmpCoreApiUnregisterActivityHost.c)
 * Callees:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007300 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpPolicyScratchResizeIntelligently @ 0x180007B1C (RmpPolicyScratchResizeIntelligently.c)
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009380 (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x1800411E4 (RmpActivityHostRemoveFromRemediationGroup.c)
 */

__int64 __fastcall RmpActivityHostDelete(PVOID **P)
{
  PVOID *v2; // rcx
  char **v4; // r8
  PVOID *v5; // rdx

  if ( P[112] )
    RmpActivityHostRemoveFromRemediationGroup(P);
  RmpActivityHostRemoveFromTables((struct _RM_ACTIVITY_HOST *)P);
  RmpActivityHostCleanupTypeSpecificState((struct _RM_ACTIVITY_HOST *)P);
  v2 = P[109];
  if ( v2 )
  {
    v4 = (char **)P[110];
    v5 = P[111];
    if ( v4[1] != (char *)(P + 110) || *v5 != P + 110 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (char *)v5;
    --*((_DWORD *)v2 + 8);
  }
  RmpPolicyScratchResizeIntelligently((char *)RmSvcGlobals + 1552, *((unsigned int *)RmSvcGlobals + 6));
  return RmpObjectRelease(P);
}
