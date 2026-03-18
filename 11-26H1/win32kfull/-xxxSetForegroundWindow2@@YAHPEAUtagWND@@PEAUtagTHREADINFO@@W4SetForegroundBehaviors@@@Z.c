/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80
 * Callers:
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     xxxSetModernAppWindow @ 0x1401C9464 (xxxSetModernAppWindow.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x14029D8E8 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     xxxCancelTracking @ 0x14005359C (xxxCancelTracking.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     IsWindowUnderActiveLockScreen @ 0x14008D414 (IsWindowUnderActiveLockScreen.c)
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x140099110 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140099480 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x140153364 (zzzInputFocusReceivedWindowEvent.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140154578 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x140154C5C (zzzInputFocusLostWindowEvent.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140154D14 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14016327C (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x140178FF8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1401D6C2C (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1401FD9F8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x140203E2C (_anonymous_namespace_--RemoveEventMessage.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1402060B0 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14020A194 (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1402422E4 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x140271878 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x14029D3F8 (-SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1402A0BB8 (zzzActiveCursorTracking.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, PETHREAD *a2, unsigned int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // bl
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // bl
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  char v20; // al
  __int64 v21; // rdx
  PETHREAD *v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  struct MOVESIZEDATA *v26; // rcx
  char v27; // al
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  struct MOVESIZEDATA *v32; // rcx
  char v33; // bl
  bool v34; // r14
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  ULONG_PTR v41; // r14
  struct tagTHREADINFO *v42; // rcx
  struct tagWND *v43; // rdx
  _QWORD **v44; // rdx
  _QWORD *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  const struct tagUIPI_INFO *v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __m128i si128; // xmm0
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  PETHREAD *v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rbx
  PETHREAD v80; // rax
  _BOOL8 v81; // r13
  const struct tagWND *TopLevelWindow; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  HANDLE ThreadId; // rax
  struct tagQMSG *v90; // r13
  const struct tagTHREADINFO **v91; // rcx
  __int64 v92; // rbx
  PETHREAD v93; // r13
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // r12
  unsigned int v97; // r13d
  unsigned __int8 v98; // dl
  unsigned __int8 v99; // r8
  LARGE_INTEGER v100; // r9
  unsigned int v101; // eax
  const struct tagTHREADINFO **v102; // rcx
  char v103; // bl
  struct _KTHREAD *v104; // rcx
  PETHREAD v105; // rax
  const struct tagWND *v106; // rax
  __int64 v107; // rdx
  const struct tagWND *v108; // rbx
  int v109; // eax
  __int16 v110; // dx
  __int16 v111; // bx
  __int64 v112; // rdx
  __int64 v113; // rcx
  unsigned __int64 v114; // [rsp+40h] [rbp-C0h]
  char v115; // [rsp+70h] [rbp-90h]
  char v116; // [rsp+70h] [rbp-90h]
  bool v117; // [rsp+71h] [rbp-8Fh]
  bool v118; // [rsp+71h] [rbp-8Fh]
  struct tagWND *v121; // [rsp+88h] [rbp-78h]
  struct tagWND *v122; // [rsp+88h] [rbp-78h]
  unsigned int v123; // [rsp+88h] [rbp-78h]
  ULONG_PTR v124; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER *v125; // [rsp+98h] [rbp-68h]
  __int64 v126; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR v127[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v128; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v129[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v130; // [rsp+D0h] [rbp-30h]
  struct tagQMSG *v131; // [rsp+D8h] [rbp-28h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v133; // [rsp+F0h] [rbp-10h]
  __int64 v134; // [rsp+F8h] [rbp-8h] BYREF
  int v135; // [rsp+100h] [rbp+0h]
  __int64 v136; // [rsp+108h] [rbp+8h] BYREF
  int v137; // [rsp+110h] [rbp+10h]
  __int64 v138; // [rsp+118h] [rbp+18h]

  *(_OWORD *)BugCheckParameter2 = 0LL;
  v138 = 0LL;
  *(_OWORD *)v129 = 0LL;
  v133 = -1LL;
  v130 = -1LL;
  *(_OWORD *)v127 = 0LL;
  v128 = -1LL;
  v121 = PtiCurrent(-1LL);
  v5 = 0;
  v136 = 0LL;
  v137 = 0;
  v134 = 0LL;
  v135 = 0;
  v126 = 0LL;
  SetSystemInputSource(&v126);
  if ( !a1 )
    goto LABEL_20;
  if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19176)
    && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) >= 0 )
  {
    if ( (unsigned int)IsWindowUnderActiveLockScreen(a1, v8) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v9 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69152),
          4,
          2,
          88,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
      }
      goto LABEL_155;
    }
LABEL_20:
    if ( a2 )
      Win32RawLockedW32Thread::ManualLock(BugCheckParameter2, (ULONG_PTR)a2);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v20 = 0;
    }
    v115 = v20;
    v117 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v121);
      v22 = a2;
      if ( a2 )
        PsGetThreadId(*a2);
      v23 = W32GetUserSessionState(v22, v21);
      LOBYTE(v24) = v117;
      LOBYTE(v25) = v115;
      WPP_RECORDER_AND_TRACE_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v25, v24, *(_QWORD *)(v23 + 69152));
    }
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v27 = 0;
    }
    v116 = v27;
    LOBYTE(v26) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v118 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v28 = W32GetUserSessionState(v26, v6);
      LOBYTE(v29) = v118;
      LOBYTE(v30) = v116;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(v28 + 69152),
        4,
        2,
        90,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
        a3);
    }
    *(_QWORD *)(W32GetUserSessionState(v26, v6) + 18888) = 0LL;
    v32 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v33 = 0;
    }
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 69152),
        4,
        2,
        91,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    if ( !*(_QWORD *)(W32GetUserSessionState(v32, v31) + 18944)
      || (v40 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 18944),
          (_InterlockedCompareExchange((volatile signed __int32 *)(v40 + 520), 0, 0) & 1) != 0) )
    {
      v41 = 0LL;
    }
    else
    {
      v41 = *(_QWORD *)(W32GetUserSessionState(v40, v38) + 18944);
      Win32RawLockedW32Thread::ManualLock(v129, v41);
    }
    if ( a1 )
    {
      v124 = *(_QWORD *)(a1 + 16);
      SetNewForegroundQueue(*(_QWORD *)(v124 + 464), (a3 & 0x200 | 0x100) >> 8);
      Win32RawLockedW32Thread::ManualLock(v127, v124);
      v42 = *(struct tagTHREADINFO **)(a1 + 16);
      v43 = (struct tagWND *)a1;
    }
    else
    {
      v124 = 0LL;
      ResetForegroundQueue(1LL, v38);
      v42 = 0LL;
      v43 = 0LL;
    }
    xxxSetForegroundThreadWithWindowHint(v42, v43);
    if ( (a3 & 0x20) == 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v45, v44) + 18928) )
      {
        v48 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 18928);
        LODWORD(v136) = *(_DWORD *)(v48 + 472);
        v47 = *(_QWORD *)(W32GetUserSessionState(v48, v49) + 18928);
        HIDWORD(v136) = *(_DWORD *)(v47 + 476);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v47, v46) + 18936) )
      {
        v53 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 18936);
        LODWORD(v134) = *(_DWORD *)(v53 + 472);
        HIDWORD(v134) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v53, v54) + 18936) + 476LL);
      }
      if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)&v136, (const struct tagUIPI_INFO *)&v134, v52) )
      {
        ClearKeyboardToggleStates();
        v45 = *(_QWORD **)(W32GetUserSessionState(v56, v55) + 19176);
        if ( *((_QWORD **)v121 + 61) == v45 )
        {
          v44 = (_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v45, v44) + 19176) + 176LL);
          v45 = *v44;
          if ( *v44 != v44 )
          {
            si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
            do
            {
              v58 = *(v45 - 38);
              *(__m128i *)(v58 + 248) = si128;
              *(__m128i *)(v58 + 264) = si128;
              *(_DWORD *)(v58 + 436) |= 1u;
              v45 = (_QWORD *)*v45;
            }
            while ( v45 != v44 );
          }
        }
      }
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v45, v44) + 18928) )
    {
      v61 = *(_QWORD *)(W32GetUserSessionState(v60, v59) + 18928);
      if ( v61 != *(_QWORD *)(W32GetUserSessionState(v63, v62) + 18936) )
      {
        v60 = *(_QWORD *)(W32GetUserSessionState(v60, v59) + 18928);
        if ( *(_QWORD *)(v60 + 120) )
        {
          v60 = *(unsigned int *)(W32GetUserSessionState(v60, v59) + 66800);
          if ( (v60 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
      }
    }
    v64 = *(_QWORD *)(W32GetUserSessionState(v60, v59) + 18928);
    if ( v64 != *(_QWORD *)(W32GetUserSessionState(v66, v65) + 18936) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v68, v67) + 18936) )
      {
        v70 = *(_QWORD *)(W32GetUserSessionState(v70, v69) + 18936);
        if ( *(_QWORD *)(v70 + 120) )
        {
          v71 = W32GetUserSessionState(v70, v69);
          zzzInputFocusLostWindowEvent(*(_QWORD *)(*(_QWORD *)(v71 + 18936) + 120LL), 1LL);
        }
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v70, v69) + 18928)
        && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v73, v72) + 18928) + 120LL) )
      {
        zzzInputFocusReceivedWindowEvent(1LL, v74);
      }
      v75 = a2;
      if ( a2 )
      {
        xxxCancelTracking();
        v78 = W32GetUserSessionState(v77, v76);
        CCursorClip::ClearClip(*(CCursorClip **)(v78 + 36272));
        v75 = a2;
      }
      v79 = 0LL;
      if ( v41 && (_InterlockedCompareExchange((volatile signed __int32 *)(v41 + 520), 0, 0) & 1) == 0 )
        v79 = *(_QWORD *)(v41 + 464);
      v80 = 0LL;
      if ( v75 )
        v80 = v75[58];
      v125 = 0LL;
      if ( v79 && (PETHREAD)v79 != v80 )
      {
        v131 = (struct tagQMSG *)AllocQEntryEx(v79 + 24, 0LL, 1);
        if ( !v131 )
        {
LABEL_155:
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v127, 1);
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v129, 1);
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, 1);
          return v5;
        }
        v81 = 0LL;
        if ( a1 )
        {
          TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
          v122 = TopLevelWindow;
          if ( TopLevelWindow )
          {
            if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow, v83) )
              v81 = (unsigned int)CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v41, v122) != 0;
          }
        }
        v84 = *(_QWORD *)(PtiKbdFromQ(v79) + 456);
        v123 = *(_DWORD *)(v84 + 268);
        if ( *(_QWORD *)(W32GetUserSessionState(v84, v85) + 18944) )
        {
          v88 = W32GetUserSessionState(v87, v86);
          ThreadId = PsGetThreadId(**(PETHREAD **)(v88 + 18944));
        }
        else
        {
          ThreadId = 0LL;
        }
        v114 = v81;
        v90 = v131;
        StoreQMessage(
          (LARGE_INTEGER *)v131,
          0LL,
          0,
          (LARGE_INTEGER)ThreadId,
          0LL,
          0,
          0LL,
          5u,
          v114,
          0,
          (struct tagINPUT_MESSAGE_SOURCE *)&v126,
          v123,
          0LL,
          0LL);
        if ( v41 )
        {
          *((_QWORD *)v90 + 13) = v41;
          SetWakeBit(v41, 8256LL);
        }
        v91 = *(const struct tagTHREADINFO ***)(v79 + 128);
        if ( v91 && IsHungWindow(v91) )
          ProcessHungWindow(*(struct tagWND **)(v79 + 128));
        v75 = a2;
      }
      v92 = 0LL;
      if ( v124 && (_InterlockedCompareExchange((volatile signed __int32 *)(v124 + 520), 0, 0) & 1) == 0 )
        v92 = *(_QWORD *)(v124 + 464);
      v93 = 0LL;
      if ( v75 )
        v93 = v75[58];
      if ( v92 )
      {
        if ( (PETHREAD)v92 != v93 )
        {
          v125 = (LARGE_INTEGER *)AllocQEntryEx(v92 + 24, 0LL, 1);
          if ( !v125 )
            goto LABEL_155;
        }
        v94 = anonymous_namespace_::RemoveEventMessage(v92, 5, -1);
        if ( (PETHREAD)v92 == v93 )
        {
          if ( a1 == *((_QWORD *)v93 + 16) )
          {
            anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1uLL);
            anonymous_namespace_::xxxUpdateTray((struct tagWND *)a1);
            v103 = a3;
            if ( (a3 & 4) == 0 )
              xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
          }
          else
          {
            v103 = a3;
            if ( (a3 & 1) == 0 )
            {
              v110 = ~(16 * (_BYTE)a3) & 0x80 | 0x100;
              if ( (a3 & 0x100) == 0 )
                v110 = ~(16 * (_BYTE)a3) & 0x80;
              v111 = v110 | 2;
              if ( (a3 & 4) == 0 )
                v111 = v110;
              if ( v41 )
                v5 = (unsigned int)PsGetThreadId(*(PETHREAD *)v41);
              anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, v5, v111);
              if ( (*(_DWORD *)(W32GetUserSessionState(v113, v112) + 66796) & 1) != 0 )
                zzzActiveCursorTracking(a1);
              v5 = 1;
              goto LABEL_155;
            }
          }
        }
        else
        {
          if ( v93 || (a3 & 2) != 0 )
          {
            v96 = 0LL;
            if ( a1 )
              v96 = *(_QWORD *)a1;
          }
          else
          {
            v96 = 0LL;
          }
          if ( v94 )
            *(_DWORD *)(v92 + 436) |= 0x8000u;
          v97 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v92) + 456) + 268LL);
          if ( (v98 & v99) != 0 )
          {
            v100.QuadPart = 0LL;
          }
          else
          {
            if ( v41 )
              v101 = (unsigned int)PsGetThreadId(*(PETHREAD *)v41);
            else
              v101 = 0;
            v100.QuadPart = v101;
          }
          StoreQMessage(
            v125,
            0LL,
            (a3 >> 2) & 1,
            v100,
            v96,
            0,
            0LL,
            6u,
            0LL,
            0,
            (struct tagINPUT_MESSAGE_SOURCE *)&v126,
            v97,
            0LL,
            0LL);
          v125[13].QuadPart = v124;
          SetWakeBit(v124, 8256LL);
          v102 = *(const struct tagTHREADINFO ***)(v92 + 128);
          if ( v102 && IsHungWindow(v102) )
            ProcessHungWindow(*(struct tagWND **)(v92 + 128));
          v103 = a3;
        }
        if ( (v103 & 0x40) == 0 )
          xxxDeliverRestoreFocusMessage((struct tagWND *)a1, v95);
        v75 = a2;
      }
      v104 = 0LL;
      if ( v41 && (_InterlockedCompareExchange((volatile signed __int32 *)(v41 + 520), 0, 0) & 1) == 0 )
        v104 = *(struct _KTHREAD **)(v41 + 464);
      v105 = 0LL;
      if ( v75 )
        v105 = v75[58];
      if ( v104 && v104 == v105 )
      {
        if ( a1 )
        {
          v106 = (const struct tagWND *)GetTopLevelWindow(a1);
          v108 = v106;
          if ( v106
            && (unsigned int)CoreWindowProp::IsComponent(v106, v107)
            && (unsigned int)CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v41, v108) )
          {
            LOBYTE(v5) = 1;
          }
          v109 = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          v109 = 0;
        }
        xxxDeactivate((__int64)a2, v109, v5);
      }
    }
    v5 = 1;
    goto LABEL_155;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 69152),
      4,
      2,
      87,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
  }
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v127, 1);
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v129, 1);
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, 1);
  return 0LL;
}
