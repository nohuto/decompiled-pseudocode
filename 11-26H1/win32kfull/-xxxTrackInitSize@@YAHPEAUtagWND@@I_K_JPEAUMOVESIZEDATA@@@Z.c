/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14026A3E8
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x14025084C (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1402C84EC (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     _ClientToScreen @ 0x1403022BC (_ClientToScreen.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTrackInitSize(struct tagTHREADINFO **a1, __int64 a2, __int64 a3, int a4, struct MOVESIZEDATA *a5)
{
  int v7; // r14d
  char v9; // si
  char v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  struct MOVESIZEDATA *v17; // r9
  char v18; // bp
  char v19; // bl
  int v20; // r12d
  int v21; // r13d
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  struct MOVESIZEDATA *v25; // rcx
  char v26; // si
  char v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  struct tagTHREADINFO *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  int v40; // eax
  __int64 v41; // rdx
  int v42; // esi
  int v43; // ebp
  char v44; // di
  char v45; // bl
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  int v49; // ecx
  int v50; // eax
  int v51; // r14d
  __int64 v52; // rax
  char v53; // di
  char v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  char v61; // di
  char v62; // bl
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  unsigned __int64 v66; // [rsp+60h] [rbp-48h] BYREF
  __int128 v67; // [rsp+68h] [rbp-40h] BYREF

  v7 = a2;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v9 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v10 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v10 = 0;
  }
  if ( v9 || v10 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      1,
      75,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v7);
  }
  if ( v7 != 256 && v7 != 512 && (unsigned int)(v7 - 513) > 1 )
    return 1LL;
  LODWORD(v66) = (__int16)a4;
  HIDWORD(v66) = SHIWORD(a4);
  ClientToScreen(a1, &v66);
  v16 = xxxSendTransformableMessageTimeout(a1, 132LL, 0LL, (unsigned __int16)v66 | (WORD2(v66) << 16), 0, 0, 0LL, 1u, 0);
  v17 = (struct MOVESIZEDATA *)&WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (v15 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v15 & 1) == 0)
    || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v18 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v19 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v19 = 0;
  }
  v20 = HIDWORD(v66);
  v21 = v66;
  if ( v18 || v19 )
  {
    v22 = W32GetUserSessionState(v15, v14);
    LOBYTE(v23) = v19;
    LOBYTE(v24) = v18;
    WPP_RECORDER_AND_TRACE_SF_ddd(*((_QWORD *)WPP_GLOBAL_Control + 3), v24, v23, *(_QWORD *)(v22 + 69152));
    v17 = (struct MOVESIZEDATA *)&WPP_GLOBAL_Control;
  }
  if ( v7 == 256 )
  {
    if ( *((_DWORD *)a5 + 44) == 9 )
      xxxSendMessage((struct tagWND *)a1, 0x20u);
    if ( a3 == 13 || a3 == 27 || a3 == 37 || a3 == 38 || (unsigned __int64)(a3 - 39) <= 1 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v61 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v62 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v62 = 0;
      }
      if ( v61 || v62 )
      {
        v63 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v64) = v62;
        LOBYTE(v65) = v61;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v65,
          v64,
          *(_QWORD *)(v63 + 69152),
          5,
          1,
          77,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
          a3);
      }
      *((_DWORD *)a5 + 50) &= ~1u;
    }
    return 1LL;
  }
  if ( v7 == 512 )
  {
    if ( a3 != 1 )
    {
      v67 = *(_OWORD *)((char *)a1[5] + 88);
      if ( PtInRect(&v67, v66) && (unsigned int)(v16 - 10) <= 7 )
      {
        xxxSendMessage((struct tagWND *)a1, 0x20u);
      }
      else
      {
        v60 = W32GetUserSessionState(v59, v58);
        zzzSetCursor(*(struct tagCURSOR **)(v60 + 26880));
      }
      return 1LL;
    }
LABEL_44:
    v40 = *((_DWORD *)a5 + 44);
    if ( v40 )
    {
      if ( v40 == 9 && v16 == 2 )
      {
        xxxSendMessage((struct tagWND *)a1, 0x20u);
        v42 = *((_DWORD *)a5 + 30) - v21;
        v43 = *((_DWORD *)a5 + 31) - v20;
        *((_DWORD *)a5 + 42) = v42;
        *((_DWORD *)a5 + 50) &= ~1u;
        *((_DWORD *)a5 + 43) = v43;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v44 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v45 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v45 = 0;
        }
        if ( v44 || v45 )
        {
          v46 = W32GetUserSessionState(WPP_GLOBAL_Control, v41);
          LOBYTE(v47) = v45;
          LOBYTE(v48) = v44;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v48,
            v47,
            *(_QWORD *)(v46 + 69152),
            5,
            1,
            79,
            (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
            v42,
            v43);
        }
      }
    }
    else if ( (unsigned int)(v16 - 10) <= 7 )
    {
      _mm_lfence();
      xxxSendMessage((struct tagWND *)a1, 0x20u);
      *((_DWORD *)a5 + 50) &= ~1u;
      v49 = dword_140369B4C[v16];
      v50 = *(_DWORD *)&aLeft[4 * v16 + 4];
      *((_DWORD *)a5 + 46) = v50;
      *((_DWORD *)a5 + 45) = v49;
      v51 = v50 + v49;
      *((_DWORD *)a5 + 44) = v50 + v49;
      v52 = dword_140369BB0[v50 + v49];
      *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + dword_140369BE0[v51] + 30) - v21;
      *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + v52 + 30) - v20;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v53 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v54 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v54 = 0;
      }
      if ( v53 || v54 )
      {
        v55 = W32GetUserSessionState(WPP_GLOBAL_Control, 0x140000000uLL);
        LOBYTE(v56) = v54;
        LOBYTE(v57) = v53;
        WPP_RECORDER_AND_TRACE_SF_ddd(*((_QWORD *)WPP_GLOBAL_Control + 3), v57, v56, *(_QWORD *)(v55 + 69152));
      }
    }
    return 1LL;
  }
  if ( v7 != 513 )
  {
    if ( v7 == 514 )
      goto LABEL_28;
    return 1LL;
  }
  if ( PtInRect((_DWORD *)a5 + 6, v66) )
    goto LABEL_44;
LABEL_28:
  v25 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == v17
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v26 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v27 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v27 = 0;
  }
  if ( v26 || v27 )
  {
    v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
    LOBYTE(v29) = v27;
    LOBYTE(v30) = v26;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v29,
      *(_QWORD *)(v28 + 69152),
      5,
      1,
      78,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v7);
  }
  v31 = PtiCurrent((__int64)v25);
  v34 = W32GetUserSessionState(v33, v32);
  bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v34 + 56968) + 40LL), 0LL, 0LL, 0);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v31 + 130, 0, 0) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2u);
    _InterlockedAnd((volatile signed __int32 *)v31 + 130, 0xFFFFFFEF);
  }
  *((_DWORD *)a5 + 50) &= ~1u;
  v37 = W32GetUserSessionState(v36, v35);
  CCursorClip::ClearClip(*(CCursorClip **)(v37 + 36272));
  xxxReleaseCapture(v38);
  *((_DWORD *)a5 + 50) |= 8u;
  return 0LL;
}
