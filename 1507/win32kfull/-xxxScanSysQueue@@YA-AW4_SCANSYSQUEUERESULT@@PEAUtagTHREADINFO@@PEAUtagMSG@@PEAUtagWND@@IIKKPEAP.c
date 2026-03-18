/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     SetMiPPromotion @ 0x1C00012DC (SetMiPPromotion.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0001374 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0006310 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007FB4 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C0009180 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C00091A4 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxMouseActivate @ 0x1C0040CEC (xxxMouseActivate.c)
 *     LockExchangeW32Thread @ 0x1C00438FC (LockExchangeW32Thread.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00465E4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxImmProcessKey @ 0x1C0047818 (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C0047AD0 (GetAppImeCompatFlags.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     PhkNextValid @ 0x1C004A350 (PhkNextValid.c)
 *     _PostTransformableMessage @ 0x1C004E9A0 (_PostTransformableMessage.c)
 *     zzzSetCursor @ 0x1C0062174 (zzzSetCursor.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     ThreadLockExchange @ 0x1C0062A1C (ThreadLockExchange.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006501C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0065580 (-xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxCallCtfHook @ 0x1C0067860 (xxxCallCtfHook.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     ?_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z @ 0x1C006BFD0 (-_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C006C090 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     GetMouseKeyFlags @ 0x1C00779CC (GetMouseKeyFlags.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0079D2C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     InternalSetTimer @ 0x1C007A390 (InternalSetTimer.c)
 *     xxxTrackMouseMove @ 0x1C007AAC8 (xxxTrackMouseMove.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 *     IsThreadDesktopComposed @ 0x1C008BBD0 (IsThreadDesktopComposed.c)
 *     PostMoveToPwnd @ 0x1C008BBEC (PostMoveToPwnd.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C008BD5C (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C008C290 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C008C6CC (IsPointerInputMessage.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     CheckPwndFilter @ 0x1C0090AD4 (CheckPwndFilter.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D98E0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     HKLtoPKL @ 0x1C00DAB90 (HKLtoPKL.c)
 *     xxxWindowHitTest @ 0x1C00DF3AC (xxxWindowHitTest.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF9CC (ThreadLockExchangeAlways.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C00DFA10 (IsCompositionInputWindowUIDisabled.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00E1C4C (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     IsMouseInPointerActive @ 0x1C00E1D04 (IsMouseInPointerActive.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00E61D0 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ClearWakeBit @ 0x1C00EA55C (ClearWakeBit.c)
 *     TransferWakeBit @ 0x1C00EAAA4 (TransferWakeBit.c)
 *     IsInsideMenuLoop @ 0x1C00F9B14 (IsInsideMenuLoop.c)
 *     xxxCallMouseHook @ 0x1C00FAA60 (xxxCallMouseHook.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00FB2A0 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     xxxUnlockMenuState @ 0x1C00FEB60 (xxxUnlockMenuState.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C010B284 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     MNItemHitTest @ 0x1C010C5B0 (MNItemHitTest.c)
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0151B88 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01D9CE8 (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     IsWheelTargetDesktopApp @ 0x1C01D9E34 (IsWheelTargetDesktopApp.c)
 *     FreePointerMessageParams @ 0x1C01E0B64 (FreePointerMessageParams.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01E1450 (xxxRetrievePointerInputMessage.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6D28 (xxxCallJournalPlaybackHook.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216730 (xxxCallHandleMenuMessages.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C0225594 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 *     xxxDefPointerProc @ 0x1C023139C (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C02315B0 (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02319B4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxScanSysQueue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  __int64 v8; // r12
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rbx
  unsigned __int64 Valid; // rcx
  unsigned __int64 v29; // r13
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // r15
  unsigned __int64 v36; // rbx
  struct tagWND *v37; // r15
  unsigned __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 *v46; // rbx
  __int64 *v47; // rdx
  __int64 v48; // rdx
  unsigned int v49; // esi
  __int64 v50; // r14
  __int64 v51; // rcx
  bool v52; // zf
  int v53; // r15d
  unsigned __int64 v54; // r11
  __int64 v55; // rdi
  unsigned int v56; // edx
  __int16 *v57; // rcx
  char v58; // al
  bool v60; // zf
  __int64 v61; // r10
  __int64 v62; // rdx
  int v63; // ebx
  __int64 v64; // rcx
  _BOOL8 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 *v69; // rax
  __int64 v70; // r10
  __int64 v71; // r12
  __int64 AppImeCompatFlags; // rax
  __int64 v73; // r8
  unsigned int v74; // r13d
  __int64 v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // r10
  __int64 v78; // rcx
  __int64 v79; // r10
  int v80; // r15d
  int v81; // ebx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // r10
  int v87; // r9d
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // r11
  __int64 v91; // rdx
  _DWORD *v92; // rcx
  __int64 v93; // rdx
  char v94; // al
  bool v95; // zf
  __int64 v96; // rax
  __int64 *v97; // rbx
  __int64 v98; // rcx
  BOOL v99; // edi
  __int64 v100; // rcx
  __int64 *v101; // rcx
  __int64 v102; // r9
  unsigned __int8 v103; // r8
  int v104; // ebx
  unsigned __int16 v105; // dx
  unsigned int v106; // edi
  __int64 v107; // r10
  __int64 v108; // rcx
  int v109; // ebx
  int v110; // ecx
  __int64 v111; // rax
  __int64 v112; // rax
  int v113; // ebx
  __int64 *v114; // rdi
  __int64 v115; // rcx
  __int64 *v116; // rcx
  __int64 ThreadDesktopWindow; // rax
  HWND v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rcx
  int v122; // ebx
  int v123; // ecx
  struct tagQMSG *v124; // rdi
  int v125; // r14d
  struct tagQMSG *v126; // rdi
  _DWORD *v127; // rax
  int v128; // edi
  _DWORD *v129; // rax
  unsigned int MouseKeyFlags; // eax
  int v131; // edi
  char v132; // al
  unsigned __int64 v133; // rdi
  LONG y; // ebx
  int v135; // r14d
  __int64 v136; // rax
  struct tagWND *v137; // rcx
  int v138; // edx
  HWND v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  unsigned __int64 v142; // rbx
  int v143; // ebx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // r8
  int v148; // eax
  __int64 v149; // rax
  __int64 v150; // rcx
  unsigned __int64 v151; // rax
  unsigned __int64 v152; // rax
  struct tagPOINT v153; // r8
  struct tagPOINT v154; // rbx
  char *v155; // r12
  int v156; // edx
  int v157; // edx
  int v158; // eax
  BOOL v159; // r14d
  unsigned __int16 v160; // di
  __int64 v161; // rsi
  int v162; // eax
  unsigned __int64 v163; // rcx
  unsigned __int64 v164; // rcx
  unsigned __int64 v165; // rcx
  int v166; // edx
  __int64 v167; // r8
  int v168; // r14d
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rcx
  __int64 v173; // rcx
  int v174; // ebx
  __int64 v175; // rcx
  __int64 v176; // rcx
  __int64 v177; // rcx
  _DWORD *v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rcx
  int v181; // edi
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // rcx
  _DWORD *v185; // rdx
  __int64 v186; // rcx
  int v187; // eax
  __int64 v188; // rcx
  __int64 v189; // rcx
  __int64 v190; // rcx
  __int64 v191; // rcx
  _DWORD *v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rcx
  __int64 v195; // rcx
  __int64 v196; // rcx
  __int64 v197; // rcx
  _DWORD *v198; // rdx
  __int64 v199; // rcx
  int v200; // eax
  __int64 v201; // rcx
  int v202; // eax
  int v203; // ecx
  unsigned int TouchTimeFromCPLValue; // ecx
  __int64 v205; // rdx
  struct tagQMSG *v206; // rbx
  int v207; // eax
  unsigned int v208; // ebx
  __int64 v209; // rcx
  int PointerMessageFromMouse; // eax
  int v211; // edx
  int v212; // eax
  struct tagQMSG *v213; // r10
  _DWORD *v214; // rax
  _DWORD *v215; // rax
  unsigned __int64 v216; // r9
  __int64 v217; // rax
  __int64 v218; // rdi
  __int64 v219; // rbx
  __int64 v220; // rax
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // rax
  int v224; // eax
  int v225; // ebx
  int v226; // r14d
  __int128 *v227; // rdx
  int v228; // eax
  __int64 v229; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  unsigned __int64 v232; // r8
  __int64 v233; // rdx
  __int64 v234; // rcx
  struct tagQMSG *v235; // rbx
  __int64 v236; // r10
  int v237; // r10d
  int v238; // ebx
  int v239; // ebx
  int v240; // ebx
  int v241; // ebx
  __int64 v242; // rax
  __int64 v243; // rax
  int v244; // r14d
  unsigned __int64 v245; // rcx
  __int64 v246; // rdi
  int v247; // ebx
  __int64 MiPWindowFlags; // rax
  struct tagWND *v249; // rcx
  __int64 v250; // rax
  struct tagQMSG *v251; // rbx
  unsigned __int64 v252; // rax
  __int64 v253; // r15
  char v254; // r13
  _QWORD *v255; // rax
  unsigned int v256; // esi
  _DWORD *v257; // rax
  __int64 v258; // rax
  int v259; // eax
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r14
  __int16 v263; // dx
  __int64 v264; // r8
  __int64 v265; // rbx
  __int64 *v266; // rax
  __int64 v267; // rbx
  __int64 *v268; // rax
  __int64 v269; // rbx
  __int64 *v270; // rax
  __int64 v271; // rbx
  __int64 *v272; // rax
  __int64 *v273; // rax
  __int64 v274; // rdx
  __int64 v275; // rcx
  int v276; // [rsp+70h] [rbp-628h]
  int v277; // [rsp+74h] [rbp-624h] BYREF
  unsigned int v278; // [rsp+78h] [rbp-620h] BYREF
  int v279; // [rsp+7Ch] [rbp-61Ch]
  struct tagWND *v280; // [rsp+80h] [rbp-618h] BYREF
  unsigned int v281; // [rsp+88h] [rbp-610h] BYREF
  int v282; // [rsp+8Ch] [rbp-60Ch] BYREF
  __int64 v283; // [rsp+90h] [rbp-608h] BYREF
  struct tagPOINT v284; // [rsp+98h] [rbp-600h] BYREF
  __int64 v285; // [rsp+A0h] [rbp-5F8h] BYREF
  __int64 v286; // [rsp+A8h] [rbp-5F0h]
  int v287; // [rsp+B0h] [rbp-5E8h]
  struct tagQMSG *v288; // [rsp+B8h] [rbp-5E0h]
  int v289; // [rsp+C0h] [rbp-5D8h]
  unsigned int v290; // [rsp+C8h] [rbp-5D0h]
  int v291; // [rsp+CCh] [rbp-5CCh]
  __int128 v292; // [rsp+E0h] [rbp-5B8h] BYREF
  unsigned int v293[4]; // [rsp+F0h] [rbp-5A8h]
  unsigned __int64 v294[2]; // [rsp+100h] [rbp-598h]
  __int128 v295; // [rsp+110h] [rbp-588h]
  __int128 v296; // [rsp+120h] [rbp-578h]
  struct tagPOINT v297[2]; // [rsp+130h] [rbp-568h]
  __int128 v298; // [rsp+140h] [rbp-558h]
  __int128 v299; // [rsp+150h] [rbp-548h]
  __int128 v300; // [rsp+160h] [rbp-538h]
  int v301; // [rsp+178h] [rbp-520h]
  int v302; // [rsp+17Ch] [rbp-51Ch]
  int v303; // [rsp+180h] [rbp-518h]
  __int64 v304; // [rsp+188h] [rbp-510h]
  int v305[2]; // [rsp+190h] [rbp-508h]
  int v306; // [rsp+198h] [rbp-500h]
  __int64 v307; // [rsp+1A0h] [rbp-4F8h]
  __int64 v308; // [rsp+1A8h] [rbp-4F0h] BYREF
  struct tagWND *v309; // [rsp+1B0h] [rbp-4E8h]
  DWORD DefaultLocaleId; // [rsp+1C0h] [rbp-4D8h] BYREF
  struct tagPOINT v311; // [rsp+1C8h] [rbp-4D0h] BYREF
  unsigned __int64 v312; // [rsp+1D0h] [rbp-4C8h]
  unsigned int v313; // [rsp+1D8h] [rbp-4C0h]
  __int64 v314; // [rsp+1E0h] [rbp-4B8h]
  int v315; // [rsp+1E8h] [rbp-4B0h]
  __int64 v316; // [rsp+1F0h] [rbp-4A8h] BYREF
  __int64 v317; // [rsp+1F8h] [rbp-4A0h]
  void (*v318)(void); // [rsp+200h] [rbp-498h]
  __int64 v319; // [rsp+208h] [rbp-490h] BYREF
  __int64 v320; // [rsp+210h] [rbp-488h]
  void (*v321)(void); // [rsp+218h] [rbp-480h]
  __int64 v322; // [rsp+220h] [rbp-478h] BYREF
  __int64 v323; // [rsp+228h] [rbp-470h] BYREF
  __int64 v324; // [rsp+230h] [rbp-468h]
  void (*v325)(void); // [rsp+238h] [rbp-460h]
  __int64 v326; // [rsp+240h] [rbp-458h] BYREF
  __int64 v327; // [rsp+248h] [rbp-450h]
  void (*v328)(void); // [rsp+250h] [rbp-448h]
  __int64 v329; // [rsp+258h] [rbp-440h] BYREF
  __int64 v330; // [rsp+260h] [rbp-438h]
  void (*v331)(void); // [rsp+268h] [rbp-430h]
  __int64 v332; // [rsp+270h] [rbp-428h] BYREF
  __int64 v333; // [rsp+278h] [rbp-420h]
  _DWORD v334[4]; // [rsp+288h] [rbp-410h] BYREF
  int v335; // [rsp+298h] [rbp-400h] BYREF
  unsigned __int64 v336; // [rsp+2A0h] [rbp-3F8h]
  unsigned __int64 v337; // [rsp+2A8h] [rbp-3F0h]
  unsigned int *v338; // [rsp+2B0h] [rbp-3E8h]
  __int64 v339; // [rsp+2B8h] [rbp-3E0h]
  unsigned int v340; // [rsp+2C0h] [rbp-3D8h] BYREF
  unsigned __int64 v341; // [rsp+2C8h] [rbp-3D0h]
  unsigned __int64 v342; // [rsp+2D0h] [rbp-3C8h]
  unsigned int *v343; // [rsp+2D8h] [rbp-3C0h]
  int v344; // [rsp+2E0h] [rbp-3B8h]
  int v345; // [rsp+2E4h] [rbp-3B4h]
  __int64 v346; // [rsp+2E8h] [rbp-3B0h] BYREF
  int v347; // [rsp+2F0h] [rbp-3A8h]
  unsigned __int64 v348; // [rsp+2F8h] [rbp-3A0h]
  __int64 v349; // [rsp+300h] [rbp-398h]
  __int64 v350; // [rsp+308h] [rbp-390h]
  __int64 v351; // [rsp+310h] [rbp-388h]
  _QWORD v352[3]; // [rsp+318h] [rbp-380h] BYREF
  __int128 v353; // [rsp+330h] [rbp-368h]
  __int128 v354; // [rsp+340h] [rbp-358h]
  __int128 v355; // [rsp+360h] [rbp-338h]
  __int128 v356; // [rsp+370h] [rbp-328h]
  __int128 v357; // [rsp+380h] [rbp-318h]
  __int128 v358; // [rsp+390h] [rbp-308h]
  __int128 v359; // [rsp+3A0h] [rbp-2F8h]
  __int128 v360; // [rsp+3B0h] [rbp-2E8h]
  _QWORD v361[3]; // [rsp+3C0h] [rbp-2D8h] BYREF
  __int128 v362; // [rsp+3D8h] [rbp-2C0h]
  __int128 v363; // [rsp+3E8h] [rbp-2B0h]
  __int128 v364; // [rsp+3F8h] [rbp-2A0h]
  __int128 v365; // [rsp+408h] [rbp-290h]
  __int128 v366; // [rsp+420h] [rbp-278h] BYREF
  __int128 v367; // [rsp+430h] [rbp-268h]
  __int128 v368; // [rsp+440h] [rbp-258h]
  __int128 v369; // [rsp+450h] [rbp-248h]
  __int128 v370; // [rsp+460h] [rbp-238h]
  __int128 v371; // [rsp+470h] [rbp-228h]
  __int128 v372; // [rsp+480h] [rbp-218h]
  __int128 v373; // [rsp+490h] [rbp-208h]
  __int128 v374; // [rsp+4A0h] [rbp-1F8h]
  __int128 v375; // [rsp+4B0h] [rbp-1E8h] BYREF
  __m128i v376; // [rsp+4C0h] [rbp-1D8h]
  __int128 v377; // [rsp+4D0h] [rbp-1C8h]
  __int128 v378; // [rsp+4E0h] [rbp-1B8h]
  __int128 v379; // [rsp+4F0h] [rbp-1A8h]
  __int128 v380; // [rsp+500h] [rbp-198h]
  __int128 v381; // [rsp+510h] [rbp-188h]
  __int128 v382; // [rsp+520h] [rbp-178h]
  __int128 v383; // [rsp+530h] [rbp-168h]
  _OWORD v384[9]; // [rsp+540h] [rbp-158h] BYREF
  char v385[24]; // [rsp+5D0h] [rbp-C8h] BYREF
  unsigned int v386; // [rsp+5E8h] [rbp-B0h]

  v290 = a4;
  *(_QWORD *)v305 = a3;
  v8 = a1;
  v9 = 0LL;
  v283 = 0LL;
  v277 = a6 & 1;
  v302 = 0;
  v291 = 0;
  v276 = 0;
  gdwMiPPathTaken = 0;
  v303 = 0;
  v10 = a8;
  *a8 = 0LL;
  v11 = a7;
  if ( a7 == 0x2000 && *(_QWORD *)(*(_QWORD *)(a1 + 392) + 40LL) )
  {
    EtwTraceInputQueueLockedPeekRecursion();
    return 0LL;
  }
  v301 = 0;
  v287 = 0;
  v279 = 0;
  v12 = *(_QWORD *)(a1 + 392);
  if ( !*(_QWORD *)(v12 + 24) )
  {
    *(_QWORD *)(v12 + 24) = a1;
    **(_DWORD **)(a1 + 408) |= 1u;
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 392);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v13 + 332) &= ~0x400u;
    else
      *(_DWORD *)(v13 + 332) |= 0x400u;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 392) + 24LL) != a1 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v286 = 0LL;
  v307 = 0LL;
  v304 = 0LL;
  v15 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  v316 = *(_QWORD *)(v15 + 16);
  *(_QWORD *)(v15 + 16) = &v316;
  v317 = 0LL;
  v318 = (void (*)(void))DereferenceW32Thread;
  v17 = 0LL;
  v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v18 )
    v17 = *v18;
  v319 = *(_QWORD *)(v17 + 16);
  *(_QWORD *)(v17 + 16) = &v319;
  v320 = 0LL;
  v321 = (void (*)(void))DereferenceW32Thread;
  v19 = 0LL;
  v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v20 )
    v19 = *v20;
  v329 = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 16) = &v329;
  v330 = 0LL;
  v331 = (void (*)(void))DereferenceW32Thread;
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  v326 = *(_QWORD *)(v21 + 16);
  *(_QWORD *)(v21 + 16) = &v326;
  v327 = 0LL;
  v328 = (void (*)(void))DereferenceW32Thread;
  v23 = 0LL;
  v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v24 )
    v23 = *v24;
  v323 = *(_QWORD *)(v23 + 16);
  *(_QWORD *)(v23 + 16) = &v323;
  v324 = 0LL;
  v325 = (void (*)(void))DereferenceW32Thread;
  v308 = *(_QWORD *)(v8 + 376);
  *(_QWORD *)(v8 + 376) = &v308;
  v309 = 0LL;
LABEL_23:
  *(_QWORD *)(*(_QWORD *)(v8 + 392) + 40LL) = 0LL;
  while ( 1 )
  {
LABEL_27:
    v306 = (**(_DWORD **)(v8 + 440) >> 9) & 1;
    v289 = 0;
    v285 = 0LL;
    v26 = *(_QWORD *)(v8 + 392);
    v27 = *(_QWORD *)(v26 + 40);
    Valid = *(_QWORD *)(*(_QWORD *)(v8 + 424) + 48LL);
    if ( Valid )
    {
      if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
        Valid = PhkNextValid(Valid);
      if ( Valid )
      {
        Valid = grpdeskRitInput;
        if ( *(_QWORD *)(v8 + 416) == grpdeskRitInput )
        {
          if ( v27 )
          {
            v29 = 0LL;
            v288 = 0LL;
          }
          else
          {
            v30 = xxxCallJournalPlaybackHook(&v292);
            if ( v30 == -1 )
            {
              v29 = 0LL;
              v288 = 0LL;
            }
            else if ( v30 )
            {
              *(_WORD *)(*(_QWORD *)(v8 + 408) + 6LL) &= 0xE3F8u;
              *(_WORD *)(*(_QWORD *)(v8 + 408) + 4LL) &= 0xE3F8u;
              *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 344LL) = v293[2];
              qword_1C0322D88 = InternalSetTimer(0, qword_1C0322D88, v30, (unsigned int)JournalTimer, 32, 276);
              v29 = 0LL;
              v288 = 0LL;
            }
            else
            {
              WakeSomeone(*(_QWORD *)(v8 + 392), 0LL, v293[2], 0LL);
              HIDWORD(glinp[7]) |= 0x10u;
              v29 = 1LL;
              v288 = (struct tagQMSG *)1;
            }
          }
          goto LABEL_57;
        }
      }
    }
    if ( (*(_DWORD *)(v26 + 332) & 0x20) != 0 )
      PostMoveToPwnd(v26, 0LL, 0LL);
    v31 = *(_QWORD *)(v8 + 392);
    if ( !*(_DWORD *)(v31 + 16) )
    {
      v29 = 0LL;
      v288 = 0LL;
      goto LABEL_57;
    }
    if ( v27 && (Valid = *(_QWORD *)(v31 + 40), Valid > 1) )
      v29 = *(_QWORD *)Valid;
    else
      v29 = *(_QWORD *)v31;
    v288 = (struct tagQMSG *)v29;
    if ( (*(_DWORD *)(v8 + 1080) & 0x2000) == 0 )
      goto LABEL_52;
    if ( v29 )
    {
      do
      {
        v32 = *(_DWORD *)(v29 + 92);
        if ( (v32 & 0x20) == 0 )
          break;
        if ( (v32 & 0x10) == 0 )
          break;
        v29 = *(_QWORD *)v29;
        v288 = (struct tagQMSG *)v29;
      }
      while ( v29 );
LABEL_52:
      if ( v29 )
      {
        v292 = *(_OWORD *)v29;
        *(_OWORD *)v293 = *(_OWORD *)(v29 + 16);
        *(_OWORD *)v294 = *(_OWORD *)(v29 + 32);
        v295 = *(_OWORD *)(v29 + 48);
        v296 = *(_OWORD *)(v29 + 64);
        *(_OWORD *)&v297[0].x = *(_OWORD *)(v29 + 80);
        v298 = *(_OWORD *)(v29 + 96);
        v299 = *(_OWORD *)(v29 + 112);
        v300 = *(_OWORD *)(v29 + 128);
      }
    }
    if ( v29 > 1 && (v297[1].y & 0x20) != 0 )
    {
      *v10 = v29;
      *(_DWORD *)(v29 + 92) |= 0x100u;
      v277 = 0;
    }
LABEL_57:
    *(_QWORD *)(*(_QWORD *)(v8 + 392) + 40LL) = v29;
    if ( !*(_QWORD *)(*(_QWORD *)(v8 + 392) + 40LL) )
    {
      v33 = v286;
      v34 = 0LL;
      v52 = v11 == 0x2000;
      v35 = 0LL;
      if ( v52 )
        *(_WORD *)(*(_QWORD *)(v8 + 408) + 6LL) &= ~0x2000u;
      goto LABEL_812;
    }
    ThreadUnlock1(Valid, v25);
    v36 = *(_QWORD *)v293;
    v37 = 0LL;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    v25 = (unsigned __int16)v36;
    if ( (unsigned __int64)(unsigned __int16)v36 < *(_QWORD *)(gpsi + 8LL) )
    {
      v40 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v36 * LODWORD(gSharedInfo[2]);
      v41 = v36 >> 16;
      if ( ((_WORD)v41 == *(_WORD *)(v40 + 18)
         || (_WORD)v41 == 0xFFFF
         || !(_WORD)v41 && PsGetCurrentProcessWow64Process(gSharedInfo[0]))
        && (*(_BYTE *)(v40 + 17) & 1) == 0
        && *(_BYTE *)(v40 + 16) == 1 )
      {
        v37 = *(struct tagWND **)v40;
      }
    }
    v280 = v37;
    v308 = *(_QWORD *)(v8 + 376);
    *(_QWORD *)(v8 + 376) = &v308;
    v309 = v37;
    if ( v37 )
      ++*((_DWORD *)v37 + 2);
    if ( v297[1].x )
    {
      if ( v297[1].x != 4 || *(_QWORD *)(*(_QWORD *)(v8 + 392) + 40LL) == **(_QWORD **)(v8 + 392) )
      {
        if ( !(_QWORD)v298 || (_QWORD)v298 == v8 )
        {
          EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(v8 + 392) + 40LL));
          v45 = *(_QWORD *)(v8 + 392);
          v46 = *(__int64 **)(v45 + 40);
          v47 = (__int64 *)v46[1];
          if ( v47 )
            *v47 = *v46;
          v48 = *v46;
          if ( *v46 )
            *(_QWORD *)(v48 + 8) = v46[1];
          if ( *(__int64 **)v45 == v46 )
            *(_QWORD *)v45 = *v46;
          if ( *(__int64 **)(v45 + 8) == v46 )
            *(_QWORD *)(v45 + 8) = v46[1];
          --*(_DWORD *)(v45 + 16);
          if ( (*((_DWORD *)v46 + 23) & 8) != 0
            && !*((_DWORD *)v46 + 22)
            && (unsigned int)IsPointerInputMessage(*((unsigned int *)v46 + 6), v48, v43, v44) )
          {
            FreePointerMessageParams(v46);
          }
          Win32FreeToPagedLookasideList(QEntryLookaside, v46);
          *(_QWORD *)(*(_QWORD *)(v8 + 392) + 40LL) = 0LL;
          xxxProcessEventMessage(v8, (__int64)&v292);
          v10 = a8;
          v11 = a7;
        }
        else
        {
          v42 = *(_QWORD *)(v8 + 392);
          if ( *(_QWORD *)(v298 + 392) == v42 )
          {
            v34 = v298;
            LockExchangeW32Thread(v298, (__int64)&v329);
            *(_QWORD *)(*(_QWORD *)(v8 + 392) + 40LL) = 0LL;
            goto LABEL_810;
          }
          CleanEventMessage(*(struct tagQMSG **)(v42 + 40));
          DelQEntry(*(_QWORD *)(v8 + 392), *(_QWORD *)(*(_QWORD *)(v8 + 392) + 40LL), 1LL);
          v10 = a8;
          v11 = a7;
        }
        goto LABEL_23;
      }
LABEL_735:
      v10 = a8;
      goto LABEL_26;
    }
    if ( a7 == 0x2000 )
      goto LABEL_735;
    v49 = v293[2];
    v50 = v293[2];
    v278 = v293[2];
    if ( v293[2] > 0x20A )
      break;
    if ( v293[2] == 522 )
    {
LABEL_319:
      if ( (*(_DWORD *)(v8 + 448) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v8) < 0 )
        goto LABEL_808;
      if ( (unsigned int)IsWheelTargetDesktopApp(v8) || (unsigned int)HasThreadRequestedLegacyMouseWheelRouting(v8) )
      {
        v37 = *(struct tagWND **)(*(_QWORD *)(v8 + 392) + 72LL);
        v280 = v37;
      }
      else
      {
        if ( v37 && IsCompositionInputWindow(v37) )
        {
          if ( (*((_BYTE *)v37 + 55) & 8) != 0 )
            goto LABEL_381;
          v9 = 0LL;
          if ( (unsigned int)IsCompositionInputWindowUIDisabled(v37) )
            goto LABEL_737;
LABEL_334:
          if ( v37 && !(unsigned int)IsInsideMenuLoop(v8) )
          {
            ThreadLockExchangeAlways(v37, &v308);
            v121 = *((_QWORD *)v37 + 2);
            if ( v121 == v8 )
            {
              v122 = 0;
              v282 = 0;
LABEL_341:
              if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)v29, v50, v290, a5)
                || !(unsigned int)CheckPwndFilter(v37, *(_QWORD *)v305) )
              {
                goto LABEL_735;
              }
              if ( v122 )
                goto LABEL_809;
              if ( !v29 || !(unsigned int)IsMouseInPointerActive(v8, v29) )
              {
                v74 = v277;
                goto LABEL_364;
              }
              v123 = *(_DWORD *)(v29 + 92);
              if ( (v123 & 0x400) != 0 )
              {
                if ( !*((_QWORD *)v37 + 42) )
                  *(_DWORD *)(v29 + 92) = v123 & 0xFFFFEFFF;
                v74 = v277;
                v124 = v288;
                if ( (unsigned int)GeneratePointerMessageFromMouse((struct tagQMSG *)v384, v50, v288, v37, v277) )
                {
                  v125 = v276 | 0x40;
                  v276 = v125;
                  gdwMiPPathTaken = v125;
                  v292 = v384[0];
                  *(_OWORD *)v293 = v384[1];
                  *(_OWORD *)v294 = v384[2];
                  v295 = v384[3];
                  v296 = v384[4];
                  *(_OWORD *)&v297[0].x = v384[5];
                  v298 = v384[6];
                  v299 = v384[7];
                  v300 = v384[8];
                  v289 = 1;
                  if ( v74 )
                    *((_DWORD *)v124 + 23) &= ~0x400u;
                  goto LABEL_725;
                }
                if ( !v74 )
                {
LABEL_366:
                  MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(v8 + 392));
                  v285 = v294[0] | MouseKeyFlags;
                  v284.x = SLOWORD(v294[1]);
                  v284.y = SWORD1(v294[1]);
                  PhysicalToLogicalDPIPointWithHitTest(&v284, &v284, 0LL, v37);
                  v283 = (LOWORD(v284.y) << 16) | LOWORD(v284.x);
                  *(struct tagPOINT *)((char *)&v295 + 4) = v284;
                  v311 = v284;
                  v312 = *(_QWORD *)v37;
                  v313 = 0;
                  v314 = *((_QWORD *)&v296 + 1);
                  v315 = v294[0];
                  if ( v74 )
                  {
                    v131 = 1;
                    v287 = 1;
                    if ( (unsigned int)xxxCallCtfHook(7, 0, v50, (__int64)&v311) )
                      goto LABEL_738;
                  }
                  else
                  {
                    v131 = v287;
                  }
                  if ( ((*(_DWORD *)(v8 + 608) | *(_DWORD *)(*(_QWORD *)(v8 + 424) + 24LL)) & 0x100) == 0
                    || (v131 = 1, v287 = 1, !(unsigned int)xxxCallMouseHook((unsigned int)v50, &v311, v74)) )
                  {
                    if ( v131 && v74 && ((*(_BYTE *)(v8 + 608) | *(_BYTE *)(*(_QWORD *)(v8 + 424) + 24LL)) & 0x40) != 0 )
                      xxxCallHook(6, v50, (__int64)&v311, 5u);
                    goto LABEL_774;
                  }
LABEL_738:
                  v106 = v278;
                  goto LABEL_739;
                }
                v276 |= 0x80u;
                gdwMiPPathTaken = v276;
                *((_DWORD *)v124 + 23) &= ~0x400u;
LABEL_364:
                if ( v74 )
                  xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v292);
                goto LABEL_366;
              }
              v74 = v277;
              if ( !v277 )
                goto LABEL_366;
              v126 = v288;
              if ( !IsMiPMouseMessage(*((_DWORD *)v288 + 6)) )
                goto LABEL_364;
              if ( !(unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v126 + 112))
                || (v127 = *(_DWORD **)(v8 + 1120)) == 0LL
                || (*v127 & 2) != 0
                || (*v127 & 4) != 0 )
              {
                v276 |= 0x200u;
                gdwMiPPathTaken = v276;
                v129 = *(_DWORD **)(v8 + 1120);
                if ( v129 )
                  *v129 &= ~2u;
                goto LABEL_364;
              }
              v128 = v276 | 0x100;
LABEL_699:
              v276 = v128;
              gdwMiPPathTaken = v128;
LABEL_700:
              xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v292);
              v10 = a8;
              v11 = a7;
              goto LABEL_23;
            }
            v122 = 1;
            v282 = 1;
            if ( *(_QWORD *)(v121 + 392) == *(_QWORD *)(v8 + 392) )
            {
              if ( !v307 )
              {
                v307 = v121;
                LockExchangeW32Thread(v121, (__int64)&v316);
              }
              goto LABEL_341;
            }
LABEL_737:
            v74 = v277;
            goto LABEL_738;
          }
LABEL_381:
          v74 = v277;
LABEL_382:
          v9 = 0LL;
          goto LABEL_738;
        }
        if ( !(unsigned int)IsInsideMenuLoop(v8) )
        {
          ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
          v352[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v352;
          v352[1] = ThreadDesktopWindow;
          if ( ThreadDesktopWindow )
            ++*(_DWORD *)(ThreadDesktopWindow + 8);
          v335 = 512;
          v336 = v294[0];
          v337 = v294[1];
          v338 = &v281;
          v339 = 1LL;
          v9 = 0LL;
          v118 = xxxDCEWindowHitTestInternal(
                   (struct tagWND *)ThreadDesktopWindow,
                   v297[0],
                   (struct DCE_WINDOW_HIT_TEST_ARGS *)&v335);
          v37 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v118, 1);
          v280 = v37;
          ThreadUnlock1(v120, v119);
          goto LABEL_334;
        }
      }
      v9 = 0LL;
      goto LABEL_334;
    }
    switch ( v293[2] )
    {
      case 0x23u:
        v285 = 0LL;
        v283 = v294[1];
        if ( !v37 || (v51 = *((_QWORD *)v37 + 2), v51 == v8) )
        {
          if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)v29, v293[2], v290, a5) )
          {
LABEL_808:
            v9 = 0LL;
            goto LABEL_809;
          }
LABEL_102:
          v52 = v277 == 0;
LABEL_103:
          if ( !v52 )
            xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v292);
          goto LABEL_774;
        }
        if ( *(_QWORD *)(v51 + 392) == *(_QWORD *)(v8 + 392) )
        {
          v33 = v286;
          if ( !v286 )
          {
            v33 = *((_QWORD *)v37 + 2);
            LockExchangeW32Thread(v51, (__int64)&v319);
          }
          v9 = 0LL;
          v34 = 0LL;
          goto LABEL_811;
        }
        goto LABEL_381;
      case 0xFEu:
        goto LABEL_383;
      case 0xFFu:
        v285 = v294[0];
        v283 = v294[1];
        v9 = 0LL;
        v37 = 0LL;
        v280 = 0LL;
        if ( v294[1] )
        {
          LOBYTE(v25) = 18;
          v111 = HMValidateHandle(v294[1], v25);
          if ( v111 )
          {
            v37 = *(struct tagWND **)(v111 + 24);
            v280 = v37;
          }
        }
        if ( !v37 )
        {
          v112 = *(_QWORD *)(v8 + 392);
          v37 = *(struct tagWND **)(v112 + 72);
          v280 = v37;
          if ( !v37 )
          {
            v37 = *(struct tagWND **)(v112 + 80);
            v280 = v37;
            if ( !v37 )
              goto LABEL_737;
          }
        }
        ThreadLockExchangeAlways(v37, &v308);
        if ( CheckCrossThreadInput(v37, (struct tagQMSG *)v29, &v282, &v277, a8) )
          goto LABEL_809;
        v113 = v282;
        if ( !v282 )
          goto LABEL_307;
        v114 = (__int64 *)((char *)v37 + 16);
        if ( *(_QWORD *)(*((_QWORD *)v37 + 2) + 392LL) != *(_QWORD *)(v8 + 392) )
          goto LABEL_737;
        if ( (unsigned int)IsInsideMenuLoop(v8) )
        {
          v115 = *(_QWORD *)(**(_QWORD **)(v8 + 536) + 8LL);
        }
        else
        {
          v116 = *(__int64 **)(v8 + 600);
          if ( !v116 )
            goto LABEL_305;
          v115 = *v116;
        }
        if ( v115 )
        {
          v37 = (struct tagWND *)v115;
          v280 = (struct tagWND *)v115;
          v114 = (__int64 *)(v115 + 16);
          v113 = *(_QWORD *)(v115 + 16) != v8;
          v282 = v113;
          ThreadLockExchangeAlways(v115, &v308);
        }
LABEL_305:
        if ( !v304 )
        {
          v304 = *v114;
          LockExchangeW32Thread(v304, (__int64)&v326);
        }
LABEL_307:
        if ( !v290 && a5 == -1 )
          goto LABEL_315;
        if ( v290 <= a5 )
        {
          if ( (unsigned int)v50 < v290 || (unsigned int)v50 > a5 )
            goto LABEL_735;
        }
        else if ( (unsigned int)v50 >= a5 && (unsigned int)v50 <= v290 )
        {
          goto LABEL_735;
        }
LABEL_315:
        if ( !(unsigned int)CheckPwndFilter(v37, *(_QWORD *)v305) )
          goto LABEL_735;
        if ( v113 )
          goto LABEL_809;
        v52 = v277 == 0;
        goto LABEL_103;
      case 0x100u:
      case 0x104u:
        v53 = 1;
        v301 = 1;
        if ( (*(_DWORD *)(v8 + 448) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v8) < 0 )
          goto LABEL_808;
        v54 = v294[0];
        v55 = LOBYTE(v294[0]);
        if ( LOBYTE(v294[0]) != 18LL )
        {
          *(_DWORD *)(*(_QWORD *)(v8 + 392) + 332LL) &= 0xFFFFFFF3;
          v54 = v294[0];
        }
        if ( !LOBYTE(gLangToggle[0]) || gLangToggleKeyState >= 8 )
        {
          v9 = 0LL;
          goto LABEL_122;
        }
        v38 = v294[1] >> 16;
        v9 = 0LL;
        v56 = 0;
        v57 = gLangToggle;
        v39 = LOBYTE(v294[0]);
        while ( 1 )
        {
          v58 = *((_BYTE *)v57 + 1);
          if ( v58 ? v58 == BYTE2(v294[1]) : *(_BYTE *)v57 == LOBYTE(v294[0]) )
            break;
          ++v56;
          v57 += 4;
          v60 = v56 == 3;
          if ( v56 >= 3 )
            goto LABEL_119;
        }
        gLangToggleKeyState |= *(_DWORD *)&gLangToggle[4 * v56 + 2];
        v60 = v56 == 3;
LABEL_119:
        if ( v60 )
          gLangToggleKeyState = 8;
LABEL_122:
        v61 = *(_QWORD *)(v8 + 392);
        v62 = *(unsigned __int8 *)(v61 + 188);
        v63 = *(_BYTE *)(v61 + 188) & 0x10;
        if ( v55 != 44 )
          goto LABEL_132;
        if ( (*(_BYTE *)(v61 + 188) & 0x10) != 0 )
        {
          if ( (*(_DWORD *)(v8 + 764) & 0x10) == 0 )
            goto LABEL_127;
        }
        else if ( (*(_DWORD *)(v8 + 764) & 0x20) == 0 )
        {
LABEL_127:
          xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v292);
          v64 = *(_QWORD *)(*(_QWORD *)(v8 + 392) + 80LL);
          if ( !v63 && (v294[1] & 0xFF0000) != 0x10000LL )
            v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 416) + 8LL) + 16LL);
          v10 = a8;
          v11 = a7;
          if ( v64 )
          {
            v65 = DWORD1(v299) != 1;
            v332 = *(_QWORD *)(v8 + 376);
            *(_QWORD *)(v8 + 376) = &v332;
            v333 = v64;
            ++*(_DWORD *)(v64 + 8);
            xxxSnapWindow(v64, v65);
            ThreadUnlock1(v67, v66);
          }
          goto LABEL_23;
        }
LABEL_132:
        if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
        {
          v68 = (unsigned int)v55;
          if ( (v62 & 0x10) != 0 )
            LODWORD(v68) = v55 | 0x400;
          if ( (v62 & 4) != 0 )
            LODWORD(v68) = v68 | 0x200;
          if ( (v62 & 1) != 0 )
            LODWORD(v68) = v68 | 0x100;
          v69 = (__int64 *)HotKeyToWindow(v68, v62, v38, v39);
          if ( v69 )
          {
            if ( *(_QWORD *)(v8 + 416) == *(_QWORD *)(v69[2] + 416) )
            {
              PostTransformableMessage(*(struct tagWND **)(v70 + 80), 0x112u, 0xF150uLL, *v69, 0);
              goto LABEL_700;
            }
          }
        }
        if ( v55 == 231 )
        {
          *(_WORD *)(v8 + 762) = WORD1(v54);
          v54 = 231LL;
        }
LABEL_147:
        v71 = (unsigned __int8)v54;
        if ( (unsigned __int8)v54 == 231LL )
          v54 = 231LL;
        v294[0] = v54;
        if ( gbGraveKeyToggle )
        {
          AppImeCompatFlags = GetAppImeCompatFlags(0LL);
          v74 = v277;
          v75 = a1;
          if ( (AppImeCompatFlags & 0x800000) == 0 && BYTE2(v294[1]) == 41 )
          {
            if ( v277 )
            {
              v76 = *(_QWORD *)(a1 + 392);
              if ( (*(_BYTE *)(v76 + 188) & 0x15) == 0
                && (*(_BYTE *)(v76 + 206) & 0x40) == 0
                && (*(_BYTE *)(v76 + 207) & 1) == 0 )
              {
                v77 = *(_QWORD *)(v76 + 72);
                if ( !v77 )
                  v77 = *(_QWORD *)(v76 + 80);
                if ( !v53 && v77 && (v78 = *(_QWORD *)(v77 + 16), *(_QWORD *)(v78 + 400)) && HKLtoPKL(v78, 1LL, v73) )
                {
                  v9 = 0LL;
                  PostMessage(v79, 80LL);
                }
                else
                {
                  v9 = 0LL;
                }
                v8 = a1;
                goto LABEL_700;
              }
            }
          }
        }
        else
        {
          v74 = v277;
          v75 = a1;
        }
        if ( v306 || v53 || !v74 || !LOBYTE(gLangToggle[0]) )
          goto LABEL_207;
        v80 = 0;
        v81 = 0;
        ZwQueryDefaultLocale(0, &DefaultLocaleId);
        v83 = *(_QWORD *)(v75 + 392);
        v84 = *(_QWORD *)(v83 + 72);
        if ( !v84 )
        {
          v84 = *(_QWORD *)(v83 + 80);
          if ( !v84 )
            goto LABEL_195;
        }
        v85 = *(_QWORD *)(v84 + 16);
        v86 = *(_QWORD *)(v85 + 400);
        v87 = gLangToggleKeyState;
        if ( gLangToggleKeyState < 8 && (DefaultLocaleId & 0x3FF) == 1 )
        {
          v88 = HKLtoPKL(*(_QWORD *)(v84 + 16), 1LL, v82);
          if ( v86 )
          {
            if ( v88 )
            {
              if ( *(_QWORD *)(v86 + 40) != *(_QWORD *)(v88 + 40) )
              {
                v89 = HKLtoPKL(v85, 0LL, v82);
                if ( v90 == v89 && ((*(_DWORD *)(v86 + 40) & 0x3FF) == 1 || (*(_DWORD *)(v90 + 40) & 0x3FF) == 1) )
                  v81 = 1;
              }
            }
          }
        }
        switch ( v87 )
        {
          case 3:
            v80 = 1;
            if ( !v81 || (*(_DWORD *)(v86 + 40) & 0x3FF) == 1 )
            {
              v91 = 1LL;
              goto LABEL_191;
            }
            break;
          case 5:
            v80 = 1;
            if ( !v81 || (*(_DWORD *)(v86 + 40) & 0x3FF) != 1 )
            {
              v91 = 0LL;
LABEL_191:
              v86 = HKLtoPKL(v85, v91, v82);
            }
            break;
          case 7:
            v86 = gspklBaseLayout;
            break;
          default:
            goto LABEL_196;
        }
        if ( v86 || *(_QWORD *)(v85 + 400) )
        {
          PostMessage(v84, 80LL);
LABEL_195:
          v87 = gLangToggleKeyState;
        }
LABEL_196:
        if ( v80 )
        {
          v92 = &unk_1C031B1EC;
          v93 = 3LL;
          do
          {
            v94 = *((_BYTE *)v92 - 3);
            if ( v94 )
              v95 = v94 == BYTE2(v294[1]);
            else
              v95 = *((_BYTE *)v92 - 4) == LOBYTE(v294[0]);
            if ( v95 )
            {
              v87 &= ~*v92;
              gLangToggleKeyState = v87;
            }
            v92 += 2;
            --v93;
          }
          while ( v93 );
        }
        else
        {
          gLangToggleKeyState = 0;
        }
        LODWORD(v50) = v278;
LABEL_207:
        if ( v71 == 121 )
        {
          LODWORD(v50) = v50 | 4;
          v278 = v50;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 392) + 188LL) & 4) != 0 && v71 == 27 )
        {
          LODWORD(v50) = v50 | 4;
          v278 = v50;
        }
        v8 = a1;
        if ( (*(_DWORD *)(a1 + 448) & 8) == 0 )
          v294[1] &= ~0x2000000uLL;
LABEL_215:
        v285 = LOBYTE(v294[0]);
        v96 = *(_QWORD *)(v8 + 392);
        v37 = *(struct tagWND **)(v96 + 72);
        v280 = v37;
        if ( !v37 )
        {
          v37 = *(struct tagWND **)(v96 + 80);
          v280 = v37;
          if ( !v37 )
            goto LABEL_382;
          if ( (unsigned int)(v50 - 256) <= 3 )
          {
            LODWORD(v50) = v50 + 4;
            v278 = v50;
          }
        }
        ThreadLockExchangeAlways(v37, &v308);
        v97 = (__int64 *)((char *)v37 + 16);
        v98 = *((_QWORD *)v37 + 2);
        if ( v98 == v8 )
        {
          v9 = 0LL;
          v99 = 0;
          v282 = 0;
          goto LABEL_231;
        }
        v99 = 1;
        v282 = 1;
        if ( *(_QWORD *)(v98 + 392) != *(_QWORD *)(v8 + 392) )
          goto LABEL_382;
        if ( (unsigned int)IsInsideMenuLoop(v8) )
        {
          v100 = *(_QWORD *)(**(_QWORD **)(v8 + 536) + 8LL);
        }
        else
        {
          v101 = *(__int64 **)(v8 + 600);
          if ( !v101 )
          {
            v9 = 0LL;
            goto LABEL_228;
          }
          v100 = *v101;
        }
        v9 = 0LL;
        if ( v100 )
        {
          v37 = (struct tagWND *)v100;
          v280 = (struct tagWND *)v100;
          v97 = (__int64 *)(v100 + 16);
          v99 = *(_QWORD *)(v100 + 16) != v8;
          v282 = v99;
          ThreadLockExchangeAlways(v100, &v308);
        }
LABEL_228:
        if ( !v307 )
        {
          v307 = *v97;
          LockExchangeW32Thread(v307, (__int64)&v316);
        }
LABEL_231:
        if ( v290 || a5 != -1 )
        {
          if ( v290 <= a5 )
          {
            if ( (unsigned int)v50 < v290 || (unsigned int)v50 > a5 )
              goto LABEL_735;
          }
          else if ( (unsigned int)v50 >= a5 && (unsigned int)v50 <= v290 )
          {
            goto LABEL_735;
          }
        }
        if ( !(unsigned int)CheckPwndFilter(v37, *(_QWORD *)v305) )
          goto LABEL_735;
        if ( v99 )
          goto LABEL_809;
        if ( v74 && !(unsigned int)IsInsideMenuLoop(v8) )
        {
          if ( v285 == 93 && (_DWORD)v50 == 257 )
            PostTransformableMessage(v37, 0x7Bu, *(_QWORD *)v37, -1LL, 0);
          if ( v285 == 112 && (_DWORD)v50 == 256 )
            PostMessage(v37, 77LL);
        }
        v102 = v294[1];
        if ( v285 == 16 )
        {
          v103 = BYTE3(v294[1]) & 1 | 0xA0;
          if ( !v301
            && ((unsigned __int8)(1 << (2 * ((v103 ^ 1) & 3))) & *(_BYTE *)(((unsigned __int64)(v103 ^ 1u) >> 2)
                                                                          + *(_QWORD *)(v8 + 392)
                                                                          + 184)) != 0
            && (*(_DWORD *)(v8 + 448) & 8) == 0 )
          {
            v294[0] = v103;
            goto LABEL_700;
          }
        }
        v104 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v285 >> 2) + *(_QWORD *)(v8 + 392) + 184) & (1 << (2 * (v285 & 3)));
        if ( v74 )
        {
          xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v292);
          v102 = v294[1];
        }
        v283 = v102;
        v105 = v294[0];
        v285 = v294[0];
        if ( v104 )
          v283 = v102 | 0x40000000;
        v106 = v278;
        if ( v278 == 257 || v278 == 261 )
          v283 |= 0x80000000uLL;
        v107 = *(_QWORD *)(v8 + 392);
        if ( (*(_BYTE *)(v107 + 188) & 0x10) != 0 )
          v283 |= 0x20000000uLL;
        v108 = *(_QWORD *)(v8 + 536);
        if ( v108 && (*(_DWORD *)(v108 + 8) & 1) != 0 )
          v283 |= 0x10000000uLL;
        if ( (*(_DWORD *)(v107 + 332) & 0x4000) != 0 )
          v283 |= 0x8000000uLL;
        if ( v306 || gpImeHotKeyListHeader )
        {
          if ( !v74 )
            goto LABEL_281;
          if ( (!v108 || (*(_DWORD *)(v108 + 8) & 1) == 0) && (*(_DWORD *)(v8 + 448) & 0x2000000) == 0 )
          {
            if ( v294[0] == 231 )
              v105 = 231;
            v302 = xxxImmProcessKey(v107, (__int64)v37, v278, v105, v283);
            v291 = v302;
            if ( (v302 & 0x11) != 0 )
            {
              v302 = 0;
              v291 = 0;
LABEL_739:
              v109 = v279;
              goto LABEL_740;
            }
          }
        }
        if ( !v74 )
        {
LABEL_281:
          v109 = v279;
LABEL_282:
          if ( ((*(_BYTE *)(v8 + 608) | *(_BYTE *)(*(_QWORD *)(v8 + 424) + 24LL)) & 8) != 0 )
          {
            v109 = 1;
            v279 = 1;
            v110 = 3;
            if ( v74 )
              v110 = 0;
            if ( (unsigned int)xxxCallHook(v110, v285, v283, 2u) )
              goto LABEL_740;
          }
          if ( v109 && v74 && ((*(_BYTE *)(v8 + 608) | *(_BYTE *)(*(_QWORD *)(v8 + 424) + 24LL)) & 0x40) != 0 )
            xxxCallHook(7, v285, v283, 5u);
LABEL_774:
          if ( *(_QWORD *)(v8 + 684) != *(_QWORD *)((char *)&v295 + 4) )
            *(_DWORD *)(v8 + 448) |= 0x100000u;
          v251 = v288;
          if ( (unsigned __int64)v288 > 1 && (v297[1].y & 0x20) != 0 )
          {
            if ( *((_DWORD *)v288 + 6) == 512 )
            {
              if ( v37 )
                v252 = *(_QWORD *)v37;
              else
                v252 = 0LL;
              *((_QWORD *)v288 + 2) = v252;
              *((_DWORD *)v251 + 23) |= 0x200u;
            }
            *((_QWORD *)v251 + 8) = v283;
          }
          *(_QWORD *)(v8 + 684) = *(_QWORD *)((char *)&v295 + 4);
          *(struct tagPOINT *)(v8 + 692) = v297[0];
          *(_DWORD *)(v8 + 500) = v295;
          *(_QWORD *)(*(_QWORD *)(v8 + 392) + 352LL) = *((_QWORD *)&v296 + 1);
          *(_QWORD *)(*(_QWORD *)(v8 + 392) + 32LL) = 1LL;
          *(_QWORD *)(v8 + 504) = 1LL;
          *(_QWORD *)(v8 + 1084) = v299;
          *(_DWORD *)(v8 + 1128) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          if ( *(_DWORD *)(v8 + 1088) == 1 )
            *(_DWORD *)(v8 + 1080) |= 0x20000u;
          else
            *(_DWORD *)(v8 + 1080) &= ~0x20000u;
          **(_DWORD **)(v8 + 408) &= ~8u;
          **(_QWORD **)(v8 + 440) &= 0x7FFFFFFFuLL;
          v253 = 0LL;
          v254 = v302;
          if ( v277 )
          {
            v255 = *(_QWORD **)(v8 + 440);
            if ( (v297[1].y & 1) != 0 )
              *v255 |= 0x1000uLL;
            else
              *v255 &= ~0x1000uLL;
          }
          v256 = v278;
          TransferWakeBit(a1, v278);
          ClearWakeBit(a1, 31751LL, 1LL);
          if ( v277 )
          {
            if ( v289 )
            {
              v257 = *(_DWORD **)(a1 + 1120);
              if ( v257 )
              {
                if ( (*v257 & 1) != 0 && (*v257 & 4) != 0 )
                  SetMiPWakeBit((struct tagTHREADINFO *)a1);
              }
            }
          }
          if ( v280 )
            v253 = *(_QWORD *)v280;
          *(_QWORD *)a2 = v253;
          *(_DWORD *)(a2 + 8) = v256;
          v258 = v285;
          if ( (v254 & 2) != 0 )
            v258 = 229LL;
          *(_QWORD *)(a2 + 16) = v258;
          *(_QWORD *)(a2 + 24) = v283;
          *(_DWORD *)(a2 + 32) = v295;
          *(_QWORD *)(a2 + 36) = *(_QWORD *)((char *)&v295 + 4);
          if ( v277 )
          {
            EtwTraceInputProcessDelay(a1);
            *(_DWORD *)(*(_QWORD *)(a1 + 392) + 360LL) = (MEMORY[0xFFFFF78000000320]
                                                        * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v259 = *(_DWORD *)(a2 + 8);
            if ( v259 == 256 )
            {
              *(_DWORD *)(a1 + 1184) |= 1u;
              *(_QWORD *)(a1 + 1168) = *(_QWORD *)(a1 + 1084);
              *(_DWORD *)(a1 + 1160) = *(unsigned __int16 *)(a2 + 26);
              *(_DWORD *)(a1 + 1164) = *(_DWORD *)(a2 + 16);
              *(_QWORD *)(a1 + 1176) = v300;
            }
            else if ( ((v259 - 257) & 0xFFFFFFFB) == 0 )
            {
              *(_DWORD *)(a1 + 1184) &= ~1u;
            }
          }
          EtwTraceRetrieveInputMessage(a2, (unsigned int)v277);
          PopAndFreeW32ThreadLock(&v323);
          PopAndFreeW32ThreadLock(&v326);
          PopAndFreeW32ThreadLock(&v329);
          PopAndFreeW32ThreadLock(&v319);
          PopAndFreeW32ThreadLock(&v316);
          ThreadUnlock1(v261, v260);
          return 1LL;
        }
        v109 = 1;
        v279 = 1;
        if ( !(unsigned int)xxxCallCtfHook(2, 0, v285, v283) )
          goto LABEL_282;
LABEL_740:
        xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v292);
        if ( v287 )
        {
          v242 = *(_QWORD *)(v8 + 424);
          v25 = (unsigned int)(*(_DWORD *)(v8 + 608) | *(_DWORD *)(v242 + 24));
          if ( ((*(_BYTE *)(v8 + 608) | *(_BYTE *)(v242 + 24)) & 0x40) != 0 )
            xxxCallHook(6, v106, (__int64)&v311, 5u);
          v287 = 0;
        }
        if ( v109 )
        {
          v243 = *(_QWORD *)(v8 + 424);
          v25 = (unsigned int)(*(_DWORD *)(v8 + 608) | *(_DWORD *)(v243 + 24));
          if ( ((*(_BYTE *)(v8 + 608) | *(_BYTE *)(v243 + 24)) & 0x40) != 0 )
            xxxCallHook(7, v285, v283, 5u);
          v279 = 0;
        }
        v10 = a8;
        v11 = a7;
        if ( v74 )
          goto LABEL_23;
        break;
      case 0x101u:
      case 0x105u:
        v54 = v294[0];
        v53 = v301;
        goto LABEL_147;
      case 0x102u:
        v74 = v277;
        goto LABEL_215;
      case 0x119u:
      case 0x11Bu:
        goto LABEL_376;
      default:
        goto LABEL_397;
    }
  }
  switch ( v293[2] )
  {
    case 0x20Eu:
      goto LABEL_319;
    case 0x238u:
      goto LABEL_383;
    case 0x240u:
LABEL_376:
      if ( !v37 )
        goto LABEL_381;
      if ( *((char *)v37 + 44) < 0 )
        goto LABEL_381;
      if ( *((char *)v37 + 43) < 0 )
        goto LABEL_381;
      v132 = *((_BYTE *)v37 + 55);
      if ( (v132 & 8) != 0 || (v132 & 0x10) == 0 )
        goto LABEL_381;
LABEL_383:
      v285 = v294[0];
      v283 = v294[1];
      if ( !v37 )
        goto LABEL_381;
      v10 = a8;
      if ( CheckCrossThreadInput(v37, (struct tagQMSG *)v29, &v282, &v277, a8) )
        goto LABEL_808;
      if ( v282 )
        goto LABEL_381;
      if ( !v290 && a5 == -1 )
        goto LABEL_394;
      if ( v290 <= a5 )
      {
        if ( v49 < v290 || v49 > a5 )
          goto LABEL_734;
      }
      else if ( v49 >= a5 && v49 <= v290 )
      {
        goto LABEL_734;
      }
LABEL_394:
      if ( (unsigned int)CheckPwndFilter(v37, *(_QWORD *)v305) )
        goto LABEL_102;
LABEL_734:
      v9 = 0LL;
      goto LABEL_26;
    case 0x245u:
    case 0x246u:
    case 0x247u:
    case 0x249u:
    case 0x24Au:
    case 0x251u:
    case 0x252u:
    case 0x253u:
      v74 = v277;
      v124 = v288;
      v125 = v276;
      goto LABEL_726;
    default:
LABEL_397:
      while ( 2 )
      {
        v284.x = SLOWORD(v294[1]);
        v133 = v294[1];
        v284.y = SWORD1(v294[1]);
        v281 = 1;
        y = v297[1].y;
        if ( (v297[1].y & 0x20) != 0 && v37 )
          goto LABEL_433;
        if ( gspwndScreenCapture )
        {
          v37 = gspwndScreenCapture;
          v280 = gspwndScreenCapture;
          v283 = (WORD4(v295) << 16) | WORD2(v295);
LABEL_433:
          v9 = 0LL;
          goto LABEL_434;
        }
        if ( v37 && (unsigned int)IsCompositionInputWindowForHitTest(v37) )
        {
          v135 = 1;
          v303 = 1;
          v136 = *(_QWORD *)(v8 + 392);
          v137 = *(struct tagWND **)(v136 + 64);
          if ( v137 )
          {
            v37 = *(struct tagWND **)(v136 + 64);
            v280 = v37;
            if ( !(unsigned int)IsCompositionInputWindowForHitTest(v137) )
            {
              v297[1].y = y & 0xFFFFEFFF;
              if ( v29 )
              {
                if ( (unsigned int)IsMouseInPointerActive(v8, v29) )
                  *(_DWORD *)(v29 + 92) &= ~0x1000u;
              }
            }
            goto LABEL_433;
          }
        }
        else
        {
          v135 = 0;
          v303 = 0;
          v37 = *(struct tagWND **)(*(_QWORD *)(v8 + 392) + 64LL);
          v280 = v37;
          if ( v37 )
            goto LABEL_433;
        }
        if ( !v135 )
        {
          v37 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 416LL) + 8LL) + 16LL);
          v332 = *(_QWORD *)(v8 + 376);
          *(_QWORD *)(v8 + 376) = &v332;
          v333 = (__int64)v37;
          if ( v37 )
          {
            ++*((_DWORD *)v37 + 2);
            v133 = v294[1];
            v49 = v293[2];
          }
        }
        if ( (unsigned int)IsThreadDesktopComposed(v8) )
        {
          v138 = 1;
          if ( v135 )
            v138 = 9;
          v340 = v49;
          v341 = v294[0];
          v342 = v133;
          v343 = &v281;
          v344 = v138;
          v9 = 0LL;
          v345 = 0;
          v139 = xxxDCEWindowHitTestInternal(v37, v297[0], (struct DCE_WINDOW_HIT_TEST_ARGS *)&v340);
        }
        else
        {
          v139 = (HWND)xxxWindowHitTest(v37);
          v9 = 0LL;
        }
        v142 = (unsigned __int64)v139;
        if ( !v135 )
          ThreadUnlock1(v141, v140);
        v37 = (struct tagWND *)HMValidateHandleNoSecure(v142, 1);
        v280 = v37;
        if ( !v37 )
        {
          v37 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v8 + 416) + 8LL) + 16LL);
          v280 = v37;
          if ( !v37 )
          {
            v37 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 416LL) + 8LL) + 16LL);
            v280 = v37;
          }
        }
        v143 = 0;
        if ( (unsigned int)IsMouseInPointerActive(v8, 0LL)
          && (v144 = *(_QWORD *)(*(_QWORD *)(v8 + 392) + 384LL)) != 0
          && (v145 = ValidateHwnd(v144)) != 0
          && ((v146 = *(_QWORD *)(v145 + 16), v147 = *(_QWORD *)(v8 + 392), *(_QWORD *)(v146 + 392) == v147)
           || *(_QWORD *)(v146 + 384) == *(_QWORD *)(v8 + 384)) )
        {
          v37 = (struct tagWND *)v145;
          v280 = (struct tagWND *)v145;
          v281 = 1;
          *(_DWORD *)(v147 + 108) = 0;
          v143 = 1;
          v148 = v276 | 0x10000;
          v276 = v148;
          gdwMiPPathTaken = v148;
        }
        else
        {
          v148 = v276;
        }
        if ( !v143 )
        {
          v276 = v148 | 0x20000;
          gdwMiPPathTaken = v148 | 0x20000;
          v149 = *(_QWORD *)(v8 + 392);
          *(_DWORD *)(v149 + 108) = v281 != 1;
        }
