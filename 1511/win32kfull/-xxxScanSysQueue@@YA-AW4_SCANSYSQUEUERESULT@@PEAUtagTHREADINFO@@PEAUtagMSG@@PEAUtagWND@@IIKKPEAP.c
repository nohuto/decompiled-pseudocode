/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0008178 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000B1DC (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     SetMiPPromotion @ 0x1C000C34C (SetMiPPromotion.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C000C3D0 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C000C914 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C000C938 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     InternalSetTimer @ 0x1C004A670 (InternalSetTimer.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     WakeSomeone @ 0x1C0051C7C (WakeSomeone.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0053EAC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054110 (-xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     CheckPwndFilter @ 0x1C00563B8 (CheckPwndFilter.c)
 *     xxxCallCtfHook @ 0x1C00575D0 (xxxCallCtfHook.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     ClearWakeBit @ 0x1C00643C0 (ClearWakeBit.c)
 *     IsMouseInPointerActive @ 0x1C006440C (IsMouseInPointerActive.c)
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C0064954 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     TransferWakeBit @ 0x1C0064BF0 (TransferWakeBit.c)
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0065214 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     IsPointerInputMessage @ 0x1C00652F8 (IsPointerInputMessage.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C0065340 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0065430 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C0065734 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     PostMoveToPwnd @ 0x1C0065C2C (PostMoveToPwnd.c)
 *     IsThreadDesktopComposed @ 0x1C00662F4 (IsThreadDesktopComposed.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     ThreadLockExchange @ 0x1C006D548 (ThreadLockExchange.c)
 *     GetThreadDesktopWindow @ 0x1C006E690 (GetThreadDesktopWindow.c)
 *     zzzSetCursor @ 0x1C0070694 (zzzSetCursor.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00815B4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxImmProcessKey @ 0x1C0081D4C (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C0082004 (GetAppImeCompatFlags.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 *     LockExchangeW32Thread @ 0x1C008D7DC (LockExchangeW32Thread.c)
 *     _PostTransformableMessage @ 0x1C0091938 (_PostTransformableMessage.c)
 *     xxxWindowHitTest @ 0x1C0096200 (xxxWindowHitTest.c)
 *     ThreadLockExchangeAlways @ 0x1C0096828 (ThreadLockExchangeAlways.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C009686C (IsCompositionInputWindowUIDisabled.c)
 *     HKLtoPKL @ 0x1C0099B34 (HKLtoPKL.c)
 *     GetMouseKeyFlags @ 0x1C00C6920 (GetMouseKeyFlags.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C00CA0F4 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00DC9C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxMouseActivate @ 0x1C00E95C4 (xxxMouseActivate.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     IsInsideMenuLoop @ 0x1C00FEA20 (IsInsideMenuLoop.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01074E8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     xxxCallMouseHook @ 0x1C01076C8 (xxxCallMouseHook.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0111430 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013777C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01377A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNItemHitTest @ 0x1C0138158 (MNItemHitTest.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01DA2F8 (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     IsWheelTargetDesktopApp @ 0x1C01DA448 (IsWheelTargetDesktopApp.c)
 *     FreePointerMessageParams @ 0x1C01E1174 (FreePointerMessageParams.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01E1A60 (xxxRetrievePointerInputMessage.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7198 (xxxCallJournalPlaybackHook.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216594 (xxxCallHandleMenuMessages.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C0224AA4 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 *     xxxDefPointerProc @ 0x1C02317CC (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C02319E0 (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0231DE4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
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
  __int64 v9; // r12
  __int16 v10; // cx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 Valid; // rcx
  __int64 v28; // rsi
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rbx
  struct tagWND *v31; // r15
  _QWORD *v32; // r9
  __int64 v33; // r14
  unsigned __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rbx
  _QWORD *v37; // rdx
  unsigned int v38; // ebx
  __int64 v39; // r13
  unsigned __int64 v40; // r12
  LONG y; // r14d
  __int64 v42; // r8
  int v43; // r8d
  int v44; // ecx
  HWND v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  struct tagPOINT v50; // r8
  struct tagPOINT v51; // rbx
  char *v52; // r14
  int v53; // eax
  int v54; // eax
  BOOL v55; // r13d
  unsigned __int16 v56; // r14
  int v57; // edx
  unsigned int v58; // r12d
  __int64 v59; // r8
  __int64 v60; // rbx
  int v61; // r13d
  int v62; // eax
  unsigned int v63; // r14d
  int v64; // r12d
  unsigned int v65; // ebx
  unsigned __int64 v66; // r9
  int v67; // ecx
  int v68; // r13d
  __int128 *v69; // rdx
  int v70; // r13d
  int v71; // eax
  unsigned int v72; // r11d
  __int64 v73; // r10
  char v74; // r13
  _QWORD *v75; // rax
  unsigned int v76; // ebx
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v82; // rbx
  __int64 v83; // rsi
  __int64 v84; // r12
  __int64 v85; // r14
  __int64 v86; // rdx
  __int64 v87; // rcx
  int v88; // r14d
  __int64 v89; // r11
  __int64 v90; // r10
  int v91; // ebx
  __int64 v92; // rbx
  int v93; // edx
  __int64 v94; // rax
  __int64 *v95; // rbx
  __int64 v96; // rcx
  BOOL v97; // r14d
  __int64 v98; // r8
  int v99; // ebx
  int v100; // r9d
  __int64 v101; // r10
  __int64 v102; // rcx
  int v103; // eax
  int v104; // ebx
  __int64 v105; // rcx
  _DWORD *v106; // rax
  unsigned __int64 *v107; // rax
  __int64 v108; // rax
  int v109; // r14d
  __int64 v110; // rax
  __int64 v111; // rcx
  int v112; // eax
  int v113; // ecx
  __int64 v114; // rdx
  int v115; // eax
  unsigned __int8 v116; // r10
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rbx
  int v122; // eax
  unsigned __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 *v126; // rax
  __int64 v127; // rax
  struct tagWND *v128; // rcx
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rax
  __int64 v131; // rcx
  int v132; // eax
  _DWORD *v133; // rax
  unsigned __int64 v134; // rcx
  __int64 v135; // r14
  __int64 MiPWindowFlags; // rax
  __int64 v137; // rcx
  _DWORD *v138; // rax
  __int64 v139; // rax
  __int64 v140; // r13
  __int64 v141; // r15
  __int64 v142; // r9
  int v143; // r11d
  unsigned int v144; // edx
  bool v145; // zf
  __int64 v146; // r10
  char v147; // al
  bool v148; // zf
  __int64 v149; // rcx
  _BOOL8 v150; // rdx
  __int64 v151; // rdx
  __int64 v152; // rcx
  unsigned int v153; // eax
  __int64 v154; // rcx
  __int64 v155; // rcx
  _QWORD *v156; // rax
  __int64 v157; // r10
  __int64 v158; // rax
  __int64 *v159; // rbx
  __int64 v160; // rcx
  __int64 *v161; // rcx
  __int64 ThreadDesktopWindow; // rax
  HWND v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rcx
  int v167; // ebx
  int v168; // ecx
  _DWORD *v169; // rax
  _DWORD *v170; // rax
  unsigned int v171; // eax
  int v172; // ebx
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // r8
  __int64 v176; // r12
  int v177; // eax
  unsigned __int16 v178; // dx
  unsigned __int64 v179; // rax
  unsigned __int64 v180; // rax
  unsigned __int64 v181; // rax
  __int64 v182; // rcx
  int v183; // ebx
  __int64 v184; // rcx
  __int64 v185; // rcx
  __int64 v186; // rcx
  _DWORD *v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // rcx
  int v190; // r14d
  __int64 v191; // rcx
  __int64 v192; // rcx
  __int64 v193; // rcx
  _DWORD *v194; // rdx
  __int64 v195; // rcx
  int v196; // eax
  __int64 v197; // rcx
  __int64 v198; // rcx
  __int64 v199; // rcx
  __int64 v200; // rcx
  _DWORD *v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // rcx
  __int64 v204; // rcx
  __int64 v205; // rcx
  __int64 v206; // rcx
  _DWORD *v207; // rdx
  __int64 v208; // rcx
  int v209; // eax
  unsigned int TouchTimeFromCPLValue; // ecx
  __int64 v211; // r14
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  unsigned __int64 v218; // r8
  __int64 v219; // rdx
  __int64 v220; // rcx
  int v221; // eax
  int v222; // r10d
  int v223; // r11d
  int v224; // ebx
  int v225; // ebx
  int v226; // ebx
  int v227; // ebx
  int v228; // r11d
  __int64 AppImeCompatFlags; // rax
  __int64 v230; // rcx
  __int64 v231; // r10
  __int64 v232; // rcx
  __int64 v233; // rax
  __int64 v234; // r10
  __int64 v235; // rax
  __int64 v236; // rax
  __int64 v237; // r10
  __int64 v238; // rdx
  unsigned int i; // edx
  unsigned __int64 v240; // rax
  char v241; // cl
  __int64 v242; // rcx
  __int64 v243; // rax
  __int64 v244; // rax
  unsigned int v245; // [rsp+70h] [rbp-638h] BYREF
  int v246; // [rsp+74h] [rbp-634h] BYREF
  int v247; // [rsp+78h] [rbp-630h]
  __int64 v248; // [rsp+80h] [rbp-628h] BYREF
  int v249; // [rsp+88h] [rbp-620h]
  unsigned int v250; // [rsp+8Ch] [rbp-61Ch] BYREF
  int v251; // [rsp+90h] [rbp-618h] BYREF
  __int64 v252; // [rsp+98h] [rbp-610h] BYREF
  struct tagPOINT v253; // [rsp+A0h] [rbp-608h] BYREF
  __int64 MouseKeyFlags; // [rsp+A8h] [rbp-600h] BYREF
  int v255; // [rsp+B0h] [rbp-5F8h]
  int v256; // [rsp+B4h] [rbp-5F4h]
  __int64 v257; // [rsp+B8h] [rbp-5F0h]
  int v258; // [rsp+C0h] [rbp-5E8h]
  __int64 v259; // [rsp+C8h] [rbp-5E0h]
  __int64 v260; // [rsp+D0h] [rbp-5D8h]
  unsigned int v261; // [rsp+D8h] [rbp-5D0h]
  int v262; // [rsp+DCh] [rbp-5CCh]
  int v263; // [rsp+E0h] [rbp-5C8h]
  __int128 v264; // [rsp+F0h] [rbp-5B8h] BYREF
  unsigned int v265[4]; // [rsp+100h] [rbp-5A8h]
  unsigned __int64 v266[2]; // [rsp+110h] [rbp-598h]
  __int128 v267; // [rsp+120h] [rbp-588h]
  __int128 v268; // [rsp+130h] [rbp-578h]
  struct tagPOINT v269[2]; // [rsp+140h] [rbp-568h]
  __int128 v270; // [rsp+150h] [rbp-558h]
  __int128 v271; // [rsp+160h] [rbp-548h]
  __int128 v272; // [rsp+170h] [rbp-538h]
  int v273[2]; // [rsp+180h] [rbp-528h]
  __int64 v274; // [rsp+188h] [rbp-520h]
  int v275; // [rsp+190h] [rbp-518h]
  __int64 v276; // [rsp+198h] [rbp-510h]
  __int128 v277; // [rsp+1A0h] [rbp-508h]
  __int64 v278; // [rsp+1B0h] [rbp-4F8h] BYREF
  struct tagWND *v279; // [rsp+1B8h] [rbp-4F0h]
  DWORD DefaultLocaleId; // [rsp+1D0h] [rbp-4D8h] BYREF
  struct tagPOINT v281; // [rsp+1D8h] [rbp-4D0h] BYREF
  unsigned __int64 v282; // [rsp+1E0h] [rbp-4C8h]
  unsigned int v283; // [rsp+1E8h] [rbp-4C0h]
  __int64 v284; // [rsp+1F0h] [rbp-4B8h]
  int v285; // [rsp+1F8h] [rbp-4B0h]
  struct tagMENUSTATE *v286; // [rsp+200h] [rbp-4A8h] BYREF
  __int64 v287; // [rsp+208h] [rbp-4A0h] BYREF
  __int64 v288; // [rsp+210h] [rbp-498h]
  _QWORD v289[3]; // [rsp+220h] [rbp-488h] BYREF
  _QWORD v290[3]; // [rsp+238h] [rbp-470h] BYREF
  _DWORD v291[4]; // [rsp+250h] [rbp-458h] BYREF
  _QWORD v292[3]; // [rsp+260h] [rbp-448h] BYREF
  _QWORD v293[3]; // [rsp+278h] [rbp-430h] BYREF
  _QWORD v294[4]; // [rsp+290h] [rbp-418h] BYREF
  int v295; // [rsp+2B0h] [rbp-3F8h] BYREF
  unsigned __int64 v296; // [rsp+2B8h] [rbp-3F0h]
  unsigned __int64 v297; // [rsp+2C0h] [rbp-3E8h]
  unsigned int *v298; // [rsp+2C8h] [rbp-3E0h]
  __int64 v299; // [rsp+2D0h] [rbp-3D8h]
  unsigned int v300; // [rsp+2D8h] [rbp-3D0h] BYREF
  unsigned __int64 v301; // [rsp+2E0h] [rbp-3C8h]
  unsigned __int64 v302; // [rsp+2E8h] [rbp-3C0h]
  unsigned int *v303; // [rsp+2F0h] [rbp-3B8h]
  int v304; // [rsp+2F8h] [rbp-3B0h]
  int v305; // [rsp+2FCh] [rbp-3ACh]
  __int64 v306; // [rsp+300h] [rbp-3A8h]
  int v307; // [rsp+308h] [rbp-3A0h]
  unsigned __int64 v308; // [rsp+310h] [rbp-398h]
  __int64 v309; // [rsp+318h] [rbp-390h]
  __int64 v310; // [rsp+320h] [rbp-388h]
  __int64 v311; // [rsp+328h] [rbp-380h]
  _QWORD v312[3]; // [rsp+330h] [rbp-378h] BYREF
  __int128 v313; // [rsp+348h] [rbp-360h]
  __int128 v314; // [rsp+358h] [rbp-350h]
  __int128 v315; // [rsp+368h] [rbp-340h]
  __int128 v316; // [rsp+380h] [rbp-328h]
  __int128 v317; // [rsp+390h] [rbp-318h]
  __int128 v318; // [rsp+3A0h] [rbp-308h]
  __int128 v319; // [rsp+3B0h] [rbp-2F8h]
  __int128 v320; // [rsp+3C0h] [rbp-2E8h]
  __int128 v321; // [rsp+3D0h] [rbp-2D8h]
  __int128 v322; // [rsp+3E0h] [rbp-2C8h]
  __int128 v323; // [rsp+3F8h] [rbp-2B0h]
  _QWORD v324[4]; // [rsp+410h] [rbp-298h] BYREF
  __int128 v325; // [rsp+430h] [rbp-278h] BYREF
  __int128 v326; // [rsp+440h] [rbp-268h]
  __int128 v327; // [rsp+450h] [rbp-258h]
  __int128 v328; // [rsp+460h] [rbp-248h]
  __int128 v329; // [rsp+470h] [rbp-238h]
  __int128 v330; // [rsp+480h] [rbp-228h]
  __int128 v331; // [rsp+490h] [rbp-218h]
  __int128 v332; // [rsp+4A0h] [rbp-208h]
  __int128 v333; // [rsp+4B0h] [rbp-1F8h]
  __int128 v334; // [rsp+4C0h] [rbp-1E8h] BYREF
  __m128i v335; // [rsp+4D0h] [rbp-1D8h]
  __int128 v336; // [rsp+4E0h] [rbp-1C8h]
  __int128 v337; // [rsp+4F0h] [rbp-1B8h]
  __int128 v338; // [rsp+500h] [rbp-1A8h]
  __int128 v339; // [rsp+510h] [rbp-198h]
  __int128 v340; // [rsp+520h] [rbp-188h]
  __int128 v341; // [rsp+530h] [rbp-178h]
  __int128 v342; // [rsp+540h] [rbp-168h]
  _OWORD v343[9]; // [rsp+550h] [rbp-158h] BYREF
  char v344[24]; // [rsp+5E0h] [rbp-C8h] BYREF
  int v345; // [rsp+5F8h] [rbp-B0h]

  v261 = a4;
  *(_QWORD *)v273 = a3;
  v9 = 0LL;
  v252 = 0LL;
  v246 = a6 & 1;
  v249 = 0;
  v263 = 0;
  *a8 = 0LL;
  v10 = a7;
  if ( a7 == 0x2000 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL) )
    {
      EtwTraceInputQueueLockedPeekRecursion();
      return 0LL;
    }
    v10 = 0x2000;
  }
  v262 = 0;
  v258 = 0;
  v247 = 0;
  v11 = *(_QWORD *)(a1 + 384);
  if ( !*(_QWORD *)(v11 + 24) )
  {
    *(_QWORD *)(v11 + 24) = a1;
    **(_DWORD **)(a1 + 400) |= 1u;
  }
  if ( (v10 & 0x1C07) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 384);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v12 + 332) &= ~0x400u;
    else
      *(_DWORD *)(v12 + 332) |= 0x400u;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + 24LL) != a1 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v257 = 0LL;
  v276 = 0LL;
  v260 = 0LL;
  v274 = 0LL;
  v259 = 0LL;
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  v289[0] = *(_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 16) = v289;
  v289[1] = 0LL;
  v289[2] = DereferenceW32Thread;
  v15 = 0LL;
  v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v16 )
    v15 = *v16;
  v290[0] = *(_QWORD *)(v15 + 16);
  *(_QWORD *)(v15 + 16) = v290;
  v290[1] = 0LL;
  v290[2] = DereferenceW32Thread;
  v17 = 0LL;
  v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v18 )
    v17 = *v18;
  v294[0] = *(_QWORD *)(v17 + 16);
  *(_QWORD *)(v17 + 16) = v294;
  v294[1] = 0LL;
  v294[2] = DereferenceW32Thread;
  v19 = 0LL;
  v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v20 )
    v19 = *v20;
  v292[0] = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 16) = v292;
  v292[1] = 0LL;
  v292[2] = DereferenceW32Thread;
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  v293[0] = *(_QWORD *)(v21 + 16);
  *(_QWORD *)(v21 + 16) = v293;
  v293[1] = 0LL;
  v293[2] = DereferenceW32Thread;
  v248 = 0LL;
  v278 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = &v278;
  v279 = 0LL;
LABEL_19:
  while ( 2 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL) = 0LL;
    while ( 1 )
    {
      do
      {
LABEL_20:
        while ( 2 )
        {
          v275 = (**(_DWORD **)(a1 + 432) >> 9) & 1;
          v256 = 0;
          MouseKeyFlags = 0LL;
          v25 = *(_QWORD *)(a1 + 384);
          v26 = *(_QWORD *)(v25 + 40);
          Valid = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 48LL);
          if ( Valid )
          {
            if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
              Valid = PhkNextValid(Valid, v23, v24, v25);
            if ( Valid )
            {
              Valid = grpdeskRitInput;
              if ( *(_QWORD *)(a1 + 408) == grpdeskRitInput )
              {
                if ( v26 )
                {
                  v29 = 0LL;
                }
                else
                {
                  v153 = xxxCallJournalPlaybackHook(&v264);
                  if ( v153 == -1 )
                  {
                    v29 = 0LL;
                  }
                  else if ( v153 )
                  {
                    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) &= 0xE3F8u;
                    *(_WORD *)(*(_QWORD *)(a1 + 400) + 4LL) &= 0xE3F8u;
                    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) = v265[2];
                    qword_1C0323A08 = InternalSetTimer(0LL, qword_1C0323A08, v153, (__int64)JournalTimer, 32, 276);
                    v29 = 0LL;
                  }
                  else
                  {
                    WakeSomeone(*(_QWORD **)(a1 + 384), 0LL, v265[2], 0LL);
                    glinp[8] |= 0x10u;
                    v29 = 1LL;
                  }
                }
                goto LABEL_32;
              }
            }
          }
          if ( (*(_DWORD *)(v25 + 332) & 0x20) != 0 )
            PostMoveToPwnd(v25, 0LL, 0LL);
          v28 = *(_QWORD *)(a1 + 384);
          if ( !*(_DWORD *)(v28 + 16) )
          {
            v29 = 0LL;
            goto LABEL_32;
          }
          if ( v26 && (v107 = *(unsigned __int64 **)(v28 + 40), (unsigned __int64)v107 > 1) )
            v29 = *v107;
          else
            v29 = *(_QWORD *)v28;
          if ( (*(_DWORD *)(a1 + 1072) & 0x2000) == 0 )
            goto LABEL_27;
          if ( v29 )
          {
            do
            {
              v122 = *(_DWORD *)(v29 + 92);
              if ( (v122 & 0x20) == 0 )
                break;
              if ( (v122 & 0x10) == 0 )
                break;
              v29 = *(_QWORD *)v29;
            }
            while ( v29 );
LABEL_27:
            if ( v29 )
            {
              v264 = *(_OWORD *)v29;
              *(_OWORD *)v265 = *(_OWORD *)(v29 + 16);
              *(_OWORD *)v266 = *(_OWORD *)(v29 + 32);
              v267 = *(_OWORD *)(v29 + 48);
              v268 = *(_OWORD *)(v29 + 64);
              *(_OWORD *)&v269[0].x = *(_OWORD *)(v29 + 80);
              v270 = *(_OWORD *)(v29 + 96);
              v271 = *(_OWORD *)(v29 + 112);
              v272 = *(_OWORD *)(v29 + 128);
            }
          }
          if ( v29 > 1 && (v269[1].y & 0x20) != 0 )
          {
            *a8 = (struct tagQMSG *)v29;
            *(_DWORD *)(v29 + 92) |= 0x100u;
            v246 = 0;
          }
LABEL_32:
          *(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL) = v29;
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL) )
          {
            v82 = v260;
            v83 = v257;
            v84 = v260;
            if ( a7 == 0x2000 )
              *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) &= ~0x2000u;
            goto LABEL_166;
          }
          ThreadUnlock1(Valid, v23);
          v30 = *(_QWORD *)v265;
          v31 = 0LL;
          PsGetThreadWin32Thread(KeGetCurrentThread());
          v23 = (unsigned __int16)v30;
          if ( (unsigned __int64)(unsigned __int16)v30 < *(_QWORD *)(gpsi + 8LL) )
          {
            v33 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v30 * *((_DWORD *)&gSharedInfo + 4);
            v34 = v30 >> 16;
            if ( ((_WORD)v34 == *(_WORD *)(v33 + 18)
               || (_WORD)v34 == 0xFFFF
               || !(_WORD)v34 && PsGetCurrentProcessWow64Process(gSharedInfo))
              && (*(_BYTE *)(v33 + 17) & 1) == 0
              && *(_BYTE *)(v33 + 16) == 1 )
            {
              v31 = *(struct tagWND **)v33;
            }
          }
          v248 = (__int64)v31;
          v278 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v278;
          v279 = v31;
          if ( v31 )
            ++*((_DWORD *)v31 + 2);
          if ( v269[1].x )
          {
            if ( v269[1].x == 4 && *(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL) != **(_QWORD **)(a1 + 384) )
              continue;
            if ( !(_QWORD)v270 || (_QWORD)v270 == a1 )
            {
              EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL));
              v35 = *(_QWORD *)(a1 + 384);
              v36 = *(_QWORD *)(v35 + 40);
              v37 = *(_QWORD **)(v36 + 8);
              if ( v37 )
                *v37 = *(_QWORD *)v36;
              if ( *(_QWORD *)v36 )
                *(_QWORD *)(*(_QWORD *)v36 + 8LL) = *(_QWORD *)(v36 + 8);
              if ( *(_QWORD *)v35 == v36 )
                *(_QWORD *)v35 = *(_QWORD *)v36;
              if ( *(_QWORD *)(v35 + 8) == v36 )
                *(_QWORD *)(v35 + 8) = *(_QWORD *)(v36 + 8);
              --*(_DWORD *)(v35 + 16);
              if ( (*(_DWORD *)(v36 + 92) & 8) != 0 && !*(_DWORD *)(v36 + 88) )
              {
                if ( (unsigned int)IsPointerInputMessage(*(unsigned int *)(v36 + 24)) )
                  FreePointerMessageParams(v36);
              }
              Win32FreeToPagedLookasideList(QEntryLookaside, v36);
              *(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL) = 0LL;
              xxxProcessEventMessage(a1, &v264);
              goto LABEL_19;
            }
            v110 = *(_QWORD *)(a1 + 384);
            if ( *(_QWORD *)(v270 + 384) != v110 )
            {
              CleanEventMessage(*(struct tagQMSG **)(v110 + 40));
              DelQEntry(*(_QWORD *)(a1 + 384), *(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL), 1LL);
              goto LABEL_19;
            }
            v82 = v270;
            LockExchangeW32Thread(v270, v294);
            *(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL) = 0LL;
            v84 = v259;
LABEL_277:
            v83 = v257;
LABEL_166:
            *(_QWORD *)(*(_QWORD *)(a1 + 384) + 32LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)(a1 + 384) + 24LL) = 0LL;
            **(_DWORD **)(a1 + 400) &= ~1u;
            v85 = v274;
            if ( v276 )
            {
              SetWakeBit(v276, 0x4001u);
              ClearWakeBit(a1, 16385LL, 0LL);
            }
            else if ( !v83 && !v82 && !v274 && !v84 )
            {
              *(_WORD *)(*(_QWORD *)(a1 + 400) + 8LL) = 0;
              ClearWakeBit(a1, 31751LL, 1LL);
LABEL_172:
              PopAndFreeW32ThreadLock(v293);
              PopAndFreeW32ThreadLock(v292);
              PopAndFreeW32ThreadLock(v294);
              PopAndFreeW32ThreadLock(v290);
              PopAndFreeW32ThreadLock(v289);
              ThreadUnlock1(v87, v86);
              return 0LL;
            }
            if ( v83 )
            {
              SetWakeBit(v83, 0x4006u);
              ClearWakeBit(a1, 16390LL, 0LL);
            }
            if ( v85 )
            {
              SetWakeBit(v85, 0x4400u);
              ClearWakeBit(a1, 17408LL, 0LL);
            }
            if ( v84 )
            {
              SetWakeBit(v84, 0x5000u);
              ClearWakeBit(a1, 20480LL, 0LL);
            }
            if ( v82 )
            {
              SetWakeBit(v82, 0x2040u);
              ClearWakeBit(a1, 0x2000LL, 0LL);
            }
            else if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 48LL) )
            {
              *(_WORD *)(*(_QWORD *)(a1 + 400) + 8LL) |= *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) & 0x5C07;
              ClearWakeBit(a1, 23559LL, 0LL);
              *(_WORD *)(*(_QWORD *)(a1 + 400) + 4LL) &= 0xA3F8u;
            }
            goto LABEL_172;
          }
          break;
        }
      }
      while ( a7 == 0x2000 );
      v38 = v265[2];
      v39 = v265[2];
      v245 = v265[2];
      if ( v265[2] >= 0x11C && v265[2] < 0x20A )
      {
        while ( 1 )
        {
LABEL_58:
          v253.x = SLOWORD(v266[1]);
          v40 = v266[1];
          v253.y = SWORD1(v266[1]);
          v250 = 1;
          y = v269[1].y;
          if ( (v269[1].y & 0x20) != 0 && v31 )
            goto LABEL_75;
          if ( gspwndScreenCapture )
          {
            v31 = gspwndScreenCapture;
            v248 = (__int64)gspwndScreenCapture;
            v252 = (WORD4(v267) << 16) | WORD2(v267);
            goto LABEL_75;
          }
          if ( !v31 || !(unsigned int)IsCompositionInputWindowForHitTest(v31) )
            break;
          v42 = 1LL;
          v263 = 1;
          v127 = *(_QWORD *)(a1 + 384);
          v128 = *(struct tagWND **)(v127 + 64);
          if ( !v128 )
            goto LABEL_62;
          v31 = *(struct tagWND **)(v127 + 64);
          v248 = (__int64)v31;
          if ( !(unsigned int)IsCompositionInputWindowForHitTest(v128) )
          {
            v269[1].y = y & 0xFFFFEFFF;
            if ( v29 )
            {
              if ( (unsigned int)IsMouseInPointerActive(a1, v29) )
                *(_DWORD *)(v29 + 92) &= ~0x1000u;
            }
          }
LABEL_75:
          ThreadLockExchange(v31, &v278);
          if ( CheckCrossThreadInput(v31, (struct tagQMSG *)v29, &v251, &v246, a8) )
            goto LABEL_332;
          if ( v251 )
          {
            v124 = *((_QWORD *)v31 + 2);
            if ( *(_QWORD *)(v124 + 384) != *(_QWORD *)(a1 + 384) )
              goto LABEL_381;
            if ( !v257 )
            {
              v257 = *((_QWORD *)v31 + 2);
              LockExchangeW32Thread(v124, v290);
            }
          }
          else if ( (v269[1].y & 0x800) != 0 )
          {
            v129 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 2) + 376LL) + 832LL);
            if ( gbEnforceUIPI )
            {
              if ( DWORD2(v270) <= (unsigned int)v129 )
              {
                if ( DWORD2(v270) != (_DWORD)v129
                  || (v130 = HIDWORD(v129), HIDWORD(v270) != (_DWORD)v130) && (_DWORD)v130 != -1 && HIDWORD(v270) != -1 )
                {
                  EtwTraceUIPIMsgError(
                    0LL,
                    *(_QWORD *)(*((_QWORD *)v31 + 2) + 376LL),
                    (unsigned int)v39,
                    v266[0],
                    v266[1]);
LABEL_381:
                  zzzSetCursor(gasyscur[1]);
                  goto LABEL_351;
                }
              }
            }
          }
          v50 = v253;
          v51 = v253;
          v52 = (char *)v31 + 16;
          *(_QWORD *)&v277 = (char *)v31 + 16;
          v53 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 2) + 384LL) + 108LL);
          if ( v53 && (v115 = v53 - 2) != 0 )
          {
            if ( v115 != 1 )
              goto LABEL_83;
            if ( (*((_BYTE *)v31 + 50) & 0x40) != 0 )
              v253.x = *((_DWORD *)v31 + 30) - v253.x;
            else
              v253.x -= *((_DWORD *)v31 + 28);
            v54 = *((_DWORD *)v31 + 29);
          }
          else
          {
            if ( (*((_BYTE *)v31 + 50) & 0x40) != 0 )
              v253.x = *((_DWORD *)v31 + 34) - v253.x;
            else
              v253.x -= *((_DWORD *)v31 + 32);
            v54 = *((_DWORD *)v31 + 33);
          }
          v253.y -= v54;
          v50 = v253;
LABEL_83:
          if ( v251 || *(_QWORD *)(a1 + 384) != gpqCursor )
          {
            v58 = v245;
            goto LABEL_95;
          }
          v55 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 176LL) != (_QWORD)v31;
          v56 = v250;
          if ( v250 != 5 || (v176 = *((_QWORD *)v31 + 24)) == 0 || (*((_BYTE *)v31 + 40) & 1) == 0 )
          {
            if ( v250 == 7 && (*((_BYTE *)v31 + 40) & 2) != 0 )
            {
              v57 = (unsigned __int16)HitTestScrollBar(v31, 1, v50) | 0x10000;
            }
            else if ( v250 == 6 && (*((_BYTE *)v31 + 40) & 4) != 0 )
            {
              v57 = (unsigned __int16)HitTestScrollBar(v31, 0, v50);
            }
            else
            {
              v57 = v250;
            }
            goto LABEL_89;
          }
          v177 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MNItemHitTest)(*((_QWORD *)v31 + 24), v31, v50);
          v178 = v177;
          if ( v177 >= 0 )
          {
            v179 = *(_QWORD *)(*(_QWORD *)(v176 + 80) + 152LL * v177 + 104);
            if ( v179 > 6 )
            {
              if ( v179 == 7 )
              {
LABEL_646:
                v56 = 67;
                goto LABEL_647;
              }
              if ( v179 != -1LL )
                goto LABEL_645;
              v56 = -2;
            }
            else if ( v179 >= 5 )
            {
              v56 = 68;
            }
            else
            {
              v180 = v179 - 1;
              if ( v180 )
              {
                v181 = v180 - 1;
                if ( v181 )
                {
                  if ( v181 == 1 )
                    goto LABEL_646;
LABEL_645:
                  v56 = 69;
                  goto LABEL_647;
                }
                v56 = 66;
              }
              else
              {
                v56 = 65;
              }
            }
          }
