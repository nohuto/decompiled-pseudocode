/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0008554 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0008B38 (-DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C000AF9C (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000D13C (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C000E28C (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C000E2AC (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PostMoveToPwnd @ 0x1C0056F40 (PostMoveToPwnd.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C00579F0 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C0058128 (IsPointerInputMessage.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C005814C (-IsMiPMouseMessage@@YAHI@Z.c)
 *     IsThreadDesktopComposed @ 0x1C0058D20 (IsThreadDesktopComposed.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     CheckPwndFilter @ 0x1C005C388 (CheckPwndFilter.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C005DA08 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     ThreadLockExchange @ 0x1C00777C4 (ThreadLockExchange.c)
 *     zzzSetCursor @ 0x1C0078168 (zzzSetCursor.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C007A4F0 (xxxDCEWindowHitTestIndirect.c)
 *     xxxCallCtfHook @ 0x1C007F1EC (xxxCallCtfHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     GetMouseKeyFlags @ 0x1C00948F4 (GetMouseKeyFlags.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00997E8 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     LockExchangeW32Thread @ 0x1C009C7A8 (LockExchangeW32Thread.c)
 *     _PostTransformableMessage @ 0x1C009CF34 (_PostTransformableMessage.c)
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A8094 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     HKLtoPKL @ 0x1C00E8460 (HKLtoPKL.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00FDF30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C01053E8 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     IsMouseInPointerActive @ 0x1C01054A0 (IsMouseInPointerActive.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 *     xxxMouseActivate @ 0x1C0109300 (xxxMouseActivate.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C010A8C8 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     xxxImmProcessKey @ 0x1C010B600 (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C010B8BC (GetAppImeCompatFlags.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C010BA70 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ClearWakeBit @ 0x1C010E3F0 (ClearWakeBit.c)
 *     TransferWakeBit @ 0x1C010ECC8 (TransferWakeBit.c)
 *     xxxWindowHitTest @ 0x1C0117FD0 (xxxWindowHitTest.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C0118264 (IsCompositionInputWindowUIDisabled.c)
 *     IsInsideMenuLoop @ 0x1C0120918 (IsInsideMenuLoop.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C0127B40 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     xxxCallMouseHook @ 0x1C0129C98 (xxxCallMouseHook.c)
 *     xxxUnlockMenuState @ 0x1C012CFD0 (xxxUnlockMenuState.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C012D824 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013ECC4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     MNItemHitTest @ 0x1C0142870 (MNItemHitTest.c)
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     _W32ExceptionHandler @ 0x1C01BF6B8 (_W32ExceptionHandler.c)
 *     DeferMessagesOnQueue @ 0x1C01CAE88 (DeferMessagesOnQueue.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01D20AC (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     IsWheelTargetDesktopApp @ 0x1C01D21F0 (IsWheelTargetDesktopApp.c)
 *     FreePointerMessageParams @ 0x1C01D74CC (FreePointerMessageParams.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01D7CD8 (xxxRetrievePointerInputMessage.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01D82CC (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     SetMiPPromotion @ 0x1C01D88CC (SetMiPPromotion.c)
 *     PhysicalToLogicalInPlacePoint @ 0x1C01DC23C (PhysicalToLogicalInPlacePoint.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01DD958 (xxxCallJournalPlaybackHook.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01F018C (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C020F130 (xxxCallHandleMenuMessages.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C0225664 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 *     xxxDefPointerProc @ 0x1C022A614 (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C022A828 (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C022ABA0 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C023ABC4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C023D260 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall xxxScanSysQueue(
        struct tagTHREADINFO *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  __int64 v8; // r12
  __int16 v9; // cx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r15
  unsigned int v39; // r13d
  __int64 v40; // r9
  __int64 v41; // rbx
  int v42; // r14d
  __int64 Valid; // rcx
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned __int64 *v46; // rax
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // r13
  unsigned __int64 v52; // rbx
  struct tagWND *v53; // r14
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rcx
  __int64 v61; // rbx
  _QWORD *v62; // rdx
  int v63; // eax
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int v66; // esi
  __int64 v67; // rcx
  int v68; // r14d
  unsigned __int64 v69; // r11
  __int64 v70; // rdx
  __int16 *v71; // rcx
  char v72; // al
  bool v74; // zf
  __int64 v75; // r10
  int v76; // ebx
  __int64 v77; // rcx
  _BOOL8 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rcx
  _QWORD *v82; // rax
  __int64 v83; // r10
  __int64 v84; // r12
  __int64 v85; // rcx
  __int64 *v86; // rbx
  int v87; // r15d
  unsigned int v88; // r14d
  int v89; // ebx
  __int64 v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // r10
  int v94; // r9d
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // r11
  __int64 v98; // rdx
  _DWORD *v99; // rcx
  char v100; // al
  bool v101; // zf
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 *v104; // rbx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 *v107; // rax
  __int64 v108; // rcx
  int v109; // ebx
  unsigned __int8 v110; // r8
  int v111; // edx
  int v112; // r9d
  __int64 v113; // r10
  __int64 v114; // rcx
  int v115; // eax
  char v116; // dl
  __int64 v117; // rcx
  __int64 v118; // rbx
  int v119; // eax
  int v120; // ebx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rcx
  int v125; // ebx
  __int64 v126; // rax
  __int64 *v127; // rax
  __int64 v128; // rcx
  unsigned int v129; // edi
  unsigned int v130; // ebx
  InteractiveControlManager *v131; // rax
  int v132; // ecx
  int v133; // ecx
  __int64 ThreadDesktopWindow; // rax
  HWND v135; // rax
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // rcx
  int v143; // ebx
  unsigned int v144; // esi
  int v145; // ecx
  _DWORD *v146; // rax
  _DWORD *v147; // rax
  unsigned int v148; // eax
  char v149; // al
  unsigned __int64 v150; // rsi
  int v151; // ebx
  int v152; // r8d
  __int64 v153; // rax
  struct tagWND *v154; // rcx
  int v155; // r8d
  __int64 v156; // r9
  int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  HWND v160; // rbx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // rax
  __int64 v168; // rcx
  unsigned __int64 v169; // rax
  unsigned __int64 v170; // rax
  struct tagPOINT v171; // r8
  unsigned __int64 v172; // rbx
  char *v173; // r12
  int v174; // edx
  int v175; // edx
  int v176; // eax
  BOOL v177; // r15d
  unsigned __int16 v178; // di
  __int64 v179; // rsi
  int v180; // eax
  unsigned __int64 v181; // rcx
  unsigned __int64 v182; // rcx
  unsigned __int64 v183; // rcx
  int v184; // edx
  __int64 v185; // r8
  int v186; // esi
  int v187; // r15d
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // rdx
  unsigned __int64 v193; // rcx
  int v194; // ebx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rdx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rdx
  __int64 v205; // r8
  __int64 v206; // r9
  _DWORD *v207; // rdx
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // rdx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rdx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rdx
  unsigned __int64 v219; // rcx
  int v220; // edi
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // rdx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rdx
  __int64 v233; // r8
  __int64 v234; // r9
  int *v235; // rdx
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // rdx
  __int64 v239; // rdx
  __int64 v240; // kr08_8
  int v241; // eax
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rdx
  __int64 v250; // r8
  __int64 v251; // r9
  __int64 v252; // rdx
  __int64 v253; // r8
  __int64 v254; // r9
  int *v255; // rdx
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // rdx
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // kr10_8
  __int64 v262; // rdx
  __int64 v263; // rcx
  __int64 v264; // r8
  __int64 v265; // r9
  __int64 v266; // rdx
  __int64 v267; // r8
  __int64 v268; // r9
  __int64 v269; // rdx
  __int64 v270; // r8
  __int64 v271; // r9
  _DWORD *v272; // rdx
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rdx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 v280; // rdx
  __int64 v281; // r8
  __int64 v282; // r9
  BOOL v283; // eax
  __int64 v284; // rcx
  int v285; // eax
  int v286; // ecx
  unsigned int TouchTimeFromCPLValue; // ecx
  __int64 v288; // rdx
  struct tagQMSG *v289; // rbx
  int v290; // eax
  int v291; // ebx
  __int64 v292; // rcx
  int v293; // eax
  struct tagQMSG *v294; // r11
  _DWORD *v295; // rax
  _DWORD *v296; // rax
  __int64 v297; // rdx
  __int64 v298; // r8
  __int64 v299; // r9
  unsigned __int64 v300; // r10
  __int64 v301; // rax
  __int64 v302; // rdi
  __int64 v303; // rbx
  __int64 v304; // rax
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // rax
  int v308; // ebx
  int v309; // r15d
  __int128 *v310; // rdx
  int v311; // eax
  __int64 v312; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  unsigned __int64 v315; // r8
  __int64 v316; // rdx
  __int64 v317; // rcx
  struct tagQMSG *v318; // rbx
  __int64 v319; // r10
  int v320; // r10d
  int v321; // ebx
  int v322; // ebx
  int v323; // ebx
  int v324; // ebx
  __int64 v325; // rax
  __int64 v326; // rax
  __int64 v327; // r14
  int v328; // eax
  unsigned __int16 v329; // si
  unsigned __int64 v330; // rcx
  __int64 v331; // rbx
  int v332; // r11d
  __int64 MiPWindowFlags; // rax
  __int64 v334; // rax
  struct tagQMSG *v335; // rbx
  unsigned __int64 v336; // rax
  __int64 v337; // r15
  _QWORD *v338; // rax
  unsigned int v339; // esi
  _DWORD *v340; // rax
  __int64 v341; // rax
  int v342; // eax
  __int64 v343; // rdx
  __int64 v344; // r8
  __int64 v345; // r9
  __int64 v346; // rdx
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 v349; // rdx
  __int64 v350; // r8
  __int64 v351; // r9
  __int64 v352; // rdx
  __int64 v353; // r8
  __int64 v354; // r9
  __int64 v355; // rdx
  __int64 v356; // r8
  __int64 v357; // r9
  __int64 v358; // rdx
  __int64 v359; // rcx
  __int64 v360; // rsi
  __int64 v361; // rbx
  __int64 *v362; // rax
  __int64 v363; // rdx
  __int64 v364; // r8
  __int64 v365; // r9
  __int64 v366; // rbx
  __int64 *v367; // rax
  __int64 v368; // rdx
  __int64 v369; // r8
  __int64 v370; // r9
  __int64 v371; // rbx
  __int64 *v372; // rax
  __int64 v373; // rdx
  __int64 v374; // r8
  __int64 v375; // r9
  __int64 v376; // rbx
  __int64 *v377; // rax
  __int64 v378; // rdx
  __int64 v379; // r8
  __int64 v380; // r9
  __int64 *v381; // rax
  __int64 v382; // rdx
  __int64 v383; // rcx
  int v384; // [rsp+70h] [rbp-6D8h] BYREF
  unsigned int v385; // [rsp+74h] [rbp-6D4h] BYREF
  int v386; // [rsp+78h] [rbp-6D0h]
  __int64 v387; // [rsp+80h] [rbp-6C8h] BYREF
  unsigned int v388; // [rsp+88h] [rbp-6C0h] BYREF
  struct tagPOINT v389; // [rsp+90h] [rbp-6B8h] BYREF
  int v390; // [rsp+98h] [rbp-6B0h] BYREF
  __int64 v391; // [rsp+A0h] [rbp-6A8h] BYREF
  __int64 v392; // [rsp+A8h] [rbp-6A0h]
  __int64 MouseKeyFlags; // [rsp+B0h] [rbp-698h] BYREF
  int v394; // [rsp+B8h] [rbp-690h]
  unsigned int v395; // [rsp+BCh] [rbp-68Ch]
  int v396; // [rsp+C0h] [rbp-688h]
  int v397; // [rsp+C4h] [rbp-684h]
  struct tagQMSG *v398; // [rsp+C8h] [rbp-680h]
  int v399; // [rsp+D0h] [rbp-678h]
  int v400; // [rsp+D8h] [rbp-670h]
  int v401; // [rsp+DCh] [rbp-66Ch]
  __int128 v402; // [rsp+E0h] [rbp-668h] BYREF
  unsigned int v403[4]; // [rsp+F0h] [rbp-658h] BYREF
  unsigned __int64 v404[2]; // [rsp+100h] [rbp-648h]
  __int128 v405; // [rsp+110h] [rbp-638h]
  __int128 v406; // [rsp+120h] [rbp-628h]
  __int128 v407; // [rsp+130h] [rbp-618h] BYREF
  __int128 v408; // [rsp+140h] [rbp-608h]
  __int128 v409; // [rsp+150h] [rbp-5F8h]
  __int128 v410; // [rsp+160h] [rbp-5E8h]
  __int64 v411; // [rsp+170h] [rbp-5D8h]
  __int64 v412; // [rsp+180h] [rbp-5C8h]
  int v413; // [rsp+188h] [rbp-5C0h]
  int v414[2]; // [rsp+198h] [rbp-5B0h]
  struct tagWND *v415; // [rsp+1A0h] [rbp-5A8h]
  int v416; // [rsp+1A8h] [rbp-5A0h]
  int v417; // [rsp+1ACh] [rbp-59Ch]
  __int64 v418; // [rsp+1B0h] [rbp-598h]
  __int64 v419; // [rsp+1B8h] [rbp-590h] BYREF
  __int64 v420; // [rsp+1C0h] [rbp-588h]
  int v421; // [rsp+1D0h] [rbp-578h]
  DWORD DefaultLocaleId; // [rsp+1D4h] [rbp-574h] BYREF
  struct tagPOINT v423; // [rsp+1D8h] [rbp-570h] BYREF
  unsigned __int64 v424; // [rsp+1E0h] [rbp-568h]
  unsigned int v425; // [rsp+1E8h] [rbp-560h]
  __int64 v426; // [rsp+1F0h] [rbp-558h]
  int v427; // [rsp+1F8h] [rbp-550h]
  __int64 v428; // [rsp+200h] [rbp-548h] BYREF
  __int64 v429; // [rsp+208h] [rbp-540h]
  void (*v430)(void); // [rsp+210h] [rbp-538h]
  __int64 v431; // [rsp+218h] [rbp-530h] BYREF
  __int64 v432; // [rsp+220h] [rbp-528h]
  void (*v433)(void); // [rsp+228h] [rbp-520h]
  __int64 v434; // [rsp+230h] [rbp-518h] BYREF
  __int64 v435; // [rsp+238h] [rbp-510h] BYREF
  __int64 v436; // [rsp+240h] [rbp-508h]
  __int64 v437; // [rsp+250h] [rbp-4F8h] BYREF
  __int64 v438; // [rsp+258h] [rbp-4F0h]
  void (*v439)(void); // [rsp+260h] [rbp-4E8h]
  __int64 v440; // [rsp+268h] [rbp-4E0h] BYREF
  __int64 v441; // [rsp+270h] [rbp-4D8h]
  void (*v442)(void); // [rsp+278h] [rbp-4D0h]
  __int64 v443; // [rsp+280h] [rbp-4C8h] BYREF
  __int64 v444; // [rsp+288h] [rbp-4C0h]
  void (*v445)(void); // [rsp+290h] [rbp-4B8h]
  struct InteractiveControlDevice *v446; // [rsp+298h] [rbp-4B0h] BYREF
  struct InteractiveControlInput *v447; // [rsp+2A0h] [rbp-4A8h] BYREF
  _DWORD v448[6]; // [rsp+2A8h] [rbp-4A0h] BYREF
  int v449; // [rsp+2C0h] [rbp-488h] BYREF
  unsigned __int64 v450; // [rsp+2C8h] [rbp-480h]
  unsigned __int64 v451; // [rsp+2D0h] [rbp-478h]
  unsigned int *v452; // [rsp+2D8h] [rbp-470h]
  int v453; // [rsp+2E0h] [rbp-468h]
  int v454; // [rsp+2E4h] [rbp-464h]
  char *v455; // [rsp+2E8h] [rbp-460h]
  int v456; // [rsp+2F0h] [rbp-458h]
  int v457; // [rsp+2F8h] [rbp-450h] BYREF
  unsigned __int64 v458; // [rsp+300h] [rbp-448h]
  unsigned __int64 v459; // [rsp+308h] [rbp-440h]
  unsigned int *v460; // [rsp+310h] [rbp-438h]
  __int64 v461; // [rsp+318h] [rbp-430h]
  __int64 v462; // [rsp+320h] [rbp-428h]
  int v463; // [rsp+328h] [rbp-420h]
  __int64 v464; // [rsp+330h] [rbp-418h] BYREF
  int v465; // [rsp+338h] [rbp-410h]
  __int64 v466; // [rsp+340h] [rbp-408h]
  __int64 v467; // [rsp+348h] [rbp-400h]
  __int64 v468; // [rsp+350h] [rbp-3F8h]
  __int64 v469; // [rsp+358h] [rbp-3F0h]
  __int128 v470; // [rsp+360h] [rbp-3E8h]
  __int128 v471; // [rsp+380h] [rbp-3C8h]
  __int128 v472; // [rsp+390h] [rbp-3B8h]
  __int128 v473; // [rsp+3A0h] [rbp-3A8h]
  _QWORD v474[3]; // [rsp+3B0h] [rbp-398h] BYREF
  _QWORD v475[3]; // [rsp+3C8h] [rbp-380h] BYREF
  __int128 v476; // [rsp+3E0h] [rbp-368h]
  __int128 v477; // [rsp+3F0h] [rbp-358h]
  __int128 v478; // [rsp+400h] [rbp-348h]
  __int128 v479; // [rsp+410h] [rbp-338h]
  __int128 v480; // [rsp+420h] [rbp-328h]
  __int128 v481; // [rsp+430h] [rbp-318h]
  __int128 v482; // [rsp+440h] [rbp-308h]
  __int128 v483; // [rsp+450h] [rbp-2F8h]
  unsigned __int64 v484; // [rsp+470h] [rbp-2D8h]
  __int64 v485; // [rsp+478h] [rbp-2D0h]
  __int64 v486; // [rsp+480h] [rbp-2C8h]
  __int64 v487; // [rsp+488h] [rbp-2C0h]
  __int128 v488; // [rsp+490h] [rbp-2B8h] BYREF
  __int128 v489; // [rsp+4A0h] [rbp-2A8h]
  __int128 v490; // [rsp+4B0h] [rbp-298h]
  __int128 v491; // [rsp+4C0h] [rbp-288h]
  __int128 v492; // [rsp+4D0h] [rbp-278h]
  __int128 v493; // [rsp+4E0h] [rbp-268h]
  __int128 v494; // [rsp+4F0h] [rbp-258h]
  __int128 v495; // [rsp+500h] [rbp-248h]
  __int128 v496; // [rsp+510h] [rbp-238h]
  __int64 v497; // [rsp+520h] [rbp-228h]
  _OWORD v498[9]; // [rsp+530h] [rbp-218h] BYREF
  __int64 v499; // [rsp+5C0h] [rbp-188h]
  __int128 v500; // [rsp+5D0h] [rbp-178h] BYREF
  __m128i v501; // [rsp+5E0h] [rbp-168h]
  __int128 v502; // [rsp+5F0h] [rbp-158h]
  __int128 v503; // [rsp+600h] [rbp-148h]
  __int128 v504; // [rsp+610h] [rbp-138h]
  __int128 v505; // [rsp+620h] [rbp-128h]
  __int128 v506; // [rsp+630h] [rbp-118h]
  __int128 v507; // [rsp+640h] [rbp-108h]
  __int128 v508; // [rsp+650h] [rbp-F8h]
  __int64 v509; // [rsp+660h] [rbp-E8h]
  char v510[24]; // [rsp+670h] [rbp-D8h] BYREF
  unsigned int v511; // [rsp+688h] [rbp-C0h]
  struct tagTHREADINFO *v512; // [rsp+750h] [rbp+8h]

  v512 = a1;
  v395 = a4;
  *(_QWORD *)v414 = a3;
  v8 = (__int64)a1;
  v391 = 0LL;
  v384 = a6 & 1;
  v401 = 0;
  v416 = 0;
  v394 = 0;
  LOBYTE(a1) = 0;
  v400 = (int)a1;
  *a8 = 0LL;
  v9 = a7;
  if ( a7 == 0x2000 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v8 + 384) + 48LL) )
    {
      EtwTraceInputQueueLockedPeekRecursion();
      return 0LL;
    }
    v9 = 0x2000;
  }
  v413 = 0;
  v396 = 0;
  v386 = 0;
  v10 = *(_QWORD *)(v8 + 384);
  if ( !*(_QWORD *)(v10 + 32) )
  {
    *(_QWORD *)(v10 + 32) = v8;
    **(_DWORD **)(v8 + 400) |= 1u;
  }
  if ( (v9 & 0x1C07) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 384);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v11 + 340) &= ~0x400u;
    else
      *(_DWORD *)(v11 + 340) |= 0x400u;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 384) + 32LL) != v8 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v392 = 0LL;
  v418 = 0LL;
  v412 = 0LL;
  v415 = 0LL;
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  v431 = *(_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 16) = &v431;
  v432 = 0LL;
  v18 = (__int64)DereferenceW32Thread;
  v433 = (void (*)(void))DereferenceW32Thread;
  v19 = 0LL;
  v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v15, v16, v17);
  if ( v20 )
    v19 = *v20;
  v428 = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 16) = &v428;
  v429 = 0LL;
  v430 = (void (*)(void))DereferenceW32Thread;
  v24 = 0LL;
  v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v21, v22, v23);
  if ( v25 )
    v24 = *v25;
  v443 = *(_QWORD *)(v24 + 16);
  *(_QWORD *)(v24 + 16) = &v443;
  v444 = 0LL;
  v445 = (void (*)(void))DereferenceW32Thread;
  v29 = 0LL;
  v30 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v26, v27, v28);
  if ( v30 )
    v29 = *v30;
  v440 = *(_QWORD *)(v29 + 16);
  *(_QWORD *)(v29 + 16) = &v440;
  v441 = 0LL;
  v442 = (void (*)(void))DereferenceW32Thread;
  v34 = 0LL;
  v35 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v31, v32, v33);
  if ( v35 )
    v34 = *v35;
  v437 = *(_QWORD *)(v34 + 16);
  *(_QWORD *)(v34 + 16) = &v437;
  v438 = 0LL;
  v439 = (void (*)(void))DereferenceW32Thread;
  v419 = *(_QWORD *)(v8 + 368);
  *(_QWORD *)(v8 + 368) = &v419;
  v420 = 0LL;
LABEL_24:
  v38 = 1LL;
LABEL_25:
  v39 = v384;
LABEL_26:
  *(_QWORD *)(*(_QWORD *)(v8 + 384) + 48LL) = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_28:
          v417 = (**(_DWORD **)(v8 + 432) >> 9) & 1;
          v40 = *(_QWORD *)(v8 + 384);
          v41 = *(_QWORD *)(v40 + 48);
          if ( !v41 )
          {
            v42 = 0;
            v394 = 0;
            LOBYTE(v18) = 0;
LABEL_32:
            v400 = v18;
            goto LABEL_33;
          }
          LODWORD(v18) = v400;
          v42 = v394;
          if ( !(_BYTE)v400 )
          {
            LODWORD(v18) = v394 != 0;
            goto LABEL_32;
          }
LABEL_33:
          v397 = 0;
          MouseKeyFlags = 0LL;
          v399 = 0;
          Valid = *(_QWORD *)(*(_QWORD *)(v8 + 416) + 48LL);
          if ( !Valid )
            goto LABEL_927;
          if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
            Valid = PhkNextValid(Valid, v36, v37);
          if ( Valid && (v44 = grpdeskRitInput, *(_QWORD *)(v8 + 408) == grpdeskRitInput) )
          {
            if ( v41 )
            {
              v38 = 0LL;
              v398 = 0LL;
            }
            else
            {
              v45 = xxxCallJournalPlaybackHook(&v402);
              v37 = v45;
              if ( v45 == -1 )
              {
                v38 = 0LL;
                v398 = 0LL;
              }
              else if ( v45 )
              {
                *(_WORD *)(*(_QWORD *)(v8 + 400) + 6LL) &= 0xE3F8u;
                *(_WORD *)(*(_QWORD *)(v8 + 400) + 4LL) &= 0xE3F8u;
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 352LL) = v403[2];
                qword_1C0329098 = InternalSetTimer(0LL, qword_1C0329098, v45, (__int64)JournalTimer, 32, 276);
                v38 = 0LL;
                v398 = 0LL;
              }
              else
              {
                WakeSomeone(*(_QWORD *)(v8 + 384), 0LL, v403[2], 0LL);
                HIDWORD(glinp[7]) |= 0x10u;
                v398 = (struct tagQMSG *)1;
              }
            }
          }
          else
          {
LABEL_927:
            if ( (*(_DWORD *)(v40 + 340) & 0x20) != 0 )
              PostMoveToPwnd(v40, 0LL, 0);
            v44 = *(_QWORD *)(v8 + 384);
            if ( !*(_DWORD *)(v44 + 16) )
            {
              v38 = 0LL;
              v398 = 0LL;
              goto LABEL_65;
            }
            if ( v41 && (v46 = *(unsigned __int64 **)(v44 + 48), (unsigned __int64)v46 > 1) )
              v38 = *v46;
            else
              v38 = *(_QWORD *)v44;
            v398 = (struct tagQMSG *)v38;
            if ( (*(_DWORD *)(v8 + 1096) & 0x2000) != 0 )
            {
              if ( !v38 )
                goto LABEL_65;
              do
              {
                v47 = *(_DWORD *)(v38 + 100);
                if ( (v47 & 0x20) == 0 )
                  break;
                if ( (v47 & 0x10) == 0 )
                  break;
                v38 = *(_QWORD *)v38;
                v398 = (struct tagQMSG *)v38;
              }
              while ( v38 );
            }
            if ( v38 )
            {
              v48 = *(_QWORD *)(v38 + 104);
              if ( v48 && v48 != v8 && (*(_DWORD *)(v48 + 440) & 0x10000) != 0 )
              {
                v38 = DeferMessagesOnQueue((struct tagMLIST *)v44);
                v398 = (struct tagQMSG *)v38;
              }
              if ( v38 )
              {
                v402 = *(_OWORD *)v38;
                *(_OWORD *)v403 = *(_OWORD *)(v38 + 16);
                *(_OWORD *)v404 = *(_OWORD *)(v38 + 32);
                v405 = *(_OWORD *)(v38 + 48);
                v406 = *(_OWORD *)(v38 + 64);
                v407 = *(_OWORD *)(v38 + 80);
                v408 = *(_OWORD *)(v38 + 96);
                v409 = *(_OWORD *)(v38 + 112);
                v410 = *(_OWORD *)(v38 + 128);
                v411 = *(_QWORD *)(v38 + 144);
              }
            }
          }
LABEL_65:
          *(_QWORD *)(*(_QWORD *)(v8 + 384) + 48LL) = v38;
          if ( v38 <= 1 )
            goto LABEL_87;
          v49 = DWORD1(v408);
          if ( (BYTE4(v408) & 0x20) != 0 )
          {
            *a8 = (struct tagQMSG *)v38;
            *(_DWORD *)(v38 + 100) |= 0x100u;
            v39 = 0;
            v384 = 0;
            v49 = DWORD1(v408);
          }
          if ( (v49 & 0x8000) == 0 )
            break;
          v38 = 1LL;
          if ( *((_QWORD *)&v408 + 1) == v8 )
            v42 = 1;
          v394 = v42;
          v400 = 1;
        }
        if ( (v49 & 0x20000) == 0 )
          break;
        v38 = 1LL;
        if ( *((_QWORD *)&v408 + 1) == v8 && v42 == 1 )
          v394 = 2;
      }
      if ( (_DWORD)v408 == 4 && (_BYTE)v18 )
      {
LABEL_78:
        DeferSysPeekMsg((struct tagTHREADINFO *)v8, 0);
        goto LABEL_27;
      }
      if ( v39 )
      {
        v44 = v403[2];
        if ( v42 && v403[2] - 256 <= 9 )
        {
          DeferSysPeekMsg((struct tagTHREADINFO *)v8, 0);
          v394 = 2;
          goto LABEL_27;
        }
        if ( v42 == 2 && (v403[2] - 512 <= 0xE || v403[2] - 160 <= 0xD) )
          goto LABEL_78;
      }
LABEL_87:
      if ( !*(_QWORD *)(*(_QWORD *)(v8 + 384) + 48LL) )
      {
        v50 = v392;
        if ( a7 == 0x2000 )
          *(_WORD *)(*(_QWORD *)(v8 + 400) + 6LL) &= ~0x2000u;
        v51 = 0LL;
        goto LABEL_879;
      }
      ThreadUnlock1(v44, v36);
      v52 = *(_QWORD *)v403;
      v51 = 0LL;
      v53 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread(), v54, v55, v56);
      v36 = (unsigned __int16)v52;
      if ( (unsigned __int64)(unsigned __int16)v52 < *(_QWORD *)(gpsi + 8LL) )
      {
        v18 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v52 * *((_DWORD *)&gSharedInfo + 4);
        v57 = v52 >> 16;
        if ( ((_WORD)v57 == *(_WORD *)(v18 + 18)
           || (_WORD)v57 == 0xFFFF
           || !(_WORD)v57 && PsGetCurrentProcessWow64Process(gSharedInfo))
          && (*(_BYTE *)(v18 + 17) & 1) == 0
          && *(_BYTE *)(v18 + 16) == 1 )
        {
          v53 = *(struct tagWND **)v18;
        }
      }
      v387 = (__int64)v53;
      v419 = *(_QWORD *)(v8 + 368);
      *(_QWORD *)(v8 + 368) = &v419;
      v420 = (__int64)v53;
      if ( v53 )
        ++*((_DWORD *)v53 + 2);
      if ( (_DWORD)v408 )
      {
        if ( (_DWORD)v408 == 4 && *(_QWORD *)(*(_QWORD *)(v8 + 384) + 48LL) != **(_QWORD **)(v8 + 384) )
          goto LABEL_799;
        if ( !*((_QWORD *)&v408 + 1) || *((_QWORD *)&v408 + 1) == v8 )
        {
          EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(v8 + 384) + 48LL));
          v60 = *(_QWORD *)(v8 + 384);
          v61 = *(_QWORD *)(v60 + 48);
          v62 = *(_QWORD **)(v61 + 8);
          if ( v62 )
            *v62 = *(_QWORD *)v61;
          if ( *(_QWORD *)v61 )
            *(_QWORD *)(*(_QWORD *)v61 + 8LL) = *(_QWORD *)(v61 + 8);
          if ( *(_QWORD *)v60 == v61 )
            *(_QWORD *)v60 = *(_QWORD *)v61;
          if ( *(_QWORD *)(v60 + 8) == v61 )
            *(_QWORD *)(v60 + 8) = *(_QWORD *)(v61 + 8);
          v63 = *(_DWORD *)(v61 + 100);
          if ( (v63 & 0x8000) == 0 && (v63 & 0x20000) == 0 )
            --*(_DWORD *)(v60 + 16);
          if ( (*(_DWORD *)(v61 + 100) & 8) != 0
            && !*(_DWORD *)(v61 + 96)
            && IsPointerInputMessage(*(_DWORD *)(v61 + 24)) )
          {
            FreePointerMessageParams(v61);
          }
          Win32FreeToPagedLookasideList(QEntryLookaside, v61);
          *(_QWORD *)(*(_QWORD *)(v8 + 384) + 48LL) = 0LL;
          xxxProcessEventMessage(v8, (__int64)&v402, v64, v65);
          goto LABEL_24;
        }
        v58 = *(_QWORD *)(v8 + 384);
        if ( *(_QWORD *)(*((_QWORD *)&v408 + 1) + 384LL) == v58 )
        {
          v412 = *((_QWORD *)&v408 + 1);
          LockExchangeW32Thread(*((_QWORD *)&v408 + 1), &v443);
          *(_QWORD *)(*(_QWORD *)(v8 + 384) + 48LL) = 0LL;
          v50 = v392;
          v59 = v412;
LABEL_880:
          v327 = 0LL;
LABEL_881:
          *(_QWORD *)(*(_QWORD *)(v8 + 384) + 40LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)(v8 + 384) + 32LL) = 0LL;
          **(_DWORD **)(v8 + 400) &= ~1u;
          v360 = (__int64)v415;
          if ( v418 )
          {
            SetWakeBit(v418, 16385LL, v37);
            ClearWakeBit(v8, 16385LL, 0LL);
          }
          else if ( !v50 && !v59 && !v415 && !v327 )
          {
            *(_WORD *)(*(_QWORD *)(v8 + 400) + 8LL) = 0;
            v36 = 31751LL;
            v37 = *(_QWORD *)(v8 + 384);
            if ( !*(_DWORD *)(v37 + 16) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 48LL) )
            {
              if ( (*(_BYTE *)(v37 + 340) & 0x20) != 0 )
                v36 = 31749LL;
              LOWORD(v36) = ~(_WORD)v36;
              *(_WORD *)(*(_QWORD *)(v8 + 400) + 6LL) &= v36;
            }
LABEL_903:
            v361 = 0LL;
            v362 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v36, v37, v40);
            if ( v362 )
              v361 = *v362;
            *(_QWORD *)(v361 + 16) = v437;
            if ( v438 )
              v439();
            v366 = 0LL;
            v367 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v363, v364, v365);
            if ( v367 )
              v366 = *v367;
            *(_QWORD *)(v366 + 16) = v440;
            if ( v441 )
              v442();
            v371 = 0LL;
            v372 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v368, v369, v370);
            if ( v372 )
              v371 = *v372;
            *(_QWORD *)(v371 + 16) = v443;
            if ( v444 )
              v445();
            v376 = 0LL;
            v377 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v373, v374, v375);
            if ( v377 )
              v376 = *v377;
            *(_QWORD *)(v376 + 16) = v428;
            if ( v429 )
              v430();
            v381 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v378, v379, v380);
            if ( v381 )
              v51 = *v381;
            *(_QWORD *)(v51 + 16) = v431;
            v383 = v432;
            if ( v432 )
              v433();
            ThreadUnlock1(v383, v382);
            return 0LL;
          }
          if ( v50 )
          {
            SetWakeBit(v50, 16390LL, v37);
            ClearWakeBit(v8, 16390LL, 0LL);
          }
          if ( v360 )
          {
            SetWakeBit(v360, 17408LL, v37);
            ClearWakeBit(v8, 17408LL, 0LL);
          }
          if ( v327 )
          {
            SetWakeBit(v327, 20480LL, v37);
            ClearWakeBit(v8, 20480LL, 0LL);
          }
          if ( v59 )
          {
            SetWakeBit(v59, 8256LL, v37);
            ClearWakeBit(v8, 0x2000LL, 0LL);
          }
          else if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 48LL) )
          {
            *(_WORD *)(*(_QWORD *)(v8 + 400) + 8LL) |= *(_WORD *)(*(_QWORD *)(v8 + 400) + 6LL) & 0x5C07;
            ClearWakeBit(v8, 23559LL, 0LL);
            *(_WORD *)(*(_QWORD *)(v8 + 400) + 4LL) &= 0xA3F8u;
          }
          goto LABEL_903;
        }
        CleanEventMessage(*(struct tagQMSG **)(v58 + 48));
        v38 = 1LL;
        DelQEntry(*(_QWORD **)(v8 + 384), *(_QWORD *)(*(_QWORD *)(v8 + 384) + 48LL));
        goto LABEL_25;
      }
      if ( a7 == 0x2000 )
        goto LABEL_799;
      LODWORD(v18) = v403[2];
      v66 = v403[2];
      v385 = v403[2];
      if ( v403[2] > 0x20A )
      {
        v36 = 0x1C0000000uLL;
        switch ( v403[2] )
        {
          case 0x20Eu:
            goto LABEL_397;
          case 0x238u:
            goto LABEL_458;
          case 0x240u:
LABEL_453:
            if ( !v53 )
              goto LABEL_804;
            if ( *((char *)v53 + 44) < 0 )
              goto LABEL_804;
            if ( *((char *)v53 + 43) < 0 )
              goto LABEL_804;
            v149 = *((_BYTE *)v53 + 55);
            if ( (v149 & 8) != 0 || (v149 & 0x10) == 0 )
              goto LABEL_804;
LABEL_458:
            MouseKeyFlags = v404[0];
            v391 = v404[1];
            if ( !v53 )
              goto LABEL_804;
            if ( CheckCrossThreadInput(v53, (struct tagQMSG *)v38, &v390, &v384, a8) )
              goto LABEL_878;
            if ( v390 )
              goto LABEL_804;
            if ( !v395 && a5 == -1 )
              goto LABEL_469;
            if ( v395 <= a5 )
            {
              if ( (unsigned int)v18 < v395 || (unsigned int)v18 > a5 )
                goto LABEL_799;
            }
            else if ( (unsigned int)v18 >= a5 && (unsigned int)v18 <= v395 )
            {
              goto LABEL_799;
            }
LABEL_469:
            if ( (unsigned int)CheckPwndFilter((__int64)v53, *(__int64 *)v414) )
              goto LABEL_135;
            goto LABEL_799;
          case 0x245u:
          case 0x246u:
          case 0x247u:
          case 0x249u:
          case 0x24Au:
          case 0x251u:
          case 0x252u:
          case 0x253u:
            v39 = v384;
            v144 = v395;
            goto LABEL_788;
          case 0x2E8u:
          case 0x2E9u:
          case 0x2EAu:
          case 0x2EBu:
          case 0x2ECu:
          case 0x2EDu:
          case 0x2EEu:
          case 0x2EFu:
          case 0x2F0u:
          case 0x2F1u:
          case 0x2F2u:
          case 0x2F3u:
          case 0x2F4u:
            if ( !v395 && a5 == -1 )
              goto LABEL_383;
            if ( v395 <= a5 )
            {
              if ( v403[2] < v395 || v403[2] > a5 )
                goto LABEL_878;
            }
            else if ( v403[2] >= a5 && v403[2] <= v395 )
            {
              goto LABEL_878;
            }
LABEL_383:
            if ( (unsigned int)IsInsideMenuLoop(v8) )
              goto LABEL_804;
            v39 = v384;
            if ( v384 )
              xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
            if ( !v53 )
            {
              v53 = *(struct tagWND **)(*(_QWORD *)(v8 + 384) + 80LL);
              v387 = (__int64)v53;
            }
            MouseKeyFlags = v404[0];
            v391 = v404[1];
            v129 = WORD1(v404[0]);
            v130 = LOWORD(v404[0]);
            v131 = InteractiveControlManager::Instance();
            v446 = 0LL;
            v447 = 0LL;
            if ( (int)InteractiveControlManager::FindDevice(v131, v130, 0LL, &v446, 0LL) >= 0 && v446 )
            {
              v38 = 1LL;
              if ( (unsigned int)InteractiveControlDevice::GetInputReport(v446, v129, &v447) )
              {
                *((_DWORD *)v447 + 6) = 1;
                v132 = 1;
                goto LABEL_394;
              }
            }
            else
            {
              v38 = 1LL;
            }
            v132 = 2;
LABEL_394:
            v133 = v132 - 1;
            if ( !v133 )
              goto LABEL_843;
            if ( v133 == 1 )
            {
LABEL_876:
              v51 = 0LL;
              v50 = v392;
              v59 = 0LL;
              v327 = 0LL;
              goto LABEL_881;
            }
            LODWORD(v18) = v385;
            goto LABEL_807;
          default:
LABEL_472:
            while ( 2 )
            {
              v389.x = SLOWORD(v404[1]);
              v150 = v404[1];
              v389.y = SWORD1(v404[1]);
              v388 = 1;
              v151 = DWORD1(v408);
              if ( (BYTE4(v408) & 0x20) != 0
                && v53
                && ((*((_BYTE *)v53 + 352) ^ *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v53 + 2) + 376LL) + 280LL)) & 0xF) == 0 )
              {
                goto LABEL_512;
              }
              if ( gspwndScreenCapture )
              {
                v53 = gspwndScreenCapture;
                v387 = (__int64)gspwndScreenCapture;
                v391 = (WORD4(v405) << 16) | WORD2(v405);
                goto LABEL_509;
              }
              if ( v53 && (unsigned int)IsCompositionInputWindowForHitTest(v53) )
              {
                v152 = 1;
                v401 = 1;
                v153 = *(_QWORD *)(v8 + 384);
                v154 = *(struct tagWND **)(v153 + 72);
                if ( v154 )
                {
                  v53 = *(struct tagWND **)(v153 + 72);
                  v387 = (__int64)v53;
                  if ( !(unsigned int)IsCompositionInputWindowForHitTest(v154) )
                  {
                    DWORD1(v408) = v151 & 0xFFFFEFFF;
                    if ( v38 )
                    {
                      if ( (unsigned int)IsMouseInPointerActive(v8, v38) )
                        *(_DWORD *)(v38 + 100) &= ~0x1000u;
                    }
                  }
                  goto LABEL_509;
                }
              }
              else
              {
                v152 = 0;
                v401 = 0;
                v53 = *(struct tagWND **)(*(_QWORD *)(v8 + 384) + 72LL);
                v387 = (__int64)v53;
                if ( v53 )
                  goto LABEL_509;
              }
              if ( !v152 )
              {
                v53 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 408LL) + 8LL) + 16LL);
                v435 = *(_QWORD *)(v8 + 368);
                *(_QWORD *)(v8 + 368) = &v435;
                v436 = (__int64)v53;
                if ( v53 )
                {
                  ++*((_DWORD *)v53 + 2);
                  v150 = v404[1];
                  LODWORD(v18) = v403[2];
                }
              }
              if ( (unsigned int)IsThreadDesktopComposed(v8) )
              {
                v449 = v18;
                v450 = v404[0];
                v451 = v150;
                v452 = &v388;
                v157 = 1;
                if ( v155 )
                  v157 = 9;
                v453 = v157;
                v454 = 0;
                v455 = (char *)&v407 + 8;
                v456 = 0;
                v160 = xxxDCEWindowHitTestIndirect(v53, (struct tagPOINT)v407, (__int64)&v449, v156);
                if ( v160 && v456 )
                {
                  v404[1] = v451;
                  DWORD1(v405) = (__int16)v451;
                  v158 = v451 >> 16;
                  v159 = (unsigned int)SWORD1(v451);
                  DWORD2(v405) = SWORD1(v451);
                  v389 = *(struct tagPOINT *)((char *)&v405 + 4);
                  v416 = 1;
                }
              }
              else
              {
                v160 = (HWND)xxxWindowHitTest(v53);
              }
              if ( !v401 )
                ThreadUnlock1(v159, v158);
              LOBYTE(v158) = 1;
              v53 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v160, v158, v161, v162);
              v387 = (__int64)v53;
              if ( !v53 )
              {
                v53 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v8 + 408) + 8LL) + 16LL);
                v387 = (__int64)v53;
                if ( !v53 )
                {
                  v53 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 408LL) + 8LL) + 16LL);
                  v387 = (__int64)v53;
                }
              }
              if ( (unsigned int)IsMouseInPointerActive(v8, 0LL)
                && (v163 = *(_QWORD *)(*(_QWORD *)(v8 + 384) + 392LL)) != 0
                && (v164 = ValidateHwnd(v163)) != 0
                && ((v165 = *(_QWORD *)(v164 + 16), v166 = *(_QWORD *)(v8 + 384), *(_QWORD *)(v165 + 384) == v166)
                 || *(_QWORD *)(v165 + 376) == *(_QWORD *)(v8 + 376)) )
              {
                v53 = (struct tagWND *)v164;
                v387 = v164;
                v388 = 1;
                *(_DWORD *)(v166 + 116) = 0;
              }
              else
              {
                v167 = *(_QWORD *)(v8 + 384);
                *(_DWORD *)(v167 + 116) = v388 != 1;
              }
