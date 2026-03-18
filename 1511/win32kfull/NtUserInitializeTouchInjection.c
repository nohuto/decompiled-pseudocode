/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1C021CB30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _InitializeTouchInjection @ 0x1C01DD004 (_InitializeTouchInjection.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0226258 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterCrit(0LL, 1LL);
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    TraceLoggingTouchInjection(0, 0, a1, a2);
    v6 = 0;
    UserSetLastError(87);
  }
  else
  {
    v6 = InitializeTouchInjection(a1, a2, *(_QWORD *)(gptiCurrent + 376LL));
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
