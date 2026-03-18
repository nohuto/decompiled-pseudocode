/*
 * XREFs of EditionProcessForegroundPriorityChanged @ 0x140206C60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall EditionProcessForegroundPriorityChanged(PEPROCESS *a1, int a2, __int64 a3)
{
  int ActiveConsoleId; // ebx
  __int64 v6; // rcx
  HANDLE ProcessId; // rax

  if ( a2 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId == (unsigned int)W32GetCurrentWin32kSessionId(v6) )
    {
      ProcessId = PsGetProcessId(*a1);
      RtlSetConsoleSessionForegroundProcessId(ProcessId);
    }
  }
  LOBYTE(a3) = a2 != 0;
  return GreDxgkSetProcessStatus(a1, 1LL, a3);
}