LABEL_509:
              if ( !v416
                && ((*((_BYTE *)v53 + 352) ^ *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v53 + 2) + 376LL) + 280LL)) & 0xF) != 0 )
              {
                v389 = (struct tagPOINT)v407;
                PhysicalToLogicalInPlacePoint(v53, &v389, (char *)&v407 + 8);
                v391 = (LOWORD(v389.y) << 16) | LOWORD(v389.x);
                *(struct tagPOINT *)((char *)&v405 + 4) = v389;
              }
LABEL_512:
              ThreadLockExchange((__int64)v53, (__int64)&v419);
              if ( CheckCrossThreadInput(v53, (struct tagQMSG *)v38, &v390, &v384, a8) )
                goto LABEL_878;
              if ( !v390 )
              {
                if ( (WORD2(v408) & 0x800) == 0 )
                  goto LABEL_524;
                v169 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v53 + 2) + 376LL) + 824LL);
                if ( !gbEnforceUIPI )
                  goto LABEL_524;
                if ( (unsigned int)v409 > (unsigned int)v169 )
                  goto LABEL_524;
                if ( (_DWORD)v409 == (_DWORD)v169 )
                {
                  v170 = HIDWORD(v169);
                  if ( DWORD1(v409) == (_DWORD)v170 || DWORD1(v409) == -1 || (_DWORD)v170 == -1 )
                    goto LABEL_524;
                }
                LODWORD(v18) = v385;
                EtwTraceUIPIMsgError(0LL, *(_QWORD *)(*((_QWORD *)v53 + 2) + 376LL), v385, v404[0], v404[1]);
                zzzSetCursor(gasyscur[1]);
                v39 = v384;
