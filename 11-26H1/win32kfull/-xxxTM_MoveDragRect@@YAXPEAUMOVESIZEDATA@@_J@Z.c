/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14019DC18 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1402036EC (GreIsWindowResizeInProgress.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1402574E8 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x14027B068 (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14029D154 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ @ 0x1402EFC08 (-CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxTM_MoveDragRect(struct MOVESIZEDATA *a1, unsigned int a2)
{
  __int64 v2; // rax
  Gre::Base **v4; // rcx
  char v5; // bl
  Gre::Base *v7; // rcx
  struct tagMONITOR *v8; // r8
  bool v9; // zf
  struct tagRECT *v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  bool v13; // al
  struct tagRECT *v14; // r12
  unsigned int v15; // r15d
  char v16; // di
  char v17; // bl
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  struct MOVESIZEDATA *v21; // rcx
  char v22; // di
  char v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rax
  int v28; // eax
  unsigned __int64 v29; // r8
  struct tagTHREADINFO **v30; // rcx
  char v31; // di
  char v32; // bl
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  unsigned __int64 v36; // r8
  struct tagTHREADINFO **v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagRECT *v40; // rdi
  int v41; // r12d
  int v42; // r13d
  char v43; // r15
  char v44; // r14
  LONG top; // ebx
  LONG left; // edi
  __int64 v47; // rax
  __int64 v48; // [rsp+40h] [rbp-49h]
  unsigned int v49; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v50; // [rsp+84h] [rbp-5h] BYREF
  struct tagPOINT v51; // [rsp+88h] [rbp-1h]
  __int64 v52; // [rsp+90h] [rbp+7h]
  struct tagRECT v53; // [rsp+98h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)a1 + 27);
  v4 = (Gre::Base **)*((_QWORD *)a1 + 2);
  v52 = v2;
  v5 = 0;
  v51.x = (__int16)a2;
  v49 = 0;
  v53 = 0LL;
  v7 = *v4;
  v51.y = SHIWORD(a2);
  v50 = 0;
  if ( GreIsWindowResizeInProgress(v7) )
  {
    *((_DWORD *)a1 + 50) |= 0x2000000u;
    return;
  }
  v9 = *((_DWORD *)a1 + 44) == 9;
  v10 = (struct tagRECT *)((char *)a1 + 24);
  *(_OWORD *)((char *)a1 + 40) = *(_OWORD *)((char *)a1 + 24);
  *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)((char *)a1 + 56);
  if ( v9 )
  {
    v13 = xxxSizeOrMoveRect(a1, v51, (struct tagRECT *)((char *)a1 + 40), &v49);
    v12 = 0LL;
    if ( !v13 )
      return;
  }
  else
  {
    v11 = SizeRect(a1, a2, v8, &v50);
    v12 = 0LL;
    if ( !v11 )
      return;
    v5 = v50;
    v49 = 532;
  }
  v14 = (struct tagRECT *)((char *)a1 + 40);
  v15 = 0;
  if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
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
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          1,
          52,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      xxxDrawDragRectEx(a1, 0LL, 0x80000000, (struct tagRECT *)((char *)a1 + 24));
    }
    else if ( (v5 & 1) != 0 )
    {
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v22 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v23 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v23 = 0;
      }
      if ( v22 || v23 )
      {
        v24 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69152),
          5,
          1,
          53,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      v27 = W32GetUserSessionState(v21, v12);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v27 + 56968) + 40LL), 0LL, 0LL, 0);
    }
  }
  v28 = *((_DWORD *)a1 + 50);
  if ( (v28 & 0x80000) != 0 )
  {
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *((int *)a1 + 44);
      v30 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 2);
      v53 = *(struct tagRECT *)((char *)a1 + 72);
      xxxSendTransformableMessageTimeout(v30, v49, v29, (__int64)&v53, 0, 0, 0LL, 1u, 0);
      xxxDrawDragRectEx(a1, (struct tagRECT *)((char *)a1 + 72), 0x80000000, (struct tagRECT *)((char *)a1 + 56));
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v31 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v32 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v32 = 0;
      }
      if ( v31 || v32 )
      {
        v33 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v31;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v34,
          *(_QWORD *)(v33 + 69152),
          5,
          1,
          54,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      v14 = (struct tagRECT *)((char *)a1 + 72);
      v10 = (struct tagRECT *)((char *)a1 + 56);
      v15 = 0x80000000;
    }
  }
  v36 = *((int *)a1 + 44);
  v37 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 2);
  v53 = *v14;
  xxxSendTransformableMessageTimeout(v37, v49, v36, (__int64)&v53, 0, 0, 0LL, 1u, 0);
  xxxDrawDragRectEx(a1, &v53, v15 | 3, v10);
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
    && *((_DWORD *)a1 + 44) == 9 )
  {
    v39 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v39 + 384) & 0x10) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v39 + 40) + 288LL) & 0xF) == 2 || *((_QWORD *)a1 + 27) == v52) )
    {
      v40 = &v53;
      if ( (*((_DWORD *)a1 + 50) & 0x80020) == 0x80000 )
        v40 = (struct tagRECT *)((char *)a1 + 40);
      v41 = v40->left - v51.x;
      v42 = v40->top - v51.y;
      LODWORD(v52) = v41 + *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v52;
      v50 = v42 + *((_DWORD *)a1 + 43);
      *((_DWORD *)a1 + 43) = v50;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v43 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v44 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v44 = 0;
      }
      if ( v43 || v44 )
      {
        top = v40->top;
        left = v40->left;
        v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
        LODWORD(v48) = v41;
        WPP_RECORDER_AND_TRACE_SF_dddddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v43,
          v44,
          *(_QWORD *)(v47 + 69152),
          5u,
          1u,
          0x37u,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
          v48,
          v42,
          v52,
          v50,
          left,
          top,
          v51.x,
          v51.y);
      }
    }
  }
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
    MoveSizeHaptic::CheckAndEmitRequiredHaptic((struct MOVESIZEDATA *)((char *)a1 + 288));
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)a1 + 400), a1);
}
