/*
 * XREFs of ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x14022B82C
 * Callers:
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140226940 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x140294F74 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x140295068 (-SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402E3844 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptApplyWindowPos(
        WindowActions *this,
        const struct tagRECT *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3)
{
  char v5; // di
  char v6; // r15
  char v7; // r14
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 right; // rcx
  __int64 v13; // rcx
  int v14; // r8d
  struct MOVESIZEDATA *v15; // rdx
  char v16; // r15
  char v17; // r14
  const wchar_t *v18; // rbx
  __int64 v19; // rax
  LONG bottom; // eax
  char v21; // r14
  char v22; // bl
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rax
  char v27; // r14
  char v28; // bl
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  int *v32; // rcx
  int v33; // ecx
  LONG top; // edx
  LONG v35; // eax
  int v36; // eax
  char v37; // r15
  char v38; // r14
  __int64 v39; // rax
  char v40; // r14
  char v41; // bl
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  LONG v45; // eax
  struct tagRECT v46; // xmm0
  char v47; // r15
  char v48; // r14
  __int64 v49; // rax
  const struct tagMONITOR *v50; // rax
  __int32 *p_left; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  char v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // [rsp+40h] [rbp-79h]
  int v59; // [rsp+70h] [rbp-49h] BYREF
  int v60; // [rsp+74h] [rbp-45h] BYREF
  int v61; // [rsp+7Ch] [rbp-3Dh]
  LONG v62; // [rsp+80h] [rbp-39h]
  int v63; // [rsp+84h] [rbp-35h]
  int v64; // [rsp+88h] [rbp-31h]
  __int64 v65; // [rsp+90h] [rbp-29h]
  int v66; // [rsp+98h] [rbp-21h]
  struct tagRECT v67; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v68; // [rsp+BCh] [rbp+3h]

  v5 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v6 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
  {
    v8 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      54,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v8);
  }
  memset_0(&v60, 0, 0x5CuLL);
  right = (unsigned int)a2->right;
  v59 = 32;
  v14 = MaxStateFromAwpState(right);
  v66 = v14;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (v13 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v13 & 8) == 0)
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
    if ( v14 == 1 )
    {
      v18 = L"WPS_MAXIMIZED";
    }
    else
    {
      v18 = L"WPS_MINIMIZED";
      if ( v14 != 2 )
        v18 = L"WPS_NORMAL";
    }
    v19 = W32GetUserSessionState(v13, WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v17,
      *(_QWORD *)(v19 + 69152),
      5u,
      4u,
      0x37u,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      (const char *)v18);
    v14 = v66;
  }
  bottom = a2->bottom;
  if ( (bottom & 1) != 0 )
  {
    if ( (bottom & 2) == 0 )
    {
      v26 = *(_QWORD *)&a2->left;
      v59 |= 8u;
      v65 = v26;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v27 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v28 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v28 = 0;
      }
      if ( v27 || v28 )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v30,
          *(_QWORD *)(v29 + 69152),
          5,
          4,
          57,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v65);
        goto LABEL_47;
      }
    }
  }
  else
  {
    v59 |= 0x10u;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v21 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v22 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v22 = 0;
    }
    if ( v21 || v22 )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69152),
        5,
        4,
        56,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
LABEL_47:
      v14 = v66;
    }
  }
  if ( v14 )
  {
    v45 = a2->bottom;
    if ( (v45 & 8) != 0 )
    {
      v46 = a2[1];
      v59 |= 0x40u;
      v67 = v46;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v47 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v48 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v48 = 0;
      }
      if ( v47 || v48 )
      {
        v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
        LODWORD(v58) = v67.left;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v47,
          v48,
          *(_QWORD *)(v49 + 69152),
          5u,
          4u,
          0x3Cu,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v58,
          v67.top,
          v67.right,
          v67.bottom,
          v67.right - v67.left,
          v67.bottom - v67.top);
      }
    }
    else if ( (v45 & 4) != 0 )
    {
      v50 = (const struct tagMONITOR *)MonitorFromRect(&a2[1].left, 2LL, 0x12u);
      SetMonitorMovePoint((struct _WINDOW_ACTION *)&v59, v50);
    }
  }
  else if ( !IsRectEmptyInl(a2 + 1) )
  {
    v33 = *v32;
    top = a2[1].top;
    v35 = a2[1].right;
    v59 |= 6u;
    v63 = v35 - v33;
    v36 = a2[1].bottom - top;
    v61 = v33;
    v64 = v36;
    v62 = top;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v37 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v38 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v38 = 0;
    }
    if ( v37 || v38 )
    {
      v39 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LODWORD(v58) = v61;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v38,
        *(_QWORD *)(v39 + 69152),
        5u,
        4u,
        0x3Au,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v58,
        v62,
        v63 + v61,
        v64 + v62,
        v63,
        v64);
    }
    if ( (a2->bottom & 0x100) == 0 )
    {
      v60 |= 1u;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v40 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v41 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v41 = 0;
      }
      if ( v40 || v41 )
      {
        v42 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v40;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(v42 + 69152),
          5,
          4,
          59,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
      }
    }
  }
  if ( (v59 & 2) != 0 )
  {
    p_left = &a2[1].left;
  }
  else
  {
    if ( (v59 & 0x40) == 0 )
      goto LABEL_99;
    p_left = (__int32 *)&v67;
  }
  v52 = MonitorFromRect(p_left, 0LL, 0x12u);
  if ( v52 )
  {
    v60 |= 0x200u;
    v68 = *(unsigned __int16 *)(*(_QWORD *)(v52 + 40) + 60LL);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v54 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v5 = 0;
    }
    if ( v54 || v5 )
    {
      v55 = W32GetUserSessionState(WPP_GLOBAL_Control, v53);
      LOBYTE(v56) = v5;
      LOBYTE(v57) = v54;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 69152),
        5,
        4,
        61,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v68);
    }
  }
LABEL_99:
  if ( (a2->bottom & 0x10) != 0 )
  {
    if ( !(unsigned __int8)SaveShellRequestedOperationData(
                             this,
                             &a2[1],
                             (unsigned int)a2->right,
                             (unsigned int)a2[2].left) )
      return;
    v59 |= 0x400u;
  }
  xxxSendMessage(this, 0x346u);
}
