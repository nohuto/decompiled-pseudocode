/*
 * XREFs of ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8
 * Callers:
 *     NtUserShowWindow @ 0x140012470 (NtUserShowWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxShowScrollBar @ 0x1401DA46C (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x140206EE0 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     NtUserSetWindowPos @ 0x14025CDA0 (NtUserSetWindowPos.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxSetInternalWindowPos @ 0x1402C8BFC (xxxSetInternalWindowPos.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     ?IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z @ 0x140010A84 (-IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14001144C (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x140043168 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140164A04 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140164BB4 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxSendSizeMessage @ 0x1401D8A40 (xxxSendSizeMessage.c)
 *     _FChildVisible @ 0x1401DD560 (_FChildVisible.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1401F53DC (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z @ 0x1401FE864 (-xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z.c)
 *     ?IsForegroundWindowWithThreadCheck@@YA_NPEBUtagWND@@PEBUtagTHREADINFO@@@Z @ 0x140211BA0 (-IsForegroundWindowWithThreadCheck@@YA_NPEBUtagWND@@PEBUtagTHREADINFO@@@Z.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140229AA8 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxMinimizeHungWindow @ 0x140292240 (xxxMinimizeHungWindow.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z @ 0x1402DBA74 (-SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxShowWindowEx(const struct tagWND *a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // r12d
  int v6; // ebx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  char v9; // si
  int v10; // r10d
  unsigned int v11; // r15d
  int v12; // r11d
  int v13; // r13d
  __int64 v14; // r13
  __int64 ShellShowWindowCommand; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __m128i v18; // xmm2
  __int64 v19; // xmm1_8
  __int64 left; // rdx
  __int64 v21; // r9
  int v22; // r13d
  unsigned int v24; // ebx
  const struct tagTHREADINFO *v25; // r14
  struct tagWND *v26; // rcx
  int v27; // ecx
  const struct tagWND *v28; // rcx
  bool v29; // al
  __int64 v30; // r8
  char v31; // cl
  __int64 v32; // rdx
  __int64 v33; // r9
  bool v34; // r14
  __int64 v35; // rbx
  __int64 UserSessionState; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rdx
  bool v40; // bl
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  char v44; // al
  __int64 v45; // rdx
  bool v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  struct MOVESIZEDATA *v50; // rcx
  char v51; // al
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  bool v55; // al
  __int64 v56; // rdx
  char v57; // r13
  bool v58; // r12
  __int64 v59; // rbx
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  unsigned int v63; // r14d
  char v64; // [rsp+50h] [rbp-B0h]
  char v65; // [rsp+51h] [rbp-AFh]
  bool v66; // [rsp+52h] [rbp-AEh]
  __int64 v67; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h]
  _BYTE v70[24]; // [rsp+68h] [rbp-98h] BYREF
  struct tagTHREADINFO *v71[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+90h] [rbp-70h]
  struct tagRECT v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-50h]
  _DWORD v75[46]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v76[40]; // [rsp+178h] [rbp+78h] BYREF

  v3 = a2;
  v64 = a2;
  v6 = 3;
  v7 = PtiCurrent();
  v8 = *((_QWORD *)a1 + 5);
  v9 = 1;
  v71[0] = v7;
  v10 = 0;
  v67 = *((_QWORD *)v7 + 57);
  v11 = *(_BYTE *)(v8 + 25) & 8 | *(_BYTE *)(v8 + 31) & 0x10;
  v69 = v67 + 772;
  v12 = *(_DWORD *)(v67 + 792);
  v13 = v12 & 1;
  if ( (v12 & 1) != 0 && IsTopLevelUnownedWindowWithCaption(a1) )
  {
    v10 = 1;
    if ( v3 == 1 || v3 == 5 )
      goto LABEL_64;
  }
  if ( (_BYTE)v3 != 10 )
    goto LABEL_3;
  if ( v13 )
  {
LABEL_64:
    v10 = 1;
    LOBYTE(v3) = *(_BYTE *)(v67 + 796);
    v64 = v3;
    if ( (_BYTE)v3 != 10 )
      goto LABEL_66;
  }
  LOBYTE(v3) = 1;
  v64 = 1;
LABEL_3:
  if ( !v10 )
  {
    v14 = v67 + 772;
    goto LABEL_5;
  }
LABEL_66:
  v14 = v67 + 772;
  *(_DWORD *)(v67 + 792) = v12 & 0xFFFFFFF8;
  TraceLoggingShowWindowDPIAwarenessEvent(a1);
LABEL_5:
  ShellShowWindowCommand = xxxGetShellShowWindowCommand((__int64)v70, (__int64 *)a1, v3, v14);
  v18 = *(__m128i *)ShellShowWindowCommand;
  v73 = (struct tagRECT)v18;
  v19 = *(_QWORD *)(ShellShowWindowCommand + 16);
  v74 = v19;
  if ( v18.m128i_i8[4] == -1 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v9 = 0;
    }
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
      LOBYTE(v37) = v34;
      LOBYTE(v38) = v9;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v38,
        v37,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        12,
        32,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
        v35,
        v11);
    }
    return v11;
  }
  v68 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
  if ( v68 == 19 )
  {
    if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    {
      AdvancedWindowPos::CWindowAction::CWindowAction(v75, 0LL);
      v75[0] |= 0x30u;
      v75[10] = 3;
      AdvancedWindowPos::CWindowAction::SetFrameBounds(
        (AdvancedWindowPos::CWindowAction *)v75,
        (const struct tagRECT *)&v73.right);
      AdvancedWindowPos::xxxApplyWindowAction(a1, v75, 6LL);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v9 = 0;
      }
      v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
        LOBYTE(v42) = v40;
        LOBYTE(v43) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v43,
          v42,
          *(_QWORD *)(v41 + 69152),
          4,
          12,
          33,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
      }
      CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v76);
      return v11;
    }
    v44 = WindowArrangement::xxxSetSnapArrangementPos(a1, &v73.right, 0LL, 0LL);
    v21 = 0LL;
    if ( v44 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v9 = 0;
      }
      v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
        LOBYTE(v48) = v46;
        LOBYTE(v49) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v49,
          v48,
          *(_QWORD *)(v47 + 69152),
          4,
          12,
          34,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
      }
      return v11;
    }
    if ( v64 == LOBYTE(v73.top) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 803LL);
      v21 = 0LL;
    }
    v50 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
      || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v51 = 0;
    }
    v65 = v51;
    v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v51 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v50) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v52 = W32GetUserSessionState(v50, v45);
      LOBYTE(v53) = v66;
      LOBYTE(v54) = v65;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v54,
        v53,
        *(_QWORD *)(v52 + 69152),
        3,
        12,
        35,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
      v21 = 0LL;
    }
    left = 0LL;
    v19 = v74;
    LOBYTE(v73.top) = v64;
    v73.left = 0;
    v18 = (__m128i)v73;
    v68 = v64;
  }
  else
  {
    left = (unsigned int)_mm_cvtsi128_si32(v18);
    v21 = 0LL;
  }
  if ( (_DWORD)left )
  {
    v55 = ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x10);
    v21 = 0LL;
    if ( v55 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
        || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v57 = 0;
      }
      v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v57 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v59 = *(_QWORD *)a1;
        v60 = W32GetUserSessionState(WPP_GLOBAL_Control, v56);
        LOBYTE(v61) = v58;
        LOBYTE(v62) = v57;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v62,
          v61,
          *(_QWORD *)(v60 + 69152),
          4,
          12,
          36,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
          v59);
        v21 = 0LL;
      }
      a3 |= 0x20u;
      v6 = 1048579;
    }
    v18 = (__m128i)v73;
    left = (unsigned int)v73.left;
    v19 = v74;
  }
  v22 = v6;
  if ( v68 > 7u )
  {
    if ( v68 == 8 )
    {
      v24 = v6 | 0x50;
      goto LABEL_23;
    }
    if ( v68 == 9 )
      goto LABEL_39;
    if ( v68 == 11 )
    {
      xxxMinimizeHungWindow(a1);
      return v11;
    }
    if ( v68 == 15 )
    {
      LOBYTE(v73.top) = 3;
    }
    else
    {
      if ( v68 != 16 )
      {
        if ( v68 == 17 )
        {
          LOBYTE(v73.top) = 3;
        }
        else
        {
          if ( v68 != 18 )
            goto LABEL_121;
          LOBYTE(v73.top) = 9;
        }
        v63 = a3 | 0x70;
        goto LABEL_126;
      }
      LOBYTE(v73.top) = 9;
    }
    v63 = a3 | 0x30;
LABEL_126:
    v30 = v63;
LABEL_55:
    v28 = a1;
    v72 = v19;
    *(struct tagRECT *)v71 = v73;
LABEL_56:
    xxxShowWindowViaMinMax(v28, v71, v30, v21);
    return v11;
  }
  switch ( v68 )
  {
    case 7u:
      goto LABEL_112;
    case 0u:
      if ( !v11 )
        return 0LL;
      v25 = v71[0];
      v27 = 148;
      left = 128LL;
      if ( a1 == *(const struct tagWND **)(*((_QWORD *)v71[0] + 58) + 128LL) )
        v27 = 128;
      v24 = v27 | v6;
LABEL_24:
      if ( (v68 != 0) != v11 )
      {
        xxxSendMessage(a1, 24LL, v68 != 0, 0LL);
        v21 = 0LL;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 9LL) & 8) == 0 || ((v68 - 1) & 0xFB) != 0 )
        {
LABEL_28:
          if ( (unsigned int)FChildVisible(a1, left, v17, v21) )
            xxxShowWindowViaSetWindowPos(v26, v24);
          else
            SetVisible((__int64)v26, v68 != 0);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x10) != 0 )
          {
            SetOrClrWF(0LL, a1, 16LL, 1LL);
            v31 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v31 & 0x20) != 0 )
              v32 = 1LL;
            else
              v32 = 2 * (v31 & 1u);
            xxxSendSizeMessage(a1, v32);
            v33 = *((_QWORD *)a1 + 13);
            *(_OWORD *)v71 = *(_OWORD *)(*(_QWORD *)(v33 + 40) + 104LL);
            TransformRectBetweenCoordinateSpaces(v71, v71, a1, v33);
            xxxSendTransformableMessageTimeout(a1, 3u, 0, 0, 0LL, 1, 0);
          }
          if ( !v68 )
          {
            if ( IsForegroundWindowWithThreadCheck(a1, v25) )
              xxxActivateWindowWithOptions(a1, 2LL, 57LL, 1LL, 0);
            else
              xxxMoveFocusAway(a1);
          }
          return v11;
        }
        xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1LL, 0);
      }
      v24 |= 0x14u;
      goto LABEL_28;
    case 1u:
      goto LABEL_39;
    case 2u:
LABEL_112:
      *(__m128i *)v71 = v18;
      v72 = v19;
      xxxMinimizeWindowViaMinMax(a1, v71, a3, 0LL);
      return v11;
    case 3u:
      *(__m128i *)v71 = v18;
      v72 = v19;
      v28 = a1;
      if ( (_DWORD)left != 1 )
      {
        v30 = a3;
        goto LABEL_56;
      }
      goto LABEL_61;
    case 4u:
LABEL_39:
      v28 = a1;
      if ( (_DWORD)left != 1 )
      {
        v29 = IsArranged(a1);
        LOBYTE(left) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (left & 0x21) == 0 )
        {
          v21 = 0LL;
          if ( !v29 )
          {
            if ( v11 )
              return v11;
            v24 = v6 | 0x40;
            if ( v68 == 4 )
              v24 = v22 | 0x54;
LABEL_23:
            v25 = v71[0];
            goto LABEL_24;
          }
        }
        v19 = v74;
        v30 = a3 | (4 * v29);
        goto LABEL_55;
      }
      *(__m128i *)v71 = v18;
      v72 = v19;
LABEL_61:
      xxxShowWindowViaStartupInfo(v28, v71, v69, 0LL);
      return v11;
  }
  if ( v68 != 5 )
  {
    if ( v68 == 6 )
      goto LABEL_112;
LABEL_121:
    UserSetLastError(1449LL);
    return v11;
  }
  if ( !v11 )
  {
    v24 = v6 | 0x40;
    goto LABEL_23;
  }
  return v11;
}
