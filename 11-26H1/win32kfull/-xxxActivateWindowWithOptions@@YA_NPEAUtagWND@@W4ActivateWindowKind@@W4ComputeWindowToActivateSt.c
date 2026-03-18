/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140042B60 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14008D494 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x1401F8550 (-xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140219A88 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxHandleNCMouseGuys @ 0x140220C94 (xxxHandleNCMouseGuys.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     xxxMNEndMenuStateInternal @ 0x14026C3B0 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x140192A44 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDdD @ 0x140192B38 (WPP_RECORDER_AND_TRACE_SF_DDdD.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x140192C70 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x14019328C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall xxxActivateWindowWithOptions(__int64 a1, unsigned int a2, unsigned int a3, int a4, __int16 a5)
{
  struct tagTHREADINFO *v7; // rdx
  char v8; // si
  char v9; // r14
  bool v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  char v16; // bl
  bool v17; // di
  int v18; // r15d
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rdi
  bool v23; // bl
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  bool v27; // bl
  int v28; // r14d
  __int16 v29; // r12
  struct tagTHREADINFO *v30; // rcx
  bool v31; // r14
  bool v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // r15
  char v41; // bl
  bool v42; // di
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  char v46; // di
  int v47; // r14d
  bool v49; // r15
  unsigned int *v50; // rdx
  bool v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rcx
  char v59; // bl
  bool v60; // di
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  __int64 v64; // rdx
  char v65; // di
  bool v66; // r15
  char ThreadId; // bl
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  int v73; // r14d
  struct tagWND *v74; // rax
  bool v75; // zf
  struct MOVESIZEDATA *v76; // rcx
  char v77; // bl
  bool v78; // di
  unsigned int v79; // r14d
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rdx
  bool v84; // bl
  __int64 v85; // rax
  int v86; // r8d
  int v87; // edx
  __int64 v88; // r9
  const char *v89; // rax
  __int64 v90; // rax
  int v91; // r8d
  int v92; // edx
  char v93; // bl
  bool v94; // di
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  char v98; // bl
  bool v99; // di
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  char v103; // di
  bool v104; // r14
  char v105; // bl
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  int v109; // r8d
  int v110; // edx
  char v111; // bl
  bool v112; // di
  __int64 v113; // rax
  int v114; // edx
  int v115; // r8d
  __int16 v116; // [rsp+38h] [rbp-51h]
  __int16 v117; // [rsp+38h] [rbp-51h]
  bool v118; // [rsp+69h] [rbp-20h]
  unsigned int ForegroundActivate; // [rsp+74h] [rbp-15h]
  struct tagTHREADINFO *v120; // [rsp+80h] [rbp-9h]
  __int128 v121; // [rsp+88h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter3[8]; // [rsp+98h] [rbp+Fh] BYREF
  struct tagWND *v123; // [rsp+E8h] [rbp+5Fh]

  v123 = (struct tagWND *)a1;
  v120 = PtiCurrent(a1);
  v7 = v120;
  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  v118 = 0;
  ForegroundActivate = 0;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(*(PETHREAD *)v120);
    UserSessionState = W32GetUserSessionState(v12, v11);
    LOBYTE(v14) = v10;
    LOBYTE(v15) = v9;
    WPP_RECORDER_AND_TRACE_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 3), v15, v14, *(_QWORD *)(UserSessionState + 69152));
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v16 = 0;
  }
  v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v20) = v17;
    v18 = a4;
    LOBYTE(v21) = v16;
    WPP_RECORDER_AND_TRACE_SF_DDdD(*((_QWORD *)WPP_GLOBAL_Control + 3), v21, v20, *(_QWORD *)(v19 + 69152));
  }
  else
  {
    v18 = a4;
  }
  v22 = (__int64)v123;
  if ( (*(_BYTE *)(*((_QWORD *)v123 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v8 = 0;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    v116 = 97;
    goto LABEL_22;
  }
  if ( a2 )
  {
    v121 = 0LL;
    if ( !(unsigned __int8)anonymous_namespace_::ComputeWindowToActivate(v123, a2, a3, &v121) )
      goto LABEL_17;
    v74 = (struct tagWND *)v121;
    if ( !(_QWORD)v121 || (v28 = DWORD2(v121)) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3836LL);
      v74 = (struct tagWND *)v121;
      v28 = DWORD2(v121);
    }
    v75 = v123 == v74;
    v123 = v74;
    v22 = (__int64)v74;
    v27 = !v75;
  }
  else
  {
    if ( a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3824LL);
    v27 = 0;
    v28 = 1;
    v118 = v18 == 1;
  }
  if ( !v22 )
  {
LABEL_17:
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v8 = 0;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    v116 = 98;
LABEL_22:
    LOBYTE(v26) = v23;
    LOBYTE(v25) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v26,
      *(_QWORD *)(v24 + 69152),
      4,
      2,
      v116,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
LABEL_85:
    v46 = 0;
    goto LABEL_50;
  }
  if ( !v28 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3855LL);
  if ( v27 )
    Win32HM_LockIntoThread<0>((__int64)v120, v22, BugCheckParameter3);
  v29 = a5;
  if ( (a5 & 0x100) != 0 && *(struct tagTHREADINFO **)(v22 + 16) != v120 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3864LL);
  v30 = *(struct tagTHREADINFO **)(v22 + 16);
  if ( *((_QWORD *)v30 + 58) != *((_QWORD *)v120 + 58) )
  {
    if ( v30 == v120 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3918LL);
    v49 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v50 = &WPP_RECORDER_INITIALIZED;
    v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v49 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v120);
      v54 = W32GetUserSessionState(v53, v52);
      LOBYTE(v55) = v51;
      LOBYTE(v56) = v49;
      WPP_RECORDER_AND_TRACE_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 3), v56, v55, *(_QWORD *)(v54 + 69152));
      v50 = &WPP_RECORDER_INITIALIZED;
    }
    if ( v28 == 5 )
    {
      v47 = 31;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v111 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v111 = 0;
      }
      v112 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v111 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v113 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        v117 = 104;
        goto LABEL_178;
      }
    }
    else
    {
      if ( v28 != 6 )
      {
        v58 = *(_QWORD *)(W32GetUserSessionState((unsigned int)(v28 - 5), &WPP_RECORDER_INITIALIZED) + 18928);
        if ( v58 != *((_QWORD *)v120 + 58) && *(_QWORD *)(W32GetUserSessionState(v58, v57) + 18928) )
        {
          v46 = 0;
          goto LABEL_50;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v59 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v59 = 0;
        }
        v60 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v59 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v61 = W32GetUserSessionState(WPP_GLOBAL_Control, v57);
          LOBYTE(v62) = v60;
          LOBYTE(v63) = v59;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v63,
            v62,
            *(_QWORD *)(v61 + 69152),
            4,
            2,
            106,
            (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
        }
        if ( tagTHREADINFO::ComputeAndTestForegroundActivate(v120) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || (v93 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v93 = 0;
          }
          v94 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v93 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v95 = W32GetUserSessionState(WPP_GLOBAL_Control, v64);
            LOBYTE(v96) = v94;
            LOBYTE(v97) = v93;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v97,
              v96,
              *(_QWORD *)(v95 + 69152),
              4,
              2,
              107,
              (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
          }
          ForegroundActivate = tagTHREADINFO::GetForegroundActivate(v120);
        }
        else if ( *((_DWORD *)v120 + 234) || v118 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || (v65 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v65 = 0;
          }
          v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v65 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v120);
            v70 = W32GetUserSessionState(v69, v68);
            LOBYTE(v71) = v66;
            LOBYTE(v72) = v65;
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v72,
              v71,
              *(_QWORD *)(v70 + 69152),
              4,
              2,
              108,
              (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
              ThreadId);
          }
          ForegroundActivate = 64;
        }
        v50 = &WPP_RECORDER_INITIALIZED;
        v73 = v28 - 3;
        if ( v73 )
        {
          v29 = a5;
          if ( v73 == 1 )
            v47 = 3;
          else
            v47 = 2;
          goto LABEL_90;
        }
        v47 = 3;
        goto LABEL_119;
      }
      v47 = 31;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v111 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v111 = 0;
      }
      v112 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v111 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v113 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        v117 = 105;