LABEL_434:
        ThreadLockExchange((__int64)v37, (__int64)&v308);
        if ( CheckCrossThreadInput(v37, (struct tagQMSG *)v29, &v282, &v277, a8) )
          goto LABEL_809;
        if ( v282 )
        {
          v150 = *((_QWORD *)v37 + 2);
          if ( *(_QWORD *)(v150 + 392) != *(_QWORD *)(v8 + 392) )
          {
            zzzSetCursor(gasyscur[1]);
            goto LABEL_737;
          }
          if ( !v286 )
          {
            v286 = *((_QWORD *)v37 + 2);
            LockExchangeW32Thread(v150, (__int64)&v319);
          }
        }
        else if ( (v297[1].y & 0x800) != 0 )
        {
          v151 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 2) + 384LL) + 832LL);
          if ( gbEnforceUIPI )
          {
            if ( DWORD2(v298) <= (unsigned int)v151 )
            {
              if ( DWORD2(v298) != (_DWORD)v151
                || (v152 = HIDWORD(v151), HIDWORD(v298) != (_DWORD)v152) && HIDWORD(v298) != -1 && (_DWORD)v152 != -1 )
              {
                v106 = v278;
                EtwTraceUIPIMsgError(0LL, *(_QWORD *)(*((_QWORD *)v37 + 2) + 384LL), v278, v294[0], v294[1]);
                zzzSetCursor(gasyscur[1]);
                v74 = v277;
                goto LABEL_739;
              }
            }
          }
        }
        v153 = v284;
        v154 = v284;
        v155 = (char *)v37 + 16;
        v156 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 2) + 392LL) + 108LL);
        if ( v156 && (v157 = v156 - 2) != 0 )
        {
          if ( v157 != 1 )
            goto LABEL_458;
          if ( (*((_BYTE *)v37 + 50) & 0x40) != 0 )
            v284.x = *((_DWORD *)v37 + 30) - v284.x;
          else
            v284.x -= *((_DWORD *)v37 + 28);
          v158 = *((_DWORD *)v37 + 29);
        }
        else
        {
          if ( (*((_BYTE *)v37 + 50) & 0x40) != 0 )
            v284.x = *((_DWORD *)v37 + 34) - v284.x;
          else
            v284.x -= *((_DWORD *)v37 + 32);
          v158 = *((_DWORD *)v37 + 33);
        }
        v284.y -= v158;
        v153 = v284;