LABEL_647:
          v57 = v56 | (v178 << 16);
LABEL_89:
          v58 = v245;
          if ( v245 != 512 || v55 || *(_DWORD *)(*(_QWORD *)(a1 + 408) + 184LL) != v57 )
            xxxTrackMouseMove(v31);
          if ( !v55 )
          {
            v59 = *(_QWORD *)(a1 + 408);
            if ( (*(_DWORD *)(v59 + 32) & 0x40) != 0
              && (v58 != 512 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v59 + 188, v51)) )
            {
              ResetMouseHover((struct tagDESKTOP *)v59, v51);
            }
          }
          v52 = (char *)v277;
LABEL_95:
          if ( !(unsigned int)CheckPwndFilter((__int64)v31, *(__int64 *)v273) )
            goto LABEL_337;
          v60 = 0LL;
          v61 = 0;
          if ( v58 >= 0x201 )
          {
            switch ( v58 )
            {
              case 0x201u:
                v117 = *(_QWORD *)(a1 + 384);
                if ( (_DWORD)v271 == 4 )
                  *(_DWORD *)(v117 + 332) |= 0x800000u;
                else
                  *(_DWORD *)(v117 + 332) &= ~0x800000u;
                v118 = *(_QWORD *)(a1 + 384);
                if ( (_DWORD)v271 == 8 )
                  *(_DWORD *)(v118 + 332) |= 0x1000000u;
                else
                  *(_DWORD *)(v118 + 332) &= ~0x1000000u;
                goto LABEL_312;
              case 0x202u:
              case 0x205u:
              case 0x208u:
              case 0x20Cu:
                goto LABEL_280;
              case 0x204u:
              case 0x207u:
              case 0x20Bu:
LABEL_312:
                if ( (*(_BYTE *)(*((_QWORD *)v31 + 19) + 84LL) & 8) == 0
                  && *(_DWORD *)(*(_QWORD *)(a1 + 384) + 108LL) != 1 )
                {
                  v125 = *(_QWORD *)(a1 + 528);
                  if ( !v125 || (*(_DWORD *)(v125 + 8) & 1) == 0 )
                    goto LABEL_280;
                }
                v61 = 1;
                v119 = *(_QWORD *)(a1 + 384);
                if ( (unsigned int)v267 > *(_DWORD *)(v119 + 120)
                  || gbClientDoubleClickSupport
                  || *(_QWORD *)v31 != *(_QWORD *)(v119 + 128)
                  || v58 != *(_DWORD *)(v119 + 112)
                  || v58 == 523 && WORD1(v266[0]) != *(_WORD *)(v119 + 116) )
                {
                  goto LABEL_280;
                }
                v183 = IsDPIAbsoluteSysMet(36LL);
                if ( v183 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v182) + 776) & 0x2000) == 0
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v184) + 776) & 0x4000) == 0 )
                  {
                    goto LABEL_669;
                  }
                }
                else if ( (unsigned int)IsDPIDWMSysMet(v182)
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v185) + 776) & 0x2000) == 0
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v186) + 776) & 0x4000) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v31 = (struct tagWND *)v248;
                    v58 = v245;