LABEL_806:
                v38 = 1LL;
                goto LABEL_807;
              }
              v168 = *((_QWORD *)v53 + 2);
              if ( *(_QWORD *)(v168 + 384) != *(_QWORD *)(v8 + 384) )
              {
                zzzSetCursor(gasyscur[1]);
LABEL_804:
                v39 = v384;
LABEL_805:
                LODWORD(v18) = v385;
                goto LABEL_806;
              }
              if ( !v392 )
              {
                v392 = *((_QWORD *)v53 + 2);
                LockExchangeW32Thread(v168, &v428);
              }
LABEL_524:
              v171 = v389;
              v172 = (unsigned __int64)v389;
              v173 = (char *)v53 + 16;
              v174 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v53 + 2) + 384LL) + 116LL);
              if ( !v174 || (v175 = v174 - 2) == 0 )
              {
                if ( (*((_BYTE *)v53 + 50) & 0x40) != 0 )
                  v389.x = *((_DWORD *)v53 + 34) - v389.x;
                else
                  v389.x -= *((_DWORD *)v53 + 32);
                v176 = *((_DWORD *)v53 + 33);
                goto LABEL_535;
              }
              if ( v175 == 1 )
              {
                if ( (*((_BYTE *)v53 + 50) & 0x40) != 0 )
                  v389.x = *((_DWORD *)v53 + 30) - v389.x;
                else
                  v389.x -= *((_DWORD *)v53 + 28);
                v176 = *((_DWORD *)v53 + 29);
LABEL_535:
                v389.y -= v176;
                v171 = v389;
              }
              if ( v390 || *((_QWORD *)v512 + 48) != gpqCursor )
              {
                LODWORD(v18) = v385;
                goto LABEL_574;
              }
              v177 = *(_QWORD *)(*((_QWORD *)v512 + 51) + 176LL) != (_QWORD)v53;
              v178 = v388;
              if ( v388 != 5 || (v179 = *((_QWORD *)v53 + 24)) == 0 || (*((_BYTE *)v53 + 40) & 1) == 0 )
              {
                if ( v388 == 7 && (*((_BYTE *)v53 + 40) & 2) != 0 )
                {
                  v184 = (unsigned __int16)HitTestScrollBar(v53, 1, v171) | 0x10000;
                }
                else if ( v388 == 6 && (*((_BYTE *)v53 + 40) & 4) != 0 )
                {
                  v184 = (unsigned __int16)HitTestScrollBar(v53, 0, v171);
                }
                else
                {
                  v184 = v388;
                }
                goto LABEL_564;
              }
              v180 = MNItemHitTest(*((_QWORD *)v53 + 24), v53);
              if ( v180 >= 0 )
              {
                v181 = *(_QWORD *)(*(_QWORD *)(v179 + 80) + 152LL * v180 + 104);
                if ( v181 > 6 )
                {
                  if ( v181 == 7 )
                  {
LABEL_555:
                    v178 = 67;
                    goto LABEL_556;
                  }
                  if ( v181 == -1LL )
                  {
                    v178 = -2;
                    goto LABEL_556;
                  }
                  goto LABEL_553;
                }
                if ( v181 >= 5 )
                {
                  v178 = 68;
                }
                else
                {
                  v182 = v181 - 1;
                  if ( v182 )
                  {
                    v183 = v182 - 1;
                    if ( v183 )
                    {
                      if ( v183 == 1 )
                        goto LABEL_555;
LABEL_553:
                      v178 = 69;
                      goto LABEL_556;
                    }
                    v178 = 66;
                  }
                  else
                  {
                    v178 = 65;
                  }
                }
              }
