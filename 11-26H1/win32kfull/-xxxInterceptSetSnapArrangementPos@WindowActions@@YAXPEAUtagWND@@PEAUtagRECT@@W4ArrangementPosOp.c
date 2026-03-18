/*
 * XREFs of ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402E5FFC
 * Callers:
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddds @ 0x1401A0980 (WPP_RECORDER_AND_TRACE_SF_dddddds.c)
 *     ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x140295068 (-SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

char __fastcall WindowActions::xxxInterceptSetSnapArrangementPos(struct tagWND *a1, __int128 *a2, int a3, int a4)
{
  int v4; // ebx
  char v8; // r15
  bool v9; // si
  bool v10; // di
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  char result; // al
  __int64 v21; // rdx
  char v22; // r12
  int v23; // ebx
  int v24; // edi
  int v25; // esi
  int v26; // r14d
  __int64 v27; // r9
  const char *v28; // rax
  int v30; // [rsp+90h] [rbp-49h] BYREF
  int v31; // [rsp+94h] [rbp-45h]
  int v32; // [rsp+9Ch] [rbp-3Dh]
  int v33; // [rsp+A0h] [rbp-39h]
  int v34; // [rsp+A4h] [rbp-35h]
  int v35; // [rsp+A8h] [rbp-31h]
  int v36; // [rsp+B8h] [rbp-21h]

  v4 = a3;
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v10 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v9 || v10 )
  {
    v11 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v13) = v10;
    LOBYTE(v14) = v9;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      62,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v11);
    v4 = a3;
  }
  memset_0(&v30, 0, 0x60uLL);
  v15 = *(_DWORD *)a2;
  v16 = *((_DWORD *)a2 + 1);
  v17 = v31 | 1;
  v18 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  v36 = 3;
  v34 = v18;
  v19 = *((_DWORD *)a2 + 3) - v16;
  v31 |= 1u;
  v32 = v15;
  v33 = v16;
  v30 = 38;
  v35 = v19;
  if ( v4 != 2 )
  {
    v30 = 54;
    if ( v4 == 1 )
      v31 = v17 | 2;
  }
  result = SaveShellRequestedOperationData(a1, a2, 3, a4);
  if ( result )
  {
    v30 |= 0x400u;
    v22 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v8 = 0;
    }
    if ( v22 || v8 )
    {
      v23 = *((_DWORD *)a2 + 3);
      v24 = *((_DWORD *)a2 + 2);
      v25 = *((_DWORD *)a2 + 1);
      v26 = *(_DWORD *)a2;
      v27 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v21) + 69152);
      v28 = "no";
      if ( a3 == 2 )
        v28 = "forground";
      WPP_RECORDER_AND_TRACE_SF_dddddds(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v8,
        v27,
        5u,
        4u,
        0x3Fu,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v26,
        v25,
        v24,
        v23,
        v34,
        v35,
        v28);
    }
    return xxxSendMessage(a1, 0x346u);
  }
  return result;
}
