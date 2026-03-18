/*
 * XREFs of ?xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z @ 0x1402688C8
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptActivate(WindowActions *this, struct tagWND *a2, char a3)
{
  char v3; // r14
  struct MOVESIZEDATA *v6; // rcx
  char v7; // di
  bool v8; // bp
  unsigned int *v9; // rdx
  bool v10; // si
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  bool v15; // si
  bool v16; // bl
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rdx
  bool v21; // si
  bool v22; // bl
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  _DWORD v30[23]; // [rsp+54h] [rbp-94h] BYREF

  v3 = (char)a2;
  memset_0(v30, 0, sizeof(v30));
  v6 = WPP_GLOBAL_Control;
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v9 = &WPP_RECORDER_INITIALIZED;
  v10 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v8 || v10 )
  {
    v11 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v13) = v10;
    LOBYTE(v14) = v8;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      32,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v11);
    v9 = &WPP_RECORDER_INITIALIZED;
  }
  if ( v3 )
  {
    v30[0] |= 4u;
    v6 = WPP_GLOBAL_Control;
    v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    v16 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
       && *((_WORD *)WPP_GLOBAL_Control + 36);
    if ( v15 || v16 )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69152),
        5,
        4,
        33,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 464LL) == *(_QWORD *)(W32GetUserSessionState(v6, v9) + 18928) )
  {
    v30[0] |= 2u;
    v21 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    v22 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
       && *((_WORD *)WPP_GLOBAL_Control + 36);
    if ( v21 || v22 )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69152),
        5,
        4,
        34,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
    }
  }
  if ( !a3 )
  {
    v30[0] |= 8u;
    v26 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v7 = 0;
    }
    if ( v26 || v7 )
    {
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
      LOBYTE(v28) = v7;
      LOBYTE(v29) = v26;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69152),
        5,
        4,
        35,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
    }
  }
  xxxSendMessage(this, 0x346u);
}