LABEL_458:
        if ( v282 || *(_QWORD *)(a1 + 392) != gpqCursor )
        {
          v106 = v278;
          goto LABEL_496;
        }
        v159 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 176LL) != (_QWORD)v37;
        v160 = v281;
        if ( v281 == 5 )
        {
          v161 = *((_QWORD *)v37 + 24);
          if ( v161 )
          {
            if ( (*((_BYTE *)v37 + 40) & 1) != 0 )
            {
              v162 = MNItemHitTest(*((_QWORD *)v37 + 24), v37);
              if ( v162 >= 0 )
              {
                v163 = *(_QWORD *)(*(_QWORD *)(v161 + 80) + 152LL * v162 + 104);
                if ( v163 > 6 )
                {
                  if ( v163 != 7 )
                  {
                    if ( v163 == -1LL )
                    {
                      v160 = -2;
                      goto LABEL_478;
                    }
                    goto LABEL_475;
                  }
LABEL_477:
                  v160 = 67;
                  goto LABEL_478;
                }
                if ( v163 >= 5 )
                {
                  v160 = 68;
                }
                else
                {
                  v164 = v163 - 1;
                  if ( v164 )
                  {
                    v165 = v164 - 1;
                    if ( v165 )
                    {
                      if ( v165 != 1 )
                      {
LABEL_475:
                        v160 = 69;
                        goto LABEL_478;
                      }
                      goto LABEL_477;
                    }
                    v160 = 66;
                  }
                  else
                  {
                    v160 = 65;
                  }
                }
              }
LABEL_478:
              v166 = v160 | ((unsigned __int16)v162 << 16);
              goto LABEL_486;
            }
          }
        }
        if ( v281 == 7 && (*((_BYTE *)v37 + 40) & 2) != 0 )
        {
          v166 = (unsigned __int16)HitTestScrollBar(v37, 1, v153) | 0x10000;
        }
        else if ( v281 == 6 && (*((_BYTE *)v37 + 40) & 4) != 0 )
        {
          v166 = (unsigned __int16)HitTestScrollBar(v37, 0, v153);
        }
        else
        {
          v166 = v281;
        }
