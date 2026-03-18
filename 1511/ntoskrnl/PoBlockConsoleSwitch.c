/*
 * XREFs of PoBlockConsoleSwitch @ 0x1404C4220
 * Callers:
 *     PoPowerOffMonitor @ 0x1401177BC (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1403B02B8 (PnprQuiesceDevices.c)
 *     PopAcquireAdaptiveLock @ 0x1404C4150 (PopAcquireAdaptiveLock.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PdcPoBlockSessionSwitch @ 0x140637568 (PdcPoBlockSessionSwitch.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     PopDispatchStateCallout @ 0x1404C427C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000LL;
  while ( 1 )
  {
    v3 = MEMORY[0xFFFFF780000002D8];
    if ( MEMORY[0xFFFFF780000002D8] != -1 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      if ( (int)PopDispatchStateCallout(a1, &v3) >= 0 )
        break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  result = MEMORY[0xFFFFF780000002D8];
  v3 = MEMORY[0xFFFFF780000002D8];
  return result;
}
