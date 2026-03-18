/*
 * XREFs of MonitorDpiFromProcess @ 0x1C0084620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorDpiFromProcess(__int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax
  int v4; // edx

  CurrentProcessWin32Process = a2;
  if ( !a2 )
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v4 = *(_DWORD *)(CurrentProcessWin32Process + 776);
  if ( (v4 & 0x6000) == 0 )
    return 96LL;
  if ( (v4 & 0x2000) != 0 )
    return *((unsigned __int16 *)gpsi + 3643);
  return *(unsigned __int16 *)(a1 + 152);
}