LABEL_486:
        v106 = v278;
        if ( v278 != 512 || v159 || *(_DWORD *)(*(_QWORD *)(a1 + 416) + 184LL) != v166 )
          xxxTrackMouseMove(v37);
        if ( !v159 )
        {
          v167 = *(_QWORD *)(a1 + 416);
          if ( (*(_DWORD *)(v167 + 32) & 0x40) != 0
            && (v106 != 512 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v167 + 188, v154)) )
          {
            ResetMouseHover((struct tagDESKTOP *)v167, v154);
          }
        }
LABEL_496:
        v9 = 0LL;
        v168 = 0;
        if ( !(unsigned int)CheckPwndFilter(v37, *(_QWORD *)v305) )
        {
          v8 = a1;
LABEL_25:
          v10 = a8;
LABEL_26:
          v11 = a7;
          goto LABEL_27;
        }
        switch ( v106 )
        {
          case 0x201u:
            v169 = *(_QWORD *)(a1 + 392);
            if ( (_DWORD)v299 == 4 )
              *(_DWORD *)(v169 + 332) |= 0x800000u;
            else
              *(_DWORD *)(v169 + 332) &= ~0x800000u;
            v170 = *(_QWORD *)(a1 + 392);
            if ( (_DWORD)v299 == 8 )
              *(_DWORD *)(v170 + 332) |= 0x1000000u;
            else
              *(_DWORD *)(v170 + 332) &= ~0x1000000u;
            goto LABEL_504;
          case 0x202u:
          case 0x205u:
          case 0x208u:
          case 0x20Cu:
            goto LABEL_592;
          case 0x204u:
          case 0x207u:
          case 0x20Bu:
LABEL_504:
            if ( (*(_BYTE *)(*((_QWORD *)v37 + 19) + 84LL) & 8) == 0 && *(_DWORD *)(*(_QWORD *)(a1 + 392) + 108LL) != 1 )
            {
              v171 = *(_QWORD *)(a1 + 536);
              if ( !v171 || (*(_DWORD *)(v171 + 8) & 1) == 0 )
                goto LABEL_592;
            }
            v168 = 1;
            v172 = *(_QWORD *)(a1 + 392);
            if ( (unsigned int)v295 > *(_DWORD *)(v172 + 120)
              || gbClientDoubleClickSupport
              || *(_QWORD *)v37 != *(_QWORD *)(v172 + 128)
              || v106 != *(_DWORD *)(v172 + 112)
              || v106 == 523 && WORD1(v294[0]) != *(_WORD *)(v172 + 116) )
            {
              goto LABEL_592;
            }
            v174 = IsDPIAbsoluteSysMet(36LL);
            if ( v174 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v173) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v175) + 776) & 0x4000) == 0 )
              {
                goto LABEL_524;
              }
            }
            else if ( (unsigned int)IsDPIDWMSysMet(v173)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v176) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v177) + 776) & 0x4000) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1) != 0 )
              {
                v37 = v280;
LABEL_524:
                v178 = (_DWORD *)(gpsi + 2412LL);
                goto LABEL_533;
              }
              v37 = v280;
            }
            if ( !(unsigned int)IsDPIDWMSysMet(36LL)
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v179) + 776) & 0x2000) == 0 )
            {
              goto LABEL_532;
            }
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1) != 0 )
            {
              v178 = (_DWORD *)(gpsi + 2800LL);
              v37 = v280;
            }
            else
            {
              v37 = v280;
LABEL_532:
              v178 = (_DWORD *)(gpsi + 2024LL);
            }