LABEL_556:
              v184 = v178 | ((unsigned __int16)v180 << 16);
LABEL_564:
              LODWORD(v18) = v385;
              if ( v385 != 512 || v177 || *(_DWORD *)(*((_QWORD *)v512 + 51) + 184LL) != v184 )
                xxxTrackMouseMove(v53);
              if ( !v177 )
              {
                v185 = *((_QWORD *)v512 + 51);
                if ( (*(_DWORD *)(v185 + 32) & 0x40) != 0
                  && ((_DWORD)v18 != 512 || !PtInRect((_DWORD *)(v185 + 188), v172)) )
                {
                  ResetMouseHover((struct tagDESKTOP *)v185, (struct tagPOINT)v172);
                }
              }
LABEL_574:
              v186 = 0;
              if ( !(unsigned int)CheckPwndFilter((__int64)v53, *(__int64 *)v414) )
              {
LABEL_798:
                v8 = (__int64)v512;
                goto LABEL_799;
              }
              v187 = 0;
              switch ( (int)v18 )
              {
                case 513:
                  v188 = *((_QWORD *)v512 + 48);
                  if ( DWORD2(v409) == 4 )
                    *(_DWORD *)(v188 + 340) |= 0x800000u;
                  else
                    *(_DWORD *)(v188 + 340) &= ~0x800000u;
                  v189 = *((_QWORD *)v512 + 48);
                  if ( DWORD2(v409) == 8 )
                    *(_DWORD *)(v189 + 340) |= 0x1000000u;
                  else
                    *(_DWORD *)(v189 + 340) &= ~0x1000000u;
                  goto LABEL_582;
                case 514:
                case 517:
                case 520:
                case 524:
                  goto LABEL_662;
                case 516:
                case 519:
                case 523:
LABEL_582:
                  if ( (*(_BYTE *)(*((_QWORD *)v53 + 19) + 84LL) & 8) == 0
                    && *(_DWORD *)(*((_QWORD *)v512 + 48) + 116LL) != 1 )
                  {
                    v190 = *((_QWORD *)v512 + 66);
                    if ( !v190 || (*(_DWORD *)(v190 + 8) & 1) == 0 )
                      goto LABEL_662;
                  }
                  v187 = 1;
                  v191 = *((_QWORD *)v512 + 48);
                  if ( (unsigned int)v405 > *(_DWORD *)(v191 + 128)
                    || gbClientDoubleClickSupport
                    || *(_QWORD *)v53 != *(_QWORD *)(v191 + 136)
                    || (_DWORD)v18 != *(_DWORD *)(v191 + 120)
                    || (_DWORD)v18 == 523 && WORD1(v404[0]) != *(_WORD *)(v191 + 124) )
                  {
                    goto LABEL_662;
                  }
                  v194 = IsDPIAbsoluteSysMet(0x24uLL);
                  if ( v194 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v193, v192, v195, v196) & 0xF) == 0 )
                      goto LABEL_600;
                  }
                  else if ( IsDPIDWMSysMet(v193)
                         && (W32GetCurrentThreadDpiAwarenessContext(v198, v197, v199, v200) & 0xF) == 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v201, v202, v203) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v204,
                                                                v205,
                                                                v206)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v53 = (struct tagWND *)v387;
LABEL_600:
                      v207 = (_DWORD *)(gpsi + 2412LL);
                      goto LABEL_609;
                    }
                    v53 = (struct tagWND *)v387;
                  }
                  if ( !IsDPIDWMSysMet(0x24uLL)
                    || (W32GetCurrentThreadDpiAwarenessContext(v209, v208, v210, v211) & 0xF) != 1 )
                  {
                    goto LABEL_608;
                  }
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v212, v213, v214) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v215,
                                                              v216,
                                                              v217)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v207 = (_DWORD *)(gpsi + 2800LL);
                    v53 = (struct tagWND *)v387;
                  }
                  else
                  {
                    v53 = (struct tagWND *)v387;
LABEL_608:
                    v207 = (_DWORD *)(gpsi + 2024LL);
                  }
LABEL_609:
                  v448[0] = *(_DWORD *)(*((_QWORD *)v512 + 48) + 144LL) - *v207 / 2;
                  v220 = IsDPIAbsoluteSysMet(0x25uLL);
                  if ( v220 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v219, v218, v221, v222) & 0xF) == 0 )
                      goto LABEL_617;
                  }
                  else if ( IsDPIDWMSysMet(v219)
                         && (W32GetCurrentThreadDpiAwarenessContext(v226, v225, v227, v228) & 0xF) == 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v229, v230, v231) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v232,
                                                                v233,
                                                                v234)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v53 = (struct tagWND *)v387;
LABEL_617:
                      v235 = (int *)(gpsi + 2416LL);
                      goto LABEL_626;
                    }
                    v53 = (struct tagWND *)v387;
                  }
                  if ( !IsDPIDWMSysMet(0x25uLL)
                    || (W32GetCurrentThreadDpiAwarenessContext(v237, v236, v223, v224) & 0xF) != 1 )
                  {
                    goto LABEL_625;
                  }
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v238, v223, v224) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v239,
                                                              v223,
                                                              v224)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v235 = (int *)(gpsi + 2804LL);
                    v53 = (struct tagWND *)v387;
                  }
                  else
                  {
                    v53 = (struct tagWND *)v387;
LABEL_625:
                    v235 = (int *)(gpsi + 2028LL);
                  }
