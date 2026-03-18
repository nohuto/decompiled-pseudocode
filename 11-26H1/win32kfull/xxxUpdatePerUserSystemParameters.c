/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x14023F980
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x14023F8B0 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140009C18 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x140009C5C (xxxUpdateSystemIconsFromRegistry.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1400CC0D4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1400CC9A8 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 *     SetIconMetrics @ 0x1400CE144 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1400CE450 (SetMinMetrics.c)
 *     GreTextInitialized @ 0x1400CE928 (GreTextInitialized.c)
 *     SetMouseTrails @ 0x1400F6DA0 (SetMouseTrails.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1400F87BC (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     WakeRIT @ 0x140133F68 (WakeRIT.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401BFAEC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _SetCaretBlinkTime @ 0x1402038A0 (_SetCaretBlinkTime.c)
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1402196C8 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x14021D52C (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x140232700 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     GreSetFontEnumeration @ 0x140237A2C (GreSetFontEnumeration.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x140238FC4 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     GetKbdLangSwitch @ 0x140247C74 (GetKbdLangSwitch.c)
 *     xxxUserResetDisplayDevice @ 0x140248210 (xxxUserResetDisplayDevice.c)
 *     UpdatePerUserKeyboardIndicators @ 0x14024A14C (UpdatePerUserKeyboardIndicators.c)
 *     UnlockDesktopSysMenu @ 0x140255520 (UnlockDesktopSysMenu.c)
 *     GreSetLCDOrientation @ 0x14025BF20 (GreSetLCDOrientation.c)
 *     CheckEasPolicyChange @ 0x14026B3C4 (CheckEasPolicyChange.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14029D154 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     AttachInputDevices @ 0x14029FEEC (AttachInputDevices.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxUpdatePerUserSystemParameters(int a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r12d
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r13d
  int v33; // r15d
  HANDLE v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  struct MOVESIZEDATA *v39; // rcx
  char v40; // di
  bool v41; // si
  char CurrentWin32kSessionId; // bl
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  HANDLE v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct _UNICODE_STRING *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rbx
  void *v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  __int64 v61; // rax
  unsigned int v62; // esi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r14
  int v78; // ebx
  Gre::Base *v79; // rcx
  int v80; // r12d
  struct Gre::Base::SESSION_GLOBALS *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  _QWORD *i; // rbx
  __int64 v98; // rdx
  struct _HEAD *v99; // rcx
  __int64 v100; // rdx
  struct _HEAD *v101; // rcx
  __int64 v102; // rax
  unsigned int v103; // r14d
  __int64 *v104; // rbx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  unsigned int v108; // r14d
  __int64 *v109; // rbx
  int v110; // edx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  volatile signed __int32 *v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  unsigned int j; // ebx
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  int v156; // ebx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // rcx
  void *v161; // rbx
  __int64 v162; // rdx
  __int64 v163; // rdx
  __int64 v164; // rdx
  __int64 v165; // rdx
  __int64 v166; // rdx
  int v167; // ecx
  int v168; // ebx
  unsigned int *v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  int v172; // ebx
  __int64 v173; // rdx
  int v174; // ecx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // rdx
  __int64 v186; // rcx
  int *v187; // [rsp+20h] [rbp-E0h]
  unsigned int *v188; // [rsp+28h] [rbp-D8h]
  _BYTE v189[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v190[2]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v191; // [rsp+6Ch] [rbp-94h]
  unsigned int v192; // [rsp+70h] [rbp-90h] BYREF
  int v193; // [rsp+74h] [rbp-8Ch] BYREF
  int v194; // [rsp+78h] [rbp-88h] BYREF
  int v195; // [rsp+7Ch] [rbp-84h] BYREF
  int v196; // [rsp+80h] [rbp-80h] BYREF
  int v197; // [rsp+84h] [rbp-7Ch] BYREF
  int v198; // [rsp+88h] [rbp-78h] BYREF
  int v199; // [rsp+8Ch] [rbp-74h] BYREF
  int v200; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v201; // [rsp+94h] [rbp-6Ch] BYREF
  __int128 v202; // [rsp+98h] [rbp-68h] BYREF
  __int64 v203; // [rsp+A8h] [rbp-58h]
  __int64 v204[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _HEAD *v205; // [rsp+C0h] [rbp-40h]
  int v206; // [rsp+D0h] [rbp-30h]
  int v207; // [rsp+D4h] [rbp-2Ch]
  __int64 v208; // [rsp+D8h] [rbp-28h] BYREF
  int v209; // [rsp+E0h] [rbp-20h]
  int v210; // [rsp+E4h] [rbp-1Ch]
  __int64 v211; // [rsp+E8h] [rbp-18h]
  int v212; // [rsp+F0h] [rbp-10h]
  int v213; // [rsp+F4h] [rbp-Ch]
  int v214; // [rsp+F8h] [rbp-8h]
  int v215; // [rsp+FCh] [rbp-4h]
  int v216; // [rsp+100h] [rbp+0h]
  int v217; // [rsp+104h] [rbp+4h]
  int v218; // [rsp+108h] [rbp+8h]
  int v219; // [rsp+10Ch] [rbp+Ch]
  int v220; // [rsp+110h] [rbp+10h]
  int v221; // [rsp+114h] [rbp+14h]
  int v222; // [rsp+118h] [rbp+18h]
  int v223; // [rsp+11Ch] [rbp+1Ch]
  int v224; // [rsp+120h] [rbp+20h]
  int v225; // [rsp+124h] [rbp+24h]
  int v226; // [rsp+128h] [rbp+28h]
  int v227; // [rsp+12Ch] [rbp+2Ch]
  int v228; // [rsp+130h] [rbp+30h]
  int v229; // [rsp+134h] [rbp+34h]
  int v230; // [rsp+138h] [rbp+38h]
  int v231; // [rsp+13Ch] [rbp+3Ch]
  int v232; // [rsp+140h] [rbp+40h]
  int v233; // [rsp+144h] [rbp+44h]
  int v234; // [rsp+148h] [rbp+48h]
  int v235; // [rsp+14Ch] [rbp+4Ch]
  int v236; // [rsp+150h] [rbp+50h]
  int v237; // [rsp+154h] [rbp+54h]
  int v238; // [rsp+158h] [rbp+58h]
  int v239; // [rsp+15Ch] [rbp+5Ch]
  int v240; // [rsp+160h] [rbp+60h]
  int v241; // [rsp+164h] [rbp+64h]
  int v242; // [rsp+168h] [rbp+68h]
  int v243; // [rsp+16Ch] [rbp+6Ch]
  int v244; // [rsp+170h] [rbp+70h]
  int v245; // [rsp+174h] [rbp+74h]
  __int64 v246; // [rsp+178h] [rbp+78h]
  int v247; // [rsp+180h] [rbp+80h]
  int v248; // [rsp+184h] [rbp+84h]
  __int64 v249; // [rsp+188h] [rbp+88h] BYREF
  int v250; // [rsp+190h] [rbp+90h]
  int v251; // [rsp+194h] [rbp+94h]
  int v252; // [rsp+198h] [rbp+98h]
  int v253; // [rsp+19Ch] [rbp+9Ch]
  int v254; // [rsp+1A0h] [rbp+A0h]
  int v255; // [rsp+1A4h] [rbp+A4h]
  int v256; // [rsp+1A8h] [rbp+A8h]
  int v257; // [rsp+1ACh] [rbp+ACh]
  int v258; // [rsp+1B0h] [rbp+B0h]
  int v259; // [rsp+1B4h] [rbp+B4h]
  int v260; // [rsp+1B8h] [rbp+B8h]
  int v261; // [rsp+1BCh] [rbp+BCh]
  int v262; // [rsp+1C0h] [rbp+C0h]
  int v263; // [rsp+1C4h] [rbp+C4h]
  int v264; // [rsp+1C8h] [rbp+C8h]
  int v265; // [rsp+1CCh] [rbp+CCh]
  int v266; // [rsp+1D0h] [rbp+D0h]
  int v267; // [rsp+1D4h] [rbp+D4h]
  __int64 v268; // [rsp+1D8h] [rbp+D8h]
  int v269; // [rsp+1E0h] [rbp+E0h]
  int v270; // [rsp+1E4h] [rbp+E4h]
  __int64 v271; // [rsp+1E8h] [rbp+E8h]
  int v272; // [rsp+1F0h] [rbp+F0h]
  int v273; // [rsp+1F4h] [rbp+F4h]
  int v274; // [rsp+1F8h] [rbp+F8h]
  int v275; // [rsp+1FCh] [rbp+FCh]
  int v276; // [rsp+200h] [rbp+100h]
  int v277; // [rsp+204h] [rbp+104h]
  int v278; // [rsp+208h] [rbp+108h]
  int v279; // [rsp+20Ch] [rbp+10Ch]
  int v280; // [rsp+210h] [rbp+110h]
  int v281; // [rsp+214h] [rbp+114h]
  int v282; // [rsp+218h] [rbp+118h]
  int v283; // [rsp+21Ch] [rbp+11Ch]
  int v284; // [rsp+220h] [rbp+120h]
  int v285; // [rsp+224h] [rbp+124h]
  int v286; // [rsp+228h] [rbp+128h]
  int v287; // [rsp+22Ch] [rbp+12Ch]
  int v288; // [rsp+230h] [rbp+130h]
  int v289; // [rsp+234h] [rbp+134h]
  int v290; // [rsp+238h] [rbp+138h]
  int v291; // [rsp+23Ch] [rbp+13Ch]
  int v292; // [rsp+240h] [rbp+140h]
  int v293; // [rsp+244h] [rbp+144h]
  int v294; // [rsp+248h] [rbp+148h]
  int v295; // [rsp+24Ch] [rbp+14Ch]
  int v296; // [rsp+250h] [rbp+150h]
  int v297; // [rsp+254h] [rbp+154h]
  int v298; // [rsp+258h] [rbp+158h]
  int v299; // [rsp+25Ch] [rbp+15Ch]
  int v300; // [rsp+260h] [rbp+160h]
  int v301; // [rsp+264h] [rbp+164h]
  __int64 v302; // [rsp+268h] [rbp+168h]
  __int64 v303; // [rsp+270h] [rbp+170h]
  int v304; // [rsp+280h] [rbp+180h] BYREF
  __int64 v305; // [rsp+288h] [rbp+188h]
  int v306; // [rsp+290h] [rbp+190h]
  __int64 v307; // [rsp+298h] [rbp+198h]
  int v308; // [rsp+2A0h] [rbp+1A0h]
  __int64 v309; // [rsp+2A8h] [rbp+1A8h]
  int v310; // [rsp+2B0h] [rbp+1B0h]
  __int64 v311; // [rsp+2B8h] [rbp+1B8h]
  int v312; // [rsp+2C0h] [rbp+1C0h]
  __int64 v313; // [rsp+2C8h] [rbp+1C8h]
  int v314; // [rsp+2D0h] [rbp+1D0h]
  int *v315; // [rsp+2D8h] [rbp+1D8h]
  int v316; // [rsp+2E0h] [rbp+1E0h]
  __int64 v317; // [rsp+2E8h] [rbp+1E8h]
  int v318; // [rsp+2F0h] [rbp+1F0h]
  __int64 v319; // [rsp+2F8h] [rbp+1F8h]
  int v320; // [rsp+300h] [rbp+200h] BYREF
  __int64 v321; // [rsp+308h] [rbp+208h]
  int v322; // [rsp+310h] [rbp+210h]
  __int64 v323; // [rsp+318h] [rbp+218h]
  int v324; // [rsp+320h] [rbp+220h]
  __int64 v325; // [rsp+328h] [rbp+228h]
  int v326; // [rsp+330h] [rbp+230h]
  int *v327; // [rsp+338h] [rbp+238h]
  int v328; // [rsp+340h] [rbp+240h]
  __int64 v329; // [rsp+348h] [rbp+248h]
  int v330; // [rsp+350h] [rbp+250h]
  __int64 v331; // [rsp+358h] [rbp+258h]
  int v332; // [rsp+360h] [rbp+260h]
  __int64 v333; // [rsp+368h] [rbp+268h]
  int v334; // [rsp+370h] [rbp+270h]
  __int64 v335; // [rsp+378h] [rbp+278h]
  int v336; // [rsp+380h] [rbp+280h]
  __int64 v337; // [rsp+388h] [rbp+288h]
  int v338; // [rsp+390h] [rbp+290h]
  int *v339; // [rsp+398h] [rbp+298h]
  int v340; // [rsp+3A0h] [rbp+2A0h]
  __int64 v341; // [rsp+3A8h] [rbp+2A8h]
  int v342; // [rsp+3B0h] [rbp+2B0h]
  int *v343; // [rsp+3B8h] [rbp+2B8h]
  int v344; // [rsp+3C0h] [rbp+2C0h]
  __int64 v345; // [rsp+3C8h] [rbp+2C8h]
  int v346; // [rsp+3D0h] [rbp+2D0h]
  __int64 v347; // [rsp+3D8h] [rbp+2D8h]
  int v348; // [rsp+3E0h] [rbp+2E0h]
  __int64 v349; // [rsp+3E8h] [rbp+2E8h]
  int v350; // [rsp+3F0h] [rbp+2F0h]
  __int64 v351; // [rsp+3F8h] [rbp+2F8h]
  int v352; // [rsp+400h] [rbp+300h]
  __int64 v353; // [rsp+408h] [rbp+308h]
  int v354; // [rsp+410h] [rbp+310h]
  int *v355; // [rsp+418h] [rbp+318h]
  unsigned __int16 v356[14]; // [rsp+420h] [rbp+320h] BYREF
  int v357; // [rsp+43Ch] [rbp+33Ch]
  _BYTE v358[80]; // [rsp+470h] [rbp+370h] BYREF

  v303 = a2;
  v2 = a1;
  v194 = a1;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v193 = *(_DWORD *)(v3 + 20348);
  v192 = 96;
  v5 = 0;
  v191 = 0;
  v6 = *(_DWORD *)(W32GetUserSessionState(v4, v3) + 66792) & 0x100000;
  v205 = 0LL;
  v199 = v6;
  v202 = 0LL;
  v203 = -1LL;
  v197 = 0;
  v207 = 4135;
  v206 = 4;
  v208 = 112LL;
  v8 = *(_DWORD *)(W32GetUserSessionState(v6, v7) + 66792) & 0x10000;
  v200 = 0;
  v198 = v8;
  v196 = 1;
  v209 = 4;
  v210 = 17;
  v247 = 13;
  v250 = 13;
  v211 = 100LL;
  v212 = 4;
  v213 = 77;
  v214 = 199;
  v215 = 4;
  v216 = 4;
  v217 = 76;
  v218 = 198;
  v219 = 4;
  v220 = 4;
  v221 = 105;
  v222 = 14;
  v223 = 3;
  v224 = 4;
  v225 = 109;
  v226 = 15;
  v227 = 3;
  v228 = 4;
  v229 = 131;
  v230 = 18;
  v231 = 1;
  v232 = 4;
  v233 = 141;
  v234 = 624;
  v235 = 1;
  v236 = 4;
  v237 = 145;
  v238 = 625;
  v239 = 1;
  v240 = 4;
  v241 = 143;
  v242 = 626;
  v243 = 1;
  v244 = 4;
  v245 = 159;
  v246 = 628LL;
  v248 = 23;
  v249 = 106LL;
  v252 = 13;
  v251 = 11;
  v263 = 30;
  v283 = 30;
  v291 = 30;
  v282 = 17;
  v295 = 50;
  v299 = 50;
  v253 = 15;
  v254 = 12;
  v255 = 32;
  v256 = 6;
  v257 = 500;
  v258 = 12;
  v259 = 29;
  v260 = 97;
  v261 = 4;
  v262 = 12;
  v264 = 98;
  v265 = 4;
  v266 = 12;
  v267 = 96;
  v268 = 7LL;
  v269 = 3;
  v270 = 28;
  v271 = 96LL;
  v272 = 35;
  v273 = 111;
  v274 = 236;
  v275 = 1;
  v276 = 12;
  v277 = 127;
  v278 = 16;
  v279 = 1;
  v280 = 12;
  v281 = 129;
  v284 = 12;
  v285 = 133;
  v286 = 19;
  v287 = 20;
  v288 = 12;
  v289 = 135;
  v290 = 20;
  v292 = 12;
  v293 = 137;
  v294 = 21;
  v296 = 12;
  v297 = 139;
  v298 = 22;
  v300 = 4;
  v301 = 169;
  v302 = 205LL;
  v320 = 4;
  v321 = 94LL;
  v322 = 400;
  UserSessionState = W32GetUserSessionState(20LL, v9);
  v325 = 107LL;
  v324 = 4;
  v323 = UserSessionState + 66024;
  v326 = 2;
  v327 = &v199;
  v328 = 4;
  v329 = 159LL;
  v330 = 3;
  v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19904) + 4996LL;
  v332 = 4;
  v331 = v13;
  v333 = 160LL;
  v334 = 3;
  v15 = *(_QWORD *)(W32GetUserSessionState(v13, v14) + 19904);
  v339 = &v193;
  v335 = v15 + 5000;
  v336 = 4;
  v338 = 0;
  v342 = 0;
  v337 = 200LL;
  v340 = 4;
  v341 = 618LL;
  v343 = &v197;
  v344 = 4;
  v345 = 621LL;
  v346 = 5000;
  v17 = W32GetUserSessionState(0LL, v16);
  v348 = 4;
  v347 = v17 + 69104;
  v349 = 622LL;
  v350 = 5000;
  v20 = W32GetUserSessionState(v19, v18);
  v352 = 23;
  v353 = 149LL;
  v351 = v20 + 36448;
  v354 = 1;
  v355 = &v198;
  v304 = 12;
  v305 = 10LL;
  v306 = 6;
  v23 = W32GetUserSessionState(v22, v21);
  v308 = 12;
  v307 = v23 + 16280;
  v309 = 11LL;
  v310 = 10;
  v26 = W32GetUserSessionState(v25, v24);
  v312 = 12;
  v313 = 12LL;
  v311 = v26 + 16284;
  v315 = &v196;
  v314 = 1;
  v316 = 35;
  v317 = 237LL;
  v318 = 0;
  v29 = v2 & 4;
  v319 = W32GetUserSessionState(v28, v27) + 14700;
  v32 = v2 & 2;
  v190[1] = v29;
  v33 = v2 & 1;
  if ( (v2 & 0x10) != 0 )
  {
    v34 = *(HANDLE *)(W32GetUserSessionState(v31, v30) + 63536);
    if ( PsGetCurrentProcessId() != v34 )
    {
LABEL_3:
      LODWORD(v37) = 5;
LABEL_31:
      UserSetLastError(v37);
      goto LABEL_32;
    }
    if ( v32 || v33 || v29 )
    {
      LODWORD(v37) = 87;
      goto LABEL_31;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v36, v35) + 356) )
    {
      v39 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v40 = 0;
      }
      v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId((__int64)WPP_GLOBAL_Control);
        v45 = W32GetUserSessionState(v44, v43);
        LOBYTE(v46) = v41;
        LOBYTE(v47) = v40;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v47,
          v46,
          *(_QWORD *)(v45 + 69152),
          4,
          20,
          11,
          (__int64)&WPP_6f3f2e22ce9e317051f30d9635f1d0e7_Traceguids,
          CurrentWin32kSessionId);
      }
      *(_DWORD *)(W32GetUserSessionState(v39, v38) + 356) = 0;
      AttachInputDevices(1LL);
      v50 = W32GetUserSessionState(v49, v48);
      CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v50 + 16832));
    }
  }
  else
  {
    if ( (v2 & 2) == 0 )
    {
      v51 = *(HANDLE *)(W32GetUserSessionState(v31, v30) + 63536);
      if ( PsGetCurrentProcessId() != v51 )
        goto LABEL_3;
    }
    v54 = (struct _UNICODE_STRING *)CreateProfileUserName(&v202);
    if ( !v54 )
    {
LABEL_32:
      if ( v203 != -1 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v202);
      return 0LL;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v53, v52) + 63512) )
    {
      v56 = *(_QWORD *)(W32GetUserSessionState(v37, v55) + 63512);
      v57 = *(void **)(v56 + 176);
      if ( v57 )
        Win32FreePool(v57);
      v58 = Win32AllocPoolZInit(v54->Length, 1852863317LL);
      *(_QWORD *)(v56 + 176) = v58;
      if ( v58 )
      {
        *(_WORD *)(v56 + 170) = v54->Length;
        *(_WORD *)(v56 + 168) = 0;
        RtlCopyUnicodeString((PUNICODE_STRING)(v56 + 168), v54);
      }
      if ( v33 )
        WakeRIT(64LL, v55);
    }
    if ( v32 && !v29 )
    {
      v191 = CheckEasPolicyChange();
      v59 = CheckDesktopPolicyChange(v54);
      v37 = 0LL;
      if ( !v59 && !v191 )
        goto LABEL_31;
      v5 = 16;
    }
    if ( v33 )
    {
      v61 = W32GetUserSessionState(v37, v55);
      *(_DWORD *)(v61 + 62776) |= 2u;
    }
    v190[0] = 300;
    v62 = v5 | 8;
    if ( !v29 )
      v62 = v5;
    v63 = W32GetUserSessionState(v37, v55);
    FastGetProfileValue(v54, 4LL, 607LL, v190, v63 + 64192, 4, v62);
    if ( *(int *)(W32GetUserSessionState(v65, v64) + 64192) > 0 )
    {
      v71 = 1000;
      if ( *(int *)(W32GetUserSessionState(v67, v66) + 64192) < 1000 )
        v71 = *(_DWORD *)(W32GetUserSessionState(v73, v72) + 64192);
      v68 = W32GetUserSessionState(v73, v72);
    }
    else
    {
      v68 = W32GetUserSessionState(v67, v66);
      v71 = 1000;
    }
    *(_DWORD *)(v68 + 64192) = v71;
    v74 = W32GetUserSessionState(v70, v69);
    v77 = v74;
    if ( v33 )
    {
      if ( !*(_DWORD *)(v74 + 66256) && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v188 = &v192;
        LODWORD(v187) = v62;
        FastGetProfileDwordEx(v54, 4LL, L"LogPixels", 0LL);
        v195 = 0;
        v78 = DrvInitializeDxgkrnlDpiCache(&v195);
        v80 = PerformLegacyDpiUpgrade(v54, v192);
        if ( v78 < 0
          || v195
          || (v81 = Gre::Base::Globals(v79), v76 = *((unsigned __int16 *)v81 + 584), *((_WORD *)v81 + 585) != (_WORD)v76)
          || v80
          || v192 )
        {
          GreReinitializeDpiSetting();
          v189[0] = 0;
          LOBYTE(v188) = 0;
          if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, (_DWORD)v188, 0LL, 0LL, v189, v303, 0LL) >= 0 )
          {
            if ( v189[0] )
              ((void (*)(void))xxxUserResetDisplayDevice)();
            W32GetUserSessionState(v76, v75);
            UserReinitializeStockFonts();
            *(_DWORD *)(v77 + 66256) = 1;
          }
        }
      }
    }
    v82 = W32GetUserSessionState(v76, v75);
    CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(*(CInputGlobals **)(v82 + 3056));
    LoadCPUserPreferences(v54, v62);
    if ( !v32 )
    {
      xxxODI_ColorInit(v54);
      LW_LoadResources(v54);
      if ( (unsigned int)GreTextInitialized(v84, v83, v85) )
        xxxSetWindowNCMetrics(v54, 0LL, -1);
      SetMinMetrics(v54, 0LL);
      SetIconMetrics(v54, 0LL);
      GetKbdLangSwitch(v54);
      ZwSetDefaultLocale(1u, 0);
      ZwSetDefaultUILanguage(0);
      v88 = W32GetUserSessionState(v87, v86);
      ZwQueryDefaultUILanguage((LANGID *)(*(_QWORD *)(v88 + 19904) + 7012LL));
      xxxLoadSomeStrings(v90, v89);
      if ( *(_QWORD *)(W32GetUserSessionState(v92, v91) + 63512) )
      {
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v204);
        for ( i = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v96, v95) + 63512) + 16LL); i; i = (_QWORD *)i[4] )
        {
          v98 = i[7];
          if ( v98 )
          {
            v205 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=((__int64)v204, v98);
            if ( UnlockDesktopSysMenu(i + 7) )
            {
              v99 = v205;
              if ( !v205 )
                v99 = *(struct _HEAD **)v204[0];
              DestroyMenu(v99);
            }
          }
          v100 = i[8];
          if ( v100 )
          {
            v205 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=((__int64)v204, v100);
            if ( UnlockDesktopSysMenu(i + 8) )
            {
              v101 = v205;
              if ( !v205 )
                v101 = *(struct _HEAD **)v204[0];
              DestroyMenu(v101);
            }
          }
        }
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v204);
      }
      v102 = W32GetUserSessionState(v94, v93);
      CCursorSizes::zzzRefreshSizes(*(CCursorSizes **)(v102 + 36376));
      xxxUpdateSystemCursorsFromRegistry((__int64)v54, 1u);
      xxxUpdateSystemIconsFromRegistry((__int64)v54);
      v103 = 0;
      v104 = &v249;
      do
      {
        LODWORD(v188) = 0;
        v187 = v190;
        if ( (unsigned int)FastGetProfileIntFromID(v54, *((unsigned int *)v104 - 2), *(unsigned int *)v104) )
          xxxSystemParametersInfo(*((unsigned int *)v104 - 1), (unsigned int)v190[0], 0LL, 0x8000LL, v190, 0);
        ++v103;
        v104 += 2;
      }
      while ( v103 < 0xF );
      FastGetProfileIntsW(v54, &v304, 4LL);
      LOBYTE(v105) = v196 != 0;
      EnableMouseAcceleration(v105);
    }
    xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, v187, (_DWORD)v188);
    if ( v33 )
    {
      W32GetUserSessionState(v107, v106);
      FastGetProfileIntFromID(v54, 35LL, 236LL);
    }
    v108 = 0;
    v109 = &v208;
    do
    {
      if ( (unsigned int)FastGetProfileIntFromID(v54, *((unsigned int *)v109 - 2), *(unsigned int *)v109) )
        xxxSystemParametersInfo(*((unsigned int *)v109 - 1), (unsigned int)v190[0], 0LL, 0x8000LL, v190, v62);
      ++v108;
      v109 += 2;
    }
    while ( v108 < 0xB );
    v110 = v62;
    if ( v191 )
      v110 = 2;
    CalcScreenSaverTimeout(v54, v110);
    FastGetProfileIntsW(v54, &v320, 9LL);
    if ( v197 )
    {
      v114 = *(volatile signed __int32 **)(W32GetUserSessionState(v112, v111) + 19904);
      _InterlockedOr(v114, 0x200u);
    }
    else
    {
      v114 = *(volatile signed __int32 **)(W32GetUserSessionState(v112, v111) + 19904);
      _InterlockedAnd(v114, 0xFFFFFDFF);
    }
    if ( v198 )
    {
      v115 = W32GetUserSessionState(v114, v113);
      *(_DWORD *)(v115 + 66792) |= 0x10000u;
    }
    else
    {
      v118 = W32GetUserSessionState(v114, v113);
      *(_DWORD *)(v118 + 66792) &= ~0x10000u;
    }
    if ( v199 == 2 )
    {
      v119 = W32GetUserSessionState(v117, v116);
      if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(*(_QWORD *)(v119 + 56968) + 56LL), 119LL) )
      {
        v125 = W32GetUserSessionState(v121, v120);
        *(_DWORD *)(v125 + 66792) &= ~0x100000u;
      }
      else
      {
        v122 = W32GetUserSessionState(v121, v120);
        *(_DWORD *)(v122 + 66792) |= 0x100000u;
      }
      if ( v33 )
      {
        v126 = W32GetUserSessionState(v124, v123);
        RtlStringCchPrintfW(v356, 40LL, L"%d", (*(_DWORD *)(v126 + 66792) >> 20) & 1);
        RtlLoadStringOrError(107LL, v358, 40LL);
        FastWriteProfileStringW(v54, 4LL, v358, v356);
      }
    }
    else if ( v199 )
    {
      v127 = W32GetUserSessionState(v117, v116);
      *(_DWORD *)(v127 + 66792) |= 0x100000u;
    }
    else
    {
      v128 = W32GetUserSessionState(v117, v116);
      *(_DWORD *)(v128 + 66792) &= ~0x100000u;
    }
    v190[0] = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v124, v123) + 19904) + 4984LL);
    if ( (unsigned int)FastGetProfileIntFromID(v54, 4LL, 4LL) )
      SetCaretBlinkTime(v190[0]);
    if ( !v32 )
    {
      v191 = 0;
      FastGetProfileIntFromID(v54, 12LL, 608LL);
      UpdateMouseSensitivity(v191);
      for ( j = 0; j < 2; ++j )
      {
        ReadDefaultAccelerationCurves(j, v54);
        ResetAccelerationCurves(j);
      }
      FastGetProfileIntFromID(v54, 12LL, 613LL);
      SetMouseTrails(v190[0]);
      FastGetProfileIntW(v54, 7LL, L"TTOnly", 0LL, v190, 0);
      GreSetFontEnumeration(v190[0], v130);
      W32GetUserSessionState(v132, v131);
      W32GetUserSessionState(v134, v133);
      FastGetProfileIntFromID(v54, 12LL, 91LL);
      W32GetUserSessionState(v136, v135);
      W32GetUserSessionState(v138, v137);
      FastGetProfileIntFromID(v54, 12LL, 92LL);
      W32GetUserSessionState(v140, v139);
      W32GetUserSessionState(v142, v141);
      FastGetProfileIntFromID(v54, 12LL, 93LL);
      if ( *(_DWORD *)(W32GetUserSessionState(v144, v143) + 16276) < 0xAu )
        *(_DWORD *)(W32GetUserSessionState(v146, v145) + 16276) = 10;
      if ( *(_DWORD *)(W32GetUserSessionState(v146, v145) + 16276) > 0x7FFFFFFFu )
        *(_DWORD *)(W32GetUserSessionState(v148, v147) + 16276) = 0x7FFFFFFF;
      ReadRawMouseThrottlingThresholds(v54);
      UpdatePerUserKeyboardIndicators(v54);
      InitScancodeMap(v150, v149);
      v153 = W32GetUserSessionState(v152, v151);
      FastGetProfileDword(v54, 24LL, L"Attributes", 0LL, v153 + 14176);
      v156 = (*(_DWORD *)(W32GetUserSessionState(v155, v154) + 14176) >> 15) & 2;
      *(_DWORD *)(W32GetUserSessionState(v158, v157) + 14176) = v156;
      xxxUpdatePerUserAccessPackSettings(v54);
    }
    v161 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL, 0LL);
    if ( v161 )
    {
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v160, v159) + 19904) + 2148LL) = 1;
      ZwClose(v161);
    }
    v162 = *(_QWORD *)(W32GetUserSessionState(v160, v159) + 19904);
    *(_DWORD *)(v162 + 2148) |= 2u;
    GreSetFontEnumeration(4, v162);
    GreSetFontEnumeration(32, v163);
    if ( (v193 & 2) != 0 )
      GreSetFontEnumeration(v193 | 4, v164);
    if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
      GreSetFontEnumeration(v193 | 0x30, v165);
    v168 = *(_DWORD *)UPDWORDPointer(8204LL);
    if ( !v168 )
      v168 = 1200;
    *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v167, v166) + 96) + 13448LL) = v168;
    v169 = (unsigned int *)UPDWORDPointer(8210LL);
    GreSetLCDOrientation(*v169);
    v172 = *(_DWORD *)(W32GetUserSessionState(v171, v170) + 66800) & 0x400;
    v176 = *(_QWORD *)(W32GetSessionState(v174, v173) + 96);
    *(_DWORD *)(v176 + 24304) = v172;
    if ( v194 == 2 )
      xxxUserResetDisplayDevice(v176, v175);
    FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v200);
    if ( v200 )
      *(_DWORD *)(W32GetUserSessionState(v178, v177) + 18900) = 1;
    if ( v33 )
    {
      memset_0(v356, 0, 0x44uLL);
      if ( (unsigned int)ReadPointerDeviceSettings(146LL, v356) )
      {
        if ( !v357 )
          SetTouchInputStatus(0LL);
      }
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v178, v177) + 62928) == 1 )
    {
      v194 = 0;
      *(_DWORD *)(W32GetUserSessionState(v180, v179) + 62928) = 0;
      UserLogError(3221226518LL);
      LOBYTE(v181) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v189, v181);
      ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v194);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v189);
    }
    xxxDwmControl(1037LL, 0LL);
    LOBYTE(v182) = *(_DWORD *)UPDWORDPointer(8244LL) != 0;
    SendCrosshairEnabledStatusChanged(v182);
    v201 = 0;
    if ( (unsigned int)ReadPointerDeviceSettings(178LL, &v201) )
      SendCrosshairPropertiesChanged(v201);
    if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
      ReadInputHapticSettings();
    if ( v33 )
    {
      TraceLoggingAutoRotationStateEvent(v184, v183);
      _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v186, v185) + 19904), 0x400u);
    }
  }
  if ( v203 != -1 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v202);
  return 1LL;
}