LABEL_533:
            v334[0] = *(_DWORD *)(*(_QWORD *)(a1 + 392) + 136LL) - *v178 / 2;
            v181 = IsDPIAbsoluteSysMet(37LL);
            if ( v181 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v180) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v182) + 776) & 0x4000) == 0 )
              {
                goto LABEL_543;
              }
            }
            else if ( (unsigned int)IsDPIDWMSysMet(v180)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v183) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v184) + 776) & 0x4000) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1) != 0 )
              {
                v37 = v280;
LABEL_543:
                v185 = (_DWORD *)(gpsi + 2416LL);
                goto LABEL_552;
              }
              v37 = v280;
            }
            if ( !(unsigned int)IsDPIDWMSysMet(37LL)
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v186) + 776) & 0x2000) == 0 )
            {
              goto LABEL_551;
            }
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1) != 0 )
            {
              v185 = (_DWORD *)(gpsi + 2804LL);
              v37 = v280;
            }
            else
            {
              v37 = v280;
LABEL_551:
              v185 = (_DWORD *)(gpsi + 2028LL);
            }
LABEL_552:
            v187 = *v185 / 2;
            v188 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 392) + 140LL) - v187);
            v334[1] = *(_DWORD *)(*(_QWORD *)(a1 + 392) + 140LL) - v187;
            if ( v174 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v188) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v189) + 776) & 0x4000) == 0 )
              {
                goto LABEL_562;
              }
            }
            else if ( (unsigned int)IsDPIDWMSysMet(36LL)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v190) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v191) + 776) & 0x4000) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1) != 0 )
              {
                v37 = v280;
LABEL_562:
                v192 = (_DWORD *)(gpsi + 2412LL);
                goto LABEL_571;
              }
              v37 = v280;
            }
            if ( !(unsigned int)IsDPIDWMSysMet(36LL)
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v193) + 776) & 0x2000) == 0 )
            {
              goto LABEL_570;
            }
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1) != 0 )
            {
              v192 = (_DWORD *)(gpsi + 2800LL);
              v37 = v280;
            }
            else
            {
              v37 = v280;
LABEL_570:
              v192 = (_DWORD *)(gpsi + 2024LL);
            }