LABEL_626:
                  v240 = *v235;
                  v241 = *v235 / 2;
                  v242 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v512 + 48) + 148LL) - v241);
                  v448[1] = *(_DWORD *)(*((_QWORD *)v512 + 48) + 148LL) - v241;
                  if ( v194 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v242, HIDWORD(v240), v223, v224) & 0xF) == 0 )
                      goto LABEL_634;
                  }
                  else if ( IsDPIDWMSysMet(0x24uLL)
                         && (W32GetCurrentThreadDpiAwarenessContext(v246, v245, v247, v248) & 0xF) == 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v249, v250, v251) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v252,
                                                                v253,
                                                                v254)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v53 = (struct tagWND *)v387;
LABEL_634:
                      v255 = (int *)(gpsi + 2412LL);
                      goto LABEL_643;
                    }
                    v53 = (struct tagWND *)v387;
                  }
                  if ( !IsDPIDWMSysMet(0x24uLL)
                    || (W32GetCurrentThreadDpiAwarenessContext(v257, v256, v243, v244) & 0xF) != 1 )
                  {
                    goto LABEL_642;
                  }
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v258, v243, v244) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v259,
                                                              v243,
                                                              v244)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v255 = (int *)(gpsi + 2800LL);
                    v53 = (struct tagWND *)v387;
                  }
                  else
                  {
                    v53 = (struct tagWND *)v387;
LABEL_642:
                    v255 = (int *)(gpsi + 2024LL);
                  }
LABEL_643:
                  v260 = *((_QWORD *)v512 + 48);
                  v261 = *v255;
                  v448[2] = *(_DWORD *)(v260 + 144) + *v255 / 2;
                  if ( v220 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v260, HIDWORD(v261), v243, v244) & 0xF) == 0 )
                      goto LABEL_651;
                  }
                  else if ( IsDPIDWMSysMet(0x25uLL)
                         && (W32GetCurrentThreadDpiAwarenessContext(v263, v262, v264, v265) & 0xF) == 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v266, v267, v268) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v269,
                                                                v270,
                                                                v271)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v53 = (struct tagWND *)v387;
LABEL_651:
                      v272 = (_DWORD *)(gpsi + 2416LL);
                      goto LABEL_660;
                    }
                    v53 = (struct tagWND *)v387;
                  }
                  if ( !IsDPIDWMSysMet(0x25uLL)
                    || (W32GetCurrentThreadDpiAwarenessContext(v274, v273, v275, v276) & 0xF) != 1 )
                  {
                    goto LABEL_659;
                  }
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v277, v278, v279) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v280,
                                                              v281,
                                                              v282)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v272 = (_DWORD *)(gpsi + 2804LL);
                    v53 = (struct tagWND *)v387;
                  }
                  else
                  {
                    v53 = (struct tagWND *)v387;
LABEL_659:
                    v272 = (_DWORD *)(gpsi + 2028LL);
                  }
LABEL_660:
                  v448[3] = *(_DWORD *)(*((_QWORD *)v512 + 48) + 148LL) + *v272 / 2;
                  v283 = PtInRect(v448, *(unsigned __int64 *)((char *)&v405 + 4));
                  LODWORD(v18) = v385;
                  if ( v283 )
                  {
                    LODWORD(v18) = v385 + 2;
                    v385 += 2;
                    v187 = 2;
                  }
LABEL_662:
                  v284 = *((_QWORD *)v512 + 48);
                  v285 = *(_DWORD *)(v284 + 340);
                  if ( (v285 & 8) != 0 )
                    *(_DWORD *)(v284 + 340) = v285 | 4;
                  if ( (unsigned int)(v18 - 514) <= 0xA )
                  {
                    v286 = 1097;
                    if ( _bittest(&v286, v18 - 514) )
                    {
                      if ( *(_DWORD *)(*((_QWORD *)v512 + 48) + 128LL) && ((DWORD2(v409) - 4) & 0xFFFFFFFB) == 0 )
                      {
                        if ( DWORD2(v409) == 4 )
                        {
                          TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x12Cu, 0xB4u, 5u, 1);
                        }
                        else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                        {
                          TouchTimeFromCPLValue = *((_DWORD *)off_1C03200E8 + 11);
                          if ( TouchTimeFromCPLValue == -1 )
                            TouchTimeFromCPLValue = *((_DWORD *)off_1C03200E8 + 10);
                        }
                        else
                        {
                          TouchTimeFromCPLValue = gdtDblClk;
                        }
                        *(_DWORD *)(*((_QWORD *)v512 + 48) + 128LL) = v411 + TouchTimeFromCPLValue;
                      }
                      v288 = *((_QWORD *)v512 + 48);
                      if ( *(_DWORD *)(v288 + 128) && DWORD2(v409) == 18 )
                        *(_DWORD *)(v288 + 128) = dword_1C03280A8 + v411;
                    }
                  }
LABEL_679:
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v173 + 384LL) + 116LL) == 1 )
                  {
                    LODWORD(v18) = v18 - 352;
                    v385 = v18;
                    MouseKeyFlags = v388;
                  }
                  v289 = v398;
                  if ( !(unsigned int)MiPCheckMsgFilter(v398, v18, v395, a5) )
                    goto LABEL_798;
                  v8 = (__int64)v512;
                  if ( v390 )
                    goto LABEL_876;
                  if ( (unsigned int)(v18 - 512) <= 0xE && (*((_DWORD *)v512 + 110) & 0x8000) != 0 )
                    goto LABEL_799;
                  v290 = *((_DWORD *)v512 + 110);
                  if ( (v290 & 0x100000) != 0 )
                  {
                    *((_DWORD *)v512 + 110) = v290 & 0xFFEFFFFF;
                    xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
                  }
                  v423 = *(struct tagPOINT *)((char *)&v405 + 4);
                  v424 = *(_QWORD *)v53;
                  v425 = v388;
                  v426 = *((_QWORD *)&v406 + 1);
                  v427 = v404[0];
                  v39 = v384;
                  if ( v384 )
                  {
                    if ( (_DWORD)v18 != 512 && (_DWORD)v18 != 160 )
                    {
                      v396 = 1;
                      if ( (unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v18, (__int64)&v423) )
                        goto LABEL_806;
                    }
                  }
                  if ( ((*(_DWORD *)(*((_QWORD *)v512 + 52) + 24LL) | *((_DWORD *)v512 + 150)) & 0x100) != 0 )
                  {
                    v396 = 1;
                    if ( (unsigned int)xxxCallMouseHook((unsigned int)v18, &v423, v39) )
                      goto LABEL_806;
                  }
                  if ( (*((_DWORD *)v512 + 274) & 0x2000) == 0 && ((v388 + 2) & 0xFFFFFFFD) == 0 )
                  {
                    v312 = 0LL;
                    if ( v401 )
                    {
                      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v53);
                      v312 = (__int64)CompositionInputWindowUIOwner;
                      if ( CompositionInputWindowUIOwner )
                      {
                        TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                        v312 = TopLevelWindow;
                        v435 = *((_QWORD *)v512 + 46);
                        *((_QWORD *)v512 + 46) = &v435;
                        v436 = TopLevelWindow;
                        if ( TopLevelWindow )
                        {
                          ++*(_DWORD *)(TopLevelWindow + 8);
                          v315 = *(_QWORD *)TopLevelWindow;
                        }
                        else
                        {
                          v315 = 0LL;
                        }
                        xxxSendMessage(
                          (struct tagWND *)TopLevelWindow,
                          0x20u,
                          v315,
                          (unsigned __int16)v388 | (LOWORD(v403[2]) << 16));
                        ThreadUnlock1(v317, v316);
                      }
                    }
                    if ( !v312 )
                      xxxSendMessage(v53, 0x20u, *(_QWORD *)v53, (unsigned __int16)v388 | (LOWORD(v403[2]) << 16));
                    v318 = v398;
                    if ( *(struct tagQMSG **)(*((_QWORD *)v512 + 48) + 48LL) == v398
                      && v398
                      && (unsigned int)IsMouseInPointerActive(v512, v398)
                      && (*((_DWORD *)v318 + 25) & 0x400) != 0
                      && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v318 + 120))
                      && IsMiPMouseMessage(*((_DWORD *)v318 + 6)) )
                    {
                      GeneratePointerMessageFromMouse((struct tagQMSG *)v510, v18, v318, v53, v39);
                      SetMiPPromotion(*((_QWORD *)v53 + 2), v511);
                    }
                    goto LABEL_806;
                  }
                  if ( *(struct tagQMSG **)(*((_QWORD *)v512 + 48) + 48LL) != v289 )
                    goto LABEL_876;
                  v488 = v402;
                  v489 = *(_OWORD *)v403;
                  v490 = *(_OWORD *)v404;
                  v491 = v405;
                  v492 = v406;
                  v493 = v407;
                  v494 = v408;
                  v495 = v409;
                  v496 = v410;
                  v497 = v411;
                  if ( !v289 || !(unsigned int)IsMouseInPointerActive(v512, v289) )
                  {
                    v291 = DWORD2(v489);
                    v294 = v398;
                    goto LABEL_718;
                  }
                  v291 = v18;
                  DWORD2(v489) = v18;
                  *(_QWORD *)&v490 = MouseKeyFlags;
                  if ( (*((_DWORD *)v398 + 25) & 0x400) != 0 )
                  {
                    v292 = *((_QWORD *)v512 + 142);
                    if ( v292 && (*(_DWORD *)v292 & 1) != 0 )
                    {
                      v477 = *(_OWORD *)(v292 + 24);
                      v478 = *(_OWORD *)(v292 + 40);
                      v479 = *(_OWORD *)(v292 + 56);
                      v480 = *(_OWORD *)(v292 + 72);
                      v481 = *(_OWORD *)(v292 + 88);
                      v482 = *(_OWORD *)(v292 + 104);
                      v186 = 1;
                    }
                    if ( (unsigned int)GeneratePointerMessageFromMouse((struct tagQMSG *)&v500, v18, v398, v53, v39) )
                    {
                      v402 = v500;
                      *(__m128i *)v403 = v501;
                      *(_OWORD *)v404 = v502;
                      v405 = v503;
                      v406 = v504;
                      v407 = v505;
                      v408 = v506;
                      v409 = v507;
                      v410 = v508;
                      v411 = v509;
                      v397 = 1;
                      v293 = _mm_cvtsi128_si32(_mm_srli_si128(v501, 8));
                      if ( v293 == 582 )
                      {
                        *(_QWORD *)(*((_QWORD *)v512 + 48) + 392LL) = *(_QWORD *)v53;
                      }
                      else if ( ((v293 - 579) & 0xFFFFFFFB) == 0 )
                      {
                        *(_QWORD *)(*((_QWORD *)v512 + 48) + 392LL) = 0LL;
                      }
                    }
                    v294 = v398;
                    if ( !v39 )
                    {
LABEL_763:
                      v308 = v397;
                      goto LABEL_764;
                    }
                    *((_DWORD *)v398 + 25) &= ~0x400u;
LABEL_718:
                    if ( !v39 )
                      goto LABEL_763;
                    if ( (v291 == 512 || v291 == 160)
                      && *(_QWORD *)v53 != gMiPTracking
                      && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v294 + 120)) )
                    {
                      LOBYTE(v297) = 1;
                      v301 = HMValidateHandleNoSecure(v300, v297, v298, v299);
                      v302 = v301;
                      if ( v301 )
                      {
                        v303 = *(_QWORD *)(v301 + 16);
                        if ( (unsigned int)IsMouseInPointerActive(v303, 0LL) )
                        {
                          if ( (GetMiPWindowFlags((struct tagWND *)v302) & 1) == 0 )
                          {
                            if ( (struct tagTHREADINFO *)v303 == v512 )
                            {
                              v304 = *((_QWORD *)v512 + 142);
                              v471 = *(_OWORD *)(v304 + 24);
                              v472 = *(_OWORD *)(v304 + 40);
                              v473 = *(_OWORD *)(v304 + 56);
                              v476 = *(_OWORD *)(v304 + 72);
                              v483 = *(_OWORD *)(v304 + 88);
                              v470 = *(_OWORD *)(v304 + 104);
                              if ( v186 )
                              {
                                *(_OWORD *)(v304 + 24) = v477;
                                *(_OWORD *)(v304 + 40) = v478;
                                *(_OWORD *)(v304 + 56) = v479;
                                *(_OWORD *)(v304 + 72) = v480;
                                *(_OWORD *)(v304 + 88) = v481;
                                *(_OWORD *)(v304 + 104) = v482;
                              }
                              v484 = ((*(_DWORD *)(*((_QWORD *)v512 + 142) + 36LL) & 0xE1F7u) << 16) | 1LL;
                              v485 = 0LL;
                              v486 = 0LL;
                              v487 = 0LL;
                              v475[0] = *(_QWORD *)(gptiCurrent + 368LL);
                              *(_QWORD *)(gptiCurrent + 368LL) = v475;
                              v475[1] = v302;
                              ++*(_DWORD *)(v302 + 8);
                              FindTimer(v302, 65523, 2, 1, 0LL);
                              _InterlockedIncrement(&glSendMessage);
                              xxxSendTransformableMessageTimeout(
                                (struct tagWND *)v302,
                                586LL,
                                v484,
                                0LL,
                                0,
                                0,
                                0LL,
                                1,
                                0);
                              ThreadUnlock1(v306, v305);
                              v39 = v384;
                              v53 = (struct tagWND *)v387;
                              if ( v186 )
                              {
                                v307 = *((_QWORD *)v512 + 142);
                                *(_OWORD *)(v307 + 24) = v471;
                                *(_OWORD *)(v307 + 40) = v472;
                                *(_OWORD *)(v307 + 56) = v473;
                                *(_OWORD *)(v307 + 72) = v476;
                                *(_OWORD *)(v307 + 88) = v483;
                                *(_OWORD *)(v307 + 104) = v470;
                              }
                            }
                            else
                            {
                              PostEventMessageEx(v303, *(_QWORD *)(v303 + 384), 0x15u, v302, 0, 0LL, 0LL, 0LL);
                            }
                          }
                        }
                      }
                      LODWORD(v18) = v385;
                      if ( v397 )
                        gMiPTracking = *(_QWORD *)v53;
                      else
                        gMiPTracking = 0LL;
                    }
                    v308 = v397;
                    if ( !v397 )
                    {
                      v309 = v187 - 1;
                      if ( v309 )
                      {
                        if ( v309 == 1 )
                          *(_DWORD *)(*((_QWORD *)v512 + 48) + 128LL) = 0;
                      }
                      else
                      {
                        *(_DWORD *)(*((_QWORD *)v512 + 48) + 120LL) = v403[2];
                        *(_WORD *)(*((_QWORD *)v512 + 48) + 124LL) = WORD1(v404[0]);
                        *(_DWORD *)(*((_QWORD *)v512 + 48) + 128LL) = gdtDblClk + v405;
                        *(_QWORD *)(*((_QWORD *)v512 + 48) + 136LL) = *(_QWORD *)v53;
                        *(_QWORD *)(*((_QWORD *)v512 + 48) + 144LL) = *(_QWORD *)((char *)&v405 + 4);
                      }
                    }
                    v310 = &v488;
                    if ( !v308 )
                      v310 = &v402;
                    v311 = xxxMouseActivate(v512, v53, *((_DWORD *)v310 + 6), (__int64)v310 + 52, v388) - 1;
                    if ( !v311 )
                      goto LABEL_806;
                    if ( v311 == 1 )
                    {
                      LODWORD(v18) = v403[2];
                      v38 = (unsigned __int64)v398;
                      v51 = 0LL;
                      continue;
                    }
