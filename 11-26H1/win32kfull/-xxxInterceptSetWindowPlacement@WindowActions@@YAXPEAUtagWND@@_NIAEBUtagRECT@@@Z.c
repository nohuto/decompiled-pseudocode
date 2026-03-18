/*
 * XREFs of ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1401FC6E0
 * Callers:
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z @ 0x1401FCA20 (-UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptSetWindowPlacement(
        WindowActions *this,
        struct tagWND *a2,
        unsigned int a3,
        __int128 *a4)
{
  char v7; // si
  bool v8; // r14
  bool v9; // di
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int128 v14; // xmm0
  __int64 v15; // rdx
  char v16; // r15
  char v17; // r14
  __int64 v18; // rax
  bool v19; // bl
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  __int16 v23; // [rsp+30h] [rbp-99h]
  __int64 v24; // [rsp+40h] [rbp-89h]
  char v25; // [rsp+70h] [rbp-59h]
  unsigned int v26; // [rsp+80h] [rbp-49h] BYREF
  int v27; // [rsp+84h] [rbp-45h]
  int v28; // [rsp+A8h] [rbp-21h]
  __int128 v29; // [rsp+ACh] [rbp-1Dh]

  v25 = (char)a2;
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v9 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v8 || v9 )
  {
    v10 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      81,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v10);
  }
  memset_0(&v26, 0, 0x60uLL);
  UpdateActionForShowCmd(a3, (struct _WINDOW_ACTION *)&v26);
  v14 = *a4;
  v15 = v26 | 0x40;
  v26 |= 0x40u;
  v29 = v14;
  v16 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v17 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v16 || v17 )
  {
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
    LODWORD(v24) = v29;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v17,
      *(_QWORD *)(v18 + 69152),
      5u,
      4u,
      0x52u,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v24,
      DWORD1(v29),
      DWORD2(v29),
      HIDWORD(v29),
      DWORD2(v29) - (_DWORD)v29,
      HIDWORD(v29) - DWORD1(v29));
    v15 = v26;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20) != 0 && (v15 & 0x20) == 0 || (v15 & 0x20) != 0 && v28 == 2 )
  {
    if ( v25 )
    {
      v27 |= 0x40u;
      v19 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v7 = 0;
      }
      if ( v19 || v7 )
      {
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
        v23 = 83;
LABEL_52:
        LOBYTE(v22) = v7;
        LOBYTE(v21) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v22,
          *(_QWORD *)(v20 + 69152),
          5,
          4,
          v23,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
      }
    }
    else
    {
      v27 |= 0x20u;
      v19 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v7 = 0;
      }
      if ( v19 || v7 )
      {
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
        v23 = 84;
        goto LABEL_52;
      }
    }
  }
  xxxSendMessage(this, 0x346u);
}
