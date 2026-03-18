/*
 * XREFs of ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402E596C
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z @ 0x1401FCA20 (-UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402E3844 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall WindowActions::xxxInterceptMinMaximize(struct tagWND *a1, unsigned int a2, char a3, __int64 a4)
{
  char v7; // si
  char v8; // r14
  char v9; // di
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  const struct tagMONITOR *v14; // rdx
  __int64 v15; // r14
  char v16; // di
  char v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int128 *v21; // rax
  char v22; // r14
  __int64 v23; // rax
  __int64 v25; // [rsp+40h] [rbp-89h]
  __int64 v26; // [rsp+48h] [rbp-81h]
  struct tagWND *v27; // [rsp+70h] [rbp-59h]
  _DWORD v28[8]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-29h]
  int v30; // [rsp+A8h] [rbp-21h]
  __int128 v31; // [rsp+ACh] [rbp-1Dh]

  v27 = a1;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v8 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v9 = 0;
  }
  if ( v8 || v9 )
  {
    v10 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a1);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      51,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v10,
      a2);
  }
  memset_0(v28, 0, 0x60uLL);
  UpdateActionForShowCmd(a2, (struct _WINDOW_ACTION *)v28);
  if ( (a3 & 0x10) != 0 )
    v28[0] &= ~0x10u;
  if ( v30 == 1 )
  {
    v14 = *(const struct tagMONITOR **)a4;
    if ( *(_QWORD *)a4 )
      SetMonitorMovePoint((struct _WINDOW_ACTION *)v28, v14);
  }
  if ( (a3 & 0x40) == 0 )
  {
    v15 = *(_QWORD *)(a4 + 16);
    v28[0] |= 8u;
    v29 = v15;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v16 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v17 = 0;
    }
    if ( v16 || v17 )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69152),
        5,
        4,
        52,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v15);
    }
  }
  if ( (a3 & 8) != 0 )
  {
    v21 = *(__int128 **)(a4 + 8);
    if ( v21 )
    {
      v28[0] |= 0x40u;
      v31 = *v21;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v22 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v7 = 0;
      }
      if ( v22 || v7 )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LODWORD(v26) = DWORD1(v31);
        LODWORD(v25) = v31;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v7,
          *(_QWORD *)(v23 + 69152),
          5u,
          4u,
          0x35u,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v25,
          v26,
          DWORD2(v31),
          HIDWORD(v31),
          DWORD2(v31) - (_DWORD)v31,
          HIDWORD(v31) - DWORD1(v31),
          v27);
      }
    }
  }
  return xxxSendMessage(v27, 0x346u);
}
