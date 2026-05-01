/*
 * XREFs of ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180032E34
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x18002A6E4 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x1800356B0 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpEnforcerContextRundown(struct _RM_SERVICE_GLOBALS *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rcx

  v2 = (void *)*((_QWORD *)a1 + 5);
  if ( v2 )
    CloseHandle(v2);
  v3 = (void *)*((_QWORD *)a1 + 6);
  if ( v3 )
  {
    WaitForSingleObject(v3, 0xBB8u);
    CloseHandle(*((HANDLE *)a1 + 6));
  }
  v4 = *((_QWORD *)a1 + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (_QWORD *)((char *)a1 + 88);
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*((_BYTE *)a1 + 132) & 1) != 0 )
    RmpGpuMonitorDisable((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 88));
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( *v5 )
  {
    TpSetTimer(*v5, 0LL, 0LL, 0LL);
    TpWaitForTimer(*v5, 1LL);
  }
  v6 = *((_QWORD *)a1 + 20);
  if ( v6 )
  {
    TpSetTimer(v6, 0LL, 0LL, 0LL);
    TpWaitForTimer(*((_QWORD *)a1 + 20), 1LL);
  }
  RmpQoSRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 176));
}
