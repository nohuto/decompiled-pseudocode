/*
 * XREFs of PoBlockConsoleSwitch @ 0x1404EF230
 * Callers:
 *     PoPowerOffMonitor @ 0x140126794 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1403DC3D4 (PnprQuiesceDevices.c)
 *     PopAcquireAdaptiveLock @ 0x1404EF160 (PopAcquireAdaptiveLock.c)
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 *     PopBlockSessionSwitch @ 0x14066FD9C (PopBlockSessionSwitch.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140008ADC (RtlGetActiveConsoleId.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     PopDispatchStateCallout @ 0x1404EF278 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  int ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
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
