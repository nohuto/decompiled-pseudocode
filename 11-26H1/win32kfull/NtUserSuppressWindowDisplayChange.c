/*
 * XREFs of NtUserSuppressWindowDisplayChange @ 0x1402C01E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z @ 0x1402DE6F4 (-SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall NtUserSuppressWindowDisplayChange(__int64 a1, int a2)
{
  char v4; // di
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbx
  bool v10; // si
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  DesktopRecalc *v15; // rax
  struct tagWND *v16; // rdx
  bool v17; // r8
  bool v18; // si
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  _BYTE v24[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
  v6 = PtiCurrent(v5);
  LOBYTE(v7) = IAMThreadAccessGranted(v6);
  v9 = 0LL;
  if ( v7 )
  {
    v15 = (DesktopRecalc *)ValidateHwnd(a1);
    if ( v15 )
    {
      LOBYTE(v16) = a2 != 0;
      DesktopRecalc::SuppressWindowDisplayChangeWorker(v15, v16, v17);
      v9 = 1LL;
      goto LABEL_21;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        4,
        103,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        a1);
    }
    v14 = 87;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 69152),
        3,
        4,
        102,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v14 = 5;
  }
  UserSetLastError(v14);
LABEL_21:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
  UserSessionSwitchLeaveCrit(v22);
  return v9;
}
