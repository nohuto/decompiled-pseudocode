/*
 * XREFs of ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x140178774
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     InternalBeginDeferWindowPos @ 0x140179454 (InternalBeginDeferWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x14026B2E4 (-xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 */

void __fastcall xxxMoveSizeSetWindowPosOld(struct MOVESIZEDATA *a1, struct tagRECT *a2)
{
  struct tagRECT *v4; // r8
  char v5; // r15
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // r15
  char v13; // r14
  __int64 UserSessionState; // rax
  char v15; // di
  bool v16; // bp
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rbx
  __int64 v22; // rbx
  _DWORD *v23; // rcx
  int v24; // ebp
  int v25; // edi
  int v26; // esi
  int v27; // ebx
  __int64 v28; // rax
  __int16 v29; // [rsp+30h] [rbp-78h]
  __int64 v30; // [rsp+40h] [rbp-68h]
  char v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+48h] [rbp-60h]
  __int64 v33; // [rsp+50h] [rbp-58h]
  __int64 v34; // [rsp+58h] [rbp-50h]
  __int64 v35; // [rsp+60h] [rbp-48h]
  __int64 v36; // [rsp+68h] [rbp-40h]
  struct tagRECT v37; // [rsp+70h] [rbp-38h] BYREF

  v4 = (struct tagRECT *)*(unsigned int *)(*((_QWORD *)a1 + 2) + 384LL);
  if ( ((unsigned __int8)v4 & 0x10) != 0 )
  {
    v37 = *a2;
    WindowActions::xxxInterceptMoveSizeSetWindowPos(a1, (struct MOVESIZEDATA *)&v37, v4);
    return;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      5u,
      1u,
      0xBu,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      a2->left,
      a2->top,
      a2->right,
      a2->bottom,
      a2->right - a2->left,
      a2->bottom - a2->top);
  }
  v8 = InternalBeginDeferWindowPos(1LL);
  if ( v8 )
  {
    v9 = _DeferWindowPos(
           v8,
           *((_QWORD *)a1 + 2),
           0LL,
           a2->left,
           a2->top,
           a2->right - a2->left,
           a2->bottom - a2->top,
           524820,
           0);
    if ( v9 )
    {
      *(_QWORD *)(*(_QWORD *)(v9 + 40) + 128LL) = **((_QWORD **)a1 + 27);
      *(_DWORD *)(*(_QWORD *)(v9 + 40) + 156LL) |= 0x200u;
      if ( (unsigned int)xxxEndDeferWindowPosEx((struct tagSMWP *)v9, 0) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v12 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v13 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v13 = 0;
        }
        if ( v12 || v13 )
        {
          v23 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 40LL);
          v24 = v23[23];
          v25 = v23[25];
          v26 = v23[22];
          v27 = v23[24];
          v28 = W32GetUserSessionState(v23, v11);
          LODWORD(v36) = v25 - v24;
          LODWORD(v35) = v27 - v26;
          LODWORD(v34) = v25;
          LODWORD(v33) = v27;
          LODWORD(v32) = v24;
          LODWORD(v30) = v26;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v12,
            v13,
            *(_QWORD *)(v28 + 69152),
            5u,
            1u,
            0xFu,
            (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
            v30,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
        return;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v15 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = **((_QWORD **)a1 + 2);
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
        v31 = v21;
        v29 = 14;
        goto LABEL_38;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v15 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v22 = **((_QWORD **)a1 + 2);
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        v31 = v22;
        v29 = 13;
        goto LABEL_38;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v15 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = **((_QWORD **)a1 + 2);
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      v31 = v17;
      v29 = 12;
LABEL_38:
      LOBYTE(v20) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v20,
        *(_QWORD *)(v18 + 69152),
        2,
        1,
        v29,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v31);
    }
  }
}
