/*
 * XREFs of RmpUninitializeGlobalModules @ 0x18003EC48
 * Callers:
 *     RmpActivityHostInitializeModule @ 0x180021654 (RmpActivityHostInitializeModule.c)
 * Callees:
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?RmpPowerBoostContextClose@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18003F988 (-RmpPowerBoostContextClose@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     RmpActivatorUninitializeModule @ 0x180040948 (RmpActivatorUninitializeModule.c)
 *     RmpActivityHostUninitializeModule @ 0x1800413E4 (RmpActivityHostUninitializeModule.c)
 *     RmpSystemNotificationContextCleanup @ 0x1800414B4 (RmpSystemNotificationContextCleanup.c)
 *     RmpTelemetryContextCleanup @ 0x18004177C (RmpTelemetryContextCleanup.c)
 *     RmpMemoryMonitorUninitialize @ 0x18004329C (RmpMemoryMonitorUninitialize.c)
 *     RmpGpuMonitorClose @ 0x180046768 (RmpGpuMonitorClose.c)
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

  RmpSystemNotificationContextCleanup((char *)RmSvcGlobals + 1728);
  v0 = (char *)RmSvcGlobals;
  CloseHandle(*((HANDLE *)RmSvcGlobals + 6));
  WaitForSingleObject(*((HANDLE *)v0 + 7), 0xBB8u);
  CloseHandle(*((HANDLE *)v0 + 7));
  v1 = *((_QWORD *)v0 + 10);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)v0 + 10));
  RmpGpuMonitorClose((struct _RM_GPU_MONITOR *)(v0 + 112));
  RmpPowerBoostContextClose((struct _RM_POWERBOOST_CONTEXT *)(v0 + 176));
  RmpMemoryMonitorUninitialize((char *)RmSvcGlobals + 1600);
  RmpTelemetryContextCleanup((char *)RmSvcGlobals + 1704);
  RmpActivityHostUninitializeModule();
  RmpActivatorUninitializeModule();
  v2 = RmSvcGlobals;
  v3 = (void *)*((_QWORD *)RmSvcGlobals + 194);
  if ( v3 )
  {
    RmpFreeHeap(v3);
    v2[194] = 0LL;
  }
  v4 = (void *)v2[195];
  if ( v4 )
  {
    RmpFreeHeap(v4);
    v2[195] = 0LL;
  }
  *((_DWORD *)v2 + 392) = 0;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  result = RmSvcGlobals;
  v6 = *((_QWORD *)RmSvcGlobals + 262);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)RmSvcGlobals + 262));
    result = RmSvcGlobals;
    *((_QWORD *)RmSvcGlobals + 262) = 0LL;
  }
  RmSvcGlobals = 0LL;
  return result;
}
