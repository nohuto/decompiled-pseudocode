/*
 * XREFs of PopBuildDeviceNotifyList @ 0x1403EC3B4
 * Callers:
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     PoInitializeBroadcast @ 0x140565238 (PoInitializeBroadcast.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     IoBuildPoDeviceNotifyList @ 0x1403EC46C (IoBuildPoDeviceNotifyList.c)
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
    KiSetTimerEx((__int64)&Timer, -10000000LL * (int)PopWatchdogSleepTimeout, 0, 0, (__int64)&Dpc);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST);
  IoBuildPoDeviceNotifyList(a1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST_END);
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    if ( !KeCancelTimer(&Timer) )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
}