LABEL_178:
        LOBYTE(v115) = v112;
        LOBYTE(v114) = v111;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v114,
          v115,
          *(_QWORD *)(v113 + 69152),
          4,
          2,
          v117,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
        v29 = a5;
LABEL_89:
        v50 = &WPP_RECORDER_INITIALIZED;
        goto LABEL_90;
      }
    }
LABEL_119:
    v29 = a5;
LABEL_90:
    v76 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v77 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v77 = 0;
    }
    v78 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v77 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v90 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v91) = v78;
      LOBYTE(v92) = v77;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v92,
        v91,
        *(_QWORD *)(v90 + 69152),
        4,
        2,
        109,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    v79 = v47 | 4;
    v81 = *(_QWORD *)(W32GetUserSessionState(v76, v50) + 18928);
    if ( *(_QWORD *)(*((_QWORD *)v123 + 2) + 464LL) == v81
      && *(_QWORD *)(W32GetUserSessionState(v81, v80) + 18928) == *((_QWORD *)v120 + 58) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4046LL);
    }
    v82 = v29 & 0x100 | 4u;
    if ( (v29 & 2) == 0 )
      v82 = v29 & 0x100;
    v46 = xxxSetForegroundWindowWithOptions(v123, v79, v82, v118);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v8 = 0;
    }
    v84 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v85 = W32GetUserSessionState(WPP_GLOBAL_Control, v83);
      LOBYTE(v86) = v84;
      LOBYTE(v87) = v8;
      v88 = *(_QWORD *)(v85 + 69152);
      v89 = "Success";
      if ( !v46 )
        v89 = "Failure";
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v87,
        v86,
        v88,
        4,
        2,
        110,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
        (__int64)v89);
    }
    if ( v46 && ForegroundActivate )
      tagTHREADINFO::SetForegroundActivate(v120, ForegroundActivate);
    goto LABEL_50;
  }
  v31 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(*(PETHREAD *)v120);
    v35 = W32GetUserSessionState(v34, v33);
    LOBYTE(v36) = v32;
    LOBYTE(v37) = v31;
    WPP_RECORDER_AND_TRACE_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 3), v37, v36, *(_QWORD *)(v35 + 69152));
    v22 = (__int64)v123;
  }
  v40 = anonymous_namespace_::FAllowForegroundActivate(v22);
  if ( v40 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (v39 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v39 & 2) == 0)
      || (v98 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v98 = 0;
    }
    v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v98 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v100 = W32GetUserSessionState(v39, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v101) = v99;
      LOBYTE(v102) = v98;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v102,
        v101,
        *(_QWORD *)(v100 + 69152),
        4,
        2,
        100,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    if ( !*((_DWORD *)v120 + 234) )
    {
      ForegroundActivate = 32;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v103 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v103 = 0;
      }
      v104 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v103 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v105 = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v120);
        v108 = W32GetUserSessionState(v107, v106);
        LOBYTE(v109) = v104;
        LOBYTE(v110) = v103;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v110,
          v109,
          *(_QWORD *)(v108 + 69152),
          4,
          2,
          101,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
          v105);
      }
    }
    v46 = 0;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v41 = 0;
    }
    v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v41 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
      LOBYTE(v44) = v42;
      LOBYTE(v45) = v41;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v44,
        *(_QWORD *)(v43 + 69152),
        4,
        2,
        102,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    v29 = a5 | 0x80;
    if ( !a4 )
      v29 = a5 | 0x81;
    v46 = anonymous_namespace_::xxxLocalActivateWindow(v123);
  }
  v47 = 2;
  if ( v40 )
    goto LABEL_89;
LABEL_50:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  return v46;
}
