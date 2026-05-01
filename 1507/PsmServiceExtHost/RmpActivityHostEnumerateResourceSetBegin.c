/*
 * XREFs of RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800052E0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     RmpActivityHostIsKillable @ 0x180009F48 (RmpActivityHostIsKillable.c)
 *     RmpActivityHostQueryPriority @ 0x18000A5A8 (RmpActivityHostQueryPriority.c)
 *     RmpActivityHostGetStateDigest @ 0x18000CD68 (RmpActivityHostGetStateDigest.c)
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

__int64 __fastcall RmpActivityHostEnumerateResourceSetBegin(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  a3[3] = 0LL;
  *a3 = a1;
  *((_DWORD *)a3 + 6) = a2;
  if ( a2 != 1 )
  {
    if ( !a2 )
    {
      result = a1 + 608;
      v4 = *(_QWORD *)(a1 + 608);
      if ( v4 == result )
      {
        a3[1] = 0LL;
        return result;
      }
      result = v4 - 1384;
      goto LABEL_11;
    }
    if ( a2 != 2 )
      return result;
  }
  result = *(_QWORD *)(a1 + 600);
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
LABEL_11:
    a3[1] = result;
    return result;
  }
  if ( a2 == 1 )
    result = *(_QWORD *)(result + 24);
  else
    result = *(_QWORD *)(result + 48);
  a3[2] = result;
  return result;
}
