/*
 * XREFs of RmpPolicyPopulateActivityHostMetrics @ 0x180007510
 * Callers:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180003B2C (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RmpPolicyGetUsageLimitsAndMetricsForAcquire @ 0x18000482C (RmpPolicyGetUsageLimitsAndMetricsForAcquire.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003233C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180033070 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_R.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180033800 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_S.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x1800339C4 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_.c)
 *     RmpOfferLazyDecommitCheckQueueWork @ 0x1800346F4 (RmpOfferLazyDecommitCheckQueueWork.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpEmptyWorkerCleanup @ 0x180002F5C (RmpEmptyWorkerCleanup.c)
 *     RmpActivityHostPopulateMetrics @ 0x1800090B0 (RmpActivityHostPopulateMetrics.c)
 *     RmpActivityHostIsRevocable @ 0x180014E34 (RmpActivityHostIsRevocable.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x18001A19C (RmpActivityHostHasPpleResourceSet.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpPolicyPopulateActivityHostMetrics(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        bool (__fastcall *a5)(__int64 a1, char a2),
        __int64 a6)
{
  unsigned int v7; // r12d
  __int64 v8; // r13
  void *v9; // rcx
  _BYTE *v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // rax
  int v15; // eax
  __int64 result; // rax
  void *v17; // rcx
  void *v18; // rcx
  __int64 *v20; // [rsp+40h] [rbp-C8h]
  _QWORD *v21; // [rsp+48h] [rbp-C0h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+58h] [rbp-B0h] BYREF
  struct _EXCEPTION_RECORD v24; // [rsp+F8h] [rbp-10h] BYREF
  struct _EXCEPTION_RECORD v25; // [rsp+198h] [rbp+90h] BYREF

  v7 = a2;
  v8 = a1 + 16;
  v9 = *(void **)a3;
  *(_DWORD *)(a3 + 36) = 0;
  memset_0(v9, 0, (unsigned __int64)*(unsigned int *)(a3 + 32) << 6);
  RtlAcquireSRWLockShared(v8 + 16);
  v12 = 0LL;
  v21 = *(_QWORD **)(v8 + 8);
  v20 = v21;
  if ( !v21 || (v13 = *v21, (*v21 & 1) != 0) )
  {
    v10 = v21 + 1;
    v11 = *(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v8 + 4) >> 5);
    if ( (unsigned __int64)(v21 + 1) >= v11 )
      goto LABEL_36;
    while ( (*v10 & 1) != 0 )
    {
      v10 += 8;
      if ( (unsigned __int64)v10 >= v11 )
        goto LABEL_36;
    }
    v13 = *(_QWORD *)v10;
    v21 = v10;
  }
  v20 = (__int64 *)v13;
  if ( !v13 )
  {
LABEL_36:
    v13 = 0LL;
    goto LABEL_6;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v13 + 16)) < 1 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
LABEL_6:
  if ( !v13 )
    goto LABEL_26;
  do
  {
    if ( a5 )
    {
      if ( a5 == RmpPolicyFilterActivityHostWithFlags )
      {
        if ( (a6 & 1) != 0 && !(unsigned int)RmpActivityHostIsRevocable(v13, v10, v11, v12)
          || (a6 & 2) != 0 && !*(_DWORD *)(v13 + 656)
          || (a6 & 4) != 0 && (unsigned __int8)RmpActivityHostHasPpleResourceSet(v13)
          || (a6 & 8) != 0 && !(unsigned __int8)RmpPolicyActivityHostIsValidEmptyTarget(v13) )
        {
LABEL_34:
          RmpObjectRelease((volatile signed __int32 *)v13);
          goto LABEL_16;
        }
      }
      else if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))a5)(v13, a6, v11, v12) )
      {
        goto LABEL_34;
      }
    }
    v14 = (_QWORD *)(*(_QWORD *)a3 + ((unsigned __int64)*(unsigned int *)(a3 + 36) << 6));
    *v14 = 0LL;
    v14[1] = 0LL;
    v14[2] = 0LL;
    v14[3] = 0LL;
    v14[4] = 0LL;
    v14[5] = 0LL;
    v14[7] = 0LL;
    v14[6] = v13;
    ++*(_DWORD *)(a3 + 36);
    v15 = _InterlockedDecrement((volatile signed __int32 *)(v13 + 16));
    if ( v15 < 0 )
    {
      memset_0(&v24.ExceptionFlags, 0, 0x94uLL);
      v24.ExceptionCode = -1073741675;
      v24.ExceptionFlags = 1;
      RaiseFailFastException(&v24, 0LL, 0);
    }
    else if ( !v15 )
    {
      if ( !*(_DWORD *)(v13 + 32) )
      {
        RmpEmptyWorkerCleanup((_QWORD *)(v13 + 880));
        if ( *(_DWORD *)(v13 + 48) == 1 )
        {
          v17 = *(void **)(v13 + 728);
          if ( v17 )
            CloseHandle(v17);
          v18 = *(void **)(v13 + 736);
          if ( v18 )
            CloseHandle(v18);
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v13);
    }
LABEL_16:
    if ( !v20 || (v13 = *v20, (*v20 & 1) != 0) )
    {
      v10 = v21 + 1;
      v11 = *(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v8 + 4) >> 5);
      if ( (unsigned __int64)(v21 + 1) >= v11 )
        goto LABEL_30;
      while ( (*v10 & 1) != 0 )
      {
        v10 += 8;
        if ( (unsigned __int64)v10 >= v11 )
          goto LABEL_30;
      }
      v13 = *(_QWORD *)v10;
      v21 = v10;
    }
    v20 = (__int64 *)v13;
    if ( !v13 )
    {
LABEL_30:
      v13 = 0LL;
      continue;
    }
    if ( _InterlockedIncrement((volatile signed __int32 *)(v13 + 16)) < 1 )
    {
      memset_0(&v25.ExceptionFlags, 0, 0x94uLL);
      v25.ExceptionCode = -1073741675;
      v25.ExceptionFlags = 1;
      RaiseFailFastException(&v25, 0LL, 0);
    }
  }
  while ( v13 );
  v7 = a2;
LABEL_26:
  result = RtlReleaseSRWLockShared(v8 + 16, v10, v11, v12);
  if ( *(_DWORD *)(a3 + 36) )
    return RmpActivityHostPopulateMetrics(a3, a4, v7);
  return result;
}
