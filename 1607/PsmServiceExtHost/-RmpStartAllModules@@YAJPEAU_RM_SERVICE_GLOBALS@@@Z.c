/*
 * XREFs of ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001AE98
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x18001B108 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     RmpTelemetryContextStart @ 0x18001AF74 (RmpTelemetryContextStart.c)
 *     RmpSystemNotificationContextStart @ 0x18001AFE4 (RmpSystemNotificationContextStart.c)
 *     RmpMemoryMonitorStart @ 0x18001B058 (RmpMemoryMonitorStart.c)
 */

__int64 __fastcall RmpStartAllModules(struct _RM_SERVICE_GLOBALS *lpParameter)
{
  char *v2; // rbx
  int v3; // ebx
  HANDLE Thread; // rax

  v2 = (char *)lpParameter + 1944;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v3 = RtlSubscribeWnfStateChangeNotification(
         v2 + 936,
         WNF_AUDC_CPUSET_ID_SYSTEM,
         0LL,
         RmpCpuSetManagerAudioCpuWnfCallback,
         v2,
         0LL,
         0,
         0);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v3 >= 0 )
  {
    Thread = CreateThread(0LL, 0LL, RmpEnforcerJobCompletionThread, (char *)lpParameter + 40, 0, 0LL);
    *((_QWORD *)lpParameter + 6) = Thread;
    if ( Thread )
    {
      v3 = RmpMemoryMonitorStart(lpParameter);
      if ( v3 >= 0 )
      {
        v3 = RmpSystemNotificationContextStart(lpParameter);
        if ( v3 >= 0 )
        {
          v3 = RmpTelemetryContextStart(lpParameter);
          if ( v3 >= 0 )
            return 0;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v3;
}
