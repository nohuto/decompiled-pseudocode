/*
 * XREFs of PopBuildDeviceNotifyList @ 0x1403A32E0
 * Callers:
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     PoInitializeBroadcast @ 0x1404F6AFC (PoInitializeBroadcast.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     IoBuildPoDeviceNotifyList @ 0x1403A338C (IoBuildPoDeviceNotifyList.c)
 */

void __fastcall PopBuildDeviceNotifyList(void *a1)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-A8h] BYREF
  struct _KTIMER Timer; // [rsp+50h] [rbp-88h] BYREF
  struct _KDPC Dpc; // [rsp+90h] [rbp-48h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeTimerEx(&Timer, NotificationTimer);
  KeInitializeDpc(&Dpc, PopBuildDeviceNotifyListWatchdog, &Event);
  if ( (_DWORD)PopWatchdogSleepTimeout )
    KeSetTimer(&Timer, (LARGE_INTEGER)(-10000000LL * (int)PopWatchdogSleepTimeout), &Dpc);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST);
  IoBuildPoDeviceNotifyList(a1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST_END);
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    if ( !KeCancelTimer(&Timer) )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
}