LABEL_669:
                    v187 = (_DWORD *)(gpsi + 2412LL);
                    goto LABEL_678;
                  }
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
                }
                if ( !(unsigned int)IsDPIDWMSysMet(36LL)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v188) + 776) & 0x2000) == 0 )
                {
                  goto LABEL_677;
                }
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v187 = (_DWORD *)(gpsi + 2800LL);
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
                }
                else
                {
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
LABEL_677:
                  v187 = (_DWORD *)(gpsi + 2024LL);
                }
LABEL_678:
                v291[0] = *(_DWORD *)(*(_QWORD *)(a1 + 384) + 136LL) - *v187 / 2;
                v190 = IsDPIAbsoluteSysMet(37LL);
                if ( v190 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v189) + 776) & 0x2000) == 0
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v191) + 776) & 0x4000) == 0 )
                  {
                    goto LABEL_688;
                  }
                }
                else if ( (unsigned int)IsDPIDWMSysMet(v189)
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v192) + 776) & 0x2000) == 0
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v193) + 776) & 0x4000) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v31 = (struct tagWND *)v248;
                    v58 = v245;
LABEL_688:
                    v194 = (_DWORD *)(gpsi + 2416LL);
                    goto LABEL_697;
                  }
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
                }
                if ( !(unsigned int)IsDPIDWMSysMet(37LL)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v195) + 776) & 0x2000) == 0 )
                {
                  goto LABEL_696;
                }
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v194 = (_DWORD *)(gpsi + 2804LL);
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
                }
                else
                {
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
LABEL_696:
                  v194 = (_DWORD *)(gpsi + 2028LL);
                }
