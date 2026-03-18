/*
 * XREFs of ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402F4654
 * Callers:
 *     ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402F5360 (-xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x1401F09B0 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140251CD4 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z @ 0x1402F3F70 (-SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddddddddd @ 0x1402F6268 (WPP_RECORDER_AND_TRACE_SF_qddddddddddddd.c)
 */

void __fastcall xxxMoveThumb(struct tagWND *a1, struct tagSBCALC *a2, int a3)
{
  int v3; // esi
  struct tagSBCALC *v4; // r13
  struct tagWND *v5; // r14
  char v6; // di
  char v7; // al
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rbx
  unsigned int v12; // eax
  struct tagWND *v13; // rdx
  bool v14; // si
  struct tagTHREADINFO *v15; // rbx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  HDC DCEx; // rbp
  struct MOVESIZEDATA **v20; // rcx
  char v21; // r12
  struct tagTHREADINFO *v22; // rbx
  __int64 v23; // rax
  HBRUSH v24; // r12
  __int64 v25; // rdx
  _DWORD *v26; // rbx
  bool v27; // bl
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  char v31; // bp
  struct tagTHREADINFO *v32; // rbx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // [rsp+B0h] [rbp-68h]
  char v38; // [rsp+120h] [rbp+8h]
  __int64 v39; // [rsp+120h] [rbp+8h]
  char v42; // [rsp+138h] [rbp+20h]
  int v43; // [rsp+138h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v42 = v7;
  v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v9) = v36;
    LOBYTE(v10) = v42;
    v3 = a3;
    WPP_RECORDER_AND_TRACE_SF_qddddddddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152));
    v4 = a2;
    v5 = a1;
    v6 = 1;
  }
  v11 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 744LL);
  if ( !v11 || v3 == *(_DWORD *)(v11 + 76) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v31 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v6 = 0;
    }
    if ( v31 || v6 )
    {
      v32 = *(struct tagTHREADINFO **)v5;
      v33 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v34) = v6;
      LOBYTE(v35) = v31;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(v33 + 69152),
        5,
        9,
        38,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        (char)v32,
        v3);
    }
  }
  else
  {
    while ( 1 )
    {
      v12 = SBPosFromPx(v4, (unsigned int)v3);
      *(_DWORD *)(v11 + 84) = v12;
      if ( v12 == *(_DWORD *)(v11 + 80) )
      {
LABEL_24:
        DCEx = (HDC)_GetDCEx(v5, 0LL, 65537LL);
        *((_DWORD *)v4 + 13) = v3;
        v43 = v3 + *((_DWORD *)v4 + 8);
        *((_DWORD *)v4 + 12) = v43;
        v20 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
          || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          LOBYTE(v20) = 0;
        }
        v38 = (char)v20;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v21 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v21 = 0;
        }
        if ( (_BYTE)v20 || v21 )
        {
          v22 = *(struct tagTHREADINFO **)v5;
          v23 = W32GetUserSessionState(v20, &WPP_RECORDER_INITIALIZED);
          WPP_RECORDER_AND_TRACE_SF_qdd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v38,
            v21,
            *(_QWORD *)(v23 + 69152),
            5u,
            9u,
            0x28u,
            (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
            v22,
            v3,
            v43);
        }
        v24 = (HBRUSH)xxxDefWindowProc((struct tagTHREADINFO **)v5, 0x137u, (__int64)DCEx, *(_QWORD *)v5);
        v39 = GreSelectBrush(DCEx, v24);
        v26 = *(_DWORD **)(*((_QWORD *)v5 + 2) + 744LL);
        if ( v26 )
        {
          DrawThumb2(v5, v4, DCEx, v24, (*v26 >> 1) & 1, 0);
          GreSelectBrush(DCEx, v39);
          _ReleaseDC(DCEx);
          v26[19] = v3;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            v6 = 0;
          }
          v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
            LOBYTE(v29) = v27;
            LOBYTE(v30) = v6;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v30,
              v29,
              *(_QWORD *)(v28 + 69152),
              2,
              9,
              41,
              (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
              (char)DCEx);
          }
          _ReleaseDC(DCEx);
        }
        return;
      }
      v13 = *(struct tagWND **)(v11 + 24);
      if ( v13 )
        xxxDoScroll(*(struct tagWND **)(v11 + 16), v13, 5u, v12, (*(_DWORD *)v11 >> 1) & 1);
      v11 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 744LL);
      if ( !v11 || !*(_QWORD *)(v11 + 48) )
        break;
      *(_DWORD *)(v11 + 80) = *(_DWORD *)(v11 + 84);
      if ( v3 < *((_DWORD *)v4 + 14) + *((_DWORD *)v4 + 15) )
        goto LABEL_24;
      v3 = *((_DWORD *)v4 + 14) + *((_DWORD *)v4 + 15);
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v6 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = *(struct tagTHREADINFO **)v5;
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v17) = v14;
      LOBYTE(v18) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69152),
        3,
        9,
        39,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        (char)v15);
    }
  }
}
