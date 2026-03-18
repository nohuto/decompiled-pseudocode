/*
 * XREFs of xxxMenuWindowProc @ 0x1C013CEA0
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C013C6D0 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     IsPointerInputMessageWithState @ 0x1C005810C (IsPointerInputMessageWithState.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     IsPointerParentNotify @ 0x1C00A3DB4 (IsPointerParentNotify.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     FBadWindow @ 0x1C00AB590 (FBadWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C00AD2F8 (xxxDWP_DoNCActivate.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     xxxSendUAHMenuMessage @ 0x1C00B7D88 (xxxSendUAHMenuMessage.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     NextTopWindow @ 0x1C0105548 (NextTopWindow.c)
 *     PlayEventSound @ 0x1C010F740 (PlayEventSound.c)
 *     xxxValidateRect @ 0x1C01267E0 (xxxValidateRect.c)
 *     xxxMNSetCapture @ 0x1C013B99C (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C013BA14 (FindBestPos.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C013ECB4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013ECC4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxMNButtonUp @ 0x1C013ECEC (xxxMNButtonUp.c)
 *     xxxMNButtonDown @ 0x1C013ED74 (xxxMNButtonDown.c)
 *     ?MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C013EE04 (-MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     MNAnimate @ 0x1C013F880 (MNAnimate.c)
 *     MNAllocPopup @ 0x1C013F8E4 (MNAllocPopup.c)
 *     zzzStartFade @ 0x1C013F924 (zzzStartFade.c)
 *     zzzShowFade @ 0x1C013F9EC (zzzShowFade.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C014015C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0140258 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C014052C (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     IsMFMWFPWindow @ 0x1C0142218 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0142A74 (xxxMNMouseMove.c)
 *     xxxEndMenuLoop @ 0x1C0142C30 (xxxEndMenuLoop.c)
 *     xxxMNEndMenuState @ 0x1C0142C80 (xxxMNEndMenuState.c)
 *     LockPopupMenu @ 0x1C0142D1C (LockPopupMenu.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0142EC4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GreSetWindowOrg @ 0x1C0144ABC (GreSetWindowOrg.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _SetTimer @ 0x1C01E0CD0 (_SetTimer.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01F463C (MNCreateAnimationBitmap.c)
 *     xxxUserModeCallback @ 0x1C020E1A4 (xxxUserModeCallback.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C020E5DC (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z @ 0x1C020E630 (-MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C020E6B8 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020E760 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 *     MNCheckButtonDownState @ 0x1C020F048 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C020F08C (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C020F130 (xxxCallHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C020F234 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C020F63C (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 *     MNFindNextValidItem @ 0x1C0235330 (MNFindNextValidItem.c)
 *     MNDrawEdge @ 0x1C023715C (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C0237348 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v5; // rsi
  unsigned int v7; // r10d
  struct tagWND *v8; // r14
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // r8d
  int v13; // r10d
  __int64 v14; // r9
  unsigned int v15; // edx
  unsigned __int64 v16; // r11
  unsigned __int64 ThreadPointerData; // rax
  __int64 v18; // r15
  struct tagMENUSTATE *i; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned int v23; // r10d
  struct tagTHREADINFO **v24; // r11
  __int64 v25; // r13
  __int64 v26; // rbx
  struct tagTHREADINFO *v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  unsigned int v30; // r10d
  unsigned int v31; // r10d
  unsigned int v32; // r10d
  unsigned int v33; // r10d
  unsigned int v34; // r10d
  unsigned int v35; // r10d
  unsigned int v36; // r10d
  unsigned int v37; // r10d
  __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // r10d
  unsigned int v43; // r10d
  unsigned int v44; // r10d
  unsigned int v45; // r10d
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // r8d
  __int64 v50; // rcx
  struct tagWND *v51; // r15
  unsigned int v52; // edi
  struct tagWND *TopWindow; // rax
  unsigned int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 *v61; // r11
  struct tagWND *v62; // r13
  __int64 v63; // rdx
  int v64; // edi
  __int64 v65; // rcx
  int v66; // r14d
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // ecx
  _DWORD *v95; // r14
  __int64 v96; // rdx
  unsigned __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  int v110; // ecx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  int v121; // ecx
  _DWORD *v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  unsigned int v125; // r10d
  unsigned int v126; // r10d
  unsigned int v127; // r10d
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rcx
  unsigned __int64 Fade; // rax
  int v132; // ecx
  unsigned int v133; // eax
  unsigned int v134; // eax
  bool v135; // zf
  int v136; // eax
  struct tagTHREADINFO *v137; // rcx
  char v138; // al
  struct tagWND *v139; // rcx
  unsigned __int64 v140; // rdx
  __int64 v141; // r8
  __int64 DCEx; // rbx
  __int64 v143; // rdi
  int v144; // ebx
  __int64 v145; // rdi
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rbx
  __int64 DPIMetrics; // rax
  unsigned int v150; // r10d
  unsigned int v151; // r10d
  unsigned int v152; // r10d
  unsigned int v153; // r10d
  unsigned int v154; // r10d
  unsigned int v155; // r10d
  unsigned int v156; // r10d
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  unsigned int ValidItem; // eax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rbx
  __int64 v165; // rdx
  __int64 v166; // rcx
  struct tagTHREADINFO *v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rdx
  __int64 v170; // rcx
  struct tagMONITOR *v171; // rdi
  __int64 v172; // rdx
  __int64 v173; // rcx
  unsigned __int16 v174; // r13
  int v175; // r13d
  int BestPos; // eax
  __int64 v177; // rdx
  unsigned __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rdx
  __int64 v189; // r8
  __int64 v190; // r9
  int v191; // ecx
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rdx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // rdx
  __int64 v200; // r8
  __int64 v201; // r9
  int v202; // ecx
  _DWORD *v203; // r15
  __int64 v204; // rdx
  unsigned __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
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
  int v218; // ecx
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rdx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rdx
  __int64 v227; // r8
  __int64 v228; // r9
  int v229; // ecx
  _DWORD *v230; // rcx
  unsigned __int16 v231; // bx
  unsigned int v232; // r10d
  unsigned int v233; // r10d
  unsigned int v234; // r10d
  unsigned int v235; // r10d
  unsigned int v236; // r10d
  unsigned int v237; // r10d
  __int64 v238; // r8
  __int64 v239; // rcx
  __int64 v240; // rax
  __int16 v241; // r8
  __int64 *v242; // r11
  __int64 v243; // rax
  __int64 *v244; // r9
  __int64 v245; // rcx
  __int64 v246; // rdx
  __int64 v247; // r9
  __int64 v248; // rax
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // rdx
  __int64 v252; // rcx
  unsigned int v253; // r10d
  int v254; // edi
  unsigned int v255; // r13d
  __int64 v256; // rdx
  unsigned __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 v264; // rdx
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 v267; // rdx
  __int64 v268; // r8
  __int64 v269; // r9
  __int64 v270; // rdx
  __int64 v271; // rcx
  __int64 v272; // r8
  __int64 v273; // r9
  __int64 v274; // rdx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rdx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 v281; // rdx
  unsigned __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 v289; // rdx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 v292; // rdx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // rdx
  __int64 v296; // rcx
  __int64 v297; // r8
  __int64 v298; // r9
  __int64 v299; // rdx
  __int64 v300; // r8
  __int64 v301; // r9
  __int64 v302; // rdx
  __int64 v303; // r8
  __int64 v304; // r9
  __int64 v306; // rdx
  unsigned __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // rdx
  __int64 v311; // rcx
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 v314; // rdx
  __int64 v315; // r8
  __int64 v316; // r9
  __int64 v317; // rdx
  __int64 v318; // r8
  __int64 v319; // r9
  __int64 v320; // rdx
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
  __int64 v324; // rdx
  __int64 v325; // r8
  __int64 v326; // r9
  __int64 v327; // rdx
  __int64 v328; // r8
  __int64 v329; // r9
  __int64 v331; // rdx
  unsigned __int64 v332; // rcx
  __int64 v333; // r8
  __int64 v334; // r9
  __int64 v335; // rdx
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 v338; // r9
  __int64 v339; // rdx
  __int64 v340; // r8
  __int64 v341; // r9
  __int64 v342; // rdx
  __int64 v343; // r8
  __int64 v344; // r9
  __int64 v345; // rdx
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 v349; // rdx
  __int64 v350; // r8
  __int64 v351; // r9
  __int64 v352; // rdx
  __int64 v353; // r8
  __int64 v354; // r9
  int v355; // ecx
  struct tagWND *v356; // rcx
  int v357; // [rsp+58h] [rbp-B0h]
  __int64 v358; // [rsp+60h] [rbp-A8h]
  struct tagITEM *v359; // [rsp+60h] [rbp-A8h]
  int v360; // [rsp+60h] [rbp-A8h]
  unsigned int v361; // [rsp+68h] [rbp-A0h]
  int v362; // [rsp+68h] [rbp-A0h]
  struct tagTHREADINFO **v363; // [rsp+70h] [rbp-98h]
  __int64 v364; // [rsp+70h] [rbp-98h]
  int v365; // [rsp+70h] [rbp-98h]
  int v366; // [rsp+78h] [rbp-90h]
  unsigned __int64 v367; // [rsp+80h] [rbp-88h] BYREF
  int v368; // [rsp+88h] [rbp-80h] BYREF
  int v369; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v370; // [rsp+90h] [rbp-78h] BYREF
  __int64 v371; // [rsp+98h] [rbp-70h]
  __int64 v372; // [rsp+A8h] [rbp-60h] BYREF
  char v373[8]; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v374; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v375[3]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v376[3]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v377[3]; // [rsp+F8h] [rbp-10h] BYREF

  v4 = *((_WORD *)a1 + 33);
  v5 = 0LL;
  v358 = a4;
  v361 = a2;
  v357 = 0;
  v7 = a2;
  v8 = a1;
  if ( v4 != 668 )
  {
    if ( v4 )
      return 0LL;
    if ( (_DWORD)a2 != 129 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    a2 = (unsigned int)(*((_DWORD *)a1 + 58) + 360);
    if ( (unsigned int)a2 < *(unsigned __int16 *)(gpsi + 332LL) || *((_QWORD *)a1 + 45) || *((_QWORD *)a1 + 46) )
      return 0LL;
    *((_WORD *)a1 + 33) = 668;
  }
  v10 = *((_QWORD *)a1 + 2);
  v363 = (struct tagTHREADINFO **)gptiCurrent;
  if ( v10 != gptiCurrent )
  {
    v12 = IsPointerInputMessageWithState(v7, a2);
    if ( !v12 && !IsPointerParentNotify(v11, a3) )
    {
      v15 = v13;
      return xxxSendMessage(v8, v15, a3, v14);
    }
    if ( v12 )
    {
      LOWORD(v16) = a3;
    }
    else
    {
      if ( !IsPointerParentNotify(v13, a3) )
      {
LABEL_19:
        ThreadPointerData = GetThreadPointerData(
                              (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL),
                              v16,
                              0LL,
                              0LL,
                              0LL);
        if ( ThreadPointerData )
        {
          v15 = v361;
          v14 = ThreadPointerData;
          return xxxSendMessage(v8, v15, a3, v14);
        }
        return 0LL;
      }
      v16 = a3 >> 16;
    }
    if ( (_WORD)v16 == 1 )
      return 0LL;
    goto LABEL_19;
  }
  v18 = *((_QWORD *)a1 + 45);
  if ( v18 )
  {
    for ( i = *(struct tagMENUSTATE **)(v10 + 528); i; i = (struct tagMENUSTATE *)*((_QWORD *)i + 6) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(v18 + 64) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v373, i);
  if ( v18 )
    v25 = *(_QWORD *)(v18 + 40);
  else
    v25 = 0LL;
  v26 = 1LL;
  if ( i && v25 )
  {
    v27 = *v24;
    v28 = 1LL;
    v357 = 1;
    v375[0] = *((_QWORD *)*v24 + 46);
    *((_QWORD *)v27 + 46) = v375;
    v375[1] = v25;
    ++*(_DWORD *)(v25 + 8);
    v20 = *(_QWORD *)(v18 + 64);
    if ( !v20 || (v29 = 1, **(_QWORD **)(*((_QWORD *)v8 + 2) + 528LL) == v20) )
      v29 = 0;
    v21 = *((unsigned int *)i + 2);
    if ( (v21 & 0x100) != 0 && (v21 & 0x200) == 0 )
    {
      if ( v29 )
      {
        if ( v23 - 512 <= 0xE || v23 - 256 <= 9 || v23 - 160 <= 0xD )
          goto LABEL_95;
      }
      else
      {
        if ( (unsigned int)xxxCallHandleMenuMessages((_DWORD)i, (_DWORD)v8, v23, a3, v22) )
        {
LABEL_214:
          ThreadUnlock1(v21, v20);
          goto LABEL_215;
        }
        v24 = (struct tagTHREADINFO **)gptiCurrent;
        v28 = 1LL;
        v23 = v361;
        v22 = v358;
        v363 = (struct tagTHREADINFO **)gptiCurrent;
      }
    }
LABEL_68:
    if ( v23 <= 0x1E1 )
    {
      if ( v23 != 481 )
      {
        if ( v23 <= 0x81 )
        {
          if ( v23 != 129 )
          {
            if ( v23 <= 0x18 )
            {
              if ( v23 != 24 )
              {
                v42 = v23 - 3;
                if ( v42 )
                {
                  v43 = v42 - 2;
                  if ( v43 )
                  {
                    v44 = v43 - 1;
                    if ( v44 )
                    {
                      v45 = v44 - 9;
                      if ( v45 )
                      {
                        if ( v45 == 5 && *(_QWORD *)(v25 + 112) )
                        {
                          MNEraseBackground((HDC)a3, v25, 0);
LABEL_448:
                          if ( v357 )
                            ThreadUnlock1(v41, v40);
                          goto LABEL_450;
                        }
LABEL_94:
                        if ( !v357 )
                        {
LABEL_96:
                          v23 = v361;
                          goto LABEL_97;
                        }
LABEL_95:
                        ThreadUnlock1(v21, v20);
                        v22 = v358;
                        goto LABEL_96;
                      }
                      xxxHandleMenuPainting(v8, (struct tagMENU *)v25);
LABEL_441:
                      if ( v357 )
                        ThreadUnlock1(v21, v20);
                      goto LABEL_98;
                    }
                    v46 = *((_DWORD *)i + 2);
                    if ( (v46 & 0x100) != 0 )
                    {
                      if ( (_WORD)a3 )
                        goto LABEL_94;
                      if ( (v46 & 0x200) != 0 )
                        goto LABEL_94;
                      if ( (**(_DWORD **)i & 0x80000) != 0 )
                        goto LABEL_94;
                      LOBYTE(v20) = 1;
                      v358 = HMValidateHandleNoSecure(v22, v20, v28, v22);
                      v47 = safe_cast_fnid_to_PMENUWND(v358);
                      if ( !v22 )
                        goto LABEL_94;
                      if ( v47 )
                      {
                        v48 = *(_QWORD *)(v47 + 360);
                        if ( v48 )
                        {
                          if ( *(_QWORD *)i == *(_QWORD *)(v48 + 64) )
                            goto LABEL_94;
                        }
                      }
                      v49 = *((_DWORD *)i + 2);
                      if ( (v49 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
                      {
                        *((_DWORD *)i + 2) = v49 & 0xFFFEFFFF;
                        PostMessage((__int64)v8, 498LL, 0LL, 0LL);
                        goto LABEL_93;
                      }
                      goto LABEL_99;
                    }
                    if ( !(_WORD)a3 )
                      goto LABEL_441;
                    if ( *((_WORD *)*v24 + 276) >= 0x500u )
                    {
LABEL_99:
                      v50 = (__int64)v8;
LABEL_100:
                      PostMessage(v50, 499LL, 0LL, 0LL);
                      goto LABEL_441;
                    }
                    if ( gpqForegroundPrev )
                    {
                      if ( !(unsigned int)FBadWindow(*(struct tagWND **)(gpqForegroundPrev + 96LL))
                        && (*(_WORD *)(*(_QWORD *)(gpqForegroundPrev + 96LL) + 66LL) & 0x3FFF) != 0x29C )
                      {
                        v8 = *(struct tagWND **)(gpqForegroundPrev + 96LL);
                        v21 = (__int64)v363;
LABEL_116:
                        if ( !v8 )
                          goto LABEL_441;
                        v55 = *(_QWORD *)v21;
                        v376[0] = *(_QWORD *)(v55 + 368);
                        *(_QWORD *)(v55 + 368) = v376;
                        v376[1] = v8;
                        ++*((_DWORD *)v8 + 2);
                        v56 = *(_QWORD *)(v55 + 384);
                        if ( *(_QWORD *)(*((_QWORD *)v8 + 2) + 384LL) == v56 )
                        {
                          xxxActivateThisWindow(v8, 0, 2, 0);
                        }
                        else if ( gpqForeground == v56 )
                        {
                          xxxSetForegroundWindow(v8, 0);
                        }
                        goto LABEL_212;
                      }
                      v24 = v363;
                    }
                    v51 = v8;
                    v52 = 0;
                    while ( 1 )
                    {
                      TopWindow = NextTopWindow(*v24, (__int64)v8, 0LL, 0);
                      v8 = TopWindow;
                      if ( !TopWindow )
                        break;
                      if ( !(unsigned int)FBadWindow(*((struct tagWND **)TopWindow + 30))
                        && (*(_WORD *)(*((_QWORD *)v8 + 30) + 66LL) & 0x3FFF) != 0x29C )
                      {
                        v8 = (struct tagWND *)*((_QWORD *)v8 + 30);
LABEL_115:
                        v21 = gptiCurrent;
                        goto LABEL_116;
                      }
                      v54 = v52++;
                      if ( v54 >= 0xFF )
                        break;
                      v24 = (struct tagTHREADINFO **)gptiCurrent;
                    }
                    if ( !v52 )
                      goto LABEL_115;
                    v50 = (__int64)v51;
                    goto LABEL_100;
                  }
                }
                v57 = *(_QWORD *)(v18 + 24);
                if ( !v57 )
                  goto LABEL_441;
                v359 = (struct tagITEM *)MNGetpItem(v18, *(unsigned int *)(v18 + 84), v57, v22);
                v59 = safe_cast_fnid_to_PMENUWND(v58);
                v62 = (struct tagWND *)v59;
                if ( !v60 )
                  goto LABEL_441;
                if ( !v59 )
                  goto LABEL_441;
                v21 = *(_QWORD *)(v59 + 360);
                if ( !v21 )
                  goto LABEL_441;
                v63 = *(_QWORD *)(v21 + 40);
                v64 = 0;
                v65 = *v61;
                v66 = 0;
                v368 = 0;
                v369 = 0;
                v364 = v63;
                v370 = *(_QWORD *)(v65 + 368);
                *(_QWORD *)(v65 + 368) = &v370;
                v371 = v59;
                ++*(_DWORD *)(v59 + 8);
                v67 = *v61;
                v377[0] = *(_QWORD *)(*v61 + 368);
                *(_QWORD *)(v67 + 368) = v377;
                v377[1] = v63;
                ++*(_DWORD *)(v63 + 8);
                if ( !*(_DWORD *)(v63 + 56) )
                {
                  xxxSendMessage((struct tagWND *)v59, 0x1E2u, 0LL, 0LL);
                  v60 = (__int64)v359;
                }
                v68 = *(_QWORD *)(v18 + 40);
                if ( !v68 || (unsigned int)MNGetpItemIndex(v68, v60) == -1 )
                {
LABEL_166:
                  xxxSetWindowPosAndBand(v62, 0, v64, v66, 0, 0, 1029, 0);
                  ThreadUnlock1(v124, v123);
LABEL_212:
                  ThreadUnlock1(v55, v56);
                  goto LABEL_441;
                }
                if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v70, v69, v71, v72) & 0xF) != 0 )
                    goto LABEL_133;
                }
                else if ( !IsDPIDWMSysMet(v70)
                       || (W32GetCurrentThreadDpiAwarenessContext(v85, v84, v86, v87) & 0xF) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v88, v89, v90) + 408)
                         ? (v94 = 0)
                         : (v94 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                        (__int64)KeGetCurrentThread(),
                                                                        v91,
                                                                        v92,
                                                                        v93)
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                           !v94) )
                {
LABEL_133:
                  if ( IsDPIDWMSysMet(8uLL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v74, v73, v75, v76) & 0xF) == 1
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v78, v79) + 408)
                      ? (v83 = 0)
                      : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v80,
                                                                     v81,
                                                                     v82)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                        v83) )
                  {
                    v95 = (_DWORD *)(gpsi + 2688LL);
                  }
                  else
                  {
                    v95 = (_DWORD *)(gpsi + 1912LL);
                  }
LABEL_148:
                  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v97, v96, v98, v99) & 0xF) != 0 )
                      goto LABEL_150;
                  }
                  else if ( !IsDPIDWMSysMet(v97)
                         || (W32GetCurrentThreadDpiAwarenessContext(v112, v111, v113, v114) & 0xF) != 0
                         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v115, v116, v117) + 408)
                           ? (v121 = 0)
                           : (v121 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                           (__int64)KeGetCurrentThread(),
                                                                           v118,
                                                                           v119,
                                                                           v120)
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1),
                             !v121) )
                  {
LABEL_150:
                    if ( IsDPIDWMSysMet(7uLL)
                      && (W32GetCurrentThreadDpiAwarenessContext(v101, v100, v102, v103) & 0xF) == 1
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106) + 408)
                        ? (v110 = 0)
                        : (v110 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                        (__int64)KeGetCurrentThread(),
                                                                        v107,
                                                                        v108,
                                                                        v109)
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                          v110) )
                    {
                      v122 = (_DWORD *)(gpsi + 2684LL);
                    }
                    else
                    {
                      v122 = (_DWORD *)(gpsi + 1908LL);
                    }
                    goto LABEL_165;
                  }
                  v122 = (_DWORD *)(gpsi + 2296LL);
LABEL_165:
                  xxxMNPositionHierarchy(
                    (struct tagPOPUPMENU *)v18,
                    v359,
                    *(_DWORD *)(v364 + 56) + 2 * *v122,
                    *(_DWORD *)(v364 + 60) + 2 * *v95,
                    &v368,
                    &v369,
                    0LL);
                  v64 = v368;
                  v66 = v369;
                  goto LABEL_166;
                }
                v95 = (_DWORD *)(gpsi + 2300LL);
                goto LABEL_148;
              }
              if ( a3 )
                goto LABEL_94;
              xxxMNCancel((__int64)i, 0, 0, 0LL);
LABEL_93:
              v22 = v358;
              goto LABEL_94;
            }
            v125 = v23 - 28;
            if ( !v125 )
            {
              if ( (*((_DWORD *)i + 2) & 0x100) == 0 || v8 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
                goto LABEL_441;
              if ( a3 )
              {
                PostMessage((__int64)v8, 498LL, 0LL, 0LL);
                v24 = (struct tagTHREADINFO **)gptiCurrent;
                v21 = *(_QWORD *)(gptiCurrent + 384LL);
                *((_DWORD *)i + 2) ^= (*((_DWORD *)i + 2) ^ ((gpqForeground != v21) << 16)) & 0x10000;
              }
              v20 = *(_QWORD *)(v18 + 8);
              if ( !v20 )
                goto LABEL_441;
              v137 = *v24;
              v370 = *((_QWORD *)*v24 + 46);
              *((_QWORD *)v137 + 46) = &v370;
              v371 = v20;
              ++*(_DWORD *)(v20 + 8);
              if ( !a3 || (v138 = 1, (*((_BYTE *)i + 10) & 1) != 0) )
                v138 = 2;
              xxxDWP_DoNCActivate(*(struct tagWND **)(v18 + 8), v138, 1LL);
              goto LABEL_212;
            }
            v126 = v125 - 42;
            if ( v126 )
            {
              v127 = v126 - 1;
              if ( !v127 )
              {
                if ( (*(_DWORD *)(v22 + 32) & 0x40) == 0 || (*(_DWORD *)v18 & 0x8000000) == 0 )
                  goto LABEL_94;
                v130 = LODWORD(gfade[6]);
                if ( (v130 & 0x10) != 0 )
                {
                  zzzStartFade(v130, v20, v28);
                }
                else
                {
                  *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  SetTimer((_DWORD)v8, 65531, 10, 0, 0);
                }
                *(_DWORD *)v18 &= ~0x8000000u;
                goto LABEL_93;
              }
              if ( v127 != 41 )
                goto LABEL_94;
              if ( i && (*((_DWORD *)i + 2) & 0x400) != 0 )
              {
                v372 = *(_QWORD *)v8;
                xxxUserModeCallback(101, (unsigned int)&v372, 8, v22);
              }
              xxxMNDestroyHandler(v8);
LABEL_177:
              if ( v357 )
                ThreadUnlock1(v129, v128);
              goto LABEL_451;
            }
            if ( (*(_DWORD *)(v22 + 32) & 0x40) == 0 )
              goto LABEL_94;
            v21 = (unsigned int)gpdwCPUserPreferencesMask & 0x80000002;
            if ( (_DWORD)v21 != -2147483646
              || (*(_DWORD *)v18 & 0x8000000) == 0
              || (v21 = HIDWORD(glinp[7]), (v21 & 0x11) != 0) )
            {
LABEL_194:
              *(_DWORD *)v18 &= ~0x8000000u;
              goto LABEL_94;
            }
            if ( (GetAppCompatFlags2(0x400u, v20, v28, v22) & 1) == 0 )
            {
              *((_DWORD *)i + 29) = *((_DWORD *)v8 + 30) - *((_DWORD *)v8 + 28);
              *((_DWORD *)i + 30) = *((_DWORD *)v8 + 31) - *((_DWORD *)v8 + 29);
              if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
              {
                if ( !(unsigned int)MNCreateAnimationBitmap(i, *((unsigned int *)i + 29)) )
                  goto LABEL_193;
                *((_QWORD *)i + 12) = _GetDCEx(v8, 1LL, 65665LL);
                v132 = 0;
                v133 = *((_DWORD *)i + 2) ^ (*((_DWORD *)i + 2) ^ (*(_DWORD *)v18 >> 4)) & 0xF80000;
                *((_DWORD *)i + 2) = v133;
                v134 = v133 >> 19;
                if ( (v134 & 3) == 0 )
                  v132 = *((_DWORD *)i + 29);
                v135 = (v134 & 0xC) == 0;
                *((_DWORD *)i + 27) = v132;
                v136 = 0;
                if ( v135 )
                  v136 = *((_DWORD *)i + 30);
                *((_DWORD *)i + 28) = v136;
                Fade = *((_QWORD *)i + 17);
              }
              else
              {
                Fade = CreateFade(v8, 0LL, *((_DWORD *)v8 + 88));
                if ( !Fade )
                  goto LABEL_193;
              }
              *(_DWORD *)(v25 + 40) |= 8u;
              xxxSendMessage(v8, 0x317u, Fade, 14LL);
              *(_DWORD *)(v25 + 40) &= ~8u;
              v21 = LODWORD(gfade[6]);
              if ( (v21 & 0x10) != 0 )
                zzzShowFade();
              goto LABEL_93;
            }
LABEL_193:
            v22 = v358;
            goto LABEL_194;
          }
LABEL_62:
          if ( !*((_QWORD *)v8 + 45) && !*((_QWORD *)v8 + 46) )
          {
            v39 = (_DWORD *)MNAllocPopup(1LL);
            if ( v39 )
            {
              *((_QWORD *)v8 + 45) = v39;
              *v39 |= 0x40000000u;
              v39[20] = -1;
              HMAssignmentLock(v39 + 4, v8);
              goto LABEL_448;
            }
          }
          if ( v357 )
            goto LABEL_214;
LABEL_215:
          v26 = 0LL;
LABEL_450:
          v5 = v26;
          goto LABEL_451;
        }
LABEL_48:
        v20 = 131LL;
        v30 = v23 - 131;
        if ( !v30 )
        {
          xxxDefWindowProc(v8, 0x83u, a3, v22);
          if ( (*(_DWORD *)(v25 + 128) & 3) != 0 )
          {
            DPIMetrics = GetDPIMetrics();
            v21 = (unsigned int)-*(_DWORD *)(DPIMetrics + 68);
            *(_DWORD *)(v358 + 4) += *(_DWORD *)(DPIMetrics + 68);
            *(_DWORD *)(v358 + 12) += v21;
          }
          goto LABEL_441;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
          {
            LODWORD(v367) = (__int16)v22;
            HIDWORD(v367) = SWORD1(v22);
            if ( v357 )
              ThreadUnlock1(v21, 131LL);
            if ( !PtInRect((_DWORD *)v8 + 28, v367) )
              goto LABEL_98;
            goto LABEL_452;
          }
          goto LABEL_94;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
          if ( (*(_DWORD *)v18 & 0x8000000) != 0 )
          {
            xxxValidateRect(v8, 0LL);
            goto LABEL_441;
          }
          if ( (*(_DWORD *)(v25 + 128) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu(v25) )
            {
              v139 = *(struct tagWND **)(v18 + 16);
              v140 = 0LL;
              v141 = 65537LL;
            }
            else
            {
              v141 = 328833LL;
              v140 = a3;
              v139 = v8;
            }
            DCEx = _GetDCEx(v139, v140, v141);
            xxxMNDrawFullNC(v8);
          }
          else
          {
            if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
            {
              v145 = xxxDefWindowProc(v8, 0x85u, a3, v22);
              if ( (unsigned int)MNIsUAHMenu(v25) )
              {
                v147 = *(_QWORD *)(v18 + 16);
                if ( v147 )
                {
                  v148 = _GetDCEx(v147, 0LL, 65537LL);
                  xxxSendUAHMenuMessage(*(struct tagWND **)(v18 + 16), 0x95u, v25, v148);
                  _ReleaseDC(v148);
                }
              }
              if ( v357 )
                ThreadUnlock1(v147, v146);
              v5 = v145;
              goto LABEL_451;
            }
            if ( (unsigned int)MNIsUAHMenu(v25) )
            {
              v143 = _GetDCEx(*(_QWORD *)(v18 + 16), 0LL, 65537LL);
              v144 = xxxSendUAHMenuMessage(*(struct tagWND **)(v18 + 16), 0x95u, v25, v143);
              _ReleaseDC(v143);
              if ( v144 )
                goto LABEL_441;
            }
            DCEx = _GetDCEx(v8, a3, 328833LL);
            MNDrawEdge(v25, DCEx, (char *)v8 + 112, 0LL);
          }
          _ReleaseDC(DCEx);
          goto LABEL_441;
        }
        v33 = v32 - 123;
        if ( v33 )
        {
          v34 = v33 - 2;
          if ( !v34 )
            goto LABEL_232;
          v35 = v34 - 2;
          if ( v35 )
          {
            v36 = v35 - 2;
            if ( v36 )
            {
              v37 = v36 - 13;
              if ( v37 )
              {
                if ( v37 != 205 )
                  goto LABEL_94;
                if ( a3 )
                {
                  v38 = ValidateHmenu(a3);
                  if ( v38 )
                    LockPopupMenu(v18, v18 + 40, v38);
                }
                goto LABEL_441;
              }
              v20 = 65529LL;
              if ( a3 != 65529 )
              {
                if ( a3 == 65531 )
                {
                  if ( *((_QWORD *)i + 12) )
                    MNAnimate(i, 1LL);
                  goto LABEL_441;
                }
                if ( a3 == 65534 )
                {
                  *(_DWORD *)v18 &= ~0x80u;
                  xxxMNOpenHierarchy((struct tagPOPUPMENU *)v18);
                  goto LABEL_441;
                }
                if ( a3 != 0xFFFF )
                {
                  if ( a3 - 4294967292u <= 1 )
                  {
                    if ( (*((_DWORD *)i + 2) & 8) != 0 )
                      xxxMNDoScroll((struct tagPOPUPMENU *)v18, a3, 0);
                    else
                      FindTimer((__int64)v8, (unsigned int)a3, 0, 1, 0LL);
                  }
                  goto LABEL_441;
                }
                *(_DWORD *)v18 &= ~0x80u;
LABEL_225:
                xxxMNCloseHierarchy((unsigned int *)v18, (__int64)i);
                goto LABEL_441;
              }
              FindTimer((__int64)v8, 65529LL, 0, 1, 0LL);
              if ( (*((_DWORD *)i + 2) & 0x1000) == 0 )
                goto LABEL_441;
LABEL_230:
              xxxEndMenuLoop(i, *(_QWORD *)i);
              if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
                xxxMNEndMenuState(i);
              goto LABEL_177;
            }
LABEL_232:
            xxxMNChar(v18, i, (unsigned int)a3);
            goto LABEL_441;
          }
        }
        xxxMNKeyDown(v18, i, (unsigned int)a3);
        goto LABEL_441;
      }
      if ( (_DWORD)v28 )
        v25 = ThreadUnlock1(v21, v20);
      if ( !v25 )
        goto LABEL_451;
      v26 = *(_QWORD *)v25;
LABEL_452:
      v5 = v26;
      goto LABEL_98;
    }
    if ( v23 <= 0x2A3 )
    {
      if ( v23 == 675 )
      {
        *((_DWORD *)i + 2) ^= ((unsigned __int16)*((_DWORD *)i + 2) ^ ((((*((_DWORD *)i + 2) >> 15) & 1) == 0) << 14)) & 0x4000;
        *(_DWORD *)v18 &= ~0x100000u;
        MNSetTimerToAutoDismiss(i, v8);
        v21 = *(_QWORD *)(*(_QWORD *)i + 56LL);
        if ( *(_QWORD *)(v18 + 16) == v21 )
          xxxMNSelectItem((struct tagPOPUPMENU *)v18);
        goto LABEL_441;
      }
      if ( v23 > 0x1ED )
      {
        v232 = v23 - 494;
        if ( !v232 )
        {
          xxxMNMouseMove(v18, i, (unsigned int)v22);
          goto LABEL_441;
        }
        v233 = v232 - 1;
        if ( !v233 )
        {
          if ( a3 < *(unsigned int *)(v25 + 52) || a3 >= 0xFFFFFFFC )
            xxxMNButtonUp((struct tagPOPUPMENU *)v18, i);
          goto LABEL_441;
        }
        v234 = v233 - 1;
        if ( !v234 )
        {
          if ( (_DWORD)v28 )
            ThreadUnlock1(v21, v20);
          v26 = (unsigned __int16)MNSetTimerToOpenHierarchy((struct tagPOPUPMENU *)v18);
          goto LABEL_452;
        }
        v235 = v234 - 1;
        if ( !v235 )
        {
          xxxMNDoubleClick((__int64)i, (struct tagPOPUPMENU *)v18);
          goto LABEL_441;
        }
        v236 = v235 - 1;
        if ( !v236 )
        {
          xxxActivateThisWindow(v8, 0, 0, 0);
          goto LABEL_441;
        }
        v237 = v236 - 1;
        if ( !v237 )
          goto LABEL_230;
        if ( v237 != 1 )
          goto LABEL_94;
        if ( (_DWORD)v28 )
        {
          ThreadUnlock1(v21, v20);
          v357 = 0;
        }
        v238 = *((unsigned int *)i + 2);
        if ( (v238 & 0x80u) == 0LL )
          goto LABEL_451;
        if ( !*(_QWORD *)(v18 + 8) )
          goto LABEL_451;
        if ( !(unsigned int)IsMFMWFPWindow(*((_QWORD *)i + 8), v20, v238, v22) )
          goto LABEL_451;
        v240 = safe_cast_fnid_to_PMENUWND(v239);
        if ( !v240 )
          goto LABEL_451;
        v243 = *(_QWORD *)(v240 + 360);
        if ( !v243 )
          goto LABEL_451;
        v244 = *(__int64 **)(v243 + 40);
        if ( (v241 & 0x100) == 0 )
          *(_DWORD *)(*(_QWORD *)(*v242 + 384) + 340LL) &= ~0x100000u;
        ++*((_DWORD *)i + 10);
        v245 = *v242;
        v246 = *(_QWORD *)(v18 + 8);
        v370 = *(_QWORD *)(*v242 + 368);
        *(_QWORD *)(v245 + 368) = &v370;
        v371 = v246;
        ++*(_DWORD *)(v246 + 8);
        *((_DWORD *)i + 2) |= 0x8000u;
        if ( v244 )
          v247 = *v244;
        else
          v247 = 0LL;
        v248 = xxxSendMessage(*(struct tagWND **)(v18 + 8), 0x123u, *((unsigned int *)i + 18), v247);
        v250 = *((unsigned int *)i + 2);
        LODWORD(v250) = v250 & 0xFFFF7FFF;
        *((_DWORD *)i + 2) = v250;
        if ( v248 != 1 )
        {
          *((_DWORD *)i + 2) = v250 | 0x2000;
          MNCheckButtonDownState(i);
          if ( (*((_DWORD *)i + 2) & 0x100) == 0 )
            xxxMNSetCapture(v18, (__int64)i);
          ThreadUnlock1(v252, v251);
          xxxUnlockMenuStateInternal(i, 1);
          goto LABEL_451;
        }
        ThreadUnlock1(v250, v249);
        if ( !(unsigned int)xxxUnlockMenuStateInternal(i, 1) )
          goto LABEL_230;
        goto LABEL_451;
      }
      if ( v23 == 493 )
      {
        if ( a3 < *(unsigned int *)(v25 + 52) || a3 >= 0xFFFFFFFC )
          xxxMNButtonDown((struct tagPOPUPMENU *)v18);
        goto LABEL_441;
      }
      v150 = v23 - 482;
      if ( v150 )
      {
        v151 = v150 - 1;
        if ( v151 )
        {
          v152 = v151 - 1;
          if ( !v152 )
            goto LABEL_225;
          v153 = v152 - 1;
          if ( !v153 )
          {
            if ( a3 < *(unsigned int *)(v25 + 52) || a3 >= 0xFFFFFFFC )
            {
              v164 = xxxMNSelectItem((struct tagPOPUPMENU *)v18);
              if ( v164 )
              {
                if ( v357 )
                  ThreadUnlock1(v21, v20);
                v26 = (*(_QWORD *)(v164 + 16) != 0LL ? 0x10 : 0) | (unsigned __int64)*(unsigned __int16 *)(v164 + 4);
                goto LABEL_452;
              }
            }
            goto LABEL_441;
          }
          v154 = v153 - 1;
          if ( !v154 )
          {
            xxxMNCancel((__int64)i, a3, (unsigned __int16)v22, 0LL);
            goto LABEL_441;
          }
          v155 = v154 - 1;
          if ( !v155 )
          {
            ValidItem = MNFindNextValidItem(v25, 0xFFFFFFFFLL, 1LL, 1LL);
            v26 = (int)ValidItem;
            xxxSendMessage(v8, 0x1E5u, ValidItem, 0LL);
            if ( v357 )
              ThreadUnlock1(v163, v162);
            goto LABEL_452;
          }
          v156 = v155 - 4;
          if ( v156 )
          {
            if ( v156 != 1 )
              goto LABEL_94;
            PlayEventSound(5u);
            xxxShowWindowEx(
              v8,
              (unsigned __int16)(*((_WORD *)i + 4) & 0x100 | 0x400) >> 8,
              ((*((_DWORD *)i + 2) & 0x100 | 0x400u) >> 8) & 0x10000);
            goto LABEL_441;
          }
          v26 = xxxMNFindWindowFromPoint(v18, a3, (unsigned int)v22);
          if ( v357 )
            ThreadUnlock1(v158, v157);
          if ( !(unsigned int)IsMFMWFPWindow(v26, v157, v159, v160) )
            goto LABEL_452;
        }
        else
        {
          v26 = xxxMNOpenHierarchy((struct tagPOPUPMENU *)v18);
          if ( v357 )
            ThreadUnlock1(v166, v165);
          if ( v26 == -1 )
            goto LABEL_451;
        }
        if ( v26 )
        {
          v26 = *(_QWORD *)v26;
          goto LABEL_452;
        }
LABEL_451:
        v26 = v5;
        goto LABEL_452;
      }
      v167 = *v24;
      v168 = *(_QWORD *)(v18 + 8);
      v370 = *((_QWORD *)*v24 + 46);
      *((_QWORD *)v167 + 46) = &v370;
      v371 = v168;
      if ( v168 )
        ++*(_DWORD *)(v168 + 8);
      xxxMNCompute((struct tagMENU *)v25, *(_QWORD *)(v18 + 8), (__int64)v8, 0LL, 0, 0, 0LL);
      ThreadUnlock1(v170, v169);
      v171 = (struct tagMONITOR *)MonitorFromWindow((__int64)v8, 1u);
      v366 = *(_DWORD *)(v25 + 56);
      v362 = MNCheckScroll((struct tagPOPUPMENU *)v18, (struct tagMENU *)v25, v171);
      v174 = v362;
      if ( !a3 )
      {
        v231 = v366;
        goto LABEL_338;
      }
      v175 = 532;
      v360 = 0;
      v365 = 0;
      if ( (a3 & 4) != 0 )
        v175 = 564;
      if ( (*((_BYTE *)v8 + 55) & 0x10) != 0 )
      {
        MNGetPopupBoundsRect((struct tagPOPUPMENU *)v18, v171, &v374, 1);
        BestPos = FindBestPos(
                    *((_DWORD *)v8 + 28),
                    HIDWORD(*((_QWORD *)v8 + 14)),
                    v366,
                    v362,
                    &v374,
                    0,
                    (unsigned int *)v18,
                    (struct tagRECT *)v171,
                    *((_QWORD *)v8 + 14));
        v360 = (__int16)BestPos;
        v365 = SHIWORD(BestPos);
      }
      else
      {
        v175 |= 2u;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v178, v177, v179, v180) & 0xF) != 0 )
          goto LABEL_304;
      }
      else if ( !IsDPIDWMSysMet(v178)
             || (W32GetCurrentThreadDpiAwarenessContext(v193, v192, v194, v195) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v196, v197, v198) + 408)
               ? (v202 = 0)
               : (v202 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v199,
                                                               v200,
                                                               v201)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v202) )
      {
LABEL_304:
        if ( IsDPIDWMSysMet(8uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v182, v181, v183, v184) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v185, v186, v187) + 408)
            ? (v191 = 0)
            : (v191 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v188,
                                                            v189,
                                                            v190)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v191) )
        {
          v203 = (_DWORD *)(gpsi + 2688LL);
        }
        else
        {
          v203 = (_DWORD *)(gpsi + 1912LL);
        }
LABEL_319:
        if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v205, v204, v206, v207) & 0xF) != 0 )
            goto LABEL_321;
        }
        else if ( !IsDPIDWMSysMet(v205)
               || (W32GetCurrentThreadDpiAwarenessContext(v220, v219, v221, v222) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v223, v224, v225) + 408)
                 ? (v229 = 0)
                 : (v229 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v226,
                                                                 v227,
                                                                 v228)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v229) )
        {
LABEL_321:
          if ( IsDPIDWMSysMet(7uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v209, v208, v210, v211) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v212, v213, v214) + 408)
              ? (v218 = 0)
              : (v218 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v215,
                                                              v216,
                                                              v217)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v218) )
          {
            v230 = (_DWORD *)(gpsi + 2684LL);
          }
          else
          {
            v230 = (_DWORD *)(gpsi + 1908LL);
          }
          goto LABEL_336;
        }
        v230 = (_DWORD *)(gpsi + 2296LL);
LABEL_336:
        v231 = v366;
        xxxSetWindowPosAndBand(v8, 0, v360, v365, v366 + 2 * *v230, v362 + 2 * *v203, v175, 0);
        v174 = v362;
LABEL_338:
        if ( v357 )
          ThreadUnlock1(v173, v172);
        v26 = v231 | (v174 << 16);
        goto LABEL_452;
      }
      v203 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_319;
    }
    v21 = 791LL;
    v253 = v23 - 791;
    if ( v253 )
    {
      if ( v253 != 1 )
        goto LABEL_94;
      xxxMenuDraw((HDC)a3, v25, (__int64)v8);
      goto LABEL_441;
    }
    if ( (v22 & 2) == 0 || (*(_DWORD *)(v25 + 128) & 3) == 0 )
    {
      v26 = xxxDefWindowProc(v8, 0x317u, a3, v22);
      if ( !(unsigned int)MNIsUAHMenu(v25)
        || (v356 = *(struct tagWND **)(v18 + 16)) == 0LL
        || !(unsigned int)xxxSendUAHMenuMessage(v356, 0x95u, v25, a3) )
      {
        v41 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
        if ( (_DWORD)v41 == -2147352576 )
          MNDrawEdge(v25, a3, (char *)v8 + 112, 0LL);
      }
      goto LABEL_448;
    }
    if ( a3 && (*((_BYTE *)v8 + 50) & 0x40) != 0 && (GreGetLayout((HDC)a3) & 1) == 0 )
    {
      v254 = 1;
      v255 = GreSetLayout(a3, (unsigned int)(*((_DWORD *)v8 + 30) - *((_DWORD *)v8 + 28)), 1LL);
    }
    else
    {
      v254 = 0;
      v255 = 0;
    }
    xxxMNDrawFullNC(v8);
    if ( v254 )
      GreSetLayout(a3, (unsigned int)(*((_DWORD *)v8 + 30) - *((_DWORD *)v8 + 28)), v255);
    GreGetDCPoint(a3, 8LL, &v367);
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v257, v256, v258, v259) & 0xF) == 0 )
        goto LABEL_404;
    }
    else if ( IsDPIDWMSysMet(v257)
           && (W32GetCurrentThreadDpiAwarenessContext(v271, v270, v272, v273) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v274, v275, v276) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                    (__int64)KeGetCurrentThread(),
                                                    v277,
                                                    v278,
                                                    v279)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_404;
    }
    if ( IsDPIDWMSysMet(6uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v261, v260, v262, v263) & 0xF) == 1
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v264, v265, v266) + 408) )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v267, v268, v269);
    }
LABEL_404:
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v282, v281, v283, v284) & 0xF) == 0 )
        goto LABEL_416;
    }
    else if ( IsDPIDWMSysMet(v282)
           && (W32GetCurrentThreadDpiAwarenessContext(v296, v295, v297, v298) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v299, v300, v301) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                    (__int64)KeGetCurrentThread(),
                                                    v302,
                                                    v303,
                                                    v304)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_416;
    }
    if ( IsDPIDWMSysMet(0x2EuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v286, v285, v287, v288) & 0xF) == 1
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v289, v290, v291) + 408) )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v292, v293, v294);
    }
LABEL_416:
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v307, v306, v308, v309) & 0xF) == 0 )
        goto LABEL_428;
    }
    else if ( IsDPIDWMSysMet(v307)
           && (W32GetCurrentThreadDpiAwarenessContext(v321, v320, v322, v323) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v324, v325, v326) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                    (__int64)KeGetCurrentThread(),
                                                    v327,
                                                    v328,
                                                    v329)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_428;
    }
    if ( IsDPIDWMSysMet(5uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v311, v310, v312, v313) & 0xF) == 1
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v314, v315, v316) + 408) )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v317, v318, v319);
    }
LABEL_428:
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v332, v331, v333, v334) & 0xF) != 0 )
        goto LABEL_430;
    }
    else if ( !IsDPIDWMSysMet(v332)
           || (W32GetCurrentThreadDpiAwarenessContext(v346, v345, v347, v348) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v349, v350, v351) + 408)
             ? (v355 = 0)
             : (v355 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v352,
                                                             v353,
                                                             v354)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v355) )
    {
LABEL_430:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v336, v335, v337, v338) & 0xF) == 1
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v339, v340, v341) + 408) )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v342, v343, v344);
      }
    }
    GetDPIMetrics();
    GreSetWindowOrg((HDC)a3);
    xxxDefWindowProc(v8, 0x317u, a3, v358 & 0xFFFFFFFFFFFFFFFDuLL);
    GreSetWindowOrg((HDC)a3);
    goto LABEL_441;
  }
  switch ( v23 )
  {
    case 0x1E0u:
      if ( !v18 || *((char *)v8 + 43) < 0 )
        goto LABEL_215;
      goto LABEL_48;
    case 0x81u:
      if ( *((char *)v8 + 43) < 0 )
        goto LABEL_215;
      goto LABEL_62;
    case 0x70u:
      v28 = 0LL;
      goto LABEL_68;
  }
LABEL_97:
  v5 = xxxDefWindowProc(v8, v23, a3, v22);
LABEL_98:
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v373);
  return v5;
}
