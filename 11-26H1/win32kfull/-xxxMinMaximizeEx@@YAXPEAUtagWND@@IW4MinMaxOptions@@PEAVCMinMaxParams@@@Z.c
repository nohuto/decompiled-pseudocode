/*
 * XREFs of ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34
 * Callers:
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x140163D1C (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140164A04 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x140164CE0 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1400105EC (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x1400197A4 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x1400469A0 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DwmSyncNotifyMinimizing @ 0x14014A6DC (DwmSyncNotifyMinimizing.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x140161F90 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x140179454 (InternalBeginDeferWindowPos.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x14019EDB0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     xxxShowOwnedWindows @ 0x1401C0368 (xxxShowOwnedWindows.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401DEB84 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ParkIcon @ 0x1401E63DC (ParkIcon.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1401EDB60 (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSendMinRectMessages @ 0x14021D3B4 (xxxSendMinRectMessages.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140235DB8 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     ?MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402386CC (-MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x14024A6E0 (DwmAsyncNotifyAnimationChange.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x14025A64C (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     xxxFlushPalette @ 0x14028AE60 (xxxFlushPalette.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402DEDD4 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402DEFD8 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402E596C (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402E805C (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1402F0AF8 (xxxDrawAnimatedRects.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxMinMaximizeEx(__int64 a1, unsigned int a2, int a3, struct tagMONITOR **a4)
{
  struct tagMONITOR *v4; // r15
  __int64 v5; // rdi
  ULONG_PTR v6; // rbx
  __int64 v7; // rax
  __m128i v8; // xmm6
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  char v11; // cl
  ULONG_PTR v12; // rax
  char v13; // si
  char v14; // r14
  unsigned int v15; // ebx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // ebx
  __int64 v22; // rcx
  int v23; // r15d
  struct tagTHREADINFO *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 UserSessionState; // rax
  struct CHECKPOINT *Prop; // rax
  struct CHECKPOINT *v33; // r14
  int IsEnabledDeviceUsageNoInline; // eax
  int v35; // esi
  struct tagWND *v36; // rdx
  bool v37; // al
  __int64 left; // rcx
  __int64 v39; // rdx
  int v40; // edx
  LONG v41; // eax
  __m128i v42; // xmm7
  __m128i v43; // xmm8
  int v44; // ebx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // edx
  char v49; // cl
  int v50; // r15d
  int v51; // r12d
  int v52; // r13d
  int v53; // ebx
  struct tagWND *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  char v57; // dl
  struct tagMONITOR *v58; // rcx
  int v59; // esi
  char v60; // bl
  char v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // r14d
  char v65; // r10
  __int64 v66; // r11
  __m128i v67; // xmm7
  int v68; // edx
  __int64 v69; // rcx
  struct tagWND *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  void *v79; // rbx
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 i; // rdx
  unsigned int v84; // edx
  int v85; // ecx
  bool v86; // zf
  struct tagWND *v87; // rdx
  char v88; // cl
  struct tagWND *v89; // r14
  char v90; // dl
  int v91; // ecx
  __int64 v92; // rax
  int v93; // eax
  struct tagWND *v94; // rdx
  int v95; // eax
  struct tagWND *v96; // rdx
  __int64 v97; // rdx
  int v98; // r13d
  bool v99; // r12
  int v100; // ebx
  __int64 v101; // rax
  int v102; // r8d
  int v103; // edx
  ULONG_PTR v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r14
  int v113; // r12d
  int v114; // ebx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rcx
  struct tagWND *v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  void *v122; // rax
  bool v123; // [rsp+58h] [rbp-B0h]
  char v124; // [rsp+59h] [rbp-AFh]
  char v125; // [rsp+68h] [rbp-A0h]
  int v126; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v127[4]; // [rsp+70h] [rbp-98h] BYREF
  int v128; // [rsp+74h] [rbp-94h]
  int v129; // [rsp+78h] [rbp-90h]
  int v130; // [rsp+7Ch] [rbp-8Ch]
  int v131; // [rsp+80h] [rbp-88h]
  int v132; // [rsp+84h] [rbp-84h]
  __m128i v133; // [rsp+88h] [rbp-80h]
  int v134; // [rsp+98h] [rbp-70h]
  unsigned int v135; // [rsp+9Ch] [rbp-6Ch]
  int v136; // [rsp+A0h] [rbp-68h]
  unsigned int v137; // [rsp+A4h] [rbp-64h]
  int v138; // [rsp+A8h] [rbp-60h]
  int v139; // [rsp+ACh] [rbp-5Ch]
  int v140; // [rsp+B0h] [rbp-58h]
  int v141; // [rsp+B4h] [rbp-54h]
  struct tagTHREADINFO *v142; // [rsp+B8h] [rbp-50h]
  struct tagRECT v143; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v144; // [rsp+D0h] [rbp-38h]
  struct tagMONITOR *v145; // [rsp+D8h] [rbp-30h]
  struct tagMONITOR *v146; // [rsp+E0h] [rbp-28h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+E8h] [rbp-20h] BYREF
  ULONG_PTR v148[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v149; // [rsp+108h] [rbp+0h] BYREF
  __int16 v150; // [rsp+110h] [rbp+8h]
  _BYTE v151[40]; // [rsp+118h] [rbp+10h] BYREF
  struct tagRECT v152; // [rsp+140h] [rbp+38h] BYREF
  __int128 v153; // [rsp+150h] [rbp+48h] BYREF
  __int128 v154; // [rsp+160h] [rbp+58h]
  __int64 v155; // [rsp+170h] [rbp+68h]

  v4 = *a4;
  v155 = 0LL;
  v5 = a1;
  v142 = *(struct tagTHREADINFO **)(a1 + 104);
  v6 = (ULONG_PTR)a4;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = 0LL;
  v9 = a2;
  *(_QWORD *)&v152.left = a1;
  v10 = a3;
  v153 = 0LL;
  BugCheckParameter3[0] = (ULONG_PTR)a4;
  v154 = 0LL;
  LODWORD(v7) = *(unsigned __int8 *)(v7 + 31);
  v126 = a3;
  v11 = v7 & 1;
  v128 = a2;
  v144 = ((unsigned int)v7 >> 5) & 1;
  v145 = a4[2];
  v12 = (ULONG_PTR)a4[1];
  v133 = 0LL;
  v130 = 0;
  v139 = 0;
  v138 = 0;
  v136 = 0;
  v132 = 0;
  v131 = 0;
  v140 = 0;
  v135 = 0;
  v134 = 0;
  v141 = 1;
  LOBYTE(v129) = v11;
  v146 = v4;
  v148[0] = v12;
  v143 = 0LL;
  if ( v12 && (a3 & 8) != 0 )
  {
    v13 = 1;
    v123 = 1;
  }
  else
  {
    v123 = 0;
    v13 = 0;
    if ( !v12 )
    {
LABEL_6:
      v14 = 0;
      goto LABEL_7;
    }
  }
  v14 = 1;
  if ( (a3 & 0x200000) == 0 )
    goto LABEL_6;
LABEL_7:
  v124 = v14;
  if ( !v4 || (v125 = 1, a2 != 9) )
    v125 = 0;
  LOBYTE(v137) = 0;
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    v15 = (unsigned int)v10 >> 23;
    LOBYTE(v15) = (v10 & 0x800000) != 0;
    v137 = v15;
    v6 = BugCheckParameter3[0];
  }
  if ( v14 )
  {
    if ( (_DWORD)v9 != 3 && (_DWORD)v9 != 6 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1577LL);
    if ( v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1579LL);
  }
  if ( v4 && (_DWORD)v9 != 9 && (_DWORD)v9 != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1581LL);
  if ( v125 && (v10 & 0x80) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1583LL);
  if ( (v10 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *(struct tagTHREADINFO **)(v5 + 16),
      *(struct tagQ **)(*(_QWORD *)(v5 + 16) + 464LL),
      0x17u,
      (struct tagWND *)v5,
      0,
      v9,
      v10 & 0xFFFFFFFFFFFDFFFFuLL,
      0LL);
    return;
  }
  if ( (v10 & 0x40000) == 0 && (*(_DWORD *)(v5 + 384) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptMinMaximize(v5, (unsigned int)v9, (unsigned int)v10, v6);
    return;
  }
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v151, (struct tagWND *)v5);
  v149 = v5;
  v150 = 0;
  v16 = ((v10 & 0x20) << 15) | 0x10;
  if ( (v10 & 0x10) == 0 )
    v16 = (v10 & 0x20) << 15;
  v17 = v16 | 4;
  if ( (v10 & 0x40) == 0 )
    v17 = v16;
  v18 = v17 | 0x80000;
  if ( (v10 & 0x80) == 0 )
    v18 = v17;
  v19 = v18 | 0x400000;
  if ( (v10 & 0x100) == 0 )
    v19 = v18;
  v20 = v19 | 0x800000;
  if ( (v10 & 0x200) == 0 )
    v20 = v19;
  v21 = v20 | 0x1000000;
  if ( (v10 & 0x40000) == 0 )
    v21 = v20;
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && (v10 & 0x400) != 0 )
    v21 |= 0x200000u;
  v22 = v21 | 0x80;
  if ( (v10 & 0x100000) == 0 )
    v22 = v21;
  v23 = v22 | 0x200;
  if ( (v10 & 0x400000) == 0 )
    v23 = v22;
  v24 = PtiCurrent(v22);
  if ( (unsigned int)IsThreadDesktopComposed(v24) )
  {
    v25 = v10;
    LODWORD(v10) = v10 & 0xFFFEFFFF;
    v126 = v10;
    v141 = v25 & 0x10000;
    if ( (v25 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed(v5) )
      {
        v28 = (void *)ReferenceDwmApiPort(v27, v26);
        DwmAsyncNotifyAnimationChange(v28);
      }
    }
  }
  GetRect((const struct tagWND *)v5, (__int64)&v143, 66);
  if ( (v10 & 4) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v30, v29);
    Prop = (struct CHECKPOINT *)GetProp(v5, *(unsigned __int16 *)(UserSessionState + 41374), 1u);
  }
  else
  {
    Prop = CHECKPOINT::Restore((struct tagWND *)v5, &v143);
  }
  v33 = Prop;
  if ( !Prop )
    goto LABEL_262;
  IsEnabledDeviceUsageNoInline = Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline();
  v35 = v23;
  LOBYTE(v36) = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !(_BYTE)v36 )
      goto LABEL_64;
    v37 = CRecalcProp::s_xxxOnWindowRestoreFromMinimized((struct tagWND *)v5, v123);
  }
  else
  {
    if ( !(_BYTE)v36 )
      goto LABEL_64;
    v37 = CRecalcProp::s_xxxOnWindowRestoreFromMinimizedOld(
            (struct tagWND *)v5,
            v123,
            (bool *)(BugCheckParameter3[0] + 28),
            (unsigned int *)(BugCheckParameter3[0] + 24),
            (struct tagRECT *)(BugCheckParameter3[0] + 32));
  }
  if ( v37 )
    v35 = v23 | 0x80000;
LABEL_64:
  WindowMargins::OnBecomingMinMaximized((WindowMargins *)v5, v36);
  v39 = *((_QWORD *)v142 + 5);
  if ( (*(_BYTE *)(v39 + 26) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x40) == 0 )
  {
    v40 = *(_DWORD *)(v39 + 96);
    v41 = v40 - v143.right;
    left = (unsigned int)v143.left;
    v143.right = v40 - v143.left;
    v143.left = v41;
    v134 = 1;
  }
  if ( v123 )
  {
    v42 = *(__m128i *)v148[0];
    *((_DWORD *)v33 + 4) &= 0xFFFFFFF1;
  }
  else
  {
    v42 = *(__m128i *)((char *)v33 + 20);
  }
  v43 = *(__m128i *)((char *)v33 + 36);
  v44 = *((_DWORD *)PtiCurrent(left) + 178);
  v46 = *((_QWORD *)PtiCurrent(v45) + 62);
  if ( ((*(_BYTE *)(*(_QWORD *)v46 + 16LL) | (unsigned __int8)v44) & 0x40) != 0
    && (unsigned int)xxxCallHook(1LL, *(_QWORD *)v5, v9, 5) )
  {
    goto LABEL_262;
  }
  if ( (_DWORD)v9 == 204 )
  {
    v35 |= 0x14u;
    if ( (*((_DWORD *)v33 + 4) & 4) != 0 )
    {
      v128 = 2;
      v142 = PtiCurrent(v46);
      goto LABEL_75;
    }
    LODWORD(v9) = 1;
    v128 = 1;
    PtiCurrent(v46);
    goto LABEL_79;
  }
  v142 = PtiCurrent(v46);
  if ( (_DWORD)v9 == 1 )
    goto LABEL_79;
  if ( (_DWORD)v9 != 2 )
  {
    if ( (_DWORD)v9 == 3 )
      goto LABEL_82;
    if ( (_DWORD)v9 == 4 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v63, v62) + 18928)
        && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v75, v74) + 18928) + 128LL) )
      {
        v35 |= 0x10u;
      }
      goto LABEL_129;
    }
    if ( (_DWORD)v9 != 6 && (_DWORD)v9 != 7 )
    {
      if ( (_DWORD)v9 != 9 )
        goto LABEL_99;
LABEL_129:
      LODWORD(v9) = 1;
      v128 = 1;
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) != 0 )
      {
        v76 = *((_DWORD *)v33 + 4);
        if ( (v76 & 2) != 0 )
        {
          LODWORD(v9) = 3;
LABEL_132:
          v128 = v9;
          goto LABEL_82;
        }
        if ( (v76 & 8) != 0 )
        {
          LODWORD(v9) = 12;
          goto LABEL_132;
        }
      }
LABEL_79:
      if ( IsArranged((const struct tagWND *)v5) && !(_BYTE)v137 )
        AdvancedWindowPos::MarkWindowAsNotArranged((AdvancedWindowPos *)v5, v54);
LABEL_82:
      v55 = *(_QWORD *)(v5 + 40);
      if ( (_DWORD)v9 == 3 )
      {
        v56 = ValidateHmonitorNoRip(*(_QWORD *)(v55 + 256));
        v57 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL);
        v58 = v146;
        if ( (v57 & 1) != 0 && (!v146 || (struct tagMONITOR *)v56 == v146) && (v57 & 0x10) != 0 && (v10 & 2) == 0 )
          goto LABEL_262;
        v59 = v35 | 0x8000;
        v132 = 1;
        if ( (v57 & 0x20) != 0 )
          *((_DWORD *)v33 + 4) |= 4u;
        v60 = v124;
        v61 = 0;
        if ( !v124 )
          xxxInitSendValidateMinMaxInfoEx((struct tagWND *)v5, (__int64)&v153, v58);
      }
      else
      {
        v90 = *(_BYTE *)(v55 + 31);
        v60 = v124;
        v91 = v35 | 0x8000;
        if ( (v90 & 0x21) == 0 )
          v91 = v35;
        v61 = 0;
        v59 = v91;
        if ( (v90 & 1) != 0 )
          v132 = 1;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v5, 19LL, 0LL, 0LL, 0, 0, 0LL, 1u, 1) )
          goto LABEL_262;
        v131 = 1;
        v138 = 1;
        if ( (v59 & 0x10) == 0 )
        {
          v92 = *(_QWORD *)(v5 + 40);
          v139 = 1;
          v86 = (*(_BYTE *)(v92 + 31) & 0x40) == 0;
          v93 = v136;
          if ( v86 )
            v93 = 1;
          v136 = v93;
        }
        v59 |= 0x100u;
      }
      else
      {
        v131 = 3;
      }
      if ( (_DWORD)v9 == 3 )
      {
        if ( v60 )
        {
          v53 = *(_DWORD *)(v148[0] + 8);
          v133 = *(__m128i *)v148[0];
          v8 = v133;
          v51 = _mm_cvtsi128_si32(_mm_srli_si128(v133, 12));
          v52 = _mm_cvtsi128_si32(_mm_srli_si128(v133, 4));
          v50 = _mm_cvtsi128_si32(v133);
        }
        else
        {
          v50 = v154;
          v52 = DWORD1(v154);
          v53 = v154 + DWORD2(v153);
          v51 = DWORD1(v154) + HIDWORD(v153);
          v133.m128i_i64[0] = v154;
          v133.m128i_i32[3] = DWORD1(v154) + HIDWORD(v153);
          v133.m128i_i32[2] = v154 + DWORD2(v153);
          v8 = v133;
        }
        SetOrClrWF(1, (struct tagWND *)v5, 0xF01u, 1);
        AdvancedWindowPos::MarkWindowAsNotArranged((AdvancedWindowPos *)v5, v94);
      }
      else
      {
        if ( (_DWORD)v9 == 12 )
        {
          v8 = v43;
          v133 = v43;
          v95 = Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline();
          *(_DWORD *)(v5 + 380) |= 0x200000u;
          LOBYTE(v150) = 1;
          if ( v95 )
          {
            AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)v5, v96);
            if ( *((_BYTE *)v33 + 54) )
            {
              v98 = *((_DWORD *)v33 + 14);
              if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
              {
                v61 = 1;
              }
              v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v61 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v100 = *(_DWORD *)(BugCheckParameter3[0] + 24);
                v101 = W32GetUserSessionState(WPP_GLOBAL_Control, v97);
                LOBYTE(v102) = v99;
                LOBYTE(v103) = v61;
                WPP_RECORDER_AND_TRACE_SF_Dd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v103,
                  v102,
                  *(_QWORD *)(v101 + 69152),
                  4,
                  4,
                  12,
                  (__int64)&WPP_c2c1bc94dfb934c622fe5c54a621ad61_Traceguids,
                  v98,
                  v100);
              }
              v104 = BugCheckParameter3[0];
              *(_DWORD *)(BugCheckParameter3[0] + 24) = v98;
              *(_BYTE *)(v104 + 28) = 1;
              *((_BYTE *)v33 + 54) = 0;
            }
          }
          else
          {
            AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)v5, v96);
            *(_DWORD *)(v5 + 380) |= 0x4000000u;
          }
        }
        else
        {
          v8 = v42;
          v133 = v42;
        }
        SetOrClrWF(0, (struct tagWND *)v5, 0xF01u, 1);
        v50 = _mm_cvtsi128_si32(v8);
        v51 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
        v52 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
        v53 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) == 0 )
        goto LABEL_216;
      if ( v128 != 2 && *((_WORD *)v33 + 26) )
        v59 |= 0x80000u;
      SetMinimize(v5, 0LL);
      v106 = *(_QWORD *)(v5 + 40);
      v135 = 23;
      if ( (*(_BYTE *)(v106 + 31) & 0xC0) != 0x40
        && (*(_BYTE *)(v106 + 31) & 0x10) != 0
        && *(_DWORD *)(*(_QWORD *)(v5 + 16) + 936LL) == 1
        && (v107 = W32GetUserSessionState(1LL, v105),
            v108 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL),
            v108 != *(_QWORD *)(v107 + 18928))
        && ((v59 & 0x10) == 0 || *(_QWORD *)(v108 + 128) == v5) )
      {
        v64 = v126;
        if ( (v126 & 0x40) == 0 )
          xxxSetForegroundWindowWithOptions(v5, 6LL, 4097LL, 0LL);
      }
      else
      {
LABEL_216:
        v64 = v126;
      }
      v48 = v130;
      v35 = v59 | 0x20;
LABEL_102:
      if ( (v64 & 0x100001) == 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) != 0 )
        {
          if ( v48 )
            v35 |= 0x40u;
          if ( !(unsigned int)IsVisible(v5)
            || (v64 & 0x10000) == 0
            || !v131
            || (v65 & 0x40) != 0 && (*(_BYTE *)(v66 + 23) & 0x10) != 0 )
          {
            goto LABEL_223;
          }
          v67 = 0LL;
          if ( v134 )
          {
            v68 = v50;
            v67 = v8;
            v69 = *(_QWORD *)(*(_QWORD *)(v5 + 104) + 40LL);
            v50 = *(_DWORD *)(v69 + 96) - v53;
            v53 = *(_DWORD *)(v69 + 96) - v68;
            v133.m128i_i32[0] = v50;
            v133.m128i_i32[2] = v53;
          }
          if ( v131 == 3 || !IsTrayWindow((_QWORD *)v5, 1LL) )
          {
            v70 = (struct tagWND *)v5;
          }
          else
          {
            v152 = 0LL;
            xxxSendMinRectMessages(v5, &v152);
            if ( IsRectEmptyInl(&v152) )
              goto LABEL_220;
            v70 = (struct tagWND *)v5;
          }
          xxxDrawAnimatedRects(v70);
LABEL_220:
          if ( v134 )
          {
            v50 = _mm_cvtsi128_si32(v67);
            v51 = _mm_cvtsi128_si32(_mm_srli_si128(v67, 12));
            v52 = _mm_cvtsi128_si32(_mm_srli_si128(v67, 4));
            v53 = _mm_cvtsi128_si32(_mm_srli_si128(v67, 8));
          }
          goto LABEL_223;
        }
        v35 |= 0x40u;
      }
LABEL_223:
      v112 = InternalBeginDeferWindowPos(1LL);
      if ( v112 )
      {
        v113 = v51 - v52;
        v114 = v53 - v50;
        v115 = v145 ? HMValidateHandleNoSecure((__int64)v145, 1) : 0LL;
        v111 = _DeferWindowPos(v112, v5, v115, v50, v52, v114, v113, v35, 0);
        if ( v111 )
        {
          if ( v132 && IsTopLevelWindow(v5) )
          {
            v116 = *(_QWORD *)(v5 + 40);
            if ( (*(_BYTE *)(v116 + 31) & 1) != 0 )
            {
              *(_QWORD *)(*(_QWORD *)(v111 + 40) + 112LL) = 2LL;
            }
            else if ( (*(_BYTE *)(v116 + 21) & 8) != 0 )
            {
              *(_QWORD *)(*(_QWORD *)(v111 + 40) + 112LL) = 1LL;
            }
          }
          if ( (v126 & 0x80000) != 0 )
            *(_DWORD *)(*(_QWORD *)(v111 + 40) + 156LL) |= 0x400u;
          if ( (v126 & 0x200000) != 0 )
            *(_DWORD *)(*(_QWORD *)(v111 + 40) + 156LL) |= 0x800u;
          if ( v125 )
          {
            if ( v146 )
              v117 = *(_QWORD *)v146;
            else
              v117 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v111 + 40) + 128LL) = v117;
            *(_DWORD *)(*(_QWORD *)(v111 + 40) + 156LL) |= 0x200u;
          }
          xxxEndDeferWindowPosEx((struct tagSMWP *)v111, 0);
        }
      }
      if ( v135 )
        xxxWindowEvent(v135, (struct tagWND *)v5, 0, 0, 1);
      if ( v138 )
        xxxShowOwnedWindows(v5, 3LL);
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) != 0
        && v128 == 6
        && *(_QWORD *)(v5 + 104) == GetDesktopWindow(v5)
        && !(unsigned int)xxxActivateOnMinimize(v118) )
      {
        xxxActivateWindowWithOptions(v5, 2LL, 49LL, 1LL, 0);
      }
      if ( v139 )
        xxxSetFocus((struct tagWND *)v5);
      if ( v136 )
        xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v5, 6LL, 1uLL, 0LL, 0, 0, 0LL, 1u, 1);
      if ( v140 )
        xxxFlushPalette(v5, v109, v110, v111);
      v119 = *(_QWORD *)(v5 + 40);
      if ( (_BYTE)v129 != (*(_BYTE *)(v119 + 31) & 1) || v144 != ((*(unsigned __int8 *)(v119 + 31) >> 5) & 1) )
        PostIAMShellHookMessage(0x28u, *(_QWORD *)v5);
      goto LABEL_262;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v63, 2LL) + 18928)
      && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v72, v71) + 18928) + 128LL) )
    {
      v35 |= 0x10u;
    }
    if ( (v10 & 0x40) == 0 )
    {
      v73 = (__int64 *)CalcMinZOrder((struct tagWND *)v5);
      if ( v73 )
      {
        if ( !v145 )
          v145 = (struct tagMONITOR *)*v73;
      }
      else
      {
        v35 |= 4u;
      }
    }
    v128 = v9;
  }
LABEL_75:
  v47 = *(_QWORD *)(v5 + 40);
  v48 = 1;
  v130 = 1;
  v49 = *(_BYTE *)(v47 + 31);
  if ( (v49 & 0x20) == 0 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(v5) )
    {
      v79 = (void *)ReferenceDwmApiPort(v78, v77);
      if ( v79 )
      {
        LOBYTE(v77) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v127, v77);
        DwmSyncNotifyMinimizing(v79, *(_QWORD *)v5);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v127);
      }
    }
    v80 = *((_DWORD *)v33 + 4);
    v131 = 2;
    if ( (v80 & 1) == 0 )
    {
      v80 &= ~0x10u;
      *((_DWORD *)v33 + 4) = v80;
    }
    if ( (v80 & 0x10) == 0 )
    {
      ParkIcon(v5, v33);
      *((_DWORD *)v33 + 4) |= 0x10u;
    }
    if ( v124 )
    {
      v53 = *(_DWORD *)(v148[0] + 8);
      v133 = *(__m128i *)v148[0];
      v8 = v133;
      v51 = _mm_cvtsi128_si32(_mm_srli_si128(v133, 12));
      v52 = _mm_cvtsi128_si32(_mm_srli_si128(v133, 4));
      v50 = _mm_cvtsi128_si32(v133);
    }
    else
    {
      v50 = *(_DWORD *)v33;
      v52 = *((_DWORD *)v33 + 1);
      v133.m128i_i32[0] = *(_DWORD *)v33;
      v133.m128i_i32[1] = v52;
      v81 = *(_QWORD *)(W32GetUserSessionState(v78, v77) + 19904);
      v53 = *(_DWORD *)v33 + *(_DWORD *)(v81 + 2124);
      v133.m128i_i32[2] = v53;
      v51 = *((_DWORD *)v33 + 1) + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v81, v82) + 19904) + 2128LL);
      v133.m128i_i32[3] = v51;
      v8 = v133;
    }
    xxxShowOwnedWindows(v5, 1LL);
    for ( i = *(_QWORD *)(*((_QWORD *)v142 + 58) + 120LL); i; i = *(_QWORD *)(i + 104) )
    {
      if ( i == v5 )
      {
        Win32HM_LockIntoThread<0>((__int64)v142, i, BugCheckParameter3);
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0xC0) == 0x40 )
        {
          Win32HM_LockIntoThread<1>((__int64)v142, *(_QWORD *)(v5 + 104), (__int64 *)v148);
          xxxSetFocus(*(struct tagWND **)(v5 + 104));
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v148);
        }
        else
        {
          xxxSetFocus(0LL);
        }
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        break;
      }
    }
    v84 = *((_DWORD *)v33 + 4) & 0xFFFFFFBF | *(_BYTE *)(*(_QWORD *)(v5 + 40) + 20LL) & 0x40;
    *((_DWORD *)v33 + 4) = v84;
    if ( !v123 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 1) != 0 )
      {
        v132 = 1;
        *((_DWORD *)v33 + 4) = v84 & 0xFFFFFFF5 | 2;
      }
      else
      {
        *((_DWORD *)v33 + 4) = v84 & 0xFFFFFFFD;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
        {
          v87 = (struct tagWND *)IsArranged((const struct tagWND *)v5);
          *((_DWORD *)v33 + 4) = (8 * (_DWORD)v87) | *((_DWORD *)v33 + 4) & 0xFFFFFFF7;
          v86 = (_DWORD)v87 == 0;
        }
        else
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 233LL) & 0x10) == 0
            || (v85 = 8, (*(_DWORD *)(v5 + 380) & 0x4000000) == 0) )
          {
            v85 = 0;
          }
          *((_DWORD *)v33 + 4) = v85 | *((_DWORD *)v33 + 4) & 0xFFFFFFF7;
          v86 = !IsArranged((const struct tagWND *)v5);
        }
        if ( !v86 )
          AdvancedWindowPos::MarkWindowAsNotArranged((AdvancedWindowPos *)v5, v87);
      }
    }
    v88 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL);
    if ( (v88 & 0x20) == 0 )
    {
      SetMinimize(v5, 1LL);
      SetOrClrWF(0, (struct tagWND *)v5, 0xF01u, 1);
      v89 = *(struct tagWND **)(v5 + 112);
      v135 = 22;
      if ( v89 )
      {
        do
        {
          ClrFTrueVis(v89);
          v89 = (struct tagWND *)*((_QWORD *)v89 + 11);
        }
        while ( v89 );
        v5 = *(_QWORD *)&v152.left;
      }
      v35 |= 0x8120u;
      if ( *(_QWORD *)(v5 + 104) == GetDesktopWindow(v5) )
        v140 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 18LL) & 0x20;
      goto LABEL_100;
    }
    if ( (v88 & 0x10) != 0 )
      goto LABEL_262;
    v8 = 0LL;
    v35 |= 0x17u;
    v133 = 0LL;
LABEL_99:
    v50 = _mm_cvtsi128_si32(v8);
    v51 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v52 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    v53 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
LABEL_100:
    v48 = v130;
    goto LABEL_101;
  }
  if ( (v49 & 0x10) == 0 )
  {
    v50 = _mm_cvtsi128_si32((__m128i)0LL);
    v51 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v35 |= 0x17u;
    v52 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    v53 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
LABEL_101:
    v64 = v126;
    goto LABEL_102;
  }
LABEL_262:
  if ( !v141 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(v5) )
    {
      v122 = (void *)ReferenceDwmApiPort(v121, v120);
      DwmAsyncNotifyAnimationChange(v122);
    }
  }
  DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&v149);
  CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v151);
}