LABEL_571:
            v194 = *(_QWORD *)(a1 + 392);
            v334[2] = *(_DWORD *)(v194 + 136) + *v192 / 2;
            if ( v181 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v194) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v195) + 776) & 0x4000) == 0 )
              {
                goto LABEL_581;
              }
            }
            else if ( (unsigned int)IsDPIDWMSysMet(37LL)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v196) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v197) + 776) & 0x4000) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1) != 0 )
              {
                v37 = v280;
LABEL_581:
                v198 = (_DWORD *)(gpsi + 2416LL);
                goto LABEL_590;
              }
              v37 = v280;
            }
            if ( !(unsigned int)IsDPIDWMSysMet(37LL)
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v199) + 776) & 0x2000) == 0 )
            {
              goto LABEL_589;
            }
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1) != 0 )
            {
              v198 = (_DWORD *)(gpsi + 2804LL);
              v37 = v280;
            }
            else
            {
              v37 = v280;
LABEL_589:
              v198 = (_DWORD *)(gpsi + 2028LL);
            }
LABEL_590:
            v334[3] = *(_DWORD *)(*(_QWORD *)(a1 + 392) + 140LL) + *v198 / 2;
            v200 = PtInRect(v334, *(_QWORD *)((char *)&v295 + 4));
            v106 = v278;
            if ( v200 )
            {
              v106 = v278 + 2;
              v278 += 2;
              v168 = 2;
            }