LABEL_697:
                v196 = *v194 / 2;
                v197 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 384) + 140LL) - v196);
                v291[1] = *(_DWORD *)(*(_QWORD *)(a1 + 384) + 140LL) - v196;
                if ( v183 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v197) + 776) & 0x2000) == 0
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v198) + 776) & 0x4000) == 0 )
                  {
                    goto LABEL_707;
                  }
                }
                else if ( (unsigned int)IsDPIDWMSysMet(36LL)
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v199) + 776) & 0x2000) == 0
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v200) + 776) & 0x4000) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v31 = (struct tagWND *)v248;
                    v58 = v245;
LABEL_707:
                    v201 = (_DWORD *)(gpsi + 2412LL);
                    goto LABEL_716;
                  }
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
                }
                if ( !(unsigned int)IsDPIDWMSysMet(36LL)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v202) + 776) & 0x2000) == 0 )
                {
                  goto LABEL_715;
                }
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v201 = (_DWORD *)(gpsi + 2800LL);
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
                }
                else
                {
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
LABEL_715:
                  v201 = (_DWORD *)(gpsi + 2024LL);
                }
LABEL_716:
                v203 = *(_QWORD *)(a1 + 384);
                v291[2] = *(_DWORD *)(v203 + 136) + *v201 / 2;
                if ( v190 )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v203) + 776) & 0x2000) == 0
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v204) + 776) & 0x4000) == 0 )
                  {
                    goto LABEL_726;
                  }
                }
                else if ( (unsigned int)IsDPIDWMSysMet(37LL)
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v205) + 776) & 0x2000) == 0
                       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v206) + 776) & 0x4000) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v31 = (struct tagWND *)v248;
                    v58 = v245;
LABEL_726:
                    v207 = (_DWORD *)(gpsi + 2416LL);
                    goto LABEL_735;
                  }
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
                }
                if ( !(unsigned int)IsDPIDWMSysMet(37LL)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v208) + 776) & 0x2000) == 0 )
                {
                  goto LABEL_734;
                }
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v207 = (_DWORD *)(gpsi + 2804LL);
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
                }
                else
                {
                  v31 = (struct tagWND *)v248;
                  v58 = v245;
LABEL_734:
                  v207 = (_DWORD *)(gpsi + 2028LL);
                }
LABEL_735:
                v291[3] = *(_DWORD *)(*(_QWORD *)(a1 + 384) + 140LL) + *v207 / 2;
                v209 = PtInRect(v291, *(_QWORD *)((char *)&v267 + 4));
                v52 = (char *)v277;
                if ( v209 )
                {
                  v58 += 2;
                  v245 = v58;
                  v61 = 2;
                }
                v60 = 0LL;
LABEL_280:
                v111 = *(_QWORD *)(a1 + 384);
                v112 = *(_DWORD *)(v111 + 332);
                if ( (v112 & 8) != 0 )
                  *(_DWORD *)(v111 + 332) = v112 | 4;
                if ( v58 - 514 <= 0xA )
                {
                  v113 = 1097;
                  if ( _bittest(&v113, v58 - 514) )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(a1 + 384) + 120LL) && (((_DWORD)v271 - 4) & 0xFFFFFFFB) == 0 )
                    {
                      if ( (_DWORD)v271 == 4 )
                      {
                        TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x12Cu, 0xB4u, 5u, 1);
                      }
                      else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                      {
                        TouchTimeFromCPLValue = *((_DWORD *)off_1C031B1A8 + 11);
                        if ( TouchTimeFromCPLValue == -1 )
                          TouchTimeFromCPLValue = *((_DWORD *)off_1C031B1A8 + 10);
                      }
                      else
                      {
                        TouchTimeFromCPLValue = gdtDblClk;
                      }
                      *(_DWORD *)(*(_QWORD *)(a1 + 384) + 120LL) = DWORD2(v272) + TouchTimeFromCPLValue;
                    }
                    v114 = *(_QWORD *)(a1 + 384);
                    if ( (_DWORD)v271 == 18 && *(_DWORD *)(v114 + 120) )
                      *(_DWORD *)(v114 + 120) = dword_1C0321EE8 + DWORD2(v272);
                  }
                }
                break;
              default:
                break;
            }
          }
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v52 + 384LL) + 108LL) == 1 )
          {
            v58 -= 352;
            v245 = v58;
            MouseKeyFlags = v250;
          }
          if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)v29, v58, v261, a5) )
            goto LABEL_337;
          if ( v251 )
            goto LABEL_332;
          if ( v58 - 512 <= 0xE && (*(_DWORD *)(a1 + 440) & 0x8000) != 0 )
          {
LABEL_337:
            v9 = 0LL;
            goto LABEL_20;
          }
          v62 = *(_DWORD *)(a1 + 440);
          if ( (v62 & 0x100000) != 0 )
          {
            *(_DWORD *)(a1 + 440) = v62 & 0xFFEFFFFF;
            xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
          }
          v281 = *(struct tagPOINT *)((char *)&v267 + 4);
          v282 = *(_QWORD *)v31;
          v283 = v250;
          v284 = *((_QWORD *)&v268 + 1);
          v285 = v266[0];
          v63 = v246;
          if ( v246 )
          {
            if ( v58 != 512 && v58 != 160 )
            {
              v258 = 1;
              if ( (unsigned int)xxxCallCtfHook(7, 0, v58, (__int64)&v281) )
                goto LABEL_353;
            }
          }
          if ( ((*(_DWORD *)(a1 + 600) | *(_DWORD *)(*(_QWORD *)(a1 + 416) + 24LL)) & 0x100) != 0 )
          {
            v258 = 1;
            if ( (unsigned int)xxxCallMouseHook(v58, &v281, v63) )
              goto LABEL_353;
          }
          if ( (*(_DWORD *)(a1 + 1072) & 0x2000) == 0 )
          {
            if ( v250 == -2 || !v250 )
            {
              if ( v263 )
              {
                CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v31);
                v60 = (__int64)CompositionInputWindowUIOwner;
                if ( CompositionInputWindowUIOwner )
                {
                  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                  v60 = TopLevelWindow;
                  v287 = *(_QWORD *)(a1 + 368);
                  *(_QWORD *)(a1 + 368) = &v287;
                  v288 = TopLevelWindow;
                  if ( TopLevelWindow )
                  {
                    ++*(_DWORD *)(TopLevelWindow + 8);
                    v218 = *(_QWORD *)TopLevelWindow;
                  }
                  else
                  {
                    v218 = 0LL;
                  }
                  xxxSendMessage(
                    (struct tagWND *)TopLevelWindow,
                    0x20u,
                    v218,
                    (unsigned __int16)v250 | (LOWORD(v265[2]) << 16));
                  ThreadUnlock1(v220, v219);
                }
              }
              if ( !v60 )
                xxxSendMessage(v31, 0x20u, *(_QWORD *)v31, (unsigned __int16)v250 | (LOWORD(v265[2]) << 16));
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL) == v29
                && v29
                && (unsigned int)IsMouseInPointerActive(a1, v29)
                && (*(_DWORD *)(v29 + 92) & 0x400) != 0
                && (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(v29 + 112)) )
              {
                v221 = IsMiPMouseMessage(*(_DWORD *)(v29 + 24));
                v63 = v246;
                if ( v221 )
                {
                  GeneratePointerMessageFromMouse((struct tagQMSG *)v344, v58, (struct tagQMSG *)v29, v31, v246);
                  SetMiPPromotion(*((_QWORD *)v31 + 2), v345);
                }
              }
              else
              {
                v63 = v246;
              }
              goto LABEL_353;
            }
            v63 = v246;
          }
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + 40LL) != v29 )
            goto LABEL_332;
          v64 = 0;
          v325 = v264;
          v326 = *(_OWORD *)v265;
          v327 = *(_OWORD *)v266;
          v328 = v267;
          v329 = v268;
          v330 = *(_OWORD *)&v269[0].x;
          v331 = v270;
          v332 = v271;
          v333 = v272;
          if ( v29 && (unsigned int)IsMouseInPointerActive(a1, v29) )
          {
            v65 = v245;
            DWORD2(v326) = v245;
            *(_QWORD *)&v327 = MouseKeyFlags;
            if ( (*(_DWORD *)(v29 + 92) & 0x400) != 0 )
            {
              v131 = *(_QWORD *)(a1 + 1112);
              if ( v131 && (*(_DWORD *)v131 & 1) != 0 )
              {
                v316 = *(_OWORD *)(v131 + 24);
                v317 = *(_OWORD *)(v131 + 40);
                v318 = *(_OWORD *)(v131 + 56);
                v319 = *(_OWORD *)(v131 + 72);
                v320 = *(_OWORD *)(v131 + 88);
                v321 = *(_OWORD *)(v131 + 104);
                v64 = 1;
              }
              if ( (unsigned int)GeneratePointerMessageFromMouse(
                                   (struct tagQMSG *)&v334,
                                   v245,
                                   (struct tagQMSG *)v29,
                                   v31,
                                   v63) )
              {
                v264 = v334;
                *(__m128i *)v265 = v335;
                *(_OWORD *)v266 = v336;
                v267 = v337;
                v268 = v338;
                *(_OWORD *)&v269[0].x = v339;
                v270 = v340;
                v271 = v341;
                v272 = v342;
                v256 = 1;
                v132 = _mm_cvtsi128_si32(_mm_srli_si128(v335, 8));
                if ( v132 == 582 )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 384) + 384LL) = *(_QWORD *)v31;
                }
                else if ( ((v132 - 579) & 0xFFFFFFFB) == 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 384) + 384LL) = 0LL;
                }
              }
              if ( !v63 )
              {
LABEL_250:
                v70 = v256;
LABEL_129:
                if ( v63 )
                {
                  xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
                  if ( v258 )
                  {
                    if ( ((*(_BYTE *)(a1 + 600) | *(_BYTE *)(*(_QWORD *)(a1 + 416) + 24LL)) & 0x40) != 0 )
                      xxxCallHook(6LL, v245, &v281);
                  }
                }
                v9 = 0LL;
                v258 = 0;
                v252 = (LOWORD(v253.y) << 16) | LOWORD(v253.x);
                v72 = v245;
                if ( v245 >= 0x200 )
                  MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 384));
                if ( (v72 - 171 <= 2 || v72 - 523 <= 2) && !v70 )
                  MouseKeyFlags |= v266[0];
                v73 = *(_QWORD *)(a1 + 528);
                if ( v250 == 5
                  && v63
                  && v73
                  && (*(_DWORD *)(v73 + 8) & 0x100) != 0
                  && *(_QWORD *)v73
                  && (**(_DWORD **)v73 & 1) != 0 )
                {
                  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                    (MenuStateOwnerLockxxxUnlock *)&v286,
                    *(struct tagMENUSTATE **)(a1 + 528));
                  if ( (unsigned int)xxxCallHandleMenuMessages(v222, (_DWORD)v31, v223, MouseKeyFlags, v252) )
                  {
                    if ( v286 )
                      xxxUnlockMenuStateInternal(v286, 0);
                    goto LABEL_19;
                  }
                  if ( v286 )
                    xxxUnlockMenuStateInternal(v286, 0);
                }
                if ( !v70 )
                {
LABEL_137:
                  v74 = v249;
                  goto LABEL_138;
                }
