/*
 * XREFs of ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250
 * Callers:
 *     ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180001970 (-RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080A0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpPolicyGetUsageLimitsAndMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012930 (-RmpPolicyGetUsageLimitsAndMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESO.c)
 *     ?RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800345B0 (-RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180035CD8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180036A38 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800371B4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180037358 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180005580 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180007520 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180013738 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800141A0 (-RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18001AFF4 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpPolicyPopulateActivityHostMetrics(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int8 (__fastcall *a5)(struct _RM_ACTIVITY_HOST *, void *),
        void *a6)
{
  void *v7; // rdi
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // eax
  _BYTE *v12; // rdx
  unsigned __int64 v13; // r8
  __int64 result; // rax
  unsigned __int8 v15; // al
  _QWORD *v16; // rdi
  int v17; // eax
  _BYTE *v18; // rdx
  unsigned __int64 v19; // r8
  int v20; // ecx
  int v21; // ecx
  void *v22; // rcx
  void *v23; // rcx
  struct _RM_PARTITION *v24; // rcx
  int v25; // ecx
  int v26; // ecx
  void *v27; // rcx
  void *v28; // rcx
  struct _RM_PARTITION *v29; // rcx
  __int64 *v31; // [rsp+40h] [rbp-C8h]
  _QWORD *v32; // [rsp+48h] [rbp-C0h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+68h] [rbp-A0h] BYREF
  struct _EXCEPTION_RECORD v35; // [rsp+108h] [rbp+0h] BYREF
  struct _EXCEPTION_RECORD v36; // [rsp+1A8h] [rbp+A0h] BYREF

  v7 = a6;
  *(_DWORD *)(a3 + 36) = 0;
  memset_0(*(void **)a3, 0, (unsigned __int64)*(unsigned int *)(a3 + 32) << 6);
  v9 = *(_QWORD *)(a1 + 24) + 16LL;
  RtlAcquireSRWLockShared(*(_QWORD *)(a1 + 24) + 32LL);
  v32 = *(_QWORD **)(v9 + 8);
  v31 = v32;
  if ( !v32 || (v10 = *v32, (*v32 & 1) != 0) )
  {
    v18 = v32 + 1;
    v19 = *(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v9 + 4) >> 5);
    if ( (unsigned __int64)(v32 + 1) >= v19 )
      goto LABEL_36;
    while ( (*v18 & 1) != 0 )
    {
      v18 += 8;
      if ( (unsigned __int64)v18 >= v19 )
        goto LABEL_36;
    }
    v10 = *(_QWORD *)v18;
    v32 = v18;
  }
  v31 = (__int64 *)v10;
  if ( v10 )
  {
    RmpObjectAddRef((struct _RM_OBJECT_HEADER *)v10);
    goto LABEL_5;
  }
LABEL_36:
  v10 = 0LL;
LABEL_5:
  while ( v10 )
  {
    if ( (*(_QWORD *)(v10 + 24) & 0xF000000000000000uLL) == 0x2000000000000000LL )
    {
      v11 = _InterlockedDecrement((volatile signed __int32 *)(v10 + 16));
      if ( v11 < 0 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = -1073741675;
        pExceptionRecord.ExceptionFlags = 1;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      else if ( !v11 )
      {
        v20 = *(_DWORD *)(v10 + 32);
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 && !*(_DWORD *)(v10 + 88) && !*(_DWORD *)(v10 + 92) )
              NtDeleteWnfStateName(v10 + 88);
          }
          else
          {
            RmpResourceSetCleanup((struct _RM_RESOURCE_SET *)v10);
          }
        }
        else
        {
          RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(v10 + 880));
          if ( *(_DWORD *)(v10 + 56) == 1 )
          {
            v22 = *(void **)(v10 + 728);
            if ( v22 )
              CloseHandle(v22);
            v23 = *(void **)(v10 + 736);
            if ( v23 )
              CloseHandle(v23);
          }
          v24 = *(struct _RM_PARTITION **)(v10 + 48);
          if ( v24 )
            RmpPartitionRelease(v24);
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v10);
      }
    }
    else if ( *(_QWORD *)(v10 + 48) == a1
           && (!a5
            || (a5 != RmpPolicyFilterActivityHostWithFlags
              ? (v15 = ((__int64 (__fastcall *)(__int64, void *, unsigned __int8 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *)))a5)(
                         v10,
                         v7,
                         RmpPolicyFilterActivityHostWithFlags))
              : (v15 = RmpPolicyFilterActivityHostWithFlags((struct _RM_ACTIVITY_HOST *)v10, v7)),
                v15)) )
    {
      v16 = (_QWORD *)(*(_QWORD *)a3 + ((unsigned __int64)*(unsigned int *)(a3 + 36) << 6));
      memset_0(v16, 0, 0x40uLL);
      v16[6] = v10;
      ++*(_DWORD *)(a3 + 36);
      v17 = _InterlockedDecrement((volatile signed __int32 *)(v10 + 16));
      if ( v17 < 0 )
      {
        memset_0(&v35.ExceptionFlags, 0, 0x94uLL);
        v35.ExceptionCode = -1073741675;
        v35.ExceptionFlags = 1;
        RaiseFailFastException(&v35, 0LL, 0);
      }
      else if ( !v17 )
      {
        v25 = *(_DWORD *)(v10 + 32);
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 == 1 && !*(_DWORD *)(v10 + 88) && !*(_DWORD *)(v10 + 92) )
              NtDeleteWnfStateName(v10 + 88);
          }
          else
          {
            RmpResourceSetCleanup((struct _RM_RESOURCE_SET *)v10);
          }
        }
        else
        {
          RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(v10 + 880));
          if ( *(_DWORD *)(v10 + 56) == 1 )
          {
            v27 = *(void **)(v10 + 728);
            if ( v27 )
              CloseHandle(v27);
            v28 = *(void **)(v10 + 736);
            if ( v28 )
              CloseHandle(v28);
          }
          v29 = *(struct _RM_PARTITION **)(v10 + 48);
          if ( v29 )
            RmpPartitionRelease(v29);
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v10);
      }
      v7 = a6;
    }
    else
    {
      RmpObjectRelease((struct _RM_OBJECT_HEADER *)v10);
    }
    if ( !v31 || (v10 = *v31, (*v31 & 1) != 0) )
    {
      v12 = v32 + 1;
      v13 = *(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v9 + 4) >> 5);
      if ( (unsigned __int64)(v32 + 1) >= v13 )
        goto LABEL_22;
      while ( (*v12 & 1) != 0 )
      {
        v12 += 8;
        if ( (unsigned __int64)v12 >= v13 )
          goto LABEL_22;
      }
      v10 = *(_QWORD *)v12;
      v32 = v12;
    }
    v31 = (__int64 *)v10;
    if ( v10 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 16)) < 1 )
      {
        memset_0(&v36.ExceptionFlags, 0, 0x94uLL);
        v36.ExceptionCode = -1073741675;
        v36.ExceptionFlags = 1;
        RaiseFailFastException(&v36, 0LL, 0);
      }
      continue;
    }
LABEL_22:
    v10 = 0LL;
  }
  result = RtlReleaseSRWLockShared(v9 + 16);
  if ( *(_DWORD *)(a3 + 36) )
    return RmpActivityHostPopulateMetrics(a3, a4, a2);
  return result;
}
