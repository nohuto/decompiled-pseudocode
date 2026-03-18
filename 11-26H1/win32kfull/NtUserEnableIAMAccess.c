/*
 * XREFs of NtUserEnableIAMAccess @ 0x1401A2AC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _EnableIAMThreadAccess @ 0x1401A2CF0 (_EnableIAMThreadAccess.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 a1, unsigned int a2)
{
  __int64 ULong64FromUser; // rdi
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  char v11; // di
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rcx

  EnterCrit(0LL, 0LL);
  ULong64FromUser = RtlReadULong64FromUser(a1);
  v6 = PtiCurrent(v5);
  v7 = (_QWORD *)*((_QWORD *)v6 + 61);
  v8 = v7[1];
  v9 = *(_QWORD *)(v8 + 176);
  v10 = 0;
  if ( *((_QWORD *)v6 + 57) == v9 && v9 && *(_QWORD *)(v8 + 168) && v7[36] && ULong64FromUser == v7[35] )
  {
    v10 = EnableIAMThreadAccess(v6, a2);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v8);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        48,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v16);
  return v10;
}