LABEL_409:
                v38 = v265[2];
LABEL_410:
                if ( (((_DWORD)v271 - 2) & 0xFFFFFFEF) == 0 )
                {
                  v245 = v38;
                  MouseKeyFlags = v266[0];
                  v252 = v266[1];
LABEL_412:
                  if ( v63 )
                  {
                    if ( (unsigned int)IsMouseInPointerActive(a1, 0LL) && v70 )
                    {
                      if ( v31 )
                        v134 = *(_QWORD *)v31;
                      else
                        v134 = 0LL;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1112) + 48LL) = v134;
                      v135 = *(_QWORD *)(a1 + 1112);
                      if ( (*(_DWORD *)(v135 + 36) & 0x400000) != 0 && !(unsigned int)IsCompositionInputWindow(v31) )
                        *(_DWORD *)(v135 + 36) = v228 & 0xFFBFFFFF;
                      MiPWindowFlags = GetMiPWindowFlags(v31);
                      SetMiPWindowFlags(v31, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
                      if ( ((v265[2] - 578) & 0xFFFFFFFB) != 0 )
                      {
                        v63 = v246;
                        if ( ((v265[2] - 579) & 0xFFFFFFFB) == 0 )
                          **(_DWORD **)(a1 + 1112) &= ~8u;
                      }
                      else
                      {
                        **(_DWORD **)(a1 + 1112) ^= (**(_DWORD **)(a1 + 1112) ^ (8 * (v265[2] == 578))) & 8;
                        v63 = v246;
                      }
                    }
                    else
                    {
                      xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
                    }
                  }
                  if ( (unsigned int)IsPointerMessageTouchpad((struct tagTHREADINFO *)a1, v266[1], v70) )
                  {
                    if ( !v63 )
                      xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
                    if ( v38 == 595 )
                      v252 = -1LL;
                  }
                  goto LABEL_137;
                }
                EtwTraceBeginPointerMessageRetrieve(v29, LOWORD(v266[0]), v38);
                v224 = xxxRetrievePointerInputMessage(
                         a1,
                         v273[0],
                         v261,
                         a5,
                         1,
                         0,
                         &v246,
                         (struct tagQMSG *)v29,
                         (__int64)&v248,
                         (__int64)&v245,
                         (__int64)&MouseKeyFlags,
                         (__int64)&v252,
                         &v251,
                         a8);
                EtwTraceEndPointerMessageRetrieve(v29, LOWORD(v266[0]), v265[2]);
                v31 = (struct tagWND *)v248;
                if ( v248 )
                  ThreadLockExchange(v248, &v278);
                v225 = v224 - 1;
                if ( !v225 )
                {
                  v38 = v245;
                  v63 = v246;
                  goto LABEL_412;
                }
                v226 = v225 - 1;
                if ( v226 )
                {
                  v227 = v226 - 1;
                  if ( v227 )
                  {
                    if ( v227 == 1 )
                      goto LABEL_20;
                  }
                  else
                  {
                    xxxDefPointerProc(v31, v265[2], v266[0], v266[1]);
                  }
LABEL_351:
                  v63 = v246;
                  goto LABEL_352;
                }
                if ( v251 )
                {
                  v84 = v259;
                  if ( v259 )
                  {
                    v82 = v259;
                  }
                  else
                  {
                    v84 = *((_QWORD *)v31 + 2);
                    LockExchangeW32Thread(v84, v293);
                    v82 = v260;
                  }
                  goto LABEL_277;
                }
LABEL_332:
                v82 = v260;
                v84 = v260;
                goto LABEL_277;
              }
              *(_DWORD *)(v29 + 92) &= ~0x400u;
            }
            else
            {
              if ( !v63 )
                goto LABEL_250;
              if ( (unsigned int)IsMiPMouseMessage(*(_DWORD *)(v29 + 24)) )
              {
                if ( (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(v29 + 112)) )
                {
                  v133 = *(_DWORD **)(a1 + 1112);
                  if ( v133 )
                  {
                    if ( (*v133 & 2) == 0 && (*v133 & 4) == 0 )
                    {
                      xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
                      v9 = 0LL;
                      goto LABEL_19;
                    }
                  }
                }
                v106 = *(_DWORD **)(a1 + 1112);
                if ( v106 )
                  *v106 &= ~2u;
              }
            }
          }
          else
          {
            v65 = DWORD2(v326);
          }
          if ( !v63 )
            goto LABEL_250;
          if ( v65 != 512 && v65 != 160
            || *(_QWORD *)v31 == gMiPTracking
            || !(unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(v29 + 112)) )
          {
            v67 = v256;
            goto LABEL_121;
          }
          v120 = HMValidateHandleNoSecure(v66, 1);
          v121 = v120;
          if ( v120 )
          {
            v211 = *(_QWORD *)(v120 + 16);
            if ( (unsigned int)IsMouseInPointerActive(v211, 0LL) && (GetMiPWindowFlags((struct tagWND *)v121) & 1) == 0 )
            {
              if ( v211 == a1 )
              {
                v212 = *(_QWORD *)(a1 + 1112);
                v277 = *(_OWORD *)(v212 + 24);
                v315 = *(_OWORD *)(v212 + 40);
                v323 = *(_OWORD *)(v212 + 56);
                v313 = *(_OWORD *)(v212 + 72);
                v322 = *(_OWORD *)(v212 + 88);
                v314 = *(_OWORD *)(v212 + 104);
                if ( v64 )
                {
                  *(_OWORD *)(v212 + 24) = v316;
                  *(_OWORD *)(v212 + 40) = v317;
                  *(_OWORD *)(v212 + 56) = v318;
                  *(_OWORD *)(v212 + 72) = v319;
                  *(_OWORD *)(v212 + 88) = v320;
                  *(_OWORD *)(v212 + 104) = v321;
                }
                v306 = *(_QWORD *)v121;
                v307 = 586;
                v308 = ((*(_DWORD *)(*(_QWORD *)(a1 + 1112) + 36LL) & 0xE1F7u) << 16) | 1LL;
                v309 = 0LL;
                v310 = 0LL;
                v311 = 0LL;
                v312[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v312;
                v312[1] = v121;
                ++*(_DWORD *)(v121 + 8);
                FindTimer(v121, 65523, 2, 1, 0LL);
                _InterlockedIncrement(&glSendMessage);
                xxxSendTransformableMessageTimeout((struct tagWND *)v121, 586LL, v308, 0LL, 0, 0, 0LL, 1, 0);
                ThreadUnlock1(v214, v213);
                v31 = (struct tagWND *)v248;
                v63 = v246;
                if ( v64 )
                {
                  v215 = *(_QWORD *)(a1 + 1112);
                  *(_OWORD *)(v215 + 24) = v277;
                  *(_OWORD *)(v215 + 40) = v315;
                  *(_OWORD *)(v215 + 56) = v323;
                  *(_OWORD *)(v215 + 72) = v313;
                  *(_OWORD *)(v215 + 88) = v322;
                  *(_OWORD *)(v215 + 104) = v314;
                }
                goto LABEL_329;
              }
              PostEventMessageEx(v211, *(_QWORD *)(v211 + 384), 0x15u, v121, 0, 0LL, 0LL, 0LL);
            }
            v63 = v246;
          }
LABEL_329:
          v67 = v256;
          if ( v256 )
            gMiPTracking = *(_QWORD *)v31;
          else
            gMiPTracking = 0LL;
LABEL_121:
          if ( !v67 )
          {
            v68 = v61 - 1;
            if ( v68 )
            {
              if ( v68 == 1 )
                *(_DWORD *)(*(_QWORD *)(a1 + 384) + 120LL) = 0;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 384) + 112LL) = v265[2];
              *(_WORD *)(*(_QWORD *)(a1 + 384) + 116LL) = WORD1(v266[0]);
              *(_DWORD *)(*(_QWORD *)(a1 + 384) + 120LL) = gdtDblClk + v267;
              *(_QWORD *)(*(_QWORD *)(a1 + 384) + 128LL) = *(_QWORD *)v31;
              *(_QWORD *)(*(_QWORD *)(a1 + 384) + 136LL) = *(_QWORD *)((char *)&v267 + 4);
            }
          }
          v69 = &v264;
          v70 = v256;
          if ( v256 )
            v69 = &v325;
          v71 = xxxMouseActivate((struct tagTHREADINFO *)a1, v31, *((_DWORD *)v69 + 6), (__int64)v69 + 52, v250);
          if ( v71 == 1 )
            goto LABEL_352;
          if ( v71 != 2 )
            goto LABEL_129;
          v38 = v265[2];
          LODWORD(v39) = v245;
        }
        v42 = 0LL;
        v263 = 0;
        v31 = *(struct tagWND **)(*(_QWORD *)(a1 + 384) + 64LL);
        v248 = (__int64)v31;
        if ( v31 )
          goto LABEL_75;