LABEL_592:
            v201 = *(_QWORD *)(a1 + 392);
            v202 = *(_DWORD *)(v201 + 332);
            if ( (v202 & 8) != 0 )
              *(_DWORD *)(v201 + 332) = v202 | 4;
            if ( v106 - 514 <= 0xA )
            {
              v203 = 1097;
              if ( _bittest(&v203, v106 - 514) )
              {
                if ( *(_DWORD *)(*(_QWORD *)(a1 + 392) + 120LL) && (((_DWORD)v299 - 4) & 0xFFFFFFFB) == 0 )
                {
                  if ( (_DWORD)v299 == 4 )
                  {
                    TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x12Cu, 0xB4u, 5u, 1);
                  }
                  else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                  {
                    TouchTimeFromCPLValue = *((_DWORD *)off_1C031B208 + 11);
                    if ( TouchTimeFromCPLValue == -1 )
                      TouchTimeFromCPLValue = *((_DWORD *)off_1C031B208 + 10);
                  }
                  else
                  {
                    TouchTimeFromCPLValue = gdtDblClk;
                  }
                  *(_DWORD *)(*(_QWORD *)(a1 + 392) + 120LL) = DWORD2(v300) + TouchTimeFromCPLValue;
                }
                v205 = *(_QWORD *)(a1 + 392);
                if ( *(_DWORD *)(v205 + 120) && (_DWORD)v299 == 18 )
                  *(_DWORD *)(v205 + 120) = dword_1C0323688 + DWORD2(v300);
              }
            }
LABEL_609:
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v155 + 392LL) + 108LL) == 1 )
            {
              v106 -= 352;
              v278 = v106;
              v285 = v281;
            }
            v206 = v288;
            v8 = a1;
            if ( !(unsigned int)MiPCheckMsgFilter(v288, v106, v290, a5) )
              goto LABEL_25;
            if ( v282 )
              goto LABEL_809;
            if ( v106 - 512 <= 0xE && (*(_DWORD *)(a1 + 448) & 0x8000) != 0 )
              goto LABEL_25;
            v207 = *(_DWORD *)(a1 + 448);
            if ( (v207 & 0x100000) != 0 )
            {
              *(_DWORD *)(a1 + 448) = v207 & 0xFFEFFFFF;
              xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
            }
            v311 = *(struct tagPOINT *)((char *)&v295 + 4);
            v312 = *(_QWORD *)v37;
            v313 = v281;
            v314 = *((_QWORD *)&v296 + 1);
            v315 = v294[0];
            v74 = v277;
            if ( v277 )
            {
              if ( v106 != 512 && v106 != 160 )
              {
                v287 = 1;
                if ( (unsigned int)xxxCallCtfHook(7, 0, v106, (__int64)&v311) )
                  goto LABEL_739;
              }
            }
            if ( ((*(_DWORD *)(a1 + 608) | *(_DWORD *)(*(_QWORD *)(a1 + 424) + 24LL)) & 0x100) != 0 )
            {
              v287 = 1;
              if ( (unsigned int)xxxCallMouseHook(v106, &v311, v74) )
                goto LABEL_739;
            }
            if ( (*(_DWORD *)(a1 + 1080) & 0x2000) == 0 && ((v281 + 2) & 0xFFFFFFFD) == 0 )
            {
              v229 = 0LL;
              if ( v303 )
              {
                CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v37);
                v229 = (__int64)CompositionInputWindowUIOwner;
                if ( CompositionInputWindowUIOwner )
                {
                  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                  v229 = TopLevelWindow;
                  v332 = *(_QWORD *)(a1 + 376);
                  *(_QWORD *)(a1 + 376) = &v332;
                  v333 = TopLevelWindow;
                  if ( TopLevelWindow )
                  {
                    ++*(_DWORD *)(TopLevelWindow + 8);
                    v232 = *(_QWORD *)TopLevelWindow;
                  }
                  else
                  {
                    v232 = 0LL;
                  }
                  xxxSendMessage(
                    (struct tagWND *)TopLevelWindow,
                    0x20u,
                    v232,
                    (unsigned __int16)v281 | (LOWORD(v293[2]) << 16));
                  ThreadUnlock1(v234, v233);
                }
              }
              if ( !v229 )
                xxxSendMessage(v37, 0x20u, *(_QWORD *)v37, (unsigned __int16)v281 | (LOWORD(v293[2]) << 16));
              v235 = v288;
              if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 392) + 40LL) == v288
                && v288
                && (unsigned int)IsMouseInPointerActive(a1, v288)
                && (*((_DWORD *)v235 + 23) & 0x400) != 0
                && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v235 + 112))
                && IsMiPMouseMessage(*((_DWORD *)v235 + 6)) )
              {
                GeneratePointerMessageFromMouse((struct tagQMSG *)v385, v106, v235, v37, v74);
                SetMiPPromotion(*((_QWORD *)v37 + 2), v386);
              }
              goto LABEL_739;
            }
            if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 392) + 40LL) != v206 )
            {
              gdwMiPPathTaken = v276 | 0x40000;
              goto LABEL_809;
            }
            v366 = v292;
            v367 = *(_OWORD *)v293;
            v368 = *(_OWORD *)v294;
            v369 = v295;
            v370 = v296;
            v371 = *(_OWORD *)&v297[0].x;
            v372 = v298;
            v373 = v299;
            v374 = v300;
            if ( v206 && (unsigned int)IsMouseInPointerActive(a1, v206) )
            {
              v208 = v106;
              DWORD2(v367) = v106;
              *(_QWORD *)&v368 = v285;
              if ( (*((_DWORD *)v288 + 23) & 0x400) != 0 )
              {
                v209 = *(_QWORD *)(a1 + 1120);
                if ( v209 && (*(_DWORD *)v209 & 1) != 0 )
                {
                  v355 = *(_OWORD *)(v209 + 24);
                  v356 = *(_OWORD *)(v209 + 40);
                  v357 = *(_OWORD *)(v209 + 56);
                  v358 = *(_OWORD *)(v209 + 72);
                  v359 = *(_OWORD *)(v209 + 88);
                  v360 = *(_OWORD *)(v209 + 104);
                  LODWORD(v9) = 1;
                }
                PointerMessageFromMouse = GeneratePointerMessageFromMouse((struct tagQMSG *)&v375, v106, v288, v37, v74);
                v211 = v276;
                if ( PointerMessageFromMouse )
                {
                  v211 = v276 | 1;
                  v276 = v211;
                  gdwMiPPathTaken = v211;
                  v292 = v375;
                  *(__m128i *)v293 = v376;
                  *(_OWORD *)v294 = v377;
                  v295 = v378;
                  v296 = v379;
                  *(_OWORD *)&v297[0].x = v380;
                  v298 = v381;
                  v299 = v382;
                  v300 = v383;
                  v289 = 1;
                  v212 = _mm_cvtsi128_si32(_mm_srli_si128(v376, 8));
                  if ( v212 == 582 )
                  {
                    *(_QWORD *)(*(_QWORD *)(a1 + 392) + 384LL) = *(_QWORD *)v37;
                    v211 |= 0x4000u;
                  }
                  else
                  {
                    if ( ((v212 - 579) & 0xFFFFFFFB) != 0 )
                      goto LABEL_638;
                    *(_QWORD *)(*(_QWORD *)(a1 + 392) + 384LL) = 0LL;
                    v211 |= 0x8000u;
                  }
                  gdwMiPPathTaken = v211;
                  v276 = v211;
                }
LABEL_638:
                v213 = v288;
                if ( v74 )
                {
                  v276 = v211 | 2;
                  gdwMiPPathTaken = v211 | 2;
                  *((_DWORD *)v288 + 23) &= ~0x400u;
                  goto LABEL_649;
                }
LABEL_701:
                v225 = v289;
                goto LABEL_702;
              }
              if ( !v74 )
                goto LABEL_701;
              if ( IsMiPMouseMessage(*((_DWORD *)v288 + 6)) )
              {
                if ( (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v213 + 112)) )
                {
                  v214 = *(_DWORD **)(a1 + 1120);
                  if ( v214 )
                  {
                    if ( (*v214 & 2) == 0 && (*v214 & 4) == 0 )
                    {
                      v128 = v276 | 4;
                      goto LABEL_699;
                    }
                  }
                }
                v276 |= 8u;
                gdwMiPPathTaken = v276;
                v215 = *(_DWORD **)(a1 + 1120);
                if ( v215 )
                  *v215 &= ~2u;
              }
            }
            else
            {
              v208 = DWORD2(v367);
              v213 = v288;
            }
