/*
 * XREFs of ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402F4100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _GetMessagePos @ 0x1401C790C (_GetMessagePos.c)
 *     _SetSystemTimer @ 0x1401DA8CC (_SetSystemTimer.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x1402A211C (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402F5100 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 */

void __fastcall xxxContScroll(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // r15
  char v4; // r14
  char v5; // di
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  int MessagePos; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // r12d
  int v14; // r12d
  struct MOVESIZEDATA *v15; // rcx
  int v16; // edi
  int v17; // esi
  int v18; // ebx
  __int64 v19; // rbp
  __int64 UserSessionState; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  struct tagWND *v25; // rdx
  char v26; // [rsp+80h] [rbp-38h]
  int v27; // [rsp+84h] [rbp-34h]
  char v28; // [rsp+C0h] [rbp+8h]

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL);
  if ( v3 )
  {
    MessagePos = GetMessagePos((__int64)a1);
    v11 = *((_QWORD *)a1 + 5);
    v12 = ((unsigned int)((unsigned __int64)MessagePos >> 16) - *(_DWORD *)(v11 + 92)) << 16;
    v27 = *(_DWORD *)(v11 + 92);
    if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
      v13 = (unsigned __int16)(*(_WORD *)(v11 + 96) - MessagePos);
    else
      v13 = (unsigned __int16)(MessagePos - *(_WORD *)(v11 + 88));
    v14 = v12 | v13;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    v28 = (char)v15;
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = *(_DWORD *)(v11 + 100);
      v17 = *(_DWORD *)(v11 + 88);
      v18 = *(_DWORD *)(v11 + 96);
      v19 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(v15, v12);
      WPP_RECORDER_AND_TRACE_SF_qddddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v26,
        *(_QWORD *)(UserSessionState + 69152),
        4u,
        9u,
        0x2Du,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v19,
        v14,
        v17,
        v27,
        v16,
        v18,
        v18 - v17,
        v16 - v27);
    }
    xxxTrackBox(a1, 0, 0LL, v14, 0LL);
    if ( v3 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL) && (*(_DWORD *)v3 & 1) != 0 )
    {
      v23 = W32GetUserSessionState(v22, v21);
      v24 = SetSystemTimer(
              (__int64)a1,
              65534LL,
              *(_DWORD *)(*(_QWORD *)(v23 + 19904) + 4976LL) >> 3,
              (__int64)xxxContScroll,
              0);
      v25 = *(struct tagWND **)(v3 + 24);
      *(_QWORD *)(v3 + 64) = v24;
      if ( v25 )
        xxxDoScroll(*(struct tagWND **)(v3 + 16), v25, *(_DWORD *)(v3 + 56), 0, (*(_DWORD *)v3 >> 1) & 1);
    }
  }
  else
  {
    v4 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v5 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v4 = 0;
    }
    if ( v5 || v4 )
    {
      v6 = *(_QWORD *)a1;
      v7 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v8) = v4;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(v7 + 69152),
        5,
        9,
        44,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v6);
    }
  }
}
