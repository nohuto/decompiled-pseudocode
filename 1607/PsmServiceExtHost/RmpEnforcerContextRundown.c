/*
 * XREFs of RmpEnforcerContextRundown @ 0x18002B560
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180029DB0 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x18000153C (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180034AF4 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035118 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

NTSTATUS __fastcall RmpEnforcerContextRundown(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v8; // rax
  NTSTATUS result; // eax
  __int64 v10; // rcx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
    CloseHandle(v2);
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    WaitForSingleObject(v3, 0xBB8u);
    CloseHandle(*(HANDLE *)(a1 + 48));
  }
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (_QWORD *)(a1 + 104);
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*(_BYTE *)(a1 + 148) & 1) != 0 )
    RmpGpuMonitorDisable((struct _RM_GPU_MONITOR *)(a1 + 104));
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( *v5 )
  {
    TpSetTimer(*v5, 0LL, 0LL, 0LL);
    TpWaitForTimer(*v5, 1LL);
  }
  v6 = *(_QWORD *)(a1 + 176);
  if ( v6 )
  {
    TpSetTimer(v6, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 176), 1LL);
  }
  v7 = a1 + 192;
  RtlEnterCriticalSection(&RmpGlobalLock);
  while ( 1 )
  {
    v8 = RmpQoSGetEarliestHostInfo((struct _RM_QOS_CONTEXT *)v7);
    if ( !v8 )
      break;
    RmpQoSDisableForHostOnTimerExpiry(
      (struct _RM_QOS_CONTEXT *)v7,
      (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)((char *)v8 - 672));
  }
  result = RtlLeaveCriticalSection(&RmpGlobalLock);
  v10 = *(_QWORD *)(v7 + 16);
  if ( v10 )
  {
    TpSetTimer(v10, 0LL, 0LL, 0LL);
    return TpWaitForTimer(*(_QWORD *)(v7 + 16), 1LL);
  }
  return result;
}
