/*
 * XREFs of ValidateDelegatePointerList @ 0x140136924
 * Callers:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x140134DD4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140136B14 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLL @ 0x140136C24 (WPP_RECORDER_AND_TRACE_SF_LLL.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall ValidateDelegatePointerList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  unsigned int v6; // edi
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  int ULongFromUser; // esi
  unsigned int v10; // r12d
  char v11; // r14
  bool v12; // r13
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // [rsp+20h] [rbp-98h]
  int v22; // [rsp+28h] [rbp-90h]
  int v23; // [rsp+38h] [rbp-80h]
  unsigned int v24; // [rsp+C0h] [rbp+8h]

  v24 = a1;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  PtiCurrent(a1);
  v7 = 1;
  v8 = 0;
  while ( v8 < v6 )
  {
    ULongFromUser = RtlReadULongFromUser(v5 + 4LL * v8);
    v10 = RtlReadULongFromUser(v4 + 4LL * v8);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_LLL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69152),
        v21,
        v22,
        23,
        v23,
        v8,
        ULongFromUser,
        v10);
    }
    if ( !ULongFromUser || HIWORD(ULongFromUser) || !v10 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        LOBYTE(v7) = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v7;
        WPP_RECORDER_AND_TRACE_SF_LLL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69152),
          v21,
          v22,
          24,
          v23,
          v8,
          ULongFromUser,
          v10);
      }
      return 0;
    }
    PointerDelegateGetClient(ULongFromUser, v10, (struct tagDELEGATEPOINTERMAP *)(a4 + ((unsigned __int64)v8++ << 7)));
    v6 = v24;
    v4 = a3;
    v5 = a2;
  }
  return v7;
}