LABEL_62:
        if ( !(_DWORD)v42 )
        {
          v31 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 408LL) + 8LL) + 16LL);
          v287 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v287;
          v288 = (__int64)v31;
          if ( v31 )
          {
            ++*((_DWORD *)v31 + 2);
            v40 = v266[1];
            v38 = v265[2];
          }
        }
        if ( (unsigned int)IsThreadDesktopComposed(a1, v23, v42) )
        {
          if ( v43 )
            v44 = 9;
          else
            v44 = 1;
          v300 = v38;
          v301 = v266[0];
          v302 = v40;
          v303 = &v250;
          v304 = v44;
          v305 = 0;
          v45 = xxxDCEWindowHitTestInternal(v31, v269[0], (struct DCE_WINDOW_HIT_TEST_ARGS *)&v300);
        }
        else
        {
          v45 = (HWND)xxxWindowHitTest(v31);
        }
        v48 = (unsigned __int64)v45;
        if ( !v263 )
          ThreadUnlock1(v47, v46);
        v31 = (struct tagWND *)HMValidateHandleNoSecure(v48, 1);
        v248 = (__int64)v31;
        if ( !v31 )
        {
          v31 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 16LL);
          v248 = (__int64)v31;
          if ( !v31 )
          {
            v31 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 408LL) + 8LL) + 16LL);
            v248 = (__int64)v31;
          }
        }
        if ( (unsigned int)IsMouseInPointerActive(a1, 0LL)
          && (v105 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 384LL)) != 0
          && (v173 = ValidateHwnd(v105),
              v173
           && ((v174 = *(_QWORD *)(v173 + 16), v175 = *(_QWORD *)(a1 + 384), *(_QWORD *)(v174 + 384) == v175)
            || *(_QWORD *)(v174 + 376) == *(_QWORD *)(a1 + 376))) )
        {
          v31 = (struct tagWND *)v173;
          v248 = v173;
          v250 = 1;
          *(_DWORD *)(v175 + 108) = 0;
        }
        else
        {
          v49 = *(_QWORD *)(a1 + 384);
          *(_DWORD *)(v49 + 108) = v250 != 1;
        }
        goto LABEL_75;
      }
      if ( v265[2] == 257 )
      {
LABEL_188:
        v88 = v262;
        goto LABEL_189;
      }
      if ( v265[2] <= 0x119 )
        break;
      if ( v265[2] > 0x240 )
      {
        v23 = 0x1C0000000uLL;
        switch ( v265[2] )
        {
          case 0x245u:
          case 0x246u:
          case 0x247u:
          case 0x249u:
          case 0x24Au:
          case 0x251u:
          case 0x252u:
          case 0x253u:
            v63 = v246;
            v70 = v256;
            goto LABEL_410;
          default:
            goto LABEL_58;
        }
      }
      if ( v265[2] == 576 || v265[2] == 283 )
        goto LABEL_598;
      if ( v265[2] == 522 || v265[2] == 526 )
      {
        if ( (*(_DWORD *)(a1 + 440) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
          goto LABEL_332;
        if ( (unsigned int)IsWheelTargetDesktopApp(a1) || (unsigned int)HasThreadRequestedLegacyMouseWheelRouting(a1) )
        {
          v31 = *(struct tagWND **)(*(_QWORD *)(a1 + 384) + 72LL);
          v248 = (__int64)v31;
        }
        else if ( v31 && (unsigned int)IsCompositionInputWindow(v31) )
        {
          if ( (*((_BYTE *)v31 + 55) & 8) != 0 || (unsigned int)IsCompositionInputWindowUIDisabled(v31) )
            goto LABEL_351;
        }
        else if ( !(unsigned int)IsInsideMenuLoop(a1) )
        {
          ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
          v324[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v324;
          v324[1] = ThreadDesktopWindow;
          if ( ThreadDesktopWindow )
            ++*(_DWORD *)(ThreadDesktopWindow + 8);
          v295 = 512;
          v296 = v266[0];
          v297 = v266[1];
          v298 = &v250;
          v299 = 1LL;
          v163 = xxxDCEWindowHitTestInternal(
                   (struct tagWND *)ThreadDesktopWindow,
                   v269[0],
                   (struct DCE_WINDOW_HIT_TEST_ARGS *)&v295);
          v31 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v163, 1);
          v248 = (__int64)v31;
          ThreadUnlock1(v165, v164);
        }
        if ( !v31 || (unsigned int)IsInsideMenuLoop(a1) )
          goto LABEL_351;
        ThreadLockExchangeAlways(v31, &v278);
        v166 = *((_QWORD *)v31 + 2);
        if ( v166 == a1 )
        {
          v167 = 0;
          v251 = 0;
        }
        else
        {
          v167 = 1;
          v251 = 1;
          if ( *(_QWORD *)(v166 + 384) != *(_QWORD *)(a1 + 384) )
            goto LABEL_351;
          if ( !v276 )
          {
            v276 = v166;
            LockExchangeW32Thread(v166, v289);
          }
        }
        if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)v29, v39, v261, a5)
          || !(unsigned int)CheckPwndFilter((__int64)v31, *(__int64 *)v273) )
        {
          goto LABEL_20;
        }
        if ( v167 )
          goto LABEL_332;
        if ( !v29 || !(unsigned int)IsMouseInPointerActive(a1, v29) )
        {
          v63 = v246;
          goto LABEL_586;
        }
        v168 = *(_DWORD *)(v29 + 92);
        if ( (v168 & 0x400) != 0 )
        {
          if ( !*((_QWORD *)v31 + 42) )
            *(_DWORD *)(v29 + 92) = v168 & 0xFFFFEFFF;
          v63 = v246;
          if ( (unsigned int)GeneratePointerMessageFromMouse(
                               (struct tagQMSG *)v343,
                               v39,
                               (struct tagQMSG *)v29,
                               v31,
                               v246) )
          {
            v264 = v343[0];
            *(_OWORD *)v265 = v343[1];
            *(_OWORD *)v266 = v343[2];
            v267 = v343[3];
            v268 = v343[4];
            *(_OWORD *)&v269[0].x = v343[5];
            v270 = v343[6];
            v271 = v343[7];
            v272 = v343[8];
            v70 = 1;
            v256 = 1;
            if ( v63 )
              *(_DWORD *)(v29 + 92) &= ~0x400u;
            goto LABEL_409;
          }
          if ( v63 )
          {
            *(_DWORD *)(v29 + 92) &= ~0x400u;
            goto LABEL_586;
          }
        }
        else
        {
          v63 = v246;
          if ( v246 )
          {
            if ( (unsigned int)IsMiPMouseMessage(*(_DWORD *)(v29 + 24)) )
            {
              if ( (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(v29 + 112)) )
              {
                v169 = *(_DWORD **)(a1 + 1112);
                if ( v169 )
                {
                  if ( (*v169 & 2) == 0 && (*v169 & 4) == 0 )
                    goto LABEL_582;
                }
              }
              v170 = *(_DWORD **)(a1 + 1112);
              if ( v170 )
                *v170 &= ~2u;
            }
LABEL_586:
            if ( v63 )
              xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
          }
        }
        v171 = GetMouseKeyFlags(*(_QWORD *)(a1 + 384));
        MouseKeyFlags = v266[0] | v171;
        v253.x = SLOWORD(v266[1]);
        v253.y = SWORD1(v266[1]);
        PhysicalToLogicalDPIPointWithHitTest(&v253, &v253, 0LL, v31);
        v252 = (LOWORD(v253.y) << 16) | LOWORD(v253.x);
        *(struct tagPOINT *)((char *)&v267 + 4) = v253;
        v281 = v253;
        v282 = *(_QWORD *)v31;
        v283 = 0;
        v284 = *((_QWORD *)&v268 + 1);
        v285 = v266[0];
        if ( v63 )
        {
          v172 = 1;
          v258 = 1;
          if ( (unsigned int)xxxCallCtfHook(7, 0, v39, (__int64)&v281) )
            goto LABEL_352;
        }
        else
        {
          v172 = v258;
        }
        if ( ((*(_DWORD *)(a1 + 600) | *(_DWORD *)(*(_QWORD *)(a1 + 416) + 24LL)) & 0x100) == 0
          || (v172 = 1, v258 = 1, !(unsigned int)xxxCallMouseHook((unsigned int)v39, &v281, v63)) )
        {
          if ( v172 && v63 && ((*(_BYTE *)(a1 + 600) | *(_BYTE *)(*(_QWORD *)(a1 + 416) + 24LL)) & 0x40) != 0 )
            xxxCallHook(6LL, v39, &v281);
          goto LABEL_137;
        }
LABEL_352:
        v58 = v245;
LABEL_353:
        v104 = v247;
LABEL_354:
        xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
        if ( v258 )
        {
          v243 = *(_QWORD *)(a1 + 416);
          v23 = (unsigned int)(*(_DWORD *)(a1 + 600) | *(_DWORD *)(v243 + 24));
          if ( ((*(_BYTE *)(a1 + 600) | *(_BYTE *)(v243 + 24)) & 0x40) != 0 )
            xxxCallHook(6LL, v58, &v281);
          v9 = 0LL;
          v258 = 0;
        }
        else
        {
          v9 = 0LL;
        }
        if ( v104 )
        {
          v244 = *(_QWORD *)(a1 + 416);
          v23 = (unsigned int)(*(_DWORD *)(a1 + 600) | *(_DWORD *)(v244 + 24));
          if ( ((*(_BYTE *)(a1 + 600) | *(_BYTE *)(v244 + 24)) & 0x40) != 0 )
            xxxCallHook(7LL, MouseKeyFlags, v252);
          v247 = 0;
        }
        if ( !v63 )
          goto LABEL_20;
        goto LABEL_19;
      }
      if ( v265[2] != 568 )
        goto LABEL_58;
LABEL_320:
      MouseKeyFlags = v266[0];
      v252 = v266[1];
      if ( !v31 )
        goto LABEL_351;
      if ( CheckCrossThreadInput(v31, (struct tagQMSG *)v29, &v251, &v246, a8) )
        goto LABEL_332;
      if ( v251 )
        goto LABEL_351;
      if ( v261 || a5 != -1 )
      {
        if ( v261 <= a5 )
        {
          if ( v38 < v261 || v38 > a5 )
            goto LABEL_20;
        }
        else if ( v38 >= a5 && v38 <= v261 )
        {
          goto LABEL_20;
        }
      }
      if ( (unsigned int)CheckPwndFilter((__int64)v31, *(__int64 *)v273) )
        goto LABEL_264;
    }
    if ( v265[2] == 281 )
    {
LABEL_598:
      if ( !v31 || *((char *)v31 + 44) < 0 || *((char *)v31 + 43) < 0 || (*((_BYTE *)v31 + 55) & 0x18) != 0x10 )
        goto LABEL_351;
      goto LABEL_320;
    }
    switch ( v265[2] )
    {
      case 0x23u:
        MouseKeyFlags = 0LL;
        v252 = v266[1];
        if ( !v31 || (v154 = *((_QWORD *)v31 + 2), v154 == a1) )
        {
          if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)v29, v265[2], v261, a5) )
            goto LABEL_332;
