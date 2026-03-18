/*
 * XREFs of NtUserInitializeTouchInjection @ 0x1402B66D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x14025A210 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWorker @ 0x14029DF4C (_InitializeTouchInjectionWorker.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  char v4; // si
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  bool v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v18; // [rsp+70h] [rbp+18h] BYREF

  v4 = 1;
  v5 = 0;
  v6 = EnterCrit(1LL, 0LL);
  v18 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v18);
  InputExtensibilityCalloutGuard();
  v9 = *(_QWORD *)(v6 + 456);
  if ( v18 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        20,
        30,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v14 = 5;
    goto LABEL_14;
  }
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    v14 = 87;
LABEL_14:
    UserSetLastError(v14);
    goto LABEL_15;
  }
  CheckCurrentInjectionConfiguration(v8);
  v5 = InitializeTouchInjectionWorker(a1, a2, v9);
LABEL_15:
  LeaveMitRitHazardCrit(v15);
  UserSessionSwitchLeaveCrit(v16);
  return v5;
}
