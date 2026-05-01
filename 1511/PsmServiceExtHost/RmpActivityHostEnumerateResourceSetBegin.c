/*
 * XREFs of RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C
 * Callers:
 *     RmpActivityHostIsForegroundBoostAppliedOrPending @ 0x180004AD0 (RmpActivityHostIsForegroundBoostAppliedOrPending.c)
 *     RmpActivityHostComputeAndApplyExecutionSpeed @ 0x180004D90 (RmpActivityHostComputeAndApplyExecutionSpeed.c)
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
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

_QWORD *__fastcall RmpActivityHostEnumerateResourceSetBegin(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 v7; // rcx

  result = memset_0(a3, 0, 0x20uLL);
  *a3 = a1;
  *((_DWORD *)a3 + 6) = a2;
  if ( !a2 )
  {
    result = (_QWORD *)(a1 + 608);
    v7 = *(_QWORD *)(a1 + 608);
    if ( v7 == a1 + 608 )
    {
      a3[1] = 0LL;
      return result;
    }
    result = (_QWORD *)(v7 - 1384);
    goto LABEL_9;
  }
  if ( a2 != 1 )
    return result;
  result = *(_QWORD **)(a1 + 600);
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
LABEL_9:
    a3[1] = result;
    return result;
  }
  result = (_QWORD *)result[3];
  a3[2] = result;
  return result;
}