LABEL_264:
          if ( v246 )
            xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
          goto LABEL_137;
        }
        if ( *(_QWORD *)(v154 + 384) != *(_QWORD *)(a1 + 384) )
          goto LABEL_351;
        v83 = v257;
        if ( !v257 )
        {
          v83 = *((_QWORD *)v31 + 2);
          LockExchangeW32Thread(v154, v290);
          v82 = v260;
          v84 = v260;
          goto LABEL_166;
        }
        goto LABEL_867;
      case 0xFEu:
        goto LABEL_320;
      case 0xFFu:
        MouseKeyFlags = v266[0];
        v252 = v266[1];
        v31 = 0LL;
        v248 = 0LL;
        if ( v266[1] )
        {
          v108 = HMValidateHandle(v266[1], 18);
          if ( v108 )
          {
            v31 = *(struct tagWND **)(v108 + 24);
            v248 = (__int64)v31;
          }
        }
        if ( !v31 )
        {
          v158 = *(_QWORD *)(a1 + 384);
          v31 = *(struct tagWND **)(v158 + 72);
          v248 = (__int64)v31;
          if ( !v31 )
          {
            v31 = *(struct tagWND **)(v158 + 80);
            v248 = (__int64)v31;
            if ( !v31 )
              goto LABEL_351;
          }
        }
        ThreadLockExchangeAlways(v31, &v278);
        if ( CheckCrossThreadInput(v31, (struct tagQMSG *)v29, &v251, &v246, a8) )
          goto LABEL_332;
        v109 = v251;
        if ( !v251 )
          goto LABEL_260;
        v159 = (__int64 *)((char *)v31 + 16);
        if ( *(_QWORD *)(*((_QWORD *)v31 + 2) + 384LL) != *(_QWORD *)(a1 + 384) )
          goto LABEL_351;
        if ( (unsigned int)IsInsideMenuLoop(a1) )
        {
          v160 = *(_QWORD *)(**(_QWORD **)(a1 + 528) + 8LL);
        }
        else
        {
          v161 = *(__int64 **)(a1 + 592);
          if ( !v161 )
            goto LABEL_526;
          v160 = *v161;
        }
        if ( v160 )
        {
          v31 = (struct tagWND *)v160;
          v248 = v160;
          v159 = (__int64 *)(v160 + 16);
          v109 = *(_QWORD *)(v160 + 16) != a1;
          v251 = v109;
          ThreadLockExchangeAlways(v160, &v278);
        }
LABEL_526:
        if ( !v274 )
        {
          v274 = *v159;
          LockExchangeW32Thread(v274, v292);
        }
LABEL_260:
        if ( !v261 && a5 == -1 )
          goto LABEL_262;
        if ( v261 <= a5 )
        {
          if ( (unsigned int)v39 < v261 || (unsigned int)v39 > a5 )
            goto LABEL_20;
        }
        else if ( (unsigned int)v39 >= a5 && (unsigned int)v39 <= v261 )
        {
          goto LABEL_20;
        }
LABEL_262:
        if ( !(unsigned int)CheckPwndFilter((__int64)v31, *(__int64 *)v273) )
          goto LABEL_20;
        if ( !v109 )
          goto LABEL_264;
        goto LABEL_332;
      case 0x100u:
      case 0x104u:
        v88 = 1;
        v262 = 1;
        if ( (*(_DWORD *)(a1 + 440) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
        {
          v83 = v257;
LABEL_867:
          v82 = v260;
          v84 = v260;
          goto LABEL_166;
        }
        v89 = LOBYTE(v266[0]);
        MouseKeyFlags = LOBYTE(v266[0]);
        if ( LOBYTE(v266[0]) != 18LL )
          *(_DWORD *)(*(_QWORD *)(a1 + 384) + 332LL) &= 0xFFFFFFF3;
        if ( LOBYTE(gLangToggle[0]) && gLangToggleKeyState < 8 )
        {
          v24 = v266[1] >> 16;
          v144 = 0;
          v32 = (_QWORD *)LOBYTE(v266[0]);
          while ( 1 )
          {
            v145 = v144 == 3;
            if ( v144 >= 3 )
              break;
            v146 = 4LL * v144;
            v147 = HIBYTE(gLangToggle[v146]);
            if ( v147 )
              v148 = v147 == BYTE2(v266[1]);
            else
              v148 = LOBYTE(gLangToggle[v146]) == LOBYTE(v266[0]);
            if ( v148 )
            {
              gLangToggleKeyState |= dword_1C031B0FC[2 * v144];
              v145 = v144 == 3;
              break;
            }
            ++v144;
          }
          if ( v145 )
            gLangToggleKeyState = 8;
        }
        v90 = *(_QWORD *)(a1 + 384);
        v23 = *(unsigned __int8 *)(v90 + 188);
        v91 = *(_BYTE *)(v90 + 188) & 0x10;
        if ( v89 != 44 )
          goto LABEL_185;
        if ( (*(_BYTE *)(v90 + 188) & 0x10) == 0 )
        {
          if ( (*(_DWORD *)(a1 + 756) & 0x20) == 0 )
            goto LABEL_468;
          goto LABEL_185;
        }
        if ( (*(_DWORD *)(a1 + 756) & 0x10) == 0 )
        {
LABEL_468:
          xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
          v149 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 80LL);
          if ( !v91 && (v266[1] & 0xFF0000) != 0x10000LL )
            v149 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 16LL);
          if ( v149 )
          {
            v150 = DWORD1(v271) != 1;
            v287 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v287;
            v288 = v149;
            ++*(_DWORD *)(v149 + 8);
            xxxSnapWindow(v149, v150);
            ThreadUnlock1(v152, v151);
          }
          continue;
        }
LABEL_185:
        if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
        {
          v155 = (unsigned int)v89;
          if ( (v23 & 0x10) != 0 )
            LODWORD(v155) = v89 | 0x400;
          if ( (v23 & 4) != 0 )
            LODWORD(v155) = v155 | 0x200;
          if ( (v23 & 1) != 0 )
            LODWORD(v155) = v155 | 0x100;
          v156 = (_QWORD *)HotKeyToWindow(v155);
          v32 = v156;
          if ( v156 )
          {
            v23 = *(_QWORD *)(v156[2] + 408LL);
            if ( *(_QWORD *)(a1 + 408) == v23 )
            {
              PostTransformableMessage(*(_QWORD *)(v157 + 80), 274, 61776, *v156, 0);
              xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
              continue;
            }
          }
        }
        if ( v89 == 231 )
        {
          *(_WORD *)(a1 + 754) = WORD1(v266[0]);
          v266[0] = 231LL;
        }
LABEL_189:
        v92 = LOBYTE(v266[0]);
        MouseKeyFlags = LOBYTE(v266[0]);
        if ( LOBYTE(v266[0]) == 231LL )
          v266[0] = 231LL;
        if ( gbGraveKeyToggle )
        {
          AppImeCompatFlags = GetAppImeCompatFlags(0LL, v23, v24, v32);
          v93 = v246;
          if ( (AppImeCompatFlags & 0x800000) == 0 && BYTE2(v266[1]) == 41 )
          {
            if ( v246 )
            {
              v230 = *(_QWORD *)(a1 + 384);
              if ( (*(_BYTE *)(v230 + 188) & 0x15) == 0
                && (*(_BYTE *)(v230 + 206) & 0x40) == 0
                && (*(_BYTE *)(v230 + 207) & 1) == 0 )
              {
                v231 = *(_QWORD *)(v230 + 72);
                v248 = v231;
                if ( !v231 )
                {
                  v231 = *(_QWORD *)(v230 + 80);
                  v248 = v231;
                }
                if ( !v88 )
                {
                  if ( v231 )
                  {
                    v232 = *(_QWORD *)(v231 + 16);
                    if ( *(_QWORD *)(v232 + 392) )
                    {
                      v233 = HKLtoPKL(v232, 1LL);
                      if ( v233 )
                        PostMessage(
                          v234,
                          80LL,
                          ((*(_DWORD *)(v233 + 64) & gSystemFS) != 0) | 2LL,
                          *(_QWORD *)(v233 + 40));
                    }
                  }
                }
LABEL_582:
                xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
                continue;
              }
            }
          }
        }
        else
        {
          v93 = v246;
        }
        if ( !v275 && !v88 && v93 && LOBYTE(gLangToggle[0]) )
        {
          v255 = 0;
          ZwQueryDefaultLocale(0, &DefaultLocaleId);
          v139 = *(_QWORD *)(a1 + 384);
          v140 = *(_QWORD *)(v139 + 72);
          if ( !v140 )
          {
            v140 = *(_QWORD *)(v139 + 80);
            if ( !v140 )
            {
LABEL_829:
              v143 = gLangToggleKeyState;
              goto LABEL_439;
            }
          }
          v141 = *(_QWORD *)(v140 + 16);
          v142 = *(_QWORD *)(v141 + 392);
          v143 = gLangToggleKeyState;
          if ( gLangToggleKeyState < 8 && (DefaultLocaleId & 0x3FF) == 1 )
          {
            v235 = HKLtoPKL(*(_QWORD *)(v140 + 16), 1LL);
            if ( v142 )
            {
              if ( v235 )
              {
                if ( *(_QWORD *)(v142 + 40) != *(_QWORD *)(v235 + 40) )
                {
                  v236 = HKLtoPKL(v141, 0LL);
                  if ( v237 == v236 && ((*(_DWORD *)(v142 + 40) & 0x3FF) == 1 || (*(_DWORD *)(v237 + 40) & 0x3FF) == 1) )
                    v88 = 1;
                }
              }
            }
          }
          if ( v143 < 3 )
            goto LABEL_439;
          switch ( v143 )
          {
            case 3:
              v255 = 1;
              LODWORD(v9) = 2;
              if ( v88 && (*(_DWORD *)(v142 + 40) & 0x3FF) != 1 )
                goto LABEL_826;
              v238 = 1LL;
              break;
            case 5:
              v255 = 1;
              LODWORD(v9) = 4;
              if ( v88 && (*(_DWORD *)(v142 + 40) & 0x3FF) == 1 )
              {
LABEL_826:
                if ( !v142 )
                {
                  v142 = *(_QWORD *)(v141 + 392);
                  if ( !v142 )
                    goto LABEL_439;
                }
                PostMessage(
                  v140,
                  80LL,
                  (unsigned int)v9 | (unsigned __int64)((*(_DWORD *)(v142 + 64) & gSystemFS) != 0),
                  *(_QWORD *)(v142 + 40));
                goto LABEL_829;
              }
              v238 = 0LL;
              break;
            case 7:
              v142 = gspklBaseLayout;
              goto LABEL_826;
            default:
LABEL_439:
              if ( !v255 )
              {
                v9 = 0LL;
                gLangToggleKeyState = 0;
LABEL_441:
                LODWORD(v39) = v245;
                goto LABEL_194;
              }
              v9 = 0LL;
              for ( i = 0; ; ++i )
              {
                if ( i >= 3 )
                  goto LABEL_441;
                v240 = 8LL * i;
                v241 = HIBYTE(gLangToggle[v240 / 2]);
                if ( !v241 )
                  break;
                if ( v241 == BYTE2(v266[1]) )
                  goto LABEL_836;
LABEL_837:
                ;
              }
              if ( LOBYTE(gLangToggle[v240 / 2]) != LOBYTE(v266[0]) )
                goto LABEL_837;
LABEL_836:
              v143 &= ~dword_1C031B0FC[v240 / 4];
              gLangToggleKeyState = v143;
              goto LABEL_837;
          }
          v142 = HKLtoPKL(v141, v238);
          goto LABEL_826;
        }