LABEL_764:
                    if ( v39 )
                    {
                      xxxSkipSysMsg(v512, (struct tagQMSG *)&v402);
                      if ( v396 )
                      {
                        if ( (((unsigned __int8)*(_DWORD *)(*((_QWORD *)v512 + 52) + 24LL) | *((_BYTE *)v512 + 600)) & 0x40) != 0 )
                          xxxCallHook(6LL, (unsigned int)v18, &v423, 5LL);
                      }
                    }
                    v396 = 0;
                    v391 = (LOWORD(v389.y) << 16) | LOWORD(v389.x);
                    if ( (unsigned int)v18 >= 0x200 )
                      MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*((_QWORD *)v512 + 48));
                    if ( ((unsigned int)(v18 - 171) <= 2 || (unsigned int)(v18 - 523) <= 2) && !v308 )
                      MouseKeyFlags |= v404[0];
                    v319 = *((_QWORD *)v512 + 66);
                    if ( v388 != 5
                      || !v39
                      || !v319
                      || (*(_DWORD *)(v319 + 8) & 0x100) == 0
                      || !*(_QWORD *)v319
                      || (**(_DWORD **)v319 & 1) == 0 )
                    {
                      goto LABEL_785;
                    }
                    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                      (MenuStateOwnerLockxxxUnlock *)&v434,
                      *((struct tagMENUSTATE **)v512 + 66));
                    if ( !(unsigned int)xxxCallHandleMenuMessages(v320, (_DWORD)v53, v18, MouseKeyFlags, v391) )
                    {
                      if ( v434 )
                        xxxUnlockMenuState(v434);
LABEL_785:
                      if ( !v308 )
                        goto LABEL_843;
                      v38 = (unsigned __int64)v398;
                      v144 = v395;
                      goto LABEL_787;
                    }
                    v38 = 1LL;
                    if ( v434 )
                      xxxUnlockMenuState(v434);
                  }
                  else
                  {
                    if ( !v39 )
                      goto LABEL_763;
                    if ( !IsMiPMouseMessage(*((_DWORD *)v398 + 6)) )
                      goto LABEL_718;
                    if ( !(unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v294 + 120))
                      || (v295 = (_DWORD *)*((_QWORD *)v512 + 142)) == 0LL
                      || (*v295 & 2) != 0
                      || (*v295 & 4) != 0 )
                    {
                      v296 = (_DWORD *)*((_QWORD *)v512 + 142);
                      if ( v296 )
                        *v296 &= ~2u;
                      goto LABEL_718;
                    }
                    xxxSkipSysMsg(v512, (struct tagQMSG *)&v402);
                    v38 = 1LL;
                  }
                  break;
                default:
                  goto LABEL_679;
              }
              break;
            }
            break;
        }
        goto LABEL_26;
      }
      if ( v403[2] == 522 )
        break;
      v36 = 0x1C0000000uLL;
      switch ( v403[2] )
      {
        case 0x23u:
          MouseKeyFlags = 0LL;
          v391 = v404[1];
          if ( !v53 || (v67 = *((_QWORD *)v53 + 2), v67 == v8) )
          {
            if ( (unsigned int)MiPCheckMsgFilter((struct tagQMSG *)v38, v403[2], v395, a5) )
            {
LABEL_135:
              if ( v384 )
                xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
              goto LABEL_843;
            }
LABEL_878:
            v50 = v392;
LABEL_879:
            v59 = 0LL;
            goto LABEL_880;
          }
          if ( *(_QWORD *)(v67 + 384) == *(_QWORD *)(v8 + 384) )
          {
            v50 = v392;
            if ( !v392 )
            {
              v50 = *((_QWORD *)v53 + 2);
              LockExchangeW32Thread(v67, &v428);
            }
            goto LABEL_879;
          }
          goto LABEL_804;
        case 0xFEu:
          goto LABEL_458;
        case 0xFFu:
          MouseKeyFlags = v404[0];
          v391 = v404[1];
          v53 = 0LL;
          v387 = 0LL;
          if ( v404[1] )
          {
            LOBYTE(v36) = 18;
            v122 = HMValidateHandle(v404[1], v36, v37, v40);
            if ( v122 )
            {
              v53 = *(struct tagWND **)(v122 + 24);
              v387 = (__int64)v53;
            }
          }
          if ( !v53 )
          {
            v123 = *(_QWORD *)(v8 + 384);
            v53 = *(struct tagWND **)(v123 + 80);
            v387 = (__int64)v53;
            if ( !v53 )
            {
              v53 = *(struct tagWND **)(v123 + 88);
              v387 = (__int64)v53;
              if ( !v53 )
                goto LABEL_804;
            }
          }
          v124 = v420;
          v420 = (__int64)v53;
          ++*((_DWORD *)v53 + 2);
          if ( v124 )
            HMUnlockObject(v124);
          if ( CheckCrossThreadInput(v53, (struct tagQMSG *)v38, &v390, &v384, a8) )
            goto LABEL_878;
          v125 = v390;
          if ( !v390 )
            goto LABEL_363;
          v18 = (__int64)v53 + 16;
          if ( *(_QWORD *)(*((_QWORD *)v53 + 2) + 384LL) != *(_QWORD *)(v8 + 384) )
            goto LABEL_804;
          if ( (unsigned int)IsInsideMenuLoop(v8) )
          {
            v126 = *(_QWORD *)(**(_QWORD **)(v8 + 528) + 8LL);
          }
          else
          {
            v127 = *(__int64 **)(v8 + 592);
            if ( !v127 )
              goto LABEL_361;
            v126 = *v127;
          }
          if ( v126 )
          {
            v53 = (struct tagWND *)v126;
            v387 = v126;
            v18 = v126 + 16;
            v125 = *(_QWORD *)(v126 + 16) != v8;
            v390 = v125;
            v128 = v420;
            v420 = v126;
            ++*(_DWORD *)(v126 + 8);
            if ( v128 )
              HMUnlockObject(v128);
          }
LABEL_361:
          if ( !v415 )
          {
            v415 = *(struct tagWND **)v18;
            LockExchangeW32Thread(v415, &v440);
          }
LABEL_363:
          if ( !v395 && a5 == -1 )
            goto LABEL_371;
          if ( v395 <= a5 )
          {
            if ( v66 < v395 || v66 > a5 )
              goto LABEL_799;
          }
          else if ( v66 >= a5 && v66 <= v395 )
          {
            goto LABEL_799;
          }
LABEL_371:
          if ( !(unsigned int)CheckPwndFilter((__int64)v53, *(__int64 *)v414) )
            goto LABEL_799;
          if ( !v125 )
            goto LABEL_135;
          goto LABEL_878;
        case 0x100u:
        case 0x104u:
          v68 = 1;
          v413 = 1;
          if ( (*(_DWORD *)(v8 + 440) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v8) < 0 )
            goto LABEL_878;
          v69 = v404[0];
          v18 = LOBYTE(v404[0]);
          v39 = v384;
          if ( v384 && (DWORD1(v408) & 0x10000) != 0 )
            goto LABEL_177;
          if ( LOBYTE(v404[0]) != 18LL )
          {
            *(_DWORD *)(*(_QWORD *)(v8 + 384) + 340LL) &= 0xFFFFFFF3;
            v69 = v404[0];
          }
          if ( !LOBYTE(gLangToggle[0]) || gLangToggleKeyState >= 8 )
            goto LABEL_155;
          v37 = v404[1] >> 16;
          v70 = 0LL;
          v71 = gLangToggle;
          while ( 1 )
          {
            v72 = *((_BYTE *)v71 + 1);
            if ( v72 ? v72 == BYTE2(v404[1]) : *(_BYTE *)v71 == LOBYTE(v404[0]) )
              break;
            v70 = (unsigned int)(v70 + 1);
            v71 += 4;
            v74 = (_DWORD)v70 == 3;
            if ( (unsigned int)v70 >= 3 )
              goto LABEL_153;
          }
          gLangToggleKeyState |= *(_DWORD *)&gLangToggle[4 * v70 + 2];
          v74 = (_DWORD)v70 == 3;
LABEL_153:
          if ( v74 )
            gLangToggleKeyState = 8;
LABEL_155:
          v75 = *(_QWORD *)(v8 + 384);
          v36 = *(unsigned __int8 *)(v75 + 196);
          v76 = *(_BYTE *)(v75 + 196) & 0x10;
          if ( v18 != 44 )
            goto LABEL_165;
          if ( (*(_BYTE *)(v75 + 196) & 0x10) != 0 )
          {
            if ( (*(_DWORD *)(v8 + 764) & 0x10) == 0 )
              goto LABEL_160;
          }
          else if ( (*(_DWORD *)(v8 + 764) & 0x20) == 0 )
          {
LABEL_160:
            xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
            v77 = *(_QWORD *)(*(_QWORD *)(v8 + 384) + 88LL);
            if ( !v76 && (v404[1] & 0xFF0000) != 0x10000LL )
              v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 408) + 8LL) + 16LL);
            v38 = 1LL;
            if ( v77 )
            {
              v78 = HIDWORD(v409) != 1;
              v435 = *(_QWORD *)(v8 + 368);
              *(_QWORD *)(v8 + 368) = &v435;
              v436 = v77;
              ++*(_DWORD *)(v77 + 8);
              xxxSnapWindow(v77, v78);
              ThreadUnlock1(v80, v79);
            }
            goto LABEL_26;
          }
LABEL_165:
          if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
          {
            v81 = (unsigned int)v18;
            if ( (v36 & 0x10) != 0 )
              LODWORD(v81) = v18 | 0x400;
            if ( (v36 & 4) != 0 )
              LODWORD(v81) = v81 | 0x200;
            if ( (v36 & 1) != 0 )
              LODWORD(v81) = v81 | 0x100;
            v82 = (_QWORD *)HotKeyToWindow(v81);
            if ( v82 )
            {
              v36 = v82[2];
              v37 = *(_QWORD *)(v36 + 408);
              if ( *(_QWORD *)(v8 + 408) == v37 )
              {
                PostTransformableMessage(*(_QWORD *)(v83 + 88), 274, 61776, *v82, 0);
                xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
                v38 = 1LL;
                goto LABEL_26;
              }
            }
          }
LABEL_177:
          if ( v18 == 231 )
          {
            *(_WORD *)(v8 + 762) = WORD1(v69);
            v69 = 231LL;
          }
