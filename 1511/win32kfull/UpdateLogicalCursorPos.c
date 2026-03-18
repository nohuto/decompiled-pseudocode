/*
 * XREFs of UpdateLogicalCursorPos @ 0x1C0066B68
 * Callers:
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateLogicalCursorPos(__int64 a1, char a2)
{
  char MonitorFlags; // al
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  MonitorFlags = a2;
  if ( (a2 & 0xE0) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    MonitorFlags = GetMonitorFlags(CurrentProcessWin32Process);
    a1 = v9;
  }
  if ( (MonitorFlags & 0x20) != 0 )
  {
    PhysicalToLogicalDPIPoint(gpsi + 3952LL, &v9, 64LL, 0LL);
    v3 = &v9;
    v4 = gpsi;
  }
  else
  {
    if ( MonitorFlags < 0 )
    {
      *(_QWORD *)(gpsi + 3960LL) = a1;
      v5 = 64LL;
      v3 = (__int64 *)(gpsi + 3976LL);
      v6 = gpsi + 3952LL;
      return PhysicalToLogicalDPIPoint(v6, v3, v5, 0LL);
    }
    *(_QWORD *)(gpsi + 3952LL) = a1;
    v4 = gpsi;
    v3 = (__int64 *)(gpsi + 3976LL);
  }
  v5 = 128LL;
  v6 = v4 + 3960;
  return PhysicalToLogicalDPIPoint(v6, v3, v5, 0LL);
}
