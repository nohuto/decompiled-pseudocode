/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1C0216610
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _InitializeTouchInjection @ 0x1C01D48E4 (_InitializeTouchInjection.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C021F318 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx

  EnterCrit(0LL, 1LL);
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    TraceLoggingTouchInjection(0, 0, a1, a2);
    v6 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v6 = InitializeTouchInjection(a1, a2, *(_QWORD *)(gptiCurrent + 376LL));
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