LABEL_180:
          v84 = (unsigned __int8)v69;
          if ( (unsigned __int8)v69 == 231LL )
            v69 = 231LL;
          v404[0] = v69;
          if ( v39 && (DWORD1(v408) & 0x10000) != 0 )
            goto LABEL_239;
          if ( gbGraveKeyToggle )
          {
            v18 = (__int64)v512;
            if ( (GetAppImeCompatFlags(0LL) & 0x800000) == 0 && BYTE2(v404[1]) == 41 )
            {
              if ( v39 )
              {
                v85 = *((_QWORD *)v512 + 48);
                if ( (*(_BYTE *)(v85 + 196) & 0x15) == 0
                  && (*(_BYTE *)(v85 + 214) & 0x40) == 0
                  && (*(_BYTE *)(v85 + 215) & 1) == 0
                  && ((v86 = *(__int64 **)(v85 + 80)) == 0LL && (v86 = *(__int64 **)(v85 + 88)) == 0LL
                   || (struct tagTHREADINFO *)v86[2] == v512) )
                {
                  v8 = (__int64)v512;
                  xxxSkipSysMsg(v512, (struct tagQMSG *)&v402);
                  v38 = 1LL;
                  if ( !v68 && v86 )
                  {
                    v464 = *v86;
                    v465 = 80;
                    v466 = 0LL;
                    v467 = 0LL;
                    v468 = 0LL;
                    v469 = 0LL;
                    xxxCallCtfHook(3, 0, 1LL, (__int64)&v464);
                  }
                  goto LABEL_26;
                }
              }
            }
          }
          else
          {
            v18 = (__int64)v512;
          }
          if ( v417 || v68 || !v39 || !LOBYTE(gLangToggle[0]) )
            goto LABEL_239;
          v87 = 0;
          v88 = 0;
          v89 = 0;
          ZwQueryDefaultLocale(0, &DefaultLocaleId);
          v90 = *(_QWORD *)(v18 + 384);
          v91 = *(_QWORD *)(v90 + 80);
          if ( !v91 )
          {
            v91 = *(_QWORD *)(v90 + 88);
            if ( !v91 )
              goto LABEL_227;
          }
          v92 = *(_QWORD *)(v91 + 16);
          v93 = *(_QWORD *)(v92 + 392);
          v94 = gLangToggleKeyState;
          if ( gLangToggleKeyState < 8 && (DefaultLocaleId & 0x3FF) == 1 )
          {
            v95 = HKLtoPKL(*(_QWORD *)(v91 + 16), 1LL);
            if ( v93 )
            {
              if ( v95 )
              {
                if ( *(_QWORD *)(v93 + 40) != *(_QWORD *)(v95 + 40) )
                {
                  v96 = HKLtoPKL(v92, 0LL);
                  if ( v97 == v96 && ((*(_DWORD *)(v93 + 40) & 0x3FF) == 1 || (*(_DWORD *)(v97 + 40) & 0x3FF) == 1) )
                    v89 = 1;
                }
              }
            }
          }
          if ( v94 == 3 )
          {
            v87 = 1;
            v88 = 2;
            if ( v89 && (*(_DWORD *)(v93 + 40) & 0x3FF) != 1 )
              goto LABEL_224;
            v98 = 1LL;
LABEL_223:
            v93 = HKLtoPKL(v92, v98);
            goto LABEL_224;
          }
          if ( v94 == 5 )
          {
            v87 = 1;
            v88 = 4;
            if ( v89 && (*(_DWORD *)(v93 + 40) & 0x3FF) == 1 )
              goto LABEL_224;
            v98 = 0LL;
            goto LABEL_223;
          }
          if ( v94 != 7 )
            goto LABEL_228;
          v93 = gspklBaseLayout;
LABEL_224:
          if ( v93 || (v93 = *(_QWORD *)(v92 + 392)) != 0 )
          {
            PostMessage(v91, 80LL, v88 | (unsigned __int64)((*(_DWORD *)(v93 + 64) & gSystemFS) != 0));
LABEL_227:
            v94 = gLangToggleKeyState;
          }
LABEL_228:
          if ( v87 )
          {
            v37 = v404[1] >> 16;
            v99 = &unk_1C03217B4;
            v36 = 3LL;
            do
            {
              v100 = *((_BYTE *)v99 - 3);
              if ( v100 )
                v101 = v100 == BYTE2(v404[1]);
              else
                v101 = *((_BYTE *)v99 - 4) == LOBYTE(v404[0]);
              if ( v101 )
              {
                v94 &= ~*v99;
                gLangToggleKeyState = v94;
              }
              v99 += 2;
              --v36;
            }
            while ( v36 );
          }
          else
          {
            gLangToggleKeyState = 0;
          }
          v38 = (unsigned __int64)v398;
          v66 = v385;
LABEL_239:
          if ( v84 == 121 )
          {
            v66 |= 4u;
            v385 = v66;
          }
          if ( (*(_BYTE *)(*((_QWORD *)v512 + 48) + 196LL) & 4) != 0 && v84 == 27 )
          {
            v66 |= 4u;
            v385 = v66;
          }
          v8 = (__int64)v512;
          if ( (*((_DWORD *)v512 + 110) & 8) == 0 )
            v404[1] &= ~0x2000000uLL;
LABEL_247:
          MouseKeyFlags = LOBYTE(v404[0]);
          v102 = *(_QWORD *)(v8 + 384);
          v53 = *(struct tagWND **)(v102 + 80);
          v387 = (__int64)v53;
          if ( !v53 )
          {
            v53 = *(struct tagWND **)(v102 + 88);
            v387 = (__int64)v53;
            if ( !v53 )
              goto LABEL_805;
            if ( v66 - 256 <= 3 )
            {
              v66 += 4;
              v385 = v66;
            }
          }
          v103 = v420;
          v420 = (__int64)v53;
          ++*((_DWORD *)v53 + 2);
          if ( v103 )
            HMUnlockObject(v103);
          v104 = (__int64 *)((char *)v53 + 16);
          v105 = *((_QWORD *)v53 + 2);
          if ( v105 == v8 )
          {
            LODWORD(v18) = 0;
            v390 = 0;
            goto LABEL_265;
          }
          LODWORD(v18) = 1;
          v390 = 1;
          if ( *(_QWORD *)(v105 + 384) != *(_QWORD *)(v8 + 384) )
            goto LABEL_805;
          if ( (unsigned int)IsInsideMenuLoop(v8) )
          {
            v106 = *(_QWORD *)(**(_QWORD **)(v8 + 528) + 8LL);
LABEL_259:
            if ( v106 )
            {
              v53 = (struct tagWND *)v106;
              v387 = v106;
              v104 = (__int64 *)(v106 + 16);
              LODWORD(v18) = *(_QWORD *)(v106 + 16) != v8;
              v390 = v18;
              v108 = v420;
              v420 = v106;
              ++*(_DWORD *)(v106 + 8);
              if ( v108 )
                HMUnlockObject(v108);
            }
            goto LABEL_262;
          }
          v107 = *(__int64 **)(v8 + 592);
          if ( v107 )
          {
            v106 = *v107;
            goto LABEL_259;
          }
LABEL_262:
          if ( !v418 )
          {
            v418 = *v104;
            LockExchangeW32Thread(v418, &v431);
          }
LABEL_265:
          if ( v395 || a5 != -1 )
          {
            if ( v395 <= a5 )
            {
              if ( v66 < v395 || v66 > a5 )
                goto LABEL_27;
            }
            else if ( v66 >= a5 && v66 <= v395 )
            {
              goto LABEL_27;
            }
          }
          if ( !(unsigned int)CheckPwndFilter((__int64)v53, *(__int64 *)v414) )
            goto LABEL_27;
          if ( (_DWORD)v18 )
          {
            v51 = 0LL;
            goto LABEL_878;
          }
          if ( v39 )
          {
            if ( (DWORD1(v408) & 0x10000) != 0 )
            {
              v109 = v421;
LABEL_295:
              if ( v39 )
              {
                if ( (DWORD1(v408) & 0x10000) == 0 && v38 > 1 && (*(_DWORD *)(v8 + 1096) & 0x800000) != 0 )
                {
                  DeferSysPeekMsg((struct tagTHREADINFO *)v8, 1);
                  *((_QWORD *)&v408 + 1) = v8;
                  v394 = v111;
                }
                xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
              }
              goto LABEL_301;
            }
            if ( !(unsigned int)IsInsideMenuLoop(v8) )
            {
              if ( MouseKeyFlags == 93 && v66 == 257 )
                PostTransformableMessage((_DWORD)v53, 123, *(_QWORD *)v53, -1, 0);
              if ( MouseKeyFlags == 112 && v66 == 256 )
                PostMessage(v53, 77LL, 0LL);
            }
          }
          if ( MouseKeyFlags == 16 )
          {
            v110 = BYTE3(v404[1]) & 1 | 0xA0;
            if ( !v413
              && ((unsigned __int8)(1 << (2 * ((v110 ^ 1) & 3))) & *(_BYTE *)(((unsigned __int64)(v110 ^ 1u) >> 2)
                                                                            + *(_QWORD *)(v8 + 384)
                                                                            + 192)) != 0
              && (*(_DWORD *)(v8 + 440) & 8) == 0 )
            {
              v404[0] = v110;
LABEL_290:
              xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
              v38 = 1LL;
              goto LABEL_26;
            }
          }
          v109 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)MouseKeyFlags >> 2)
                                    + *(_QWORD *)(v8 + 384)
                                    + 192) & (1 << (2 * (MouseKeyFlags & 3)));
          v421 = v109;
          if ( !v109 )
            goto LABEL_295;
          if ( v39 )
          {
            if ( v38 > 1 )
              *(_QWORD *)(v38 + 40) |= 0x40000000uLL;
            goto LABEL_295;
          }
LABEL_301:
          v391 = v404[1];
          v112 = v404[0];
          MouseKeyFlags = v404[0];
          if ( v109 )
            v391 = v404[1] | 0x40000000;
          if ( v66 == 257 || v66 == 261 )
            v391 |= 0x80000000uLL;
          v113 = *(_QWORD *)(v8 + 384);
          if ( (*(_BYTE *)(v113 + 196) & 0x10) != 0 )
            v391 |= 0x20000000uLL;
          v114 = *(_QWORD *)(v8 + 528);
          if ( v114 && (*(_DWORD *)(v114 + 8) & 1) != 0 )
            v391 |= 0x10000000uLL;
          if ( (*(_DWORD *)(v113 + 340) & 0x4000) != 0 )
            v391 |= 0x8000000uLL;
          if ( !v417 && !gpImeHotKeyListHeader
            || (DWORD1(v408) & 0x10000) != 0
            || !v39
            || v114 && (*(_DWORD *)(v114 + 8) & 1) != 0
            || (*(_DWORD *)(v8 + 440) & 0x2000000) != 0 )
          {
            v116 = v399;
          }
          else
          {
            if ( v404[0] == 231 )
              v112 = (*(unsigned __int16 *)(v8 + 762) << 16) | 0xE7;
            v115 = xxxImmProcessKey(v113, (_DWORD)v53, v66, v112, v391);
            v116 = v115;
            v399 = v115;
            if ( (v115 & 0x11) != 0 )
            {
              v38 = 1LL;
              if ( v394 == 1 )
              {
                HandleDeferredInput((struct tagTHREADINFO *)v8, 1);
                v394 = 0;
              }
              LODWORD(v18) = v385;
              goto LABEL_807;
            }
          }
          v38 = 1LL;
          if ( !v39 )
            goto LABEL_333;
          v386 = 1;
          LODWORD(v18) = 0;
          if ( (DWORD1(v408) & 0x10000) == 0 )
          {
            v117 = *(_QWORD *)(v8 + 384);
            v118 = *(_QWORD *)(v117 + 360);
            *(_QWORD *)(v117 + 360) = *((_QWORD *)&v406 + 1);
            v119 = xxxCallCtfHook(2, v116 & 2, MouseKeyFlags, v391);
            LODWORD(v18) = v119;
            *(_QWORD *)(*(_QWORD *)(v8 + 384) + 360LL) = v118;
            if ( v394 == 1 )
            {
              if ( v119 == 2 )
                goto LABEL_28;
              HandleDeferredInput((struct tagTHREADINFO *)v8, 1);
              v394 = 0;
            }
          }
          if ( (_DWORD)v18 )
          {
            LODWORD(v18) = v385;
            v120 = 1;
          }
          else
          {
LABEL_333:
            if ( ((*(_BYTE *)(v8 + 600) | *(_BYTE *)(*(_QWORD *)(v8 + 416) + 24LL)) & 8) == 0 )
            {
              v120 = v386;
LABEL_339:
              if ( v120 && v39 && ((*(_BYTE *)(v8 + 600) | *(_BYTE *)(*(_QWORD *)(v8 + 416) + 24LL)) & 0x40) != 0 )
                xxxCallHook(7LL, MouseKeyFlags, v391, 5LL);
              goto LABEL_843;
            }
            v120 = 1;
            v386 = 1;
            v121 = 3LL;
            if ( v39 )
              v121 = 0LL;
            if ( !(unsigned int)xxxCallHook(v121, MouseKeyFlags, v391, 2LL) )
              goto LABEL_339;
            LODWORD(v18) = v385;
          }
LABEL_808:
          xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
          if ( v396 )
          {
            v325 = *(_QWORD *)(v8 + 416);
            v36 = (unsigned int)(*(_DWORD *)(v8 + 600) | *(_DWORD *)(v325 + 24));
            if ( ((*(_BYTE *)(v8 + 600) | *(_BYTE *)(v325 + 24)) & 0x40) != 0 )
              xxxCallHook(6LL, (unsigned int)v18, &v423, 5LL);
            v396 = 0;
          }
          if ( v120 )
          {
            v326 = *(_QWORD *)(v8 + 416);
            v36 = (unsigned int)(*(_DWORD *)(v8 + 600) | *(_DWORD *)(v326 + 24));
            if ( ((*(_BYTE *)(v8 + 600) | *(_BYTE *)(v326 + 24)) & 0x40) != 0 )
              xxxCallHook(7LL, MouseKeyFlags, v391, 5LL);
            v386 = 0;
          }
          if ( v39 )
            goto LABEL_26;
          break;
        case 0x101u:
        case 0x105u:
          v39 = v384;
          v69 = v404[0];
          v68 = v413;
          goto LABEL_180;
        case 0x102u:
          v39 = v384;
          goto LABEL_247;
        case 0x119u:
        case 0x11Bu:
          goto LABEL_453;
        default:
          goto LABEL_472;
      }
    }
