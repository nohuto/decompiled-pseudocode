/*
 * XREFs of RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200
 * Callers:
 *     RmpActivityHostIsForegroundBoostAppliedOrPending @ 0x180004AD0 (RmpActivityHostIsForegroundBoostAppliedOrPending.c)
 *     RmpActivityHostComputeAndApplyExecutionSpeed @ 0x180004D90 (RmpActivityHostComputeAndApplyExecutionSpeed.c)
 *     RmpActivityHostGetStateDigest @ 0x18000AB60 (RmpActivityHostGetStateDigest.c)
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     RmpActivityHostQueryPriority @ 0x18001D6E0 (RmpActivityHostQueryPriority.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020270 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     RmpActivityHostActOnResourceSets @ 0x180040ADC (RmpActivityHostActOnResourceSets.c)
 *     RmpActivityHostComputeAndApplyAffinity @ 0x180040BF4 (RmpActivityHostComputeAndApplyAffinity.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x180040F68 (RmpActivityHostHasPpleResourceSet.c)
 *     RmpActivityHostIsKillable @ 0x180040FC4 (RmpActivityHostIsKillable.c)
 *     ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800414E8 (-RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV-$lis.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180046590 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostEnumerateResourceSetGetNext(__int64 *a1)
{
  int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // r8
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax

  v1 = *((_DWORD *)a1 + 6);
  v2 = *a1;
  if ( !v1 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 1384);
      if ( v8 == v2 + 608 )
      {
        result = a1[1];
        a1[1] = 0LL;
        return result;
      }
      a1[1] = v8 - 1384;
    }
    return v6;
  }
  if ( v1 != 1 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 40) == 1 )
  {
    result = a1[1];
    a1[1] = 0LL;
  }
  else
  {
    v3 = *(_QWORD *)(v2 + 600);
    v4 = (__int64 *)a1[2];
    if ( v4 == (__int64 *)(v3 + 24) )
      return 0LL;
    v7 = v4[2];
    a1[2] = *v4;
    return v7;
  }
  return result;
}