LABEL_194:
        if ( v92 == 121 )
        {
          LODWORD(v39) = v39 | 4;
          v245 = v39;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 384) + 188LL) & 4) != 0 && v92 == 27 )
        {
          LODWORD(v39) = v39 | 4;
          v245 = v39;
        }
        if ( (*(_DWORD *)(a1 + 440) & 8) == 0 )
          v266[1] &= ~0x2000000uLL;
LABEL_199:
        MouseKeyFlags = LOBYTE(v266[0]);
        v94 = *(_QWORD *)(a1 + 384);
        v31 = *(struct tagWND **)(v94 + 72);
        v248 = (__int64)v31;
        if ( !v31 )
        {
          v31 = *(struct tagWND **)(v94 + 80);
          v248 = (__int64)v31;
          if ( !v31 )
            goto LABEL_351;
          if ( (unsigned int)(v39 - 256) <= 3 )
          {
            LODWORD(v39) = v39 + 4;
            v245 = v39;
          }
        }
        ThreadLockExchangeAlways(v31, &v278);
        v95 = (__int64 *)((char *)v31 + 16);
        v96 = *((_QWORD *)v31 + 2);
        if ( v96 == a1 )
        {
          v97 = 0;
          v251 = 0;
          goto LABEL_202;
        }
        v97 = 1;
        v251 = 1;
        if ( *(_QWORD *)(v96 + 384) != *(_QWORD *)(a1 + 384) )
          goto LABEL_351;
        if ( (unsigned int)IsInsideMenuLoop(a1) )
        {
          v242 = *(_QWORD *)(**(_QWORD **)(a1 + 528) + 8LL);
          goto LABEL_840;
        }
        v126 = *(__int64 **)(a1 + 592);
        if ( v126 )
        {
          v242 = *v126;
LABEL_840:
          if ( v242 )
          {
            v31 = (struct tagWND *)v242;
            v248 = v242;
            v95 = (__int64 *)(v242 + 16);
            v97 = *(_QWORD *)(v242 + 16) != a1;
            v251 = v97;
            ThreadLockExchangeAlways(v242, &v278);
          }
        }
        if ( !v276 )
        {
          v276 = *v95;
          LockExchangeW32Thread(v276, v289);
        }
LABEL_202:
        if ( v261 || a5 != -1 )
        {
          if ( v261 > a5 )
          {
            if ( (unsigned int)v39 >= a5 && (unsigned int)v39 <= v261 )
              goto LABEL_20;
          }
          else if ( (unsigned int)v39 < v261 || (unsigned int)v39 > a5 )
          {
            goto LABEL_20;
          }
        }
        if ( !(unsigned int)CheckPwndFilter((__int64)v31, *(__int64 *)v273) )
          goto LABEL_20;
        if ( v97 )
          goto LABEL_332;
        v63 = v246;
        if ( v246 && !(unsigned int)IsInsideMenuLoop(a1) )
        {
          if ( MouseKeyFlags == 93 && (_DWORD)v39 == 257 )
            PostTransformableMessage((_DWORD)v31, 123, *(_QWORD *)v31, -1, 0);
          if ( MouseKeyFlags == 112 && (_DWORD)v39 == 256 )
            PostMessage(v31, 77LL, 0LL, 0LL);
        }
        v98 = v266[1];
        if ( MouseKeyFlags == 16 )
        {
          v116 = (v266[1] & 0x1000000) != 0 ? -95 : -96;
          if ( !v262
            && ((unsigned __int8)(1 << (2 * ((v116 ^ 1) & 3))) & *(_BYTE *)(((unsigned __int64)(v116 ^ 1u) >> 2)
                                                                          + *(_QWORD *)(a1 + 384)
                                                                          + 184)) != 0
            && (*(_DWORD *)(a1 + 440) & 8) == 0 )
          {
            v266[0] = v116;
            xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
            continue;
          }
        }
        v99 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)MouseKeyFlags >> 2) + *(_QWORD *)(a1 + 384) + 184) & (1 << (2 * (MouseKeyFlags & 3)));
        if ( v63 )
        {
          xxxSkipSysMsg((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v264);
          v98 = v266[1];
        }
        v252 = v98;
        v100 = v266[0];
        MouseKeyFlags = v266[0];
        if ( v99 )
          v252 = v98 | 0x40000000;
        if ( (_DWORD)v39 == 257 || (_DWORD)v39 == 261 )
          v252 |= 0x80000000uLL;
        v101 = *(_QWORD *)(a1 + 384);
        if ( (*(_BYTE *)(v101 + 188) & 0x10) != 0 )
          v252 |= 0x20000000uLL;
        v102 = *(_QWORD *)(a1 + 528);
        if ( v102 && (*(_DWORD *)(v102 + 8) & 1) != 0 )
          v252 |= 0x10000000uLL;
        if ( (*(_DWORD *)(v101 + 332) & 0x4000) != 0 )
          v252 |= 0x8000000uLL;
        if ( !v275 && !gpImeHotKeyListHeader
          || !v63
          || v102 && (*(_DWORD *)(v102 + 8) & 1) != 0
          || (*(_DWORD *)(a1 + 440) & 0x2000000) != 0 )
        {
          v74 = v249;
        }
        else
        {
          if ( v266[0] == 231 )
            v100 = (*(unsigned __int16 *)(a1 + 754) << 16) | 0xE7;
          v103 = xxxImmProcessKey(v101, (_DWORD)v31, v39, v100, v252);
          v74 = v103;
          v249 = v103;
          if ( (v103 & 0x11) != 0 )
          {
            v249 = 0;
            goto LABEL_352;
          }
        }
        if ( !v63 )
        {
          v104 = v247;
          goto LABEL_231;
        }
        v104 = 1;
        v247 = 1;
        if ( (unsigned int)xxxCallCtfHook(2, 0, MouseKeyFlags, v252) )
        {
LABEL_857:
          v58 = v245;
          goto LABEL_354;
        }
LABEL_231:
        if ( ((*(_BYTE *)(a1 + 600) | *(_BYTE *)(*(_QWORD *)(a1 + 416) + 24LL)) & 8) != 0 )
        {
          v104 = 1;
          v247 = 1;
          v137 = v63 ? 0LL : 3LL;
          if ( (unsigned int)xxxCallHook(v137, MouseKeyFlags, v252) )
            goto LABEL_857;
        }
        if ( v104 && v63 && ((*(_BYTE *)(a1 + 600) | *(_BYTE *)(*(_QWORD *)(a1 + 416) + 24LL)) & 0x40) != 0 )
          xxxCallHook(7LL, MouseKeyFlags, v252);
LABEL_138:
        if ( *(_QWORD *)(a1 + 676) != *(_QWORD *)((char *)&v267 + 4) )
          *(_DWORD *)(a1 + 440) |= 0x100000u;
        if ( v29 > 1 && (v269[1].y & 0x20) != 0 )
        {
          if ( *(_DWORD *)(v29 + 24) == 512 )
          {
            if ( v31 )
              v123 = *(_QWORD *)v31;
            else
              v123 = 0LL;
            *(_QWORD *)(v29 + 16) = v123;
            *(_DWORD *)(v29 + 92) |= 0x200u;
          }
          *(_QWORD *)(v29 + 64) = v252;
        }
        *(_QWORD *)(a1 + 676) = *(_QWORD *)((char *)&v267 + 4);
        *(struct tagPOINT *)(a1 + 684) = v269[0];
        *(_DWORD *)(a1 + 492) = v267;
        *(_QWORD *)(*(_QWORD *)(a1 + 384) + 352LL) = *((_QWORD *)&v268 + 1);
        *(_QWORD *)(*(_QWORD *)(a1 + 384) + 32LL) = 1LL;
        *(_QWORD *)(a1 + 496) = 1LL;
        *(_QWORD *)(a1 + 1076) = v271;
        *(_DWORD *)(a1 + 1120) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( *(_DWORD *)(a1 + 1080) == 1 )
          *(_DWORD *)(a1 + 1072) |= 0x20000u;
        else
          *(_DWORD *)(a1 + 1072) &= ~0x20000u;
        **(_DWORD **)(a1 + 400) &= ~8u;
        **(_QWORD **)(a1 + 432) &= 0x7FFFFFFFuLL;
        if ( v246 )
        {
          v75 = *(_QWORD **)(a1 + 432);
          if ( (v269[1].y & 1) != 0 )
            *v75 |= 0x1000uLL;
          else
            *v75 &= ~0x1000uLL;
        }
        v76 = v245;
        TransferWakeBit(a1, v245);
        ClearWakeBit(a1, 31751LL, 1LL);
        if ( v246 )
        {
          if ( v256 )
          {
            v138 = *(_DWORD **)(a1 + 1112);
            if ( v138 )
            {
              if ( (*v138 & 1) != 0 && (*v138 & 4) != 0 )
                SetMiPWakeBit((struct tagTHREADINFO *)a1);
            }
          }
        }
        if ( v248 )
          v9 = *(_QWORD *)v248;
        *(_QWORD *)a2 = v9;
        *(_DWORD *)(a2 + 8) = v76;
        if ( (v74 & 2) != 0 )
          v77 = 229LL;
        else
          v77 = MouseKeyFlags;
        *(_QWORD *)(a2 + 16) = v77;
        *(_QWORD *)(a2 + 24) = v252;
        *(_DWORD *)(a2 + 32) = v267;
        *(_QWORD *)(a2 + 36) = *(_QWORD *)((char *)&v267 + 4);
        if ( v246 )
        {
          EtwTraceInputProcessDelay(a1);
          *(_DWORD *)(*(_QWORD *)(a1 + 384) + 360LL) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v78 = *(_DWORD *)(a2 + 8);
          if ( v78 == 256 )
          {
            *(_DWORD *)(a1 + 1176) |= 1u;
            *(_QWORD *)(a1 + 1160) = *(_QWORD *)(a1 + 1076);
            *(_DWORD *)(a1 + 1152) = *(unsigned __int16 *)(a2 + 26);
            *(_DWORD *)(a1 + 1156) = *(_DWORD *)(a2 + 16);
            *(_QWORD *)(a1 + 1168) = v272;
          }
          else if ( ((v78 - 257) & 0xFFFFFFFB) == 0 )
          {
            *(_DWORD *)(a1 + 1176) &= ~1u;
          }
        }
        EtwTraceRetrieveInputMessage(a2, (unsigned int)v246);
        PopAndFreeW32ThreadLock(v293);
        PopAndFreeW32ThreadLock(v292);
        PopAndFreeW32ThreadLock(v294);
        PopAndFreeW32ThreadLock(v290);
        PopAndFreeW32ThreadLock(v289);
        ThreadUnlock1(v80, v79);
        return 1LL;
      case 0x102u:
        goto LABEL_199;
      case 0x105u:
        goto LABEL_188;
      default:
        goto LABEL_58;
    }
  }
}
