/*
 * XREFs of NtUserRegisterForCustomDockTargets @ 0x14019D020
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x14019D39C (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 */

_BOOL8 __fastcall NtUserRegisterForCustomDockTargets(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  bool v10; // bl
  bool v11; // di
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  const struct tagWND *v18; // rbx
  bool v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  MOVESIZEDATA *v28; // rcx
  bool v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // edx
  int v33; // r8d
  bool v34; // al
  __int64 v35; // rcx
  _BOOL8 v36; // rbx
  __int16 v38; // [rsp+30h] [rbp-48h]
  char v39[8]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v40; // [rsp+58h] [rbp-20h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v39);
  v3 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v2, WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      1,
      88,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
      a1);
  }
  v8 = PtiCurrent(v2);
  if ( !(unsigned int)IAMThreadAccessGranted(v8) )
  {
    v10 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69152),
        3,
        1,
        89,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v15 = 5;
    goto LABEL_52;
  }
  v18 = (const struct tagWND *)ValidateHwnd(a1);
  if ( !v18 )
  {
    v19 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69152),
        3,
        1,
        90,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v15 = 87;
    goto LABEL_52;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v17, v16) + 18928)
    || (v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18928), !*(_QWORD *)(v26 + 128)) )
  {
    v29 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v29 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
    v38 = 91;
LABEL_50:
    LOBYTE(v33) = v30;
    LOBYTE(v32) = v29;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v33,
      *(_QWORD *)(v31 + 69152),
      3,
      1,
      v38,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    goto LABEL_51;
  }
  v28 = *(MOVESIZEDATA **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v24) + 18928) + 128LL) + 16LL)
                         + 704LL);
  if ( !v28 )
  {
    v29 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v29 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
    v38 = 92;
    goto LABEL_50;
  }
  v34 = MOVESIZEDATA::SHData_SetCustomDockTargetWindow(v28, v18);
  v36 = v34;
  if ( !v34 )
  {
LABEL_51:
    v15 = 5023;
LABEL_52:
    v36 = 0LL;
    UserSetLastError(v15);
  }
  if ( v39[0] )
  {
    v35 = v40;
    --*(_DWORD *)(v40 + 28);
  }
  UserSessionSwitchLeaveCrit(v35);
  return v36;
}
