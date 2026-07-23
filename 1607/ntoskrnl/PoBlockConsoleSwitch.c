/*
 * XREFs of PoBlockConsoleSwitch @ 0x1404D1324
 * Callers:
 *     PoPowerOffMonitor @ 0x140126D04 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1403DC3D4 (PnprQuiesceDevices.c)
 *     PopAcquireAdaptiveLock @ 0x1404D1254 (PopAcquireAdaptiveLock.c)
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PopBlockSessionSwitch @ 0x14066FE80 (PopBlockSessionSwitch.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140008650 (RtlGetActiveConsoleId.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     PopDispatchStateCallout @ 0x1404D136C (PopDispatchStateCallout.c)
 */

ULONG __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  ULONG ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000LL;
  while ( 1 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId != -1 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      if ( (int)PopDispatchStateCallout(a1, &ActiveConsoleId) >= 0 )
        break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return RtlGetActiveConsoleId();
}
