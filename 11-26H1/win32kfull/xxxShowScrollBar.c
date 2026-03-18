/*
 * XREFs of xxxShowScrollBar @ 0x1401DA46C
 * Callers:
 *     NtUserShowScrollBar @ 0x1401DA390 (NtUserShowScrollBar.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     GetScrollbarTypeString @ 0x14012905C (GetScrollbarTypeString.c)
 *     _InitPwSB @ 0x14018FBCC (_InitPwSB.c)
 *     WPP_RECORDER_AND_TRACE_SF_qslll @ 0x1401DA704 (WPP_RECORDER_AND_TRACE_SF_qslll.c)
 *     WPP_RECORDER_AND_TRACE_SF_qll @ 0x1402F9D34 (WPP_RECORDER_AND_TRACE_SF_qll.c)
 */

__int64 __fastcall xxxShowScrollBar(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // r14d
  struct MOVESIZEDATA *v10; // rcx
  char v11; // r12
  bool v12; // r13
  int v13; // r8d
  int v14; // edx
  int v15; // r9d
  int v16; // r14d
  int v17; // r14d
  __int64 UserSessionState; // rax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ecx
  char v23; // r14
  char v24; // bp
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // [rsp+C0h] [rbp+18h]

  v28 = a3;
  v4 = 0;
  v5 = a3;
  v6 = 0;
  v7 = 0;
  v8 = a2;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    GetScrollbarTypeString(v8);
    LOBYTE(v13) = v12;
    LOBYTE(v14) = v11;
    WPP_RECORDER_AND_TRACE_SF_qslll(*((_QWORD *)WPP_GLOBAL_Control + 3), v14, v13, v15);
    v5 = v28;
    v6 = 0;
  }
  if ( v8 )
  {
    v16 = v8 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        UserSessionState = W32GetUserSessionState(v10, a2);
        LOBYTE(v4) = v5 != 0;
        xxxShowWindowEx(a1, v5 != 0, v4 & 0x10000 | *(_DWORD *)(UserSessionState + 66792) & 0x10000);
        return 1LL;
      }
      if ( v17 == 1 )
        v7 = 3145728;
    }
    else
    {
      v7 = 0x200000;
    }
  }
  else
  {
    v7 = 0x100000;
  }
  v20 = *((_QWORD *)a1 + 5);
  v21 = *(_DWORD *)(v20 + 28);
  v22 = v7 & v21;
  if ( !v5 )
  {
    if ( !v22 )
      return 1LL;
    *(_DWORD *)(v20 + 28) = v21 & ~v7;
    goto LABEL_19;
  }
  if ( v22 != v7 )
  {
    v6 = 1;
    *(_DWORD *)(v20 + 28) = v7 | v21;
  }
  if ( !*((_QWORD *)a1 + 19) )
    InitPwSB((__int64 *)a1, v20, a3, a4);
  if ( v6 )
  {
LABEL_19:
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v23 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v24 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v24 = 0;
    }
    if ( v23 || v24 )
    {
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_qll(*((_QWORD *)WPP_GLOBAL_Control + 3), v27, v26, *(_QWORD *)(v25 + 69152));
    }
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  }
  return 1LL;
}
