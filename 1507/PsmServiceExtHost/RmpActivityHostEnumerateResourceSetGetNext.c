/*
 * XREFs of RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800052E0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     RmpActivityHostIsKillable @ 0x180009F48 (RmpActivityHostIsKillable.c)
 *     RmpActivityHostQueryPriority @ 0x18000A5A8 (RmpActivityHostQueryPriority.c)
 *     RmpActivityHostGetStateDigest @ 0x18000CD68 (RmpActivityHostGetStateDigest.c)
 *     RmpActivityHostOnImportanceChange @ 0x18000D0E0 (RmpActivityHostOnImportanceChange.c)
 *     RmpPolicyComputeDesiredState @ 0x18000D390 (RmpPolicyComputeDesiredState.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800102A0 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostActOnResourceSets @ 0x18003B704 (RmpActivityHostActOnResourceSets.c)
 *     RmpActivityHostComputeAndApplyExecutionSpeed @ 0x18003B8CC (RmpActivityHostComputeAndApplyExecutionSpeed.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x18003BCDC (RmpActivityHostHasPpleResourceSet.c)
 *     ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003C124 (-RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV-$lis.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180041960 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostEnumerateResourceSetGetNext(__int64 *a1)
{
  int v1; // edx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // r8
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v1 = *((_DWORD *)a1 + 6);
  v2 = *a1;
  if ( v1 != 1 )
  {
    if ( !v1 )
    {
      v8 = a1[1];
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 1384);
        if ( v9 != v2 + 608 )
        {
          a1[1] = v9 - 1384;
          return v8;
        }
        a1[1] = 0LL;
      }
      return v8;
    }
    if ( v1 != 2 )
      return 0LL;
  }
  if ( *(_DWORD *)(v2 + 40) == 1 )
  {
    result = a1[1];
    a1[1] = 0LL;
  }
  else
  {
    v3 = *(_QWORD *)(v2 + 600);
    if ( v1 == 1 )
      v4 = (__int64 *)(v3 + 24);
    else
      v4 = (__int64 *)(v3 + 48);
    v5 = (__int64 *)a1[2];
    if ( v5 == v4 )
      return 0LL;
    v7 = v5[2];
    a1[2] = *v5;
    return v7;
  }
  return result;
}
