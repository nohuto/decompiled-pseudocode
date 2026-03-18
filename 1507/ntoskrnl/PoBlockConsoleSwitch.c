/*
 * XREFs of PoBlockConsoleSwitch @ 0x14055E220
 * Callers:
 *     PoPowerOffMonitor @ 0x14014C668 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1404008A4 (PnprQuiesceDevices.c)
 *     PopAcquireAdaptiveLock @ 0x14055DCE8 (PopAcquireAdaptiveLock.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PdcPoBlockSessionSwitch @ 0x1406B73C8 (PdcPoBlockSessionSwitch.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PopDispatchStateCallout @ 0x14055E27C (PopDispatchStateCallout.c)
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
