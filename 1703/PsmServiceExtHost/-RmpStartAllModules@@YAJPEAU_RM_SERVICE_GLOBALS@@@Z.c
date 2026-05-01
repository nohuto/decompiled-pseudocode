/*
 * XREFs of ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001D198
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x18001D138 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001D260 (-RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001D2CC (-RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

__int64 __fastcall RmpStartAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v2; // rbx
  int v3; // ebx
  HANDLE Thread; // rax

  v2 = (char *)a1 + 648;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v3 = RtlSubscribeWnfStateChangeNotification(
         v2 + 424,
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
    Thread = CreateThread(0LL, 0LL, RmpEnforcerJobCompletionThread, (char *)a1 + 40, 0, 0LL);
    *((_QWORD *)a1 + 6) = Thread;
    if ( Thread )
    {
      v3 = RmpSystemNotificationContextStart(a1);
      if ( v3 >= 0 )
      {
        v3 = RmpTelemetryContextStart(a1);
        if ( v3 >= 0 )
          return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v3;
}