LABEL_649:
            if ( !v74 )
              goto LABEL_701;
            if ( (v208 == 512 || v208 == 160)
              && *(_QWORD *)v37 != gMiPTracking
              && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v213 + 112)) )
            {
              v217 = HMValidateHandleNoSecure(v216, 1);
              v218 = v217;
              if ( v217 )
              {
                v219 = *(_QWORD *)(v217 + 16);
                if ( (unsigned int)IsMouseInPointerActive(v219, 0LL) )
                {
                  if ( (GetMiPWindowFlags((struct tagWND *)v218) & 1) == 0 )
                  {
                    if ( v219 == a1 )
                    {
                      v220 = *(_QWORD *)(a1 + 1120);
                      v364 = *(_OWORD *)(v220 + 24);
                      v362 = *(_OWORD *)(v220 + 40);
                      v365 = *(_OWORD *)(v220 + 56);
                      v363 = *(_OWORD *)(v220 + 72);
                      v353 = *(_OWORD *)(v220 + 88);
                      v354 = *(_OWORD *)(v220 + 104);
                      if ( (_DWORD)v9 )
                      {
                        *(_OWORD *)(v220 + 24) = v355;
                        *(_OWORD *)(v220 + 40) = v356;
                        *(_OWORD *)(v220 + 56) = v357;
                        *(_OWORD *)(v220 + 72) = v358;
                        *(_OWORD *)(v220 + 88) = v359;
                        *(_OWORD *)(v220 + 104) = v360;
                      }
                      v346 = *(_QWORD *)v218;
                      v347 = 586;
                      v348 = ((*(_DWORD *)(*(_QWORD *)(a1 + 1120) + 36LL) & 0xE1F7u) << 16) | 1LL;
                      v349 = 0LL;
                      v350 = 0LL;
                      v351 = 0LL;
                      v361[0] = *(_QWORD *)(gptiCurrent + 376LL);
                      *(_QWORD *)(gptiCurrent + 376LL) = v361;
                      v361[1] = v218;
                      ++*(_DWORD *)(v218 + 8);
                      FindTimer(v218, 65523, 2, 1, 0LL);
                      if ( (gdwPostMortemLogging & 1) != 0 )
                        _LogQMsgMiP(1u, (const struct tagMSG *)&v346, v276);
                      _InterlockedIncrement(&glSendMessage);
                      xxxSendTransformableMessageTimeout((struct tagWND *)v218, 0x24Au, v348, 0LL, 0, 0, 0LL, 1, 0);
                      ThreadUnlock1(v222, v221);
                      v74 = v277;
                      v37 = v280;
                      if ( (_DWORD)v9 )
                      {
                        v223 = *(_QWORD *)(a1 + 1120);
                        *(_OWORD *)(v223 + 24) = v364;
                        *(_OWORD *)(v223 + 40) = v362;
                        *(_OWORD *)(v223 + 56) = v365;
                        *(_OWORD *)(v223 + 72) = v363;
                        *(_OWORD *)(v223 + 88) = v353;
                        *(_OWORD *)(v223 + 104) = v354;
                      }
                    }
                    else
                    {
                      PostEventMessageEx(v219, *(_QWORD *)(v219 + 392), 21, v218, 0, 0LL, 0LL, 0LL);
                    }
                  }
                }
              }
              if ( v289 )
                gMiPTracking = *(_QWORD *)v37;
              else
                gMiPTracking = 0LL;
              v224 = v276 | 0x80000;
              v276 = v224;
              gdwMiPPathTaken = v224;
              v106 = v278;
            }
            else
            {
              v224 = v276;
            }
            v225 = v289;
            if ( !v289 )
            {
              v276 = v224 | 0x10;
              gdwMiPPathTaken = v224 | 0x10;
              v226 = v168 - 1;
              if ( v226 )
              {
                v9 = 0LL;
                if ( v226 == 1 )
                  *(_DWORD *)(*(_QWORD *)(a1 + 392) + 120LL) = 0;
                goto LABEL_676;
              }
              *(_DWORD *)(*(_QWORD *)(a1 + 392) + 112LL) = v293[2];
              *(_WORD *)(*(_QWORD *)(a1 + 392) + 116LL) = WORD1(v294[0]);
              *(_DWORD *)(*(_QWORD *)(a1 + 392) + 120LL) = gdtDblClk + v295;
              *(_QWORD *)(*(_QWORD *)(a1 + 392) + 128LL) = *(_QWORD *)v37;
              *(_QWORD *)(*(_QWORD *)(a1 + 392) + 136LL) = *(_QWORD *)((char *)&v295 + 4);
            }
            v9 = 0LL;
LABEL_676:
            v227 = &v366;
            if ( !v225 )
              v227 = &v292;
            v228 = xxxMouseActivate(
                     (struct tagTHREADINFO *)a1,
                     v37,
                     *((_DWORD *)v227 + 6),
                     *((_QWORD *)v227 + 4),
                     (_DWORD *)v227 + 13,
                     v281)
                 - 1;
            if ( !v228 )
              goto LABEL_739;
            if ( v228 == 1 )
            {
              v49 = v293[2];
              v29 = (unsigned __int64)v288;
              continue;
            }
LABEL_702:
            if ( v74 )
            {
              xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v292);
              if ( v287 )
              {
                if ( ((*(_BYTE *)(a1 + 608) | *(_BYTE *)(*(_QWORD *)(a1 + 424) + 24LL)) & 0x40) != 0 )
                  xxxCallHook(6, v106, (__int64)&v311, 5u);
              }
            }
            v9 = 0LL;
            v287 = 0;
            v283 = (LOWORD(v284.y) << 16) | LOWORD(v284.x);
            if ( v106 >= 0x200 )
              v285 = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 392));
            if ( (v106 - 171 <= 2 || v106 - 523 <= 2) && !v225 )
              v285 |= v294[0];
            v236 = *(_QWORD *)(a1 + 536);
            if ( v281 == 5
              && v74
              && v236
              && (*(_DWORD *)(v236 + 8) & 0x100) != 0
              && *(_QWORD *)v236
              && (**(_DWORD **)v236 & 1) != 0 )
            {
              MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                (MenuStateOwnerLockxxxUnlock *)&v322,
                *(struct tagMENUSTATE **)(a1 + 536));
              if ( (unsigned int)xxxCallHandleMenuMessages(v237, (_DWORD)v37, v106, v285, v283) )
              {
                v10 = a8;
                v11 = a7;
                if ( v322 )
                  xxxUnlockMenuState(v322);
                goto LABEL_23;
              }
              if ( v322 )
                xxxUnlockMenuState(v322);
            }
            if ( !v225 )
              goto LABEL_774;
            v125 = v276 | 0x20;
            v276 = v125;
            gdwMiPPathTaken = v125;
            v124 = v288;
LABEL_725:
            v49 = v293[2];
LABEL_726:
            if ( (((_DWORD)v299 - 2) & 0xFFFFFFEF) == 0 )
            {
              v278 = v49;
              v285 = v294[0];
              v283 = v294[1];
LABEL_754:
              if ( v74 )
              {
                if ( (unsigned int)IsMouseInPointerActive(v8, 0LL) && v289 )
                {
                  v244 = v125 | 0x400;
                  gdwMiPPathTaken = v244;
                  if ( v37 )
                    v245 = *(_QWORD *)v37;
                  else
                    v245 = 0LL;
                  *(_QWORD *)(*(_QWORD *)(v8 + 1120) + 48LL) = v245;
                  v246 = *(_QWORD *)(v8 + 1120);
                  v247 = *(_DWORD *)(v246 + 36);
                  if ( (v247 & 0x400000) != 0 && !IsCompositionInputWindow(v37) )
                    *(_DWORD *)(v246 + 36) = v247 & 0xFFBFFFFF;
                  MiPWindowFlags = GetMiPWindowFlags(v37);
                  SetMiPWindowFlags(v249, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
                  if ( ((v293[2] - 578) & 0xFFFFFFFB) != 0 )
                  {
                    if ( ((v293[2] - 579) & 0xFFFFFFFB) == 0 )
                      **(_DWORD **)(v8 + 1120) &= ~8u;
                  }
                  else
                  {
                    gdwMiPPathTaken = v244 | 0x1000;
                    **(_DWORD **)(v8 + 1120) ^= (**(_DWORD **)(v8 + 1120) ^ (8 * (v293[2] == 578))) & 8;
                  }
                }
                else
                {
                  gdwMiPPathTaken = v125 | 0x800;
                  xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v292);
                }
              }
              if ( (unsigned int)IsPointerMessageTouchpad((struct tagTHREADINFO *)v8, v294[1], v289) )
              {
                if ( !v74 )
                  xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v292);
                v250 = v283;
                if ( v49 == 595 )
                  v250 = -1LL;
                v283 = v250;
              }
              goto LABEL_774;
            }
            EtwTraceBeginPointerMessageRetrieve(v124, LOWORD(v294[0]), v49);
            v9 = 0LL;
            v238 = xxxRetrievePointerInputMessage(
                     v8,
                     v305[0],
                     v290,
                     a5,
                     1,
                     0,
                     &v277,
                     v124,
                     (__int64)&v280,
                     (__int64)&v278,
                     (__int64)&v285,
                     (__int64)&v283,
                     &v282,
                     a8);
            EtwTraceEndPointerMessageRetrieve(v124, LOWORD(v294[0]), v293[2]);
            v37 = v280;
            if ( v280 )
              ThreadLockExchange((__int64)v280, (__int64)&v308);
            v239 = v238 - 1;
            if ( !v239 )
            {
              v74 = v277;
              v49 = v278;
              goto LABEL_754;
            }
            v240 = v239 - 1;
            if ( v240 )
            {
              v241 = v240 - 1;
              if ( v241 )
              {
                if ( v241 == 1 )
                  goto LABEL_735;
              }
              else
              {
                xxxDefPointerProc(v37, v293[2], v294[0], v294[1]);
              }
              goto LABEL_737;
            }
            if ( v282 )
            {
              v35 = *((_QWORD *)v37 + 2);
              LockExchangeW32Thread(v35, (__int64)&v323);
              v33 = v286;
              v34 = 0LL;
              goto LABEL_812;
            }
LABEL_809:
            v34 = 0LL;
LABEL_810:
            v33 = v286;
LABEL_811:
            v35 = 0LL;
LABEL_812:
            *(_QWORD *)(*(_QWORD *)(v8 + 392) + 32LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)(v8 + 392) + 24LL) = 0LL;
            **(_DWORD **)(v8 + 408) &= ~1u;
            v262 = v304;
            if ( v307 )
            {
              SetWakeBit(v307, 16385LL);
              ClearWakeBit(v8, 16385LL, 0LL);
            }
            else if ( !v33 && !v34 && !v304 && !v35 )
            {
              *(_WORD *)(*(_QWORD *)(v8 + 408) + 8LL) = 0;
              v263 = 31751;
              v264 = *(_QWORD *)(v8 + 392);
              if ( !*(_DWORD *)(v264 + 16) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 48LL) )
              {
                if ( (*(_BYTE *)(v264 + 332) & 0x20) != 0 )
                  v263 = 31749;
                *(_WORD *)(*(_QWORD *)(v8 + 408) + 6LL) &= ~v263;
              }
              goto LABEL_834;
            }
            if ( v33 )
            {
              SetWakeBit(v33, 16390LL);
              ClearWakeBit(v8, 16390LL, 0LL);
            }
            if ( v262 )
            {
              SetWakeBit(v262, 17408LL);
              ClearWakeBit(v8, 17408LL, 0LL);
            }
            if ( v35 )
            {
              SetWakeBit(v35, 20480LL);
              ClearWakeBit(v8, 20480LL, 0LL);
            }
            if ( v34 )
            {
              SetWakeBit(v34, 8256LL);
              ClearWakeBit(v8, 0x2000LL, 0LL);
            }
            else if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 48LL) )
            {
              *(_WORD *)(*(_QWORD *)(v8 + 408) + 8LL) |= *(_WORD *)(*(_QWORD *)(v8 + 408) + 6LL) & 0x5C07;
              ClearWakeBit(v8, 23559LL, 0LL);
              *(_WORD *)(*(_QWORD *)(v8 + 408) + 4LL) &= 0xA3F8u;
            }
LABEL_834:
            v265 = 0LL;
            v266 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v266 )
              v265 = *v266;
            *(_QWORD *)(v265 + 16) = v323;
            if ( v324 )
              v325();
            v267 = 0LL;
            v268 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v268 )
              v267 = *v268;
            *(_QWORD *)(v267 + 16) = v326;
            if ( v327 )
              v328();
            v269 = 0LL;
            v270 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v270 )
              v269 = *v270;
            *(_QWORD *)(v269 + 16) = v329;
            if ( v330 )
              v331();
            v271 = 0LL;
            v272 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v272 )
              v271 = *v272;
            *(_QWORD *)(v271 + 16) = v319;
            if ( v320 )
              v321();
            v273 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v273 )
              v9 = *v273;
            *(_QWORD *)(v9 + 16) = v316;
            v275 = v317;
            if ( v317 )
              v318();
            ThreadUnlock1(v275, v274);
            return 0LL;
          default:
            goto LABEL_609;
        }
      }
  }
}
