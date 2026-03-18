/*
 * XREFs of ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402638F4
 * Callers:
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x1400110B0 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x140264104 (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402C47F0 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402E26CC (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402E3844 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptCommitMoveSize(WindowActions *this, struct MOVESIZEDATA *a2)
{
  _QWORD *v2; // r12
  __int64 v4; // rdx
  char v5; // di
  char v6; // r15
  char v7; // r14
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  const struct tagWND *v13; // rcx
  __int64 v14; // rdx
  BOOL v15; // ebx
  int v16; // r14d
  char v17; // r12
  char v18; // r15
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // r9
  const char *v23; // rax
  struct tagWND *v24; // rcx
  int v25; // eax
  bool v26; // zf
  unsigned int v27; // ebx
  char v28; // r15
  unsigned int *v29; // rdx
  char v30; // r14
  __int64 WindowActionStateString; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  int v37; // eax
  int v38; // r13d
  int v39; // r12d
  int v40; // r13d
  char v41; // r15
  char v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdx
  struct tagWND *v45; // r15
  __int128 v46; // xmm0
  char v47; // r15
  char v48; // r14
  __int64 v49; // rax
  __int64 v50; // rdx
  char v51; // bl
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  __int64 v55; // r14
  int v56; // r8d
  char v57; // si
  char v58; // bl
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  char v62; // si
  __int64 v63; // rax
  __int64 v64; // [rsp+48h] [rbp-C0h]
  __int64 v65; // [rsp+50h] [rbp-B8h]
  __int64 v66; // [rsp+58h] [rbp-B0h]
  __int64 v67; // [rsp+60h] [rbp-A8h]
  int v68; // [rsp+60h] [rbp-A8h]
  __int64 v69; // [rsp+68h] [rbp-A0h]
  __int64 v70; // [rsp+70h] [rbp-98h]
  int v71; // [rsp+78h] [rbp-90h]
  int v72; // [rsp+7Ch] [rbp-8Ch]
  _QWORD *v73; // [rsp+80h] [rbp-88h]
  __int64 v74; // [rsp+88h] [rbp-80h] BYREF
  __int128 v75; // [rsp+90h] [rbp-78h]
  int v76; // [rsp+A0h] [rbp-68h]
  BOOL v77; // [rsp+A4h] [rbp-64h]
  int v78; // [rsp+A8h] [rbp-60h]
  __int128 v79; // [rsp+B0h] [rbp-58h]
  int v80; // [rsp+C8h] [rbp-40h] BYREF
  int v81; // [rsp+CCh] [rbp-3Ch]
  int v82; // [rsp+D4h] [rbp-34h]
  int v83; // [rsp+D8h] [rbp-30h]
  int v84; // [rsp+DCh] [rbp-2Ch]
  int v85; // [rsp+E0h] [rbp-28h]
  unsigned int v86; // [rsp+F0h] [rbp-18h]
  __int128 v87; // [rsp+F4h] [rbp-14h] BYREF
  __int128 v88; // [rsp+104h] [rbp-4h]
  int v89; // [rsp+114h] [rbp+Ch]
  int v90; // [rsp+118h] [rbp+10h]
  int v91; // [rsp+11Ch] [rbp+14h]

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v73 = v2;
  memset_0(&v80, 0, 0x60uLL);
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
    v8 = *v2;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      89,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v8);
  }
  v12 = *((_DWORD *)this + 94);
  v13 = (const struct tagWND *)*((_QWORD *)this + 2);
  v80 |= 0x400u;
  v75 = 0LL;
  v74 = 0LL;
  v77 = 0;
  v76 = v12;
  if ( IsShellParticipatesInSizing(v13, v4) && (*((_DWORD *)this + 95) & 2) != 0 )
  {
    v15 = ((*((_DWORD *)this + 50) >> 15) & 1) == 0;
    v77 = v15;
    v16 = 8;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v17 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v18 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v18 = 0;
    }
    if ( v17 || v18 )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      v22 = *(_QWORD *)(v19 + 69152);
      v23 = "AWSR_CANCELED";
      if ( !v15 )
        v23 = "AWSR_SIZED";
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        v22,
        5,
        4,
        90,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        (__int64)v23);
    }
    v2 = v73;
  }
  else
  {
    v16 = v74;
  }
  v24 = (struct tagWND *)*((_QWORD *)this + 2);
  v25 = 1;
  v26 = *((_DWORD *)this + 44) == 9;
  v27 = 3;
  LODWORD(v74) = v16 | 4;
  if ( v26 )
    v25 = 3;
  v78 = v25;
  if ( SaveSystemOperationData(v24, (const struct AdvancedWindowPos::SystemOperationData *)&v74) )
  {
    v80 |= 0x30u;
    if ( (*((_DWORD *)this + 50) & 0x10000000) == 0 )
      v27 = !*((_DWORD *)this + 62) && (*(_BYTE *)(v2[5] + 30LL) & 1) != 0;
    v86 = v27;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v28 = 0;
    }
    v29 = &WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v30 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v30 = 0;
    }
    if ( v28 || v30 )
    {
      WindowActionStateString = GetWindowActionStateString(v27);
      v34 = W32GetUserSessionState(v33, v32);
      LOBYTE(v35) = v30;
      LOBYTE(v36) = v28;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69152),
        5,
        4,
        91,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        WindowActionStateString);
      v27 = v86;
      v29 = &WPP_RECORDER_INITIALIZED;
    }
    v37 = *((_DWORD *)this + 8);
    v72 = v37;
    v38 = _mm_cvtsi128_si32(*(__m128i *)((char *)this + 24));
    v79 = *(_OWORD *)((char *)this + 24);
    v71 = v38;
    if ( v27 )
    {
      if ( v27 == 1 )
      {
        SetMonitorMovePoint((struct _WINDOW_ACTION *)&v80, *((const struct tagMONITOR **)this + 30));
        v27 = v86;
        goto LABEL_61;
      }
      if ( v27 != 3 )
        goto LABEL_61;
    }
    v39 = DWORD1(v79);
    v80 |= 6u;
    v84 = v37 - v38;
    v82 = v38;
    v40 = HIDWORD(v79);
    v83 = DWORD1(v79);
    v85 = HIDWORD(v79) - DWORD1(v79);
    v41 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v42 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v42 = 0;
    }
    if ( v41 || v42 )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v68 = v40;
      v38 = v71;
      LODWORD(v64) = v71;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v42,
        *(_QWORD *)(v43 + 69152),
        5u,
        4u,
        0x5Cu,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v64,
        v39,
        v72,
        v68,
        v84,
        v85);
      v27 = v86;
    }
    else
    {
      v38 = v71;
    }
LABEL_61:
    if ( v27 )
    {
      v46 = *(_OWORD *)((char *)this + 152);
      v80 |= 0x40u;
      v87 = v46;
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
        v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
        LODWORD(v70) = HIDWORD(v87) - DWORD1(v87);
        LODWORD(v69) = DWORD2(v87) - v87;
        LODWORD(v67) = HIDWORD(v87);
        LODWORD(v66) = DWORD2(v87);
        LODWORD(v65) = DWORD1(v87);
        LODWORD(v64) = v87;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v47,
          v48,
          *(_QWORD *)(v49 + 69152),
          5u,
          4u,
          0x5Du,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v64,
          v65,
          v66,
          v67,
          v69,
          v70);
      }
      if ( !KeepCheckpointLeftRightAligned(this) )
      {
        v45 = (struct tagWND *)v73;
        v80 |= 0x100u;
        v55 = MonitorFromRect((__int32 *)&v87, 2LL, *(_DWORD *)(v73[5] + 288LL));
        v56 = v81 | 0x200;
        v81 |= 0x200u;
        v89 = *(unsigned __int16 *)(*(_QWORD *)(v55 + 40) + 60LL);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v57 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v58 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v58 = 0;
        }
        if ( v57 || v58 )
        {
          v59 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v60) = v58;
          LOBYTE(v61) = v57;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v61,
            v60,
            *(_QWORD *)(v59 + 69152),
            5,
            4,
            95,
            (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
            v89);
          v56 = v81;
        }
        v81 = v56 | 0x100;
        v88 = *(_OWORD *)(*(_QWORD *)(v55 + 40) + 44LL);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v62 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v5 = 0;
        }
        if ( v62 || v5 )
        {
          v63 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LODWORD(v70) = HIDWORD(v88) - DWORD1(v88);
          LODWORD(v69) = DWORD2(v88) - v88;
          LODWORD(v67) = HIDWORD(v88);
          LODWORD(v66) = DWORD2(v88);
          LODWORD(v65) = DWORD1(v88);
          LODWORD(v64) = v88;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v62,
            v5,
            *(_QWORD *)(v63 + 69152),
            5u,
            4u,
            0x60u,
            (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
            v64,
            v65,
            v66,
            v67,
            v69,
            v70);
        }
        goto LABEL_64;
      }
      DWORD2(v87) = v72;
      LODWORD(v87) = v38;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v51 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v5 = 0;
      }
      if ( v51 || v5 )
      {
        v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v50);
        LOBYTE(v53) = v5;
        LOBYTE(v54) = v51;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v54,
          v53,
          *(_QWORD *)(v52 + 69152),
          5,
          4,
          94,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
      }
    }
    else
    {
      v81 |= 0x400u;
      v44 = *((_QWORD *)this + 27);
      v90 = *(_DWORD *)(*(_QWORD *)(v44 + 40) + 44LL);
      v91 = *(_DWORD *)(*(_QWORD *)(v44 + 40) + 48LL);
    }
    v45 = (struct tagWND *)v73;
LABEL_64:
    xxxSendMessage(v45, 0x346u);
  }
}