LABEL_397:
    if ( (*(_DWORD *)(v8 + 440) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v8) < 0 )
      goto LABEL_878;
    if ( (unsigned int)IsWheelTargetDesktopApp(v8)
      || (unsigned int)HasThreadRequestedLegacyMouseWheelRouting(v8)
      || DWORD2(v409) == 34 )
    {
      v53 = *(struct tagWND **)(*(_QWORD *)(v8 + 384) + 80LL);
      v387 = (__int64)v53;
    }
    else if ( v53 && (unsigned int)IsCompositionInputWindow(v53) )
    {
      if ( (*((_BYTE *)v53 + 55) & 8) != 0 || (unsigned int)IsCompositionInputWindowUIDisabled(v53) )
        goto LABEL_804;
    }
    else if ( !(unsigned int)IsInsideMenuLoop(v8) )
    {
      ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
      v474[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v474;
      v474[1] = ThreadDesktopWindow;
      if ( ThreadDesktopWindow )
        ++*(_DWORD *)(ThreadDesktopWindow + 8);
      v457 = 512;
      v458 = v404[0];
      v459 = v404[1];
      v460 = &v388;
      v461 = 1LL;
      v462 = 0LL;
      v463 = 0;
      v135 = xxxDCEWindowHitTestIndirect(
               (struct tagWND *)ThreadDesktopWindow,
               (struct tagPOINT)v407,
               (__int64)&v457,
               ThreadDesktopWindow);
      LOBYTE(v136) = 1;
      v53 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v135, v136, v137, v138);
      v387 = (__int64)v53;
      ThreadUnlock1(v140, v139);
    }
    if ( !v53 || (unsigned int)IsInsideMenuLoop(v8) )
      goto LABEL_804;
    v141 = v420;
    v420 = (__int64)v53;
    ++*((_DWORD *)v53 + 2);
    if ( v141 )
      HMUnlockObject(v141);
    v142 = *((_QWORD *)v53 + 2);
    if ( v142 == v8 )
    {
      v143 = 0;
      v390 = 0;
    }
    else
    {
      v143 = 1;
      v390 = 1;
      if ( *(_QWORD *)(v142 + 384) != *(_QWORD *)(v8 + 384) )
        goto LABEL_804;
      if ( !v418 )
      {
        v418 = v142;
        LockExchangeW32Thread(v142, &v431);
      }
    }
    v144 = v395;
    v18 = v385;
    if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)v38, v385, v395, a5)
      || !(unsigned int)CheckPwndFilter((__int64)v53, *(__int64 *)v414) )
    {
      goto LABEL_799;
    }
    if ( v143 )
      goto LABEL_878;
    if ( !v38 || !(unsigned int)IsMouseInPointerActive(v8, v38) )
    {
      v39 = v384;
      goto LABEL_443;
    }
    v145 = *(_DWORD *)(v38 + 100);
    if ( (v145 & 0x400) == 0 )
    {
      v39 = v384;
      if ( v384 )
      {
        if ( IsMiPMouseMessage(*(_DWORD *)(v38 + 24)) )
        {
          if ( (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(v38 + 120)) )
          {
            v146 = *(_DWORD **)(v8 + 1136);
            if ( v146 )
            {
              if ( (*v146 & 2) == 0 && (*v146 & 4) == 0 )
                goto LABEL_290;
            }
          }
          v147 = *(_DWORD **)(v8 + 1136);
          if ( v147 )
            *v147 &= ~2u;
        }
LABEL_443:
        if ( v39 )
          xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
      }
LABEL_445:
      v148 = GetMouseKeyFlags(*(_QWORD *)(v8 + 384));
      MouseKeyFlags = v404[0] | v148;
      v389.x = SLOWORD(v404[1]);
      v389.y = SWORD1(v404[1]);
      PhysicalToLogicalDPIPointWithHitTest(&v389, &v389, 0LL, v53);
      v391 = (LOWORD(v389.y) << 16) | LOWORD(v389.x);
      *(struct tagPOINT *)((char *)&v405 + 4) = v389;
      v423 = v389;
      v424 = *(_QWORD *)v53;
      v425 = 0;
      v426 = *((_QWORD *)&v406 + 1);
      v427 = v404[0];
      v38 = 1LL;
      if ( !v39 || (v396 = 1, !(unsigned int)xxxCallCtfHook(7, 0, v18, (__int64)&v423)) )
      {
        if ( ((*(_DWORD *)(v8 + 600) | *(_DWORD *)(*(_QWORD *)(v8 + 416) + 24LL)) & 0x100) == 0
          || (v396 = 1, !(unsigned int)xxxCallMouseHook((unsigned int)v18, &v423, v39)) )
        {
          if ( v396 && v39 && ((*(_BYTE *)(v8 + 600) | *(_BYTE *)(*(_QWORD *)(v8 + 416) + 24LL)) & 0x40) != 0 )
            xxxCallHook(6LL, v18, &v423, 5LL);
          goto LABEL_843;
        }
      }
LABEL_807:
      v120 = v386;
      goto LABEL_808;
    }
    if ( !*((_QWORD *)v53 + 42) )
      *(_DWORD *)(v38 + 100) = v145 & 0xFFFFEFFF;
    v39 = v384;
    if ( !(unsigned int)GeneratePointerMessageFromMouse((struct tagQMSG *)v498, v18, (struct tagQMSG *)v38, v53, v384) )
    {
      if ( v39 )
      {
        *(_DWORD *)(v38 + 100) &= ~0x400u;
        goto LABEL_443;
      }
      goto LABEL_445;
    }
    v402 = v498[0];
    *(_OWORD *)v403 = v498[1];
    *(_OWORD *)v404 = v498[2];
    v405 = v498[3];
    v406 = v498[4];
    v407 = v498[5];
    v408 = v498[6];
    v409 = v498[7];
    v410 = v498[8];
    v411 = v499;
    v397 = 1;
    if ( v39 )
      *(_DWORD *)(v38 + 100) &= ~0x400u;
LABEL_787:
    LODWORD(v18) = v403[2];
LABEL_788:
    if ( ((DWORD2(v409) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v409) != 50 )
    {
      v385 = v18;
      MouseKeyFlags = v404[0];
      v391 = v404[1];
      goto LABEL_821;
    }
    EtwTraceBeginPointerMessageRetrieve(v38, LOWORD(v404[0]), (unsigned int)v18);
    v51 = 0LL;
    v321 = xxxRetrievePointerInputMessage(
             v8,
             v414[0],
             v144,
             a5,
             1,
             0,
             &v384,
             (struct tagQMSG *)v38,
             (__int64)&v387,
             (__int64)&v385,
             (__int64)&MouseKeyFlags,
             (__int64)&v391,
             &v390,
             a8);
    EtwTraceEndPointerMessageRetrieve(v38, LOWORD(v404[0]), v403[2]);
    v53 = (struct tagWND *)v387;
    if ( v387 )
      ThreadLockExchange(v387, (__int64)&v419);
    v322 = v321 - 1;
    if ( !v322 )
      break;
    v323 = v322 - 1;
    if ( !v323 )
    {
      if ( v390 )
      {
        v327 = *((_QWORD *)v53 + 2);
        LockExchangeW32Thread(v327, &v437);
        v50 = v392;
        v59 = 0LL;
        goto LABEL_881;
      }
      goto LABEL_878;
    }
    v324 = v323 - 1;
    if ( !v324 )
    {
      xxxDefPointerProc(v53, v403[2], v404[0], v404[1]);
      goto LABEL_804;
    }
    if ( v324 != 1 )
      goto LABEL_804;
LABEL_799:
    v39 = v384;
LABEL_27:
    v38 = 1LL;
  }
  v39 = v384;
  LODWORD(v18) = v385;
LABEL_821:
  if ( v39 )
  {
    v328 = IsMouseInPointerActive(v8, 0LL);
    v329 = v397;
    if ( v328 && v397 )
    {
      if ( v53 )
        v330 = *(_QWORD *)v53;
      else
        v330 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v8 + 1136) + 48LL) = v330;
      v331 = *(_QWORD *)(v8 + 1136);
      if ( (*(_DWORD *)(v331 + 36) & 0x400000) != 0 && !(unsigned int)IsCompositionInputWindow(v53) )
        *(_DWORD *)(v331 + 36) = v332 & 0xFFBFFFFF;
      MiPWindowFlags = GetMiPWindowFlags(v53);
      SetMiPWindowFlags(v53, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
      if ( ((v403[2] - 578) & 0xFFFFFFFB) != 0 )
      {
        if ( ((v403[2] - 579) & 0xFFFFFFFB) == 0 )
          **(_DWORD **)(v8 + 1136) &= ~8u;
      }
      else
      {
        **(_DWORD **)(v8 + 1136) ^= (**(_DWORD **)(v8 + 1136) ^ (8 * (v403[2] == 578))) & 8;
      }
    }
    else
    {
      xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
    }
  }
  else
  {
    v329 = v397;
  }
  if ( (unsigned int)IsPointerMessageTouchpad((struct tagTHREADINFO *)v8, v404[1], v329) )
  {
    if ( !v39 && !(unsigned int)IsPTPRedirected((struct tagTHREADINFO *)v8, (struct tagMSG *)v403) )
      xxxSkipSysMsg((struct tagTHREADINFO *)v8, (struct tagQMSG *)&v402);
    v334 = v391;
    if ( (_DWORD)v18 == 595 )
      v334 = -1LL;
    v391 = v334;
  }
LABEL_843:
  if ( *(_QWORD *)(v8 + 676) != *(_QWORD *)((char *)&v405 + 4) )
    *(_DWORD *)(v8 + 440) |= 0x100000u;
  v335 = v398;
  if ( (unsigned __int64)v398 > 1 && (BYTE4(v408) & 0x20) != 0 )
  {
    if ( *((_DWORD *)v398 + 6) == 512 )
    {
      if ( v53 )
        v336 = *(_QWORD *)v53;
      else
        v336 = 0LL;
      *((_QWORD *)v398 + 2) = v336;
      *((_DWORD *)v335 + 25) |= 0x200u;
    }
    *((_QWORD *)v335 + 8) = v391;
  }
  *(_QWORD *)(v8 + 676) = *(_QWORD *)((char *)&v405 + 4);
  *(_QWORD *)(v8 + 684) = v407;
  *(_DWORD *)(v8 + 492) = v405;
  *(_QWORD *)(*(_QWORD *)(v8 + 384) + 360LL) = *((_QWORD *)&v406 + 1);
  *(_QWORD *)(*(_QWORD *)(v8 + 384) + 40LL) = 1LL;
  *(_QWORD *)(v8 + 496) = 1LL;
  *(_QWORD *)(v8 + 1100) = *((_QWORD *)&v409 + 1);
  *(_DWORD *)(v8 + 1144) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( *(_DWORD *)(v8 + 1104) == 1 )
    *(_DWORD *)(v8 + 1096) |= 0x20000u;
  else
    *(_DWORD *)(v8 + 1096) &= ~0x20000u;
  **(_DWORD **)(v8 + 400) &= ~8u;
  **(_QWORD **)(v8 + 432) &= 0x7FFFFFFFuLL;
  v337 = 0LL;
  if ( v384 )
  {
    v338 = *(_QWORD **)(v8 + 432);
    if ( (BYTE4(v408) & 1) != 0 )
      *v338 |= 0x1000uLL;
    else
      *v338 &= ~0x1000uLL;
  }
  v339 = v385;
  TransferWakeBit(v512, v385);
  ClearWakeBit(v512, 31751LL, 1LL);
  if ( v384 )
  {
    if ( v397 )
    {
      v340 = (_DWORD *)*((_QWORD *)v512 + 142);
      if ( v340 )
      {
        if ( (*v340 & 1) != 0 && (*v340 & 4) != 0 )
          SetMiPWakeBit(v512);
      }
    }
  }
  if ( v387 )
    v337 = *(_QWORD *)v387;
  *(_QWORD *)a2 = v337;
  *(_DWORD *)(a2 + 8) = v339;
  v341 = MouseKeyFlags;
  if ( (v399 & 2) != 0 )
    v341 = 229LL;
  *(_QWORD *)(a2 + 16) = v341;
  *(_QWORD *)(a2 + 24) = v391;
  *(_DWORD *)(a2 + 32) = v405;
  *(_QWORD *)(a2 + 36) = *(_QWORD *)((char *)&v405 + 4);
  if ( v384 )
  {
    EtwTraceInputProcessDelay(v512);
    *(_DWORD *)(*((_QWORD *)v512 + 48) + 368LL) = (MEMORY[0xFFFFF78000000320]
                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v342 = *(_DWORD *)(a2 + 8);
    if ( v342 == 256 )
    {
      *((_DWORD *)v512 + 300) |= 1u;
      *((_QWORD *)v512 + 148) = *(_QWORD *)((char *)v512 + 1100);
      *((_DWORD *)v512 + 294) = *(unsigned __int16 *)(a2 + 26);
      *((_DWORD *)v512 + 295) = *(_DWORD *)(a2 + 16);
      *((_QWORD *)v512 + 149) = *((_QWORD *)&v410 + 1);
    }
    else if ( ((v342 - 257) & 0xFFFFFFFB) == 0 )
    {
      *((_DWORD *)v512 + 300) &= ~1u;
    }
  }
  EtwTraceRetrieveInputMessage(a2, (unsigned int)v384);
  PopAndFreeW32ThreadLock((__int64)&v437, v343, v344, v345);
  PopAndFreeW32ThreadLock((__int64)&v440, v346, v347, v348);
  PopAndFreeW32ThreadLock((__int64)&v443, v349, v350, v351);
  PopAndFreeW32ThreadLock((__int64)&v428, v352, v353, v354);
  PopAndFreeW32ThreadLock((__int64)&v431, v355, v356, v357);
  ThreadUnlock1(v359, v358);
  return 1LL;
}
