/*
 * XREFs of NtUserNotifyWinEvent @ 0x140043200
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401607D0 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x14021D978 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(unsigned int a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  unsigned int v9; // edx
  struct MOVESIZEDATA *v10; // rcx
  __int64 v11; // rbx
  __int64 v13; // rdx
  char v14; // di
  bool v15; // si
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx

  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a2);
  v11 = 0LL;
  if ( v8 )
  {
    if ( a1 - 32770 > 1
      || a3
      || a4
      || !ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x20000000, v9) )
    {
      xxxWindowEvent(a1, 1);
    }
    else
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v14 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(UserSessionState + 69152));
      }
    }
    v11 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
