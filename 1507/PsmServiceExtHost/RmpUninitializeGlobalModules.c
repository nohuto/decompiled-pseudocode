/*
 * XREFs of RmpUninitializeGlobalModules @ 0x18003996C
 * Callers:
 *     RmpActivityHostInitializeModule @ 0x18001A2B0 (RmpActivityHostInitializeModule.c)
 * Callees:
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?RmpPowerBoostContextClose@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18003A608 (-RmpPowerBoostContextClose@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     RmpActivatorUninitializeModule @ 0x18003B578 (RmpActivatorUninitializeModule.c)
 *     RmpActivityHostUninitializeModule @ 0x18003C060 (RmpActivityHostUninitializeModule.c)
 *     RmpSystemNotificationContextCleanup @ 0x18003C0F0 (RmpSystemNotificationContextCleanup.c)
 *     RmpTelemetryContextCleanup @ 0x18003C344 (RmpTelemetryContextCleanup.c)
 *     RmpMemoryMonitorUninitialize @ 0x18003DCC0 (RmpMemoryMonitorUninitialize.c)
 *     RmpGpuMonitorClose @ 0x180041B38 (RmpGpuMonitorClose.c)
 */

LPVOID RmpUninitializeGlobalModules()
{
  char *v0; // rdi
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  void *v3; // rcx
  void *v4; // rcx
  LPVOID result; // rax
  __int64 v6; // rdi

  RmpSystemNotificationContextCleanup((char *)RmSvcGlobals + 1800);
  v0 = (char *)RmSvcGlobals;
  CloseHandle(*((HANDLE *)RmSvcGlobals + 6));
  WaitForSingleObject(*((HANDLE *)v0 + 7), 0xBB8u);
  CloseHandle(*((HANDLE *)v0 + 7));
  v1 = *((_QWORD *)v0 + 10);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)v0 + 10));
  RmpGpuMonitorClose((struct _RM_GPU_MONITOR *)(v0 + 112));
  RmpPowerBoostContextClose((struct _RM_POWERBOOST_CONTEXT *)(v0 + 176));
  RmpMemoryMonitorUninitialize((char *)RmSvcGlobals + 1672);
  RmpTelemetryContextCleanup((char *)RmSvcGlobals + 1776);
  RmpActivityHostUninitializeModule();
  RmpActivatorUninitializeModule();
  v2 = RmSvcGlobals;
  v3 = (void *)*((_QWORD *)RmSvcGlobals + 204);
  if ( v3 )
  {
    RmpFreeHeap(v3);
    v2[204] = 0LL;
  }
  v4 = (void *)v2[205];
  if ( v4 )
  {
    RmpFreeHeap(v4);
    v2[205] = 0LL;
  }
  *((_DWORD *)v2 + 412) = 0;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  result = RmSvcGlobals;
  v6 = *((_QWORD *)RmSvcGlobals + 260);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)RmSvcGlobals + 260));
    result = RmSvcGlobals;
    *((_QWORD *)RmSvcGlobals + 260) = 0LL;
  }
  RmSvcGlobals = 0LL;
  return result;
}
