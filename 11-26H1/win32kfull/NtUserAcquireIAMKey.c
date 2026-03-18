/*
 * XREFs of NtUserAcquireIAMKey @ 0x1402AF360
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetIAMThreadInfo @ 0x14026076C (SetIAMThreadInfo.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edi
  bool v9; // bl
  bool v10; // si
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rcx
  __int16 v16; // [rsp+30h] [rbp-28h]

  EnterCrit(0LL, 0LL);
  v4 = PtiCurrent(v2);
  v5 = *((_QWORD *)v4 + 61);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 176);
  v8 = 0;
  if ( !v7 || !*(_QWORD *)(v6 + 168) )
  {
    v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v3) + 69152);
    v16 = 44;
    goto LABEL_41;
  }
  if ( *((_QWORD *)v4 + 57) != v7 )
  {
    v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v3) + 69152);
    v16 = 45;
LABEL_41:
    LOBYTE(v12) = v10;
    LOBYTE(v11) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      v13,
      4,
      2,
      v16,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
LABEL_42:
    UserSetLastError(5);
    goto LABEL_43;
  }
  if ( *(_QWORD *)(v5 + 288) )
  {
    v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v3) + 69152);
    v16 = 46;
    goto LABEL_41;
  }
  if ( !*(_DWORD *)(v5 + 272) )
  {
    v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v3) + 69152);
    v16 = 47;
    goto LABEL_41;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlWriteULong64ToUser(a1, *(_QWORD *)(v5 + 280));
  SetIAMThreadInfo(v5, (__int64)v4);
  v8 = 1;
LABEL_43:
  UserSessionSwitchLeaveCrit(v14);
  return v8;
}
