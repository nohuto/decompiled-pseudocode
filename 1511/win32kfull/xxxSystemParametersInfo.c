/*
 * XREFs of xxxSystemParametersInfo @ 0x1C0126360
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetWindowNCMetrics @ 0x1C007396C (GetWindowNCMetrics.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     CheckWinstaAttributeAccess @ 0x1C008AD60 (CheckWinstaAttributeAccess.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     RtlInitLargeUnicodeString @ 0x1C00900B8 (RtlInitLargeUnicodeString.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0090C38 (IsWindowUnderActiveLockScreen.c)
 *     ClearKeyboardStates @ 0x1C0096998 (ClearKeyboardStates.c)
 *     SetMouseTrails @ 0x1C0096C64 (SetMouseTrails.c)
 *     SetPointer @ 0x1C0096E50 (SetPointer.c)
 *     HKLtoPKL @ 0x1C0099B34 (HKLtoPKL.c)
 *     _SetDoubleClickTime @ 0x1C00C74F0 (_SetDoubleClickTime.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00CC8DC (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C00D7644 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 *     CreateBitmapStrip @ 0x1C00D7F70 (CreateBitmapStrip.c)
 *     SetDesktopMetrics @ 0x1C00D8690 (SetDesktopMetrics.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00D8804 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     bSetDevDragWidth @ 0x1C00D8C24 (bSetDevDragWidth.c)
 *     SetKeyboardRate @ 0x1C00D8E4C (SetKeyboardRate.c)
 *     SetDesktopPattern @ 0x1C00ED9CC (SetDesktopPattern.c)
 *     xxxDesktopRecalc @ 0x1C00EF640 (xxxDesktopRecalc.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00F51E0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C00F5208 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C00F5230 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C00F5258 (-CalculateMouseTable@@YAXXZ.c)
 *     ResetMouseAccelerationCurves @ 0x1C00FD5CC (ResetMouseAccelerationCurves.c)
 *     SnapshotMonitorRects @ 0x1C010AEF0 (SnapshotMonitorRects.c)
 *     GetEasTimeout @ 0x1C010B178 (GetEasTimeout.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C010CABC (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C010D0A0 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C010D380 (LoadWallpaperFilenameFromRegistry.c)
 *     GreSetFontEnumeration @ 0x1C010DA70 (GreSetFontEnumeration.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C0111468 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     GetKbdLangSwitch @ 0x1C01126D8 (GetKbdLangSwitch.c)
 *     CalculateMouseSensitivity @ 0x1C0112A44 (CalculateMouseSensitivity.c)
 *     xxxSetIMEShowStatus @ 0x1C0112D68 (xxxSetIMEShowStatus.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0113AC8 (xxxInvalidateWallpaperWindow.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C011FF84 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C01240B4 (xxxUpdateSystemCursorsFromRegistry.c)
 *     ReadPointerDeviceSettings @ 0x1C0125F9C (ReadPointerDeviceSettings.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01D6B48 (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6C88 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01D6E8C (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D6F74 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D7088 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D75E0 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     UpdateWinIniInt @ 0x1C01D7A10 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01D7D60 (xxxMetricsRecalc.c)
 *     _SwapMouseButton @ 0x1C01E9C80 (_SwapMouseButton.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01EDB48 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01EE178 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF6EC (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     WritePointerDeviceSettings @ 0x1C022504C (WritePointerDeviceSettings.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C022577C (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C0225DEC (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C0225E90 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C0225F34 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C025EFEC (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfo(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  unsigned int v6; // r12d
  __int64 CurrentProcessWin32Process; // rdx
  unsigned __int64 v8; // r8
  BOOL v9; // r14d
  unsigned int PointerDeviceSettings; // edi
  int v11; // esi
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned int v15; // ebx
  int v16; // ecx
  int v17; // ecx
  __int64 ProfileUserName; // rbx
  int v19; // r14d
  int v20; // edi
  int v21; // eax
  int v22; // esi
  BOOL v23; // r12d
  int v24; // eax
  struct _UNICODE_STRING *v25; // rax
  struct _UNICODE_STRING *v26; // r12
  unsigned int v27; // ebx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // r12d
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  _DWORD *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned int v45; // r12d
  __int64 v46; // r8
  int v47; // ebx
  int v48; // esi
  int v49; // eax
  BOOL v50; // eax
  unsigned int *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  BOOL v54; // r12d
  __int64 v55; // rbx
  __int64 v56; // rax
  struct tagWND *v57; // rcx
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned int *v62; // rcx
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned int *v68; // rcx
  __int64 v69; // rcx
  unsigned __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  _DWORD *v74; // rcx
  __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  int v77; // esi
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned int *v81; // rcx
  __int64 v82; // rcx
  unsigned int v83; // r12d
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  _DWORD *v87; // rcx
  __int64 v88; // rcx
  unsigned __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  unsigned int *v93; // rcx
  __int64 v94; // rcx
  unsigned __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rcx
  unsigned int *v99; // rcx
  __int64 v100; // rcx
  __int64 DPIMetrics; // rax
  struct _UNICODE_STRING *v102; // rbx
  unsigned int v103; // esi
  _DWORD *v104; // rdx
  __int64 v105; // rcx
  int v106; // r12d
  void *v107; // rcx
  int v108; // ebx
  int v109; // esi
  __int64 v110; // r14
  int v111; // ebx
  _DWORD *v112; // r14
  unsigned __int64 v113; // rcx
  int v114; // esi
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rcx
  _DWORD *v118; // rbx
  __int64 v119; // rcx
  unsigned __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // rcx
  _DWORD *v124; // rcx
  __int64 v125; // rcx
  unsigned __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rax
  _DWORD *v132; // rbx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rcx
  _DWORD *v137; // rcx
  __int64 v138; // rcx
  unsigned __int64 v139; // rcx
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // rcx
  _DWORD *v143; // rbx
  __int64 v144; // rcx
  unsigned __int64 v145; // rcx
  __int64 v146; // rcx
  __int64 v147; // rcx
  __int64 v148; // rcx
  _DWORD *v149; // rcx
  __int64 v150; // rcx
  unsigned __int64 v151; // rcx
  __int64 v152; // rcx
  __int64 v153; // rcx
  __int64 v154; // rcx
  _DWORD *v155; // rcx
  __int64 v156; // rcx
  void *v157; // rbx
  unsigned __int64 v158; // rcx
  __int64 v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // rcx
  _DWORD *v162; // rcx
  __int64 v163; // rcx
  unsigned __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // rcx
  __int64 v169; // rcx
  _DWORD *v170; // rcx
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // rax
  unsigned int v174; // eax
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // r8
  _OWORD *v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // rax
  int *v184; // rdi
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rcx
  __int64 v189; // rax
  int *v190; // r8
  __int64 v191; // rcx
  __int64 v192; // rcx
  __int64 v193; // rax
  _OWORD *v194; // rcx
  char *v195; // rdi
  __int64 v196; // rcx
  __int64 v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 DispInfo; // rax
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rcx
  __int64 v210; // rax
  __int64 v211; // rdx
  __int64 v212; // r8
  _OWORD *v213; // rcx
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // rax
  __int64 v218; // rcx
  __int64 v219; // rax
  __int64 v220; // rdx
  __int64 v221; // r8
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // rax
  int *v226; // rbx
  __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // rcx
  __int64 v230; // rcx
  __int64 v231; // rax
  int *v232; // r8
  __int64 v233; // rcx
  __int64 v234; // rcx
  __int64 v235; // rax
  BOOL v236; // r12d
  _DWORD *v237; // rcx
  struct tagFILTERKEYS *v238; // r13
  int v239; // ecx
  unsigned int v240; // ecx
  struct _UNICODE_STRING *v241; // rbx
  _WORD *v242; // rdx
  unsigned int *v243; // r13
  int v244; // r12d
  unsigned int v245; // ecx
  unsigned int v246; // ecx
  unsigned int *v247; // r13
  int v248; // ecx
  unsigned int v249; // ecx
  char *v250; // rdx
  int v251; // eax
  struct tagMOUSEKEYS *v252; // r13
  int v253; // ecx
  struct _UNICODE_STRING *v254; // rbx
  _QWORD *v255; // rdx
  _OWORD *v256; // rax
  unsigned __int16 *v257; // rcx
  __int64 v258; // r14
  int v259; // eax
  _DWORD *v260; // r10
  int v261; // ebx
  unsigned __int64 v262; // rcx
  __int64 v263; // rcx
  __int64 v264; // rcx
  __int64 v265; // rcx
  int *v266; // rcx
  __int64 v267; // rcx
  const wchar_t *v268; // r9
  const wchar_t *v269; // r9
  char *v270; // rcx
  struct tagSOUNDSENTRYW *v271; // r13
  int v272; // ecx
  unsigned int v273; // ecx
  struct _UNICODE_STRING *v274; // rbx
  __int64 v275; // rbx
  __int64 v276; // rbx
  unsigned int v277; // r13d
  __int64 v278; // rax
  __int64 v279; // rbx
  const wchar_t *v280; // r14
  const wchar_t *v281; // r9
  int v282; // eax
  unsigned int v283; // esi
  int v284; // ecx
  unsigned int v285; // eax
  _DWORD *v286; // rcx
  int v287; // ecx
  int v288; // r8d
  bool v289; // zf
  bool v290; // zf
  int v291; // edx
  int *v292; // rax
  int v293; // ecx
  __int64 v294; // rax
  __int64 v295; // r9
  __int64 v296; // r12
  __int64 v297; // rcx
  int v298; // eax
  unsigned int ProfileValue; // eax
  _DWORD *v300; // rdx
  int v301; // eax
  unsigned __int64 v302; // rdx
  _DWORD *v303; // r8
  int v304; // eax
  __int64 v305; // rax
  struct tagWND *v306; // rcx
  void *v307; // rax
  __int64 v308; // rax
  __int64 v309; // rbx
  __int64 v310; // rax
  unsigned int v311; // esi
  int v312; // ebx
  unsigned __int64 v313; // rcx
  __int64 v314; // rcx
  __int64 v315; // rcx
  __int64 v316; // rcx
  _DWORD *v317; // rbx
  __int64 v318; // rcx
  unsigned __int64 v319; // rcx
  __int64 v320; // rcx
  __int64 v321; // rcx
  __int64 v322; // rcx
  __int64 v323; // rcx
  _BYTE *v324; // rax
  char v325; // cl
  void *v326; // rax
  unsigned int v327; // [rsp+40h] [rbp-408h]
  int v328; // [rsp+44h] [rbp-404h]
  int v329; // [rsp+48h] [rbp-400h] BYREF
  int updated; // [rsp+4Ch] [rbp-3FCh] BYREF
  BOOL v331; // [rsp+50h] [rbp-3F8h] BYREF
  void *Src; // [rsp+58h] [rbp-3F0h] BYREF
  __int64 v333; // [rsp+60h] [rbp-3E8h] BYREF
  __int64 v334; // [rsp+68h] [rbp-3E0h] BYREF
  int v335; // [rsp+70h] [rbp-3D8h] BYREF
  _BYTE v336[24]; // [rsp+78h] [rbp-3D0h] BYREF
  int v337; // [rsp+90h] [rbp-3B8h]
  _BYTE v338[8]; // [rsp+98h] [rbp-3B0h] BYREF
  _DWORD v339[2]; // [rsp+A0h] [rbp-3A8h] BYREF
  char *v340; // [rsp+A8h] [rbp-3A0h]
  char v341; // [rsp+C0h] [rbp-388h] BYREF
  _BYTE v342[16]; // [rsp+C8h] [rbp-380h] BYREF
  _QWORD v343[3]; // [rsp+D8h] [rbp-370h] BYREF
  __int128 v344; // [rsp+F0h] [rbp-358h] BYREF
  __int128 v345; // [rsp+100h] [rbp-348h] BYREF
  _BYTE v346[20]; // [rsp+110h] [rbp-338h] BYREF
  __int64 v347; // [rsp+124h] [rbp-324h]
  int v348; // [rsp+12Ch] [rbp-31Ch]
  _BYTE v349[20]; // [rsp+130h] [rbp-318h] BYREF
  unsigned int v350; // [rsp+144h] [rbp-304h]
  wchar_t Dest[40]; // [rsp+150h] [rbp-2F8h] BYREF
  _WORD v352[40]; // [rsp+1A0h] [rbp-2A8h] BYREF
  _BYTE v353[528]; // [rsp+1F0h] [rbp-258h] BYREF

  v6 = a1;
  v327 = a1;
  v331 = a1;
  Src = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v334 = CurrentProcessWin32Process;
  updated = 0;
  v8 = a4 & 1;
  LODWORD(v333) = a4 & 1;
  v9 = v333 != 0;
  v328 = ((unsigned __int8)a4 >> 1) & 1;
  PointerDeviceSettings = v333 == 0;
  v329 = PointerDeviceSettings;
  v11 = (a4 >> 15) & 1;
  v337 = 0;
  v352[0] = 0;
  switch ( v6 )
  {
    case 7u:
    case 8u:
    case 0xCu:
    case 0x27u:
    case 0x28u:
    case 0x31u:
    case 0x3Eu:
    case 0x3Fu:
    case 0x5Cu:
    case 0x61u:
      goto LABEL_2;
    case 0x4Fu:
    case 0x50u:
    case 0x53u:
    case 0x54u:
      *(_DWORD *)Src = 0;
      return 1LL;
    case 0x51u:
    case 0x52u:
    case 0x55u:
    case 0x56u:
      return 1LL;
    default:
      v13 = gpepCSRSS;
      if ( *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS )
      {
        v14 = 2LL;
LABEL_21:
        PointerDeviceSettings = 1;
        v329 = 1;
LABEL_22:
        if ( v327 <= 0x1026 )
        {
          if ( v327 == 4134 )
          {
            *(_DWORD *)Src = gbBlockSendInputResets != 0;
            goto LABEL_1247;
          }
          switch ( v327 )
          {
            case 1u:
              *(_DWORD *)Src = (gdwPUDFlags >> 19) & 1;
              goto LABEL_1247;
            case 2u:
              if ( (_DWORD)v333 )
              {
                RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), Dest, 10LL);
                updated = FastUpdateWinIni(0LL, 11LL, 9LL, Dest);
                PointerDeviceSettings = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              v289 = a2 == 0;
              v15 = v327;
              if ( v289 )
                gdwPUDFlags &= ~0x80000u;
              else
                gdwPUDFlags |= 0x80000u;
              goto LABEL_1248;
            case 3u:
              *(_DWORD *)Src = gMouseThresh1;
              *((_DWORD *)Src + 1) = gMouseThresh2;
              *((_DWORD *)Src + 2) = gMouseSpeed;
              goto LABEL_1247;
            case 4u:
              if ( !(_DWORD)v333 )
                goto LABEL_57;
              ProfileUserName = CreateProfileUserName(v336);
              v19 = UpdateWinIniInt(ProfileUserName, 12LL, 10LL, *(unsigned int *)Src);
              v20 = UpdateWinIniInt(ProfileUserName, 12LL, 11LL, *((unsigned int *)Src + 1));
              v21 = UpdateWinIniInt(ProfileUserName, 12LL, 12LL, *((unsigned int *)Src + 2));
              v22 = v21;
              if ( !v19 )
                goto LABEL_52;
              if ( v20 && v21 )
              {
                updated = 1;
              }
              else
              {
                UpdateWinIniInt(ProfileUserName, 12LL, 10LL, (unsigned int)gMouseThresh1);
LABEL_52:
                if ( v20 )
                  UpdateWinIniInt(ProfileUserName, 12LL, 11LL, (unsigned int)gMouseThresh2);
                if ( v22 )
                  UpdateWinIniInt(ProfileUserName, 12LL, 12LL, (unsigned int)gMouseSpeed);
              }
              PointerDeviceSettings = updated;
              FreeProfileUserName(ProfileUserName, v336);
LABEL_57:
              if ( PointerDeviceSettings )
              {
                gMouseThresh1 = *(_DWORD *)Src;
                gMouseThresh2 = *((_DWORD *)Src + 1);
                gMouseSpeed = *((_DWORD *)Src + 2);
              }
              goto LABEL_1247;
            case 5u:
              *(_DWORD *)Src = *(_DWORD *)GetDPIServerInfo(v13, CurrentProcessWin32Process, v8);
              goto LABEL_1247;
            case 6u:
              if ( (int)a2 > 1 )
              {
                if ( a2 >= 0x32 )
                  a2 = 50;
              }
              else
              {
                a2 = 1;
              }
              if ( a2 == *(_DWORD *)GetDPIServerInfo(v13, CurrentProcessWin32Process, v8) )
              {
                PointerDeviceSettings = 1;
                goto LABEL_1247;
              }
              v25 = (struct _UNICODE_STRING *)CreateProfileUserName(v336);
              v26 = v25;
              if ( (_DWORD)v333 )
              {
                updated = SetWindowMetricInt(v25, 0x88u, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                xxxSetAndDrawNCMetrics(v26, a2, 0LL);
                bSetDevDragWidth(*gpDispInfo, *(_DWORD *)(gpsi + 4024LL) + 3);
              }
              goto LABEL_77;
            case 0xAu:
              *(_DWORD *)Src = gnKeyboardSpeed & 0x1F;
              goto LABEL_1247;
            case 0xBu:
              if ( a2 > 0x1F )
                a2 = 31;
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 13LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                gnKeyboardSpeed = a2 | gnKeyboardSpeed & 0xFFFFFFE0;
                SetKeyboardRate();
              }
              goto LABEL_1247;
            case 0xDu:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
              {
                if ( (unsigned int)IsDPIAbsoluteSysMet(0x26uLL) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_117;
                  }
                }
                else
                {
                  if ( !IsDPIDWMSysMet(v29)
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0 )
                  {
LABEL_117:
                    if ( IsDPIDWMSysMet(0x26uLL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0 )
                    {
                      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1) != 0 )
                      {
                        v33 = (_DWORD *)(gpsi + 2808LL);
                        PointerDeviceSettings = v329;
                        goto LABEL_124;
                      }
                      PointerDeviceSettings = v329;
                    }
                    v33 = (_DWORD *)(gpsi + 2032LL);
                    goto LABEL_124;
                  }
                  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1) == 0 )
                  {
                    PointerDeviceSettings = v329;
                    goto LABEL_117;
                  }
                  PointerDeviceSettings = v329;
                }
                v33 = (_DWORD *)(gpsi + 2420LL);
LABEL_124:
                *(_DWORD *)Src = *v33;
                goto LABEL_1247;
              }
              if ( a2 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
                {
                  v36 = a2;
                  a2 = EngMulDiv(a2, 96, *(unsigned __int16 *)(gpsi + 7286LL));
                }
                else
                {
                  v36 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 7286LL), 96);
                }
                v37 = gpsi;
                if ( v36 <= *(_DWORD *)(gpsi + 1924LL) )
                  v36 = *(_DWORD *)(gpsi + 1924LL);
                if ( a2 <= *(_DWORD *)(gpsi + 2312LL) )
                  a2 = *(_DWORD *)(gpsi + 2312LL);
                if ( (_DWORD)v333 )
                {
                  updated = SetWindowMetricInt(0LL, 0x40u, v36);
                  PointerDeviceSettings = updated;
                  v37 = gpsi;
                }
                if ( PointerDeviceSettings )
                {
                  *(_DWORD *)(*(_QWORD *)v37 + 2032LL) = v36;
                  *(_DWORD *)(*(_QWORD *)v37 + 2420LL) = a2;
                }
              }
              goto LABEL_1247;
            case 0xEu:
              *(_DWORD *)Src = (int)abs32(giScreenSaveTimeOutMs) / 1000;
              goto LABEL_1247;
            case 0xFu:
              if ( gfSwitchInProgress )
                return 0LL;
              if ( gdwRITdemonLockState && !v11 )
                goto LABEL_176;
              v47 = 1000 * a2;
              v48 = 1000 * GetEasTimeout();
              if ( v48 )
              {
                if ( (v337 = 1, giScreenSaveTimeOutMs > 0) && v48 < v47 || v47 <= 0 )
                {
                  UserSetLastError(1260);
                  v9 = 0;
                  PointerDeviceSettings = 0;
                  v329 = 0;
                }
              }
              if ( !(unsigned int)CheckDesktopPolicy(0LL, 99LL) )
                goto LABEL_191;
              if ( !v337 )
                goto LABEL_190;
              v335 = 0;
              if ( (unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL, 0LL, &v335, 2) )
              {
                v49 = 1000 * v335;
                v335 = v49;
                if ( v49 )
                {
                  if ( v49 < v48 && giScreenSaveTimeOutMs > 0 && v49 < v47 )
                  {
                    UserSetLastError(1260);
LABEL_190:
                    v329 = 0;
                    PointerDeviceSettings = 0;
                    v9 = 0;
                  }
                }
              }
LABEL_191:
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 99LL, v47 / 0x3E8u);
                PointerDeviceSettings = updated;
                v329 = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( !gbBlockSendInputResets )
                {
                  UpdateLastInput(
                    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                    5LL);
                  PointerDeviceSettings = v329;
                }
                if ( giScreenSaveTimeOutMs < 0 && !v337 )
                  v47 = -v47;
                giScreenSaveTimeOutMs = v47;
              }
              goto LABEL_1247;
            case 0x10u:
              *(_DWORD *)Src = giScreenSaveTimeOutMs > 0;
              goto LABEL_1247;
            case 0x11u:
              if ( a2 - 2 <= 0xFFFFFFFC )
                return 0LL;
              if ( gdwRITdemonLockState && !v11 )
                goto LABEL_176;
              gbLockConsoleActive = a2 == -1;
              if ( gfSwitchInProgress )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
                v329 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
                PointerDeviceSettings = updated;
                v329 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              if ( !gbBlockSendInputResets )
              {
                UpdateLastInput((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, 5LL);
                PointerDeviceSettings = v329;
              }
              if ( giScreenSaveTimeOutMs >= 0 )
                goto LABEL_231;
              if ( a2 )
                goto LABEL_232;
              if ( giScreenSaveTimeOutMs >= 0 )
              {
LABEL_231:
                if ( !a2 )
LABEL_232:
                  giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
              }
              goto LABEL_1247;
            case 0x14u:
              v26 = (struct _UNICODE_STRING *)CreateProfileUserName(v336);
              if ( (unsigned int)CheckDesktopPolicy(v26, 67LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( !v9 )
                goto LABEL_250;
              if ( a2 == -1 )
              {
                PointerDeviceSettings = 1;
              }
              else
              {
                FastGetProfileStringFromIDW(v26, 4LL, 67LL, &word_1C0153C60, v353, 260, 8);
                updated = FastUpdateWinIni(v26, 4LL, 67LL, Src);
                PointerDeviceSettings = updated;
LABEL_250:
                if ( !PointerDeviceSettings )
                  goto LABEL_77;
              }
              if ( (unsigned int)xxxSetDeskWallpaper((__int64)v26, (const unsigned __int16 *)Src) )
              {
                xxxInvalidateWallpaperWindow();
                goto LABEL_77;
              }
              if ( v9 )
              {
                if ( a2 == -1 )
                  goto LABEL_77;
                FastUpdateWinIni(v26, 4LL, 67LL, v353);
              }
              PointerDeviceSettings = 0;
              updated = 0;
LABEL_77:
              FreeProfileUserName(v26, v336);
              goto LABEL_1247;
            case 0x15u:
              if ( a2 == -1 && Src )
                goto LABEL_2;
              v55 = CreateProfileUserName(v336);
              if ( (unsigned int)CheckDesktopPolicy(v55, 2LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v9 && Src )
              {
                FastGetProfileStringFromIDW(v55, 4LL, 2LL, &word_1C0153C60, v353, 260, 0);
                updated = FastUpdateWinIni(v55, 4LL, 2LL, Src);
                PointerDeviceSettings = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_262;
              if ( (unsigned int)SetDesktopPattern(v55, (const wchar_t *)Src) )
              {
                xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
                v56 = *(_QWORD *)(gptiCurrent + 408LL);
                if ( v56 )
                  v57 = *(struct tagWND **)(*(_QWORD *)(v56 + 8) + 16LL);
                else
                  v57 = 0LL;
                xxxInternalInvalidate(v57, (HRGN)1, 0x10485u);
                goto LABEL_262;
              }
              if ( v9 && Src )
                FastUpdateWinIni(v55, 4LL, 2LL, v353);
              FreeProfileUserName(v55, v336);
              return 0LL;
            case 0x16u:
              *(_DWORD *)Src = (gnKeyboardSpeed >> 5) & 3;
              goto LABEL_1247;
            case 0x17u:
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * a2);
                SetKeyboardRate();
              }
              goto LABEL_1247;
            case 0x18u:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
              {
                if ( (unsigned int)IsDPIAbsoluteSysMet(0x27uLL) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_151;
                  }
                }
                else
                {
                  if ( !IsDPIDWMSysMet(v38)
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0 )
                  {
LABEL_151:
                    if ( IsDPIDWMSysMet(0x27uLL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0 )
                    {
                      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1) != 0 )
                      {
                        v42 = (_DWORD *)(gpsi + 2812LL);
                        PointerDeviceSettings = v329;
                        goto LABEL_158;
                      }
                      PointerDeviceSettings = v329;
                    }
                    v42 = (_DWORD *)(gpsi + 2036LL);
                    goto LABEL_158;
                  }
                  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1) == 0 )
                  {
                    PointerDeviceSettings = v329;
                    goto LABEL_151;
                  }
                  PointerDeviceSettings = v329;
                }
                v42 = (_DWORD *)(gpsi + 2424LL);
LABEL_158:
                *(_DWORD *)Src = *v42;
                goto LABEL_1247;
              }
              if ( a2 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0 )
                {
                  v45 = a2;
                  a2 = EngMulDiv(a2, 96, *(unsigned __int16 *)(gpsi + 7286LL));
                }
                else
                {
                  v45 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 7286LL), 96);
                }
                v46 = gpsi;
                if ( v45 <= *(_DWORD *)(gpsi + 1928LL) )
                  v45 = *(_DWORD *)(gpsi + 1928LL);
                if ( a2 <= *(_DWORD *)(gpsi + 2316LL) )
                  a2 = *(_DWORD *)(gpsi + 2316LL);
                if ( (_DWORD)v333 )
                {
                  updated = SetWindowMetricInt(0LL, 0x41u, v45);
                  PointerDeviceSettings = updated;
                  v46 = gpsi;
                }
                if ( PointerDeviceSettings )
                {
                  *(_DWORD *)(*(_QWORD *)v46 + 2036LL) = v45;
                  *(_DWORD *)(*(_QWORD *)v46 + 2424LL) = a2;
                }
              }
              goto LABEL_1247;
            case 0x19u:
              *(_DWORD *)Src = (gdwPUDFlags >> 21) & 1;
              goto LABEL_1247;
            case 0x1Au:
              if ( (_DWORD)v333 )
              {
                updated = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( a2 )
                  gdwPUDFlags |= 0x200000u;
                else
                  gdwPUDFlags &= ~0x200000u;
                xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
              }
              goto LABEL_1247;
            case 0x1Bu:
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_350;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v70)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) != 0 )
                {
LABEL_350:
                  if ( IsDPIDWMSysMet(0x28uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x2000) != 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v74 = (_DWORD *)(gpsi + 2816LL);
                      PointerDeviceSettings = v329;
LABEL_357:
                      *(_DWORD *)Src = *v74;
                      goto LABEL_1247;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v74 = (_DWORD *)(gpsi + 2040LL);
                  goto LABEL_357;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v329;
                  goto LABEL_350;
                }
                PointerDeviceSettings = v329;
              }
              v74 = (_DWORD *)(gpsi + 2428LL);
              goto LABEL_357;
            case 0x1Cu:
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
                PointerDeviceSettings = updated;
                v329 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              v77 = IsDPIAbsoluteSysMet(0x28uLL);
              if ( v77 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_373;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v76)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v79) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x4000) != 0 )
                {
LABEL_373:
                  if ( IsDPIDWMSysMet(0x28uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) != 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v81 = (unsigned int *)(gpsi + 2816LL);
                      PointerDeviceSettings = v329;
                      goto LABEL_380;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v81 = (unsigned int *)(gpsi + 2040LL);
LABEL_380:
                  v83 = *v81;
                  if ( v77 )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_392;
                    }
                  }
                  else
                  {
                    if ( !IsDPIDWMSysMet(0x28uLL)
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x4000) != 0 )
                    {
LABEL_392:
                      if ( IsDPIDWMSysMet(0x28uLL)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x2000) != 0 )
                      {
                        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1) != 0 )
                        {
                          v87 = (_DWORD *)(gpsi + 2816LL);
                          PointerDeviceSettings = v329;
                          goto LABEL_399;
                        }
                        PointerDeviceSettings = v329;
                      }
                      v87 = (_DWORD *)(gpsi + 2040LL);
                      goto LABEL_399;
                    }
                    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) == 0 )
                    {
                      PointerDeviceSettings = v329;
                      goto LABEL_392;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v87 = (_DWORD *)(gpsi + 2428LL);
LABEL_399:
                  *v87 = a2 != 0;
                  TraceLoggingSPISetMenuDropAlignmentEvent((const struct _TlgProvider_t *)v83);
                  goto LABEL_1247;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v329;
                  goto LABEL_373;
                }
                PointerDeviceSettings = v329;
              }
              v81 = (unsigned int *)(gpsi + 2428LL);
              goto LABEL_380;
            case 0x1Du:
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
                PointerDeviceSettings = updated;
                v329 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x24uLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v90) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_415;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v89)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x4000) != 0 )
                {
LABEL_415:
                  if ( IsDPIDWMSysMet(0x24uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v94) + 776) & 0x2000) != 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v93 = (unsigned int *)(gpsi + 2800LL);
                      PointerDeviceSettings = v329;
LABEL_422:
                      *v93 = a2;
                      goto LABEL_1247;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v93 = (unsigned int *)(gpsi + 2024LL);
                  goto LABEL_422;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v329;
                  goto LABEL_415;
                }
                PointerDeviceSettings = v329;
              }
              v93 = (unsigned int *)(gpsi + 2412LL);
              goto LABEL_422;
            case 0x1Eu:
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
                PointerDeviceSettings = updated;
                v329 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x25uLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v96) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_438;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v95)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x4000) != 0 )
                {
LABEL_438:
                  if ( IsDPIDWMSysMet(0x25uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x2000) != 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v99 = (unsigned int *)(gpsi + 2804LL);
                      PointerDeviceSettings = v329;
LABEL_445:
                      *v99 = a2;
                      goto LABEL_1247;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v99 = (unsigned int *)(gpsi + 2028LL);
                  goto LABEL_445;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v329;
                  goto LABEL_438;
                }
                PointerDeviceSettings = v329;
              }
              v99 = (unsigned int *)(gpsi + 2416LL);
              goto LABEL_445;
            case 0x1Fu:
              DPIMetrics = GetDPIMetrics(v13, CurrentProcessWin32Process, v8);
              GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 32), 92LL, (unsigned __int16 *)Src);
              goto LABEL_1247;
            case 0x20u:
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                SetDoubleClickTime(a2);
              goto LABEL_1247;
            case 0x21u:
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                SwapMouseButton(a2 != 0, CurrentProcessWin32Process, v8);
              goto LABEL_1247;
            case 0x22u:
              if ( Src )
              {
                if ( a2 != 92 )
                  return 0LL;
              }
              else if ( a2 )
              {
                return 0LL;
              }
              v102 = (struct _UNICODE_STRING *)CreateProfileUserName(v336);
              v103 = xxxSetSPIMetrics(v102, v327, (struct tagLOGFONTW *)Src, (_DWORD)v333 != 0);
              updated = v103;
              FreeProfileUserName(v102, v336);
              if ( (_DWORD)v333 )
                PointerDeviceSettings = v103;
              goto LABEL_1247;
            case 0x23u:
              *(_DWORD *)Src = 1;
              goto LABEL_1247;
            case 0x24u:
              goto LABEL_1247;
            case 0x25u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              v236 = a2 == 1;
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 107LL, a2 == 1);
                PointerDeviceSettings = updated;
              }
              v15 = v327;
              if ( PointerDeviceSettings )
              {
                if ( v236 )
                  gdwPUDFlags |= 0x100000u;
                else
                  gdwPUDFlags &= ~0x100000u;
              }
              goto LABEL_1248;
            case 0x26u:
              *(_DWORD *)Src = (gdwPUDFlags >> 20) & 1;
              goto LABEL_1247;
            case 0x29u:
              if ( !Src )
                return 0LL;
              GetWindowNCMetrics((__int64)Src);
              goto LABEL_1247;
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x49u:
              v15 = v327;
              v174 = xxxSetSPIMetrics(0LL, v327, (struct tagLOGFONTW *)Src, (_DWORD)v333 != 0);
              updated = v174;
              if ( (_DWORD)v333 )
                PointerDeviceSettings = v174;
              RtlLoadStringOrError(135LL, v352, 40LL);
              goto LABEL_1248;
            case 0x2Bu:
              v112 = Src;
              *(_DWORD *)Src = 20;
              v114 = IsDPIAbsoluteSysMet(0x39uLL);
              if ( v114 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v113) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v115) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_482;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v113)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v117) + 776) & 0x4000) != 0 )
                {
LABEL_482:
                  if ( IsDPIDWMSysMet(0x39uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x2000) != 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v118 = (_DWORD *)(gpsi + 2884LL);
                      PointerDeviceSettings = v329;
                      goto LABEL_489;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v118 = (_DWORD *)(gpsi + 2108LL);
LABEL_489:
                  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v120) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v121) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_501;
                    }
                  }
                  else
                  {
                    if ( !IsDPIDWMSysMet(v120)
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v122) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x4000) != 0 )
                    {
LABEL_501:
                      if ( IsDPIDWMSysMet(7uLL)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v125) + 776) & 0x2000) != 0 )
                      {
                        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1) != 0 )
                        {
                          v124 = (_DWORD *)(gpsi + 2684LL);
                          PointerDeviceSettings = v329;
                          goto LABEL_508;
                        }
                        PointerDeviceSettings = v329;
                      }
                      v124 = (_DWORD *)(gpsi + 1908LL);
LABEL_508:
                      v112[1] = *v118 - 2 * *v124;
                      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
                      {
                        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v126) + 776) & 0x2000) != 0
                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v127) + 776) & 0x4000) != 0 )
                        {
                          goto LABEL_520;
                        }
                      }
                      else
                      {
                        if ( !IsDPIDWMSysMet(v126)
                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v129) + 776) & 0x2000) != 0
                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v130) + 776) & 0x4000) != 0 )
                        {
LABEL_520:
                          if ( IsDPIDWMSysMet(0x2FuLL)
                            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v128) + 776) & 0x2000) != 0 )
                          {
                            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
                            {
                              v133 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL);
                              v128 = *(_DWORD *)(v133 + 244) & 1;
                              if ( (*(_DWORD *)(v133 + 244) & 1) != 0 )
                              {
                                v132 = (_DWORD *)(gpsi + 2844LL);
                                PointerDeviceSettings = v329;
                                goto LABEL_527;
                              }
                            }
                            PointerDeviceSettings = v329;
                          }
                          v132 = (_DWORD *)(gpsi + 2068LL);
LABEL_527:
                          if ( v114 )
                          {
                            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v128) + 776) & 0x2000) != 0
                              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x4000) != 0 )
                            {
                              goto LABEL_539;
                            }
                          }
                          else
                          {
                            if ( !IsDPIDWMSysMet(0x39uLL)
                              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v135) + 776) & 0x2000) != 0
                              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v136) + 776) & 0x4000) != 0 )
                            {
LABEL_539:
                              if ( IsDPIDWMSysMet(0x39uLL)
                                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v138) + 776) & 0x2000) != 0 )
                              {
                                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 408)
                                                            + 8LL)
                                                + 244LL) & 1) != 0 )
                                {
                                  v137 = (_DWORD *)(gpsi + 2884LL);
                                  PointerDeviceSettings = v329;
                                  goto LABEL_546;
                                }
                                PointerDeviceSettings = v329;
                              }
                              v137 = (_DWORD *)(gpsi + 2108LL);
LABEL_546:
                              v112[2] = *v132 - *v137;
                              if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
                              {
                                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v139) + 776) & 0x2000) != 0
                                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v140) + 776) & 0x4000) != 0 )
                                {
                                  goto LABEL_558;
                                }
                              }
                              else
                              {
                                if ( !IsDPIDWMSysMet(v139)
                                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v141) + 776) & 0x2000) != 0
                                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x4000) != 0 )
                                {
LABEL_558:
                                  if ( IsDPIDWMSysMet(0x30uLL)
                                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v144) + 776) & 0x2000) != 0 )
                                  {
                                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                            + 408)
                                                                + 8LL)
                                                    + 244LL) & 1) != 0 )
                                    {
                                      v143 = (_DWORD *)(gpsi + 2848LL);
                                      PointerDeviceSettings = v329;
                                      goto LABEL_565;
                                    }
                                    PointerDeviceSettings = v329;
                                  }
                                  v143 = (_DWORD *)(gpsi + 2072LL);
LABEL_565:
                                  if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
                                  {
                                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v145) + 776) & 0x2000) != 0
                                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v146) + 776) & 0x4000) != 0 )
                                    {
                                      goto LABEL_577;
                                    }
                                  }
                                  else
                                  {
                                    if ( !IsDPIDWMSysMet(v145)
                                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x2000) != 0
                                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v148) + 776) & 0x4000) != 0 )
                                    {
LABEL_577:
                                      if ( IsDPIDWMSysMet(0x3AuLL)
                                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v150) + 776) & 0x2000) != 0 )
                                      {
                                        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                                + 408)
                                                                    + 8LL)
                                                        + 244LL) & 1) != 0 )
                                        {
                                          v149 = (_DWORD *)(gpsi + 2888LL);
                                          PointerDeviceSettings = v329;
                                          goto LABEL_584;
                                        }
                                        PointerDeviceSettings = v329;
                                      }
                                      v149 = (_DWORD *)(gpsi + 2112LL);
LABEL_584:
                                      v112[3] = *v143 - *v149;
                                      if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
                                      {
                                        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v151) + 776) & 0x2000) != 0
                                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v152) + 776) & 0x4000) != 0 )
                                        {
                                          goto LABEL_596;
                                        }
                                      }
                                      else
                                      {
                                        if ( !IsDPIDWMSysMet(v151)
                                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v153) + 776) & 0x2000) != 0
                                          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v154) + 776) & 0x4000) != 0 )
                                        {
LABEL_596:
                                          if ( IsDPIDWMSysMet(0x38uLL)
                                            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v156) + 776) & 0x2000) != 0 )
                                          {
                                            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                                    + 408)
                                                                        + 8LL)
                                                            + 244LL) & 1) != 0 )
                                            {
                                              v155 = (_DWORD *)(gpsi + 2880LL);
                                              PointerDeviceSettings = v329;
                                              goto LABEL_603;
                                            }
                                            PointerDeviceSettings = v329;
                                          }
                                          v155 = (_DWORD *)(gpsi + 2104LL);
                                          goto LABEL_603;
                                        }
                                        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                                + 408)
                                                                    + 8LL)
                                                        + 244LL) & 1) == 0 )
                                        {
                                          PointerDeviceSettings = v329;
                                          goto LABEL_596;
                                        }
                                        PointerDeviceSettings = v329;
                                      }
                                      v155 = (_DWORD *)(gpsi + 2492LL);
LABEL_603:
                                      v112[4] = *v155;
                                      goto LABEL_1247;
                                    }
                                    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                            + 408)
                                                                + 8LL)
                                                    + 244LL) & 1) == 0 )
                                    {
                                      PointerDeviceSettings = v329;
                                      goto LABEL_577;
                                    }
                                    PointerDeviceSettings = v329;
                                  }
                                  v149 = (_DWORD *)(gpsi + 2500LL);
                                  goto LABEL_584;
                                }
                                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 408)
                                                            + 8LL)
                                                + 244LL) & 1) == 0 )
                                {
                                  PointerDeviceSettings = v329;
                                  goto LABEL_558;
                                }
                                PointerDeviceSettings = v329;
                              }
                              v143 = (_DWORD *)(gpsi + 2460LL);
                              goto LABEL_565;
                            }
                            if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                              || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1) == 0 )
                            {
                              PointerDeviceSettings = v329;
                              goto LABEL_539;
                            }
                            PointerDeviceSettings = v329;
                          }
                          v137 = (_DWORD *)(gpsi + 2496LL);
                          goto LABEL_546;
                        }
                        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                          || (v131 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL),
                              v128 = *(_DWORD *)(v131 + 244) & 1,
                              (*(_DWORD *)(v131 + 244) & 1) == 0) )
                        {
                          PointerDeviceSettings = v329;
                          goto LABEL_520;
                        }
                        PointerDeviceSettings = v329;
                      }
                      v132 = (_DWORD *)(gpsi + 2456LL);
                      goto LABEL_527;
                    }
                    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) == 0 )
                    {
                      PointerDeviceSettings = v329;
                      goto LABEL_501;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v124 = (_DWORD *)(gpsi + 2296LL);
                  goto LABEL_508;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v329;
                  goto LABEL_482;
                }
                PointerDeviceSettings = v329;
              }
              v118 = (_DWORD *)(gpsi + 2496LL);
              goto LABEL_489;
            case 0x2Du:
              v157 = Src;
              *(_DWORD *)Src = 108;
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x26uLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v158) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v159) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_616;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v158)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v160) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v161) + 776) & 0x4000) != 0 )
                {
LABEL_616:
                  if ( IsDPIDWMSysMet(0x26uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v163) + 776) & 0x2000) != 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v162 = (_DWORD *)(gpsi + 2808LL);
                      PointerDeviceSettings = v329;
                      goto LABEL_623;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v162 = (_DWORD *)(gpsi + 2032LL);
LABEL_623:
                  *((_DWORD *)v157 + 1) = *v162;
                  if ( (unsigned int)IsDPIAbsoluteSysMet(0x27uLL) )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v164) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v165) + 776) & 0x4000) != 0 )
                    {
                      goto LABEL_635;
                    }
                  }
                  else
                  {
                    if ( !IsDPIDWMSysMet(v164)
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v168) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v169) + 776) & 0x4000) != 0 )
                    {
LABEL_635:
                      if ( IsDPIDWMSysMet(0x27uLL)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v171) + 776) & 0x2000) != 0 )
                      {
                        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1) != 0 )
                        {
                          v170 = (_DWORD *)(gpsi + 2812LL);
                          PointerDeviceSettings = v329;
                          goto LABEL_642;
                        }
                        PointerDeviceSettings = v329;
                      }
                      v170 = (_DWORD *)(gpsi + 2036LL);
                      goto LABEL_642;
                    }
                    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) == 0 )
                    {
                      PointerDeviceSettings = v329;
                      goto LABEL_635;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v170 = (_DWORD *)(gpsi + 2424LL);
LABEL_642:
                  *((_DWORD *)v157 + 2) = *v170;
                  v172 = (gdwPUDFlags >> 21) & 1;
                  *((_DWORD *)v157 + 3) = v172;
                  v173 = GetDPIMetrics(v172, v166, v167);
                  GreExtGetObjectW(*(HBRUSH *)(v173 + 32), 92LL, (unsigned __int16 *)v157 + 8);
                  goto LABEL_1247;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v329;
                  goto LABEL_616;
                }
                PointerDeviceSettings = v329;
              }
              v162 = (_DWORD *)(gpsi + 2420LL);
              goto LABEL_623;
            case 0x2Fu:
              v184 = (int *)Src;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v333 = MonitorFromRect((int *)Src, 1u);
              }
              else
              {
                v333 = *(_QWORD *)(GetDispInfo(v13, CurrentProcessWin32Process, v8) + 88);
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v333) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v187) + 776) & 0x4000) != 0
                  || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (v185 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                      v187 = *(_DWORD *)(v185 + 244) & 1,
                      (*(_DWORD *)(v185 + 244) & 1) == 0) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v187) + 776) & 0x2000) != 0
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    && (v186 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL),
                        v187 = *(_DWORD *)(v186 + 244) & 1,
                        (*(_DWORD *)(v186 + 244) & 1) != 0) )
                  {
                    v184 = (int *)(v333 + 60);
                  }
                  else
                  {
                    v184 = (int *)(v333 + 28);
                  }
                }
                else
                {
                  v184 = (int *)(v333 + 44);
                }
              }
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v187) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v188) + 776) & 0x4000) != 0
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                || (v189 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                    v188 = *(_DWORD *)(v189 + 244) & 1,
                    (*(_DWORD *)(v189 + 244) & 1) == 0) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v188) + 776) & 0x2000) != 0
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v190 = (int *)(v333 + 60);
                }
                else
                {
                  v190 = (int *)(v333 + 28);
                }
              }
              else
              {
                v190 = (int *)(v333 + 44);
              }
              if ( (unsigned int)IntersectRect(&v344, v184, v190) && v344 == *(_OWORD *)v184 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v191) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v192) + 776) & 0x4000) != 0
                  || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (v193 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                      v192 = *(_DWORD *)(v193 + 244) & 1,
                      (*(_DWORD *)(v193 + 244) & 1) == 0) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v192) + 776) & 0x2000) != 0
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v194 = (_OWORD *)(v333 + 108);
                  }
                  else
                  {
                    v194 = (_OWORD *)(v333 + 76);
                  }
                }
                else
                {
                  v194 = (_OWORD *)(v333 + 92);
                }
                if ( *v194 == v344 )
                {
LABEL_717:
                  PointerDeviceSettings = 1;
                  goto LABEL_1247;
                }
                v195 = 0LL;
                if ( !a2 || (v195 = SnapshotMonitorRects()) != 0LL )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v194) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v196) + 776) & 0x4000) != 0
                    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    || (v197 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL),
                        v196 = *(_DWORD *)(v197 + 244) & 1,
                        (*(_DWORD *)(v197 + 244) & 1) == 0) )
                  {
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v196) + 776) & 0x2000) != 0 )
                    {
                      *(_OWORD *)(v333 + 108) = v344;
                      LogicalToPhysicalDPIRect(v333 + 76, &v344, 128LL, &v333);
                      v198 = v333 + 76;
                      v199 = v333 + 92;
                      v200 = 64LL;
LABEL_712:
                      PhysicalToLogicalDPIRect(v199, v198, v200, &v333);
                      DispInfo = GetDispInfo(v202, v201, v203);
                      if ( v333 == *(_QWORD *)(DispInfo + 88) )
                        SetDesktopMetrics();
                      if ( a2 )
                      {
                        PushW32ThreadLock((__int64)v195, v343, (__int64)Win32FreePool);
                        xxxDesktopRecalc(*(_QWORD *)(gptiCurrent + 408LL), (struct tagMONITORRECTS *)v195, v205, v206);
                        PopAndFreeAlwaysW32ThreadLock((__int64)v343);
                      }
                      updated = 1;
                      goto LABEL_717;
                    }
                    *(_OWORD *)(v333 + 76) = v344;
                    PhysicalToLogicalDPIRect(v333 + 92, v333 + 76, 64LL, &v333);
                  }
                  else
                  {
                    *(_OWORD *)(v333 + 92) = v344;
                    LogicalToPhysicalDPIRect(v333 + 76, &v344, 64LL, &v333);
                  }
                  v198 = v333 + 76;
                  v200 = 128LL;
                  v199 = v333 + 108;
                  goto LABEL_712;
                }
              }
              else
              {
LABEL_2:
                UserSetLastError(87);
              }
              return 0LL;
            case 0x30u:
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v175) + 776) & 0x4000) != 0 )
              {
                goto LABEL_657;
              }
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
              {
                v176 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
                v175 = *(_DWORD *)(v176 + 244) & 1;
                if ( (*(_DWORD *)(v176 + 244) & 1) != 0 )
                {
                  v179 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v175, v177, v178) + 88) + 92LL);
                  PointerDeviceSettings = v329;
                  goto LABEL_663;
                }
              }
              PointerDeviceSettings = v329;
LABEL_657:
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v175) + 776) & 0x2000) == 0 )
                goto LABEL_662;
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (v183 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                    v181 = *(_DWORD *)(v183 + 244) & 1,
                    (*(_DWORD *)(v183 + 244) & 1) != 0) )
              {
                v179 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v181, v180, v182) + 88) + 108LL);
                PointerDeviceSettings = v329;
              }
              else
              {
                PointerDeviceSettings = v329;
LABEL_662:
                v179 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v181, v180, v182) + 88) + 76LL);
              }
LABEL_663:
              *(_OWORD *)Src = *v179;
              goto LABEL_1247;
            case 0x32u:
              if ( a2 && a2 != 24 )
                return 0LL;
              v237 = Src;
              if ( !Src || *(_DWORD *)Src != 24 )
                return 0LL;
              *(_OWORD *)((char *)Src + 4) = xmmword_1C03222CC;
              v237[5] = dword_1C03222DC;
              goto LABEL_1247;
            case 0x33u:
              v238 = (struct tagFILTERKEYS *)Src;
              if ( a2 && a2 != 24 )
                return 0LL;
              if ( !Src || *(_DWORD *)Src != 24 || *((_DWORD *)Src + 2) && *((_DWORD *)Src + 5) )
                return 0LL;
              v239 = *((_DWORD *)Src + 1);
              if ( (v239 & 0x7F) != v239 )
                return 0LL;
              v240 = (xmmword_1C03222CC & 2) != 0 ? v239 | 2 : v239 & 0xFFFFFFFD;
              *((_DWORD *)Src + 1) = v240;
              if ( *((_DWORD *)v238 + 2) > 0x4E20u
                || *((_DWORD *)v238 + 3) > 0x4E20u
                || *((_DWORD *)v238 + 4) > 0x4E20u
                || *((_DWORD *)v238 + 5) > 0x4E20u )
              {
                return 0LL;
              }
              if ( v9 )
              {
                v241 = (struct _UNICODE_STRING *)CreateProfileUserName(v336);
                updated = SetFilterKeys(v241, v238);
                PointerDeviceSettings = updated;
                if ( !updated )
                  SetFilterKeys(v241, (struct tagFILTERKEYS *)&gFilterKeys);
                FreeProfileUserName(v241, v336);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gFilterKeys, v238, *(unsigned int *)v238);
                gFilterKeys = 24;
                if ( (xmmword_1C03222CC & 1) == 0 )
                  StopFilterKeysTimers();
                SetAccessEnabledFlag();
                if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
                  xxxCallHook(0xBu, 2LL, 0LL, 0xAu);
                PostShellHookMessagesEx(0xBu, 2LL, 0LL);
              }
              goto LABEL_1247;
            case 0x34u:
              if ( (a2 & 0xFFFFFFF7) != 0 || !Src || *(_DWORD *)Src != 8 )
                return 0LL;
              *((_DWORD *)Src + 1) = dword_1C03222BC;
              goto LABEL_1247;
            case 0x35u:
              v247 = (unsigned int *)Src;
              if ( (a2 & 0xFFFFFFF7) != 0 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 8 )
                return 0LL;
              v248 = *((_DWORD *)Src + 1);
              if ( (v248 & 0x3F) != v248 )
                return 0LL;
              if ( (dword_1C03222BC & 2) != 0 )
                v249 = v248 | 2;
              else
                v249 = v248 & 0xFFFFFFFD;
              *((_DWORD *)Src + 1) = v249;
              if ( v9 )
              {
                RtlStringCchPrintfW(Dest, 40LL, L"%d", v249);
                updated = FastWriteProfileStringW(0LL, 17LL, L"Flags", Dest);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gToggleKeys, v247, *v247);
                gToggleKeys = 8;
                SetAccessEnabledFlag();
              }
              goto LABEL_1247;
            case 0x36u:
              if ( a2 && a2 != 28 )
                return 0LL;
              v250 = (char *)Src;
              if ( !Src || *(_DWORD *)Src != 28 )
                return 0LL;
              *(_OWORD *)((char *)Src + 4) = xmmword_1C032229C;
              *(_QWORD *)(v250 + 20) = qword_1C03222AC;
              v251 = *((_DWORD *)v250 + 1) & 0x4CFFFFFF;
              *((_DWORD *)v250 + 1) = v251;
              if ( gbMKMouseMode )
                *((_DWORD *)v250 + 1) = v251 | 0x80000000;
              *((_DWORD *)v250 + 1) |= ((gwMKButtonState & 3) << 24) | ((gwMKCurrentButton & 3) << 28);
              goto LABEL_1247;
            case 0x37u:
              v252 = (struct tagMOUSEKEYS *)Src;
              if ( a2 && a2 != 28 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 28 )
                return 0LL;
              v253 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
              *((_DWORD *)Src + 1) = v253;
              if ( (unsigned __int8)v253 != v253 )
                return 0LL;
              if ( (xmmword_1C032229C & 2) != 0 )
                *((_DWORD *)v252 + 1) |= 2u;
              else
                *((_DWORD *)v252 + 1) = v253 & 0xFFFFFFFD;
              if ( (unsigned int)(*((_DWORD *)v252 + 2) - 10) > 0x15E
                || (unsigned int)(*((_DWORD *)v252 + 3) - 1000) > 0xFA0 )
              {
                return 0LL;
              }
              if ( v9 )
              {
                v254 = (struct _UNICODE_STRING *)CreateProfileUserName(v336);
                updated = SetMouseKeys(v254, v252);
                PointerDeviceSettings = updated;
                if ( !updated )
                  SetMouseKeys(v254, (struct tagMOUSEKEYS *)&gMouseKeys);
                FreeProfileUserName(v254, v336);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gMouseKeys, v252, *(unsigned int *)v252);
                gMouseKeys = 28;
                CalculateMouseTable();
                if ( (xmmword_1C032229C & 1) != 0 )
                {
                  gbMKMouseMode = (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)(unsigned __int8)gNumLockVk >> 2]) != 0) != (unsigned __int8)xmmword_1C032229C >> 7;
                  MKShowMouseCursor();
                }
                else
                {
                  MKHideMouseCursor();
                }
                SetAccessEnabledFlag();
                if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
                  xxxCallHook(0xBu, 3LL, 0LL, 0xAu);
                PostShellHookMessagesEx(0xBu, 3LL, 0LL);
              }
              goto LABEL_1247;
            case 0x38u:
              *(_DWORD *)Src = (gdwPUDFlags >> 15) & 1;
              goto LABEL_1247;
            case 0x39u:
              if ( (_DWORD)v333 )
              {
                RtlStringCchPrintfW(Dest, 40LL, L"%d", a2 == 1);
                updated = FastWriteProfileStringW(0LL, 20LL, L"On", Dest);
                PointerDeviceSettings = updated;
                v329 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              if ( a2 == 1 )
                gdwPUDFlags |= 0x8000u;
              else
                gdwPUDFlags &= ~0x8000u;
              SetAccessEnabledFlag();
              v261 = (*v260 >> 15) & 1;
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x46uLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v262) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v263) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_926;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v262)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v264) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v265) + 776) & 0x4000) != 0 )
                {
LABEL_926:
                  if ( IsDPIDWMSysMet(0x46uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v267) + 776) & 0x2000) != 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v266 = (int *)(gpsi + 2936LL);
                      PointerDeviceSettings = v329;
LABEL_933:
                      *v266 = v261;
                      goto LABEL_1247;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v266 = (int *)(gpsi + 2160LL);
                  goto LABEL_933;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v329;
                  goto LABEL_926;
                }
                PointerDeviceSettings = v329;
              }
              v266 = (int *)(gpsi + 2548LL);
              goto LABEL_933;
            case 0x3Au:
              v242 = Src;
              if ( (a2 & 0xFFFFFFF7) != 0 || !Src || *(_DWORD *)Src != 8 )
                return 0LL;
              *((_DWORD *)Src + 1) = dword_1C03222C4;
              v242[3] = 0;
              *((_DWORD *)v242 + 1) |= ((unsigned __int8)gLockBits << 16) | ((unsigned __int8)gLatchBits << 24);
              goto LABEL_1247;
            case 0x3Bu:
              v243 = (unsigned int *)Src;
              v244 = dword_1C03222C4 & 1;
              if ( (a2 & 0xFFFFFFF7) != 0 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 8 )
                return 0LL;
              *((_WORD *)Src + 3) = 0;
              v245 = v243[1];
              if ( (v245 & 0x1FF) != v245 )
                return 0LL;
              if ( (dword_1C03222C4 & 2) != 0 )
                v246 = v245 | 2;
              else
                v246 = v245 & 0xFFFFFFFD;
              v243[1] = v246;
              if ( v9 )
              {
                RtlStringCchPrintfW(Dest, 40LL, L"%d", v246);
                updated = FastWriteProfileStringW(0LL, 14LL, L"Flags", Dest);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gStickyKeys, v243, *v243);
                gStickyKeys = 8;
                if ( (dword_1C03222C4 & 1) == 0 && v244 )
                  xxxTurnOffStickyKeys();
                SetAccessEnabledFlag();
                if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
                  xxxCallHook(0xBu, 1LL, 0LL, 0xAu);
                PostShellHookMessagesEx(0xBu, 1LL, 0LL);
              }
              goto LABEL_1247;
            case 0x3Cu:
              if ( a2 && a2 != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              *(_QWORD *)((char *)Src + 4) = qword_1C032228C;
              goto LABEL_1247;
            case 0x3Du:
              if ( a2 && a2 != 12
                || !Src
                || *(_DWORD *)Src != 12
                || (*((_DWORD *)Src + 1) & 3) != *((_DWORD *)Src + 1)
                || *((_DWORD *)Src + 2) > 0x36EE80u )
              {
                return 0LL;
              }
              if ( (_DWORD)v333 )
              {
                v258 = CreateProfileUserName(v336);
                RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)Src + 1));
                updated = FastWriteProfileStringW(v258, 18LL, L"Flags", Dest);
                RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)Src + 2));
                v259 = FastWriteProfileStringW(v258, 18LL, L"TimeToWait", Dest);
                v289 = (v259 & updated) == 0;
                updated &= v259;
                PointerDeviceSettings = updated;
                if ( v289 )
                {
                  RtlStringCchPrintfW(Dest, 40LL, L"%d", (unsigned int)qword_1C032228C);
                  FastWriteProfileStringW(v258, 18LL, L"Flags", Dest);
                  RtlStringCchPrintfW(Dest, 40LL, L"%d", HIDWORD(qword_1C032228C));
                  FastWriteProfileStringW(v258, 18LL, L"TimeToWait", Dest);
                }
                FreeProfileUserName(v258, v336);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gAccessTimeOut, Src, *(unsigned int *)Src);
                gAccessTimeOut = 12;
                SetAccessEnabledFlag();
                AccessTimeOutReset();
              }
              goto LABEL_1247;
            case 0x40u:
              if ( a2 && a2 != 56 )
                return 0LL;
              v270 = (char *)Src;
              if ( !Src || *(_DWORD *)Src != 56 )
                return 0LL;
              *(_OWORD *)((char *)Src + 4) = xmmword_1C0322254;
              *(_OWORD *)(v270 + 20) = unk_1C0322264;
              *(_OWORD *)(v270 + 36) = xmmword_1C0322274;
              *((_DWORD *)v270 + 13) = dword_1C0322284;
              goto LABEL_1247;
            case 0x41u:
              v271 = (struct tagSOUNDSENTRYW *)Src;
              if ( a2 && a2 != 56 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 56 )
                return 0LL;
              v272 = *((_DWORD *)Src + 1);
              if ( (v272 & 7) != v272 || *((_DWORD *)Src + 8) > 3u || *((_DWORD *)Src + 2) || *((_DWORD *)Src + 5) )
                return 0LL;
              if ( (xmmword_1C0322254 & 2) != 0 )
                v273 = v272 | 2;
              else
                v273 = v272 & 0xFFFFFFFD;
              *((_DWORD *)Src + 1) = v273;
              if ( v9 )
              {
                v274 = (struct _UNICODE_STRING *)CreateProfileUserName(v336);
                updated = SetSoundSentry(v274, v271);
                PointerDeviceSettings = updated;
                if ( !updated )
                  SetSoundSentry(v274, (struct tagSOUNDSENTRYW *)&gSoundSentry);
                FreeProfileUserName(v274, v336);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gSoundSentry, v271, *(unsigned int *)v271);
                gSoundSentry = 56;
                SetAccessEnabledFlag();
              }
              goto LABEL_1247;
            case 0x42u:
              v255 = Src;
              *((_DWORD *)Src + 1) = gHighContrast[1];
              v256 = (_OWORD *)v255[1];
              v257 = gHighContrastDefaultScheme;
              do
              {
                *v256 = *(_OWORD *)v257;
                v256[1] = *((_OWORD *)v257 + 1);
                v256[2] = *((_OWORD *)v257 + 2);
                v256[3] = *((_OWORD *)v257 + 3);
                v256[4] = *((_OWORD *)v257 + 4);
                v256[5] = *((_OWORD *)v257 + 5);
                v256[6] = *((_OWORD *)v257 + 6);
                v256 += 8;
                *(v256 - 1) = *((_OWORD *)v257 + 7);
                v257 += 64;
                --v14;
              }
              while ( v14 );
              v15 = v327;
              v24 = v328;
              goto LABEL_1249;
            case 0x43u:
              updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v9, &v329);
              PointerDeviceSettings = v329;
              goto LABEL_1247;
            case 0x44u:
              *(_DWORD *)Src = (gdwPUDFlags >> 17) & 1;
              goto LABEL_1247;
            case 0x45u:
              if ( (_DWORD)v333 )
              {
                v268 = L"1";
                if ( !a2 )
                  v268 = L"0";
                updated = FastWriteProfileStringW(0LL, 27LL, L"On", v268);
                PointerDeviceSettings = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              v289 = a2 == 0;
              v15 = v327;
              if ( v289 )
                gdwPUDFlags &= ~0x20000u;
              else
                gdwPUDFlags |= 0x20000u;
              goto LABEL_1248;
            case 0x46u:
              *(_DWORD *)Src = (gdwPUDFlags >> 18) & 1;
              goto LABEL_1247;
            case 0x47u:
              if ( (_DWORD)v333 )
              {
                v269 = L"1";
                if ( !a2 )
                  v269 = L"0";
                updated = FastWriteProfileStringW(0LL, 28LL, L"On", v269);
                PointerDeviceSettings = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              v289 = a2 == 0;
              v15 = v327;
              if ( v289 )
                gdwPUDFlags &= ~0x40000u;
              else
                gdwPUDFlags |= 0x40000u;
              goto LABEL_1248;
            case 0x48u:
              v104 = Src;
              if ( !Src || a2 != 8 )
                return 0LL;
              *(_DWORD *)Src = 8;
              v104[1] = HIWORD(gdwPUDFlags) & 1;
              goto LABEL_1247;
            case 0x4Au:
              *(_DWORD *)Src = (gulFontInformation >> 1) & 1;
              goto LABEL_1247;
            case 0x4Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              v27 = a2 != 0 ? 2 : 0;
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 200LL, v27);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                GreSetFontEnumeration(v27 | 4);
              goto LABEL_1247;
            case 0x4Cu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
                v329 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
                PointerDeviceSettings = updated;
                v329 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x44uLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_305;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v58)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0 )
                {
LABEL_305:
                  if ( IsDPIDWMSysMet(0x44uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) != 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v62 = (unsigned int *)(gpsi + 2928LL);
                      PointerDeviceSettings = v329;
LABEL_312:
                      *v62 = a2;
LABEL_1247:
                      v15 = v327;
                      goto LABEL_1248;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v62 = (unsigned int *)(gpsi + 2152LL);
                  goto LABEL_312;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v329;
                  goto LABEL_305;
                }
                PointerDeviceSettings = v329;
              }
              v62 = (unsigned int *)(gpsi + 2540LL);
              goto LABEL_312;
            case 0x4Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
                v329 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
                PointerDeviceSettings = updated;
                v329 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_330;
                }
              }
              else
              {
                if ( !IsDPIDWMSysMet(v64)
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) != 0 )
                {
LABEL_330:
                  if ( IsDPIDWMSysMet(0x45uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x2000) != 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v68 = (unsigned int *)(gpsi + 2932LL);
                      PointerDeviceSettings = v329;
LABEL_337:
                      *v68 = a2;
                      goto LABEL_1247;
                    }
                    PointerDeviceSettings = v329;
                  }
                  v68 = (unsigned int *)(gpsi + 2156LL);
                  goto LABEL_337;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v329;
                  goto LABEL_330;
                }
                PointerDeviceSettings = v329;
              }
              v68 = (unsigned int *)(gpsi + 2544LL);
              goto LABEL_337;
            case 0x57u:
              v275 = CreateProfileUserName(v336);
              xxxUpdateSystemCursorsFromRegistry(v275);
              FreeProfileUserName(v275, v336);
              goto LABEL_1247;
            case 0x58u:
              v276 = CreateProfileUserName(v336);
              xxxUpdateSystemIconsFromRegistry(v276);
              FreeProfileUserName(v276, v336);
              goto LABEL_1247;
            case 0x59u:
              if ( !gspklBaseLayout )
              {
                UserSetLastError(21);
                return 0LL;
              }
              *(_QWORD *)Src = *(_QWORD *)(gspklBaseLayout + 40LL);
              goto LABEL_1247;
            case 0x5Au:
              v28 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src);
              if ( !v28 )
                return 0LL;
              if ( PointerDeviceSettings )
                HMAssignmentLock(gspklBaseLayout, v28);
              goto LABEL_1247;
            case 0x5Bu:
              return GetKbdLangSwitch(0LL);
            case 0x5Du:
              if ( (_DWORD)v333 )
              {
                RtlStringCchPrintfW(Dest, 40LL, L"%d", a2);
                updated = FastUpdateWinIni(0LL, 12LL, 613LL, Dest);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                SetMouseTrails(a2);
              goto LABEL_1247;
            case 0x5Eu:
              v17 = gMouseTrails + 1;
              if ( !gMouseTrails )
                v17 = 0;
              *(_DWORD *)Src = v17;
              goto LABEL_1247;
            case 0x5Fu:
              *(_DWORD *)Src = (*(unsigned __int8 *)(gpsi + 7292LL) >> 1) & 1;
              goto LABEL_1247;
            case 0x60u:
              v23 = a2 != 0;
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
                PointerDeviceSettings = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              v15 = v327;
              v24 = v328;
              if ( v23 )
                *(_DWORD *)(gpsi + 7292LL) |= 2u;
              else
                *(_DWORD *)(gpsi + 7292LL) &= ~2u;
              goto LABEL_1249;
            case 0x62u:
              *(_DWORD *)Src = gcxMouseHover;
              goto LABEL_1247;
            case 0x63u:
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gcxMouseHover = a2;
              goto LABEL_1247;
            case 0x64u:
              *(_DWORD *)Src = gcyMouseHover;
              goto LABEL_1247;
            case 0x65u:
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gcyMouseHover = a2;
              goto LABEL_1247;
            case 0x66u:
              *(_DWORD *)Src = gdtMouseHover;
              goto LABEL_1247;
            case 0x67u:
              if ( a2 >= 0xA )
              {
                v277 = a2;
                if ( a2 > 0x7FFFFFFF )
                  v277 = 0x7FFFFFFF;
              }
              else
              {
                v277 = 10;
              }
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 93LL, v277);
                PointerDeviceSettings = updated;
              }
              v15 = v327;
              if ( PointerDeviceSettings )
                gdtMouseHover = v277;
              goto LABEL_1248;
            case 0x68u:
              *(_DWORD *)Src = *(_DWORD *)(gpsi + 4004LL);
              goto LABEL_1247;
            case 0x69u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 14LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 14LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                *(_DWORD *)(gpsi + 4004LL) = a2;
              goto LABEL_1247;
            case 0x6Au:
              *(_DWORD *)Src = gdtMNDropDown;
              goto LABEL_1247;
            case 0x6Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gdtMNDropDown = a2;
              goto LABEL_1247;
            case 0x6Cu:
              *(_DWORD *)Src = *(_DWORD *)(gpsi + 4008LL);
              goto LABEL_1247;
            case 0x6Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                *(_DWORD *)(gpsi + 4008LL) = a2;
              goto LABEL_1247;
            case 0x6Eu:
              *(_DWORD *)Src = gfIMEShowStatus != 0;
              goto LABEL_1247;
            case 0x6Fu:
              PointerDeviceSettings = xxxSetIMEShowStatus(a2 != 0, v9, &updated);
              goto LABEL_1247;
            case 0x70u:
              *(_DWORD *)Src = gMouseSensitivity;
              goto LABEL_1247;
            case 0x71u:
              v16 = (int)Src;
              if ( (char *)Src - 1 > (char *)0x13 )
                return 0LL;
              if ( (_DWORD)v333 )
              {
                RtlStringCchPrintfW(Dest, 40LL, L"%d", Src);
                updated = FastUpdateWinIni(0LL, 12LL, 608LL, Dest);
                PointerDeviceSettings = updated;
                v16 = (int)Src;
              }
              if ( PointerDeviceSettings )
              {
                gMouseSensitivity = v16;
                gMouseSensitivityFactor = CalculateMouseSensitivity(v16);
                ResetMouseAccelerationCurves();
              }
              goto LABEL_1247;
            case 0x72u:
              *(_DWORD *)Src = gppiScreenSaver != 0LL;
              goto LABEL_1247;
            case 0x73u:
              if ( g_pWallpaperSettings )
              {
                RtlStringCchCopyW((char *)Src, 260LL, (char *)(g_pWallpaperSettings + 4LL));
              }
              else
              {
                v55 = CreateProfileUserName(v336);
                LoadWallpaperFilenameFromRegistry(v55, (unsigned __int16 *)Src, 0x104u);
LABEL_262:
                FreeProfileUserName(v55, v336);
              }
              goto LABEL_1247;
            case 0x74u:
              if ( a2 && a2 != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              *(_QWORD *)((char *)Src + 4) = qword_1C0322244;
              goto LABEL_1247;
            case 0x75u:
              if ( a2 && a2 != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              if ( (_DWORD)v333 )
              {
                v278 = CreateProfileUserName(v336);
                v279 = v278;
                v280 = L"1";
                v281 = L"1";
                if ( !*((_DWORD *)Src + 1) )
                  v281 = L"0";
                updated = FastWriteProfileStringW(v278, 48LL, L"On", v281);
                RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)Src + 2));
                v282 = FastWriteProfileStringW(v279, 48LL, L"Locale", Dest);
                v289 = (v282 & updated) == 0;
                updated &= v282;
                PointerDeviceSettings = updated;
                if ( v289 )
                {
                  if ( !(_DWORD)qword_1C0322244 )
                    v280 = L"0";
                  FastWriteProfileStringW(v279, 48LL, L"On", v280);
                  RtlStringCchPrintfW(Dest, 40LL, L"%d", HIDWORD(qword_1C0322244));
                  FastWriteProfileStringW(v279, 48LL, L"Locale", Dest);
                }
                FreeProfileUserName(v279, v336);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gAudioDescription, Src, *(unsigned int *)Src);
                gAudioDescription = 12;
              }
              goto LABEL_1247;
            case 0x76u:
              *(_DWORD *)Src = (*gpsi >> 9) & 1;
              goto LABEL_1247;
            case 0x77u:
              if ( gdwRITdemonLockState && !v11 )
                goto LABEL_176;
              v54 = a2 != 0;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
                PointerDeviceSettings = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_1247;
              v15 = v327;
              v24 = v328;
              if ( v54 )
                *gpsi |= 0x200u;
              else
                *gpsi &= ~0x200u;
              goto LABEL_1249;
            case 0x78u:
              *(_DWORD *)Src = gdwHungAppTimeout;
              goto LABEL_1247;
            case 0x79u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gdwHungAppTimeout = a2;
              goto LABEL_1247;
            case 0x7Au:
              *(_DWORD *)Src = gdwWaitToKillTimeout;
              goto LABEL_1247;
            case 0x7Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gdwWaitToKillTimeout = a2;
              goto LABEL_1247;
            case 0x7Cu:
              *(_DWORD *)Src = gdwWaitToKillServiceTimeout;
              goto LABEL_1247;
            case 0x7Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gdwWaitToKillServiceTimeout = a2;
              goto LABEL_1247;
            case 0x7Eu:
              *(_DWORD *)Src = gWinArrGlobal[0];
              goto LABEL_1247;
            case 0x7Fu:
              if ( a2 > *(_DWORD *)(gpDispInfo + 184LL)
                || a2 > dword_1C031B134
                || a2 > dword_1C031B138
                || a2 > dword_1C031B140 )
              {
                goto LABEL_1247;
              }
              UpdateThresholdFromMetric(v9, &updated, &v329, 0x10u, a2, 0);
              goto LABEL_1066;
            case 0x80u:
              *(_DWORD *)Src = dword_1C031B134;
              goto LABEL_1247;
            case 0x81u:
              if ( a2 > *(_DWORD *)(gpDispInfo + 184LL)
                || a2 < gWinArrGlobal[0]
                || a2 > dword_1C031B13C
                || a2 > dword_1C031B144 )
              {
                goto LABEL_1247;
              }
              UpdateThresholdFromMetric(v9, &updated, &v329, 0x11u, a2, 1);
              goto LABEL_1066;
            case 0x82u:
              *(_DWORD *)Src = dword_1C031B14C & 1;
              goto LABEL_1247;
            case 0x83u:
              v283 = 18;
              LODWORD(v14) = 1;
              goto LABEL_1077;
            case 0x84u:
              *(_DWORD *)Src = dword_1C031B138;
              goto LABEL_1247;
            case 0x85u:
              if ( a2 > *(_DWORD *)(gpDispInfo + 184LL) || a2 > dword_1C031B13C || a2 < gWinArrGlobal[0] )
                goto LABEL_1247;
              UpdateThresholdFromMetric(v9, &updated, &v329, 0x13u, a2, 2);
              goto LABEL_1066;
            case 0x86u:
              *(_DWORD *)Src = dword_1C031B13C;
              goto LABEL_1247;
            case 0x87u:
              if ( a2 > *(_DWORD *)(gpDispInfo + 184LL) || a2 < dword_1C031B138 || a2 < dword_1C031B134 )
                goto LABEL_1247;
              UpdateThresholdFromMetric(v9, &updated, &v329, 0x14u, a2, 3);
              goto LABEL_1066;
            case 0x88u:
              *(_DWORD *)Src = dword_1C031B140;
              goto LABEL_1247;
            case 0x89u:
              if ( a2 > *(_DWORD *)(gpDispInfo + 184LL) || a2 > dword_1C031B144 || a2 < gWinArrGlobal[0] )
                goto LABEL_1247;
              UpdateThresholdFromMetric(v9, &updated, &v329, 0x15u, a2, 4);
              goto LABEL_1066;
            case 0x8Au:
              *(_DWORD *)Src = dword_1C031B144;
              goto LABEL_1247;
            case 0x8Bu:
              if ( a2 > *(_DWORD *)(gpDispInfo + 184LL) || a2 < dword_1C031B140 || a2 < dword_1C031B134 )
                goto LABEL_1247;
              UpdateThresholdFromMetric(v9, &updated, &v329, 0x16u, a2, 5);
LABEL_1066:
              PointerDeviceSettings = v329;
              goto LABEL_1247;
            case 0x8Cu:
              *(_DWORD *)Src = ((unsigned __int8)dword_1C031B14C >> 1) & 1;
              goto LABEL_1247;
            case 0x8Du:
              v283 = 624;
              goto LABEL_1077;
            case 0x8Eu:
              *(_DWORD *)Src = ((unsigned __int8)dword_1C031B14C >> 2) & 1;
              goto LABEL_1247;
            case 0x8Fu:
              v283 = 626;
              LODWORD(v14) = 4;
              goto LABEL_1077;
            case 0x90u:
              *(_DWORD *)Src = ((unsigned __int8)dword_1C031B14C >> 3) & 1;
              goto LABEL_1247;
            case 0x91u:
              v283 = 625;
              LODWORD(v14) = 8;
LABEL_1077:
              if ( (unsigned int)CheckDesktopPolicy(0LL, v283) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, v283, a2);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                v284 = dword_1C031B14C;
                if ( a2 )
                  v285 = v14 | dword_1C031B14C;
                else
                  v285 = ~(_DWORD)v14 & dword_1C031B14C;
                dword_1C031B14C = v285;
                PostWindowArrangementCheck(v284);
              }
              goto LABEL_1247;
            case 0x92u:
            case 0x94u:
            case 0x96u:
            case 0x98u:
            case 0x9Au:
            case 0x9Cu:
              v15 = v327;
              PointerDeviceSettings = ReadPointerDeviceSettings(v327, (__int64)Src, (unsigned __int16 *)v8);
              goto LABEL_1248;
            case 0x93u:
            case 0x95u:
            case 0x97u:
            case 0x99u:
            case 0x9Bu:
            case 0x9Du:
              v15 = v327;
              updated = WritePointerDeviceSettings(v327, Src, v8);
              goto LABEL_1248;
            case 0x9Eu:
            case 0xA5u:
            case 0xA7u:
              if ( (int)DrvDisplayConfigGetScaleFactorOverrides(v346, 1LL, v8) < 0 )
                return 0LL;
              v289 = a2 == 158;
              v15 = v327;
              if ( v289 )
              {
                *(_DWORD *)Src = HIDWORD(v347);
              }
              else
              {
                v286 = Src;
                *(_QWORD *)Src = v347;
                v286[2] = v348;
              }
              goto LABEL_1248;
            case 0x9Fu:
            case 0xA6u:
              if ( a2 + 11 > 0x16 )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
              {
                v9 = 0;
                PointerDeviceSettings = 0;
              }
              if ( !v9 )
                goto LABEL_1247;
              v350 = a2;
              v331 = a2 != 159;
              if ( (int)DrvDisplayConfigSetScaleFactorOverride(v349, &v331) < 0 )
              {
                return 0;
              }
              else
              {
                if ( a2 == 159 )
                  TraceLoggingSPISetModernDPIOverrideEvent(v287, 159);
                else
                  TraceLoggingSPISetDesktopDPIOverrideEvent(v287, a2);
                return 1;
              }
            case 0xA0u:
              *(_DWORD *)Src = 6;
              goto LABEL_1247;
            case 0xA1u:
              updated = 0;
              PointerDeviceSettings = 1;
              goto LABEL_1247;
            case 0xA2u:
              v207 = GetDispInfo(v13, CurrentProcessWin32Process, v8);
              if ( IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(v207 + 88) + 512LL)) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v208) + 776) & 0x2000) == 0
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v209) + 776) & 0x4000) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
                  {
                    v210 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
                    v209 = *(_DWORD *)(v210 + 244) & 1;
                    if ( (*(_DWORD *)(v210 + 244) & 1) != 0 )
                    {
                      v213 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v209, v211, v212) + 88) + 44LL);
                      PointerDeviceSettings = v329;
                      goto LABEL_743;
                    }
                  }
                  PointerDeviceSettings = v329;
                }
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v209) + 776) & 0x2000) != 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
                  {
                    v217 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
                    v215 = *(_DWORD *)(v217 + 244) & 1;
                    if ( (*(_DWORD *)(v217 + 244) & 1) != 0 )
                    {
                      v213 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v215, v214, v216) + 88) + 60LL);
                      PointerDeviceSettings = v329;
                      goto LABEL_743;
                    }
                  }
                  PointerDeviceSettings = v329;
                }
                v213 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v215, v214, v216) + 88) + 28LL);
              }
              else
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v208) + 776) & 0x2000) == 0
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v218) + 776) & 0x4000) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
                  {
                    v219 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
                    v218 = *(_DWORD *)(v219 + 244) & 1;
                    if ( (*(_DWORD *)(v219 + 244) & 1) != 0 )
                    {
                      v213 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v218, v220, v221) + 88) + 528LL);
                      PointerDeviceSettings = v329;
                      goto LABEL_743;
                    }
                  }
                  PointerDeviceSettings = v329;
                }
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v218) + 776) & 0x2000) != 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
                  {
                    v225 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
                    v223 = *(_DWORD *)(v225 + 244) & 1;
                    if ( (*(_DWORD *)(v225 + 244) & 1) != 0 )
                    {
                      v213 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v223, v222, v224) + 88) + 544LL);
                      PointerDeviceSettings = v329;
                      goto LABEL_743;
                    }
                  }
                  PointerDeviceSettings = v329;
                }
                v213 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v223, v222, v224) + 88) + 512LL);
              }
LABEL_743:
              *(_OWORD *)Src = *v213;
              goto LABEL_1247;
            case 0xA3u:
              v226 = (int *)Src;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v334 = MonitorFromRect((int *)Src, 1u);
              }
              else
              {
                v334 = *(_QWORD *)(GetDispInfo(v13, CurrentProcessWin32Process, v8) + 88);
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v334) + 776) & 0x2000) == 0
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v229) + 776) & 0x4000) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
                  {
                    v227 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
                    v229 = *(_DWORD *)(v227 + 244) & 1;
                    if ( (*(_DWORD *)(v227 + 244) & 1) != 0 )
                    {
                      v226 = (int *)(v334 + 44);
                      PointerDeviceSettings = v329;
                      goto LABEL_760;
                    }
                  }
                  PointerDeviceSettings = v329;
                }
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v229) + 776) & 0x2000) != 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
                  {
                    v228 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
                    v229 = *(_DWORD *)(v228 + 244) & 1;
                    if ( (*(_DWORD *)(v228 + 244) & 1) != 0 )
                    {
                      v226 = (int *)(v334 + 60);
                      PointerDeviceSettings = v329;
                      goto LABEL_760;
                    }
                  }
                  PointerDeviceSettings = v329;
                }
                v226 = (int *)(v334 + 28);
              }
LABEL_760:
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v229) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v230) + 776) & 0x4000) != 0 )
              {
                goto LABEL_766;
              }
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
              {
                v231 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
                v230 = *(_DWORD *)(v231 + 244) & 1;
                if ( (*(_DWORD *)(v231 + 244) & 1) != 0 )
                {
                  v232 = (int *)(v334 + 44);
                  PointerDeviceSettings = v329;
                  goto LABEL_772;
                }
              }
              PointerDeviceSettings = v329;
LABEL_766:
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v230) + 776) & 0x2000) == 0 )
                goto LABEL_771;
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1) != 0 )
              {
                v232 = (int *)(v334 + 60);
                PointerDeviceSettings = v329;
              }
              else
              {
                PointerDeviceSettings = v329;
LABEL_771:
                v232 = (int *)(v334 + 28);
              }
LABEL_772:
              if ( !(unsigned int)IntersectRect(&v345, v226, v232) || v345 != *(_OWORD *)v226 )
                goto LABEL_2;
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v233) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v234) + 776) & 0x4000) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
                {
                  v235 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
                  v234 = *(_DWORD *)(v235 + 244) & 1;
                  if ( (*(_DWORD *)(v235 + 244) & 1) != 0 )
                  {
                    *(_OWORD *)(v334 + 528) = v345;
                    LogicalToPhysicalDPIRect(v334 + 512, &v345, 64LL, &v334);
                    PhysicalToLogicalDPIRect(v334 + 544, v334 + 512, 128LL, &v334);
                    PointerDeviceSettings = v329;
                    goto LABEL_1247;
                  }
                }
                PointerDeviceSettings = v329;
              }
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v234) + 776) & 0x2000) != 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  *(_OWORD *)(v334 + 544) = v345;
                  LogicalToPhysicalDPIRect(v334 + 512, &v345, 128LL, &v334);
                  PhysicalToLogicalDPIRect(v334 + 528, v334 + 512, 64LL, &v334);
                  PointerDeviceSettings = v329;
                  goto LABEL_1247;
                }
                PointerDeviceSettings = v329;
              }
              *(_OWORD *)(v334 + 512) = v345;
              PhysicalToLogicalDPIRect(v334 + 528, v334 + 512, 64LL, &v334);
              PhysicalToLogicalDPIRect(v334 + 544, v334 + 512, 128LL, &v334);
              goto LABEL_1247;
            case 0xA4u:
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
                || (v106 = 0, (*(_DWORD *)(PsGetCurrentProcessWin32Process(v105) + 776) & 0x4000) != 0) )
              {
                v106 = 1;
              }
              v107 = Src;
              v108 = 0;
              LOWORD(v109) = 1;
              if ( !Src )
                return 0LL;
              v110 = v334;
              if ( v106 )
              {
                v108 = (*(_DWORD *)(v334 + 776) >> 13) & 1;
                v109 = (*(_DWORD *)(v334 + 776) >> 14) & 1;
                *(_DWORD *)(v334 + 776) &= 0xFFFF9FFF;
              }
              GetWindowNCMetrics((__int64)v107);
              if ( v106 )
              {
                v111 = *(_DWORD *)(v110 + 776) ^ (*(_DWORD *)(v110 + 776) ^ (v108 << 13)) & 0x2000;
                *(_DWORD *)(v110 + 776) = v111 ^ ((unsigned __int16)v111 ^ (unsigned __int16)((_WORD)v109 << 14)) & 0x4000;
              }
              goto LABEL_1247;
            case 0xA8u:
              *(_DWORD *)Src = gbLockScreenAutoLockActive;
              goto LABEL_1247;
            case 0xA9u:
              if ( gfSwitchInProgress )
                return 0LL;
              if ( gdwRITdemonLockState && !v11 )
              {
LABEL_176:
                UserSetLastError(329);
                return 0LL;
              }
              gbLockScreenAutoLockActive = a2 != 0;
              if ( (_DWORD)v333 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
                PointerDeviceSettings = updated;
              }
              goto LABEL_1247;
            case 0xAAu:
              *(_DWORD *)Src = gbLockScreenActive;
              goto LABEL_1247;
            case 0xABu:
              if ( *(_DWORD *)(CurrentProcessWin32Process + 56) != gpidLogonUI )
                return 0LL;
              v50 = a2 != 0;
              v51 = (unsigned int *)gbLockScreenActive;
              gbLockScreenActive = v50;
              if ( v50 )
              {
                if ( !gptiForeground
                  || (v52 = *(_QWORD *)(gptiForeground + 384LL)) == 0
                  || (v53 = *(_QWORD *)(v52 + 80)) == 0
                  || (unsigned int)IsWindowUnderActiveLockScreen(v53) )
                {
                  xxxSetForegroundWindow2(0LL, 0LL, 0, 0);
                  v51 = (unsigned int *)gbLockScreenActive;
                }
                ClearKeyboardStates();
              }
              GreLddmProcessLockScreen(*v51, CurrentProcessWin32Process, v8);
              goto LABEL_1247;
            default:
              goto LABEL_1130;
          }
        }
        if ( v327 == 4135 )
        {
          if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
          {
            v9 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 112LL, a2 != 0);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            gbBlockSendInputResets = a2 != 0;
          goto LABEL_1247;
        }
LABEL_1130:
        v15 = v327;
        if ( v327 < 0xAC )
        {
          UserSetLastError(1439);
          return 0LL;
        }
        if ( (v327 & 1) == 0 )
        {
          if ( (v327 & 0x3000) != 0x1000 )
          {
            v292 = (int *)UPDWORDPointer(v327);
            v293 = *v292;
            *(_DWORD *)Src = *v292;
            if ( v327 == 8204 && !v293 )
              *(_DWORD *)Src = gulGamma;
            goto LABEL_1248;
          }
          v288 = 0;
          v289 = v327 == 4158;
          if ( v327 < 0x103E )
          {
            if ( (int)gpdwCPUserPreferencesMask < 0 )
            {
              switch ( v327 )
              {
                case 0x1008u:
                case 0x1012u:
                case 0x1014u:
                case 0x1018u:
                case 0x101Au:
                  v290 = gbDisableAlpha == 0;
                  goto LABEL_1148;
                case 0x100Au:
                  if ( (gdwPUDFlags & 0x20000) != 0 )
                    goto LABEL_1143;
                  goto LABEL_1150;
                case 0x1024u:
                  if ( gbDisableAlpha || gcOverlays )
                    goto LABEL_1149;
                  goto LABEL_1150;
                default:
                  goto LABEL_1150;
              }
            }
            if ( v327 != 4096 )
            {
              if ( v327 == 4106 )
              {
LABEL_1143:
                v288 = 1;
LABEL_1149:
                *(_DWORD *)Src = v288;
LABEL_1248:
                v24 = v328;
LABEL_1249:
                if ( updated )
                {
                  if ( v24 )
                  {
                    RtlInitLargeUnicodeString((__int64)v342, (__int64)v352);
                    v339[0] = 0;
                    v339[1] = 100;
                    v340 = &v341;
                    xxxBroadcastMessageEx(
                      0LL,
                      0x1Au,
                      v15,
                      (struct _LARGE_STRING *)v342,
                      6u,
                      (union tagBROADCASTMSG *)v339,
                      1,
                      0);
                  }
                }
                return PointerDeviceSettings;
              }
              if ( v327 != 4108 && v327 != 4124 )
              {
                v290 = v327 == 4126;
LABEL_1148:
                if ( !v290 )
                  goto LABEL_1149;
              }
            }
LABEL_1150:
            v289 = v327 == 4158;
          }
          if ( v289 && gProtocolType )
          {
            *(_DWORD *)Src = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) != 0;
          }
          else
          {
            v291 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v327 - 4096) >> 6));
            *(_DWORD *)Src = _bittest(&v291, (unsigned __int8)(((v327 - 4096) >> 1) - (((v327 - 4096) >> 1) & 0xE0)));
          }
          goto LABEL_1248;
        }
        v294 = CreateProfileUserName(v336);
        v296 = v294;
        if ( (v327 & 0x3000) == 0x1000 )
        {
          v297 = gpviCPUserPreferences;
          if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4 )
          {
            v298 = CheckDesktopPolicy(v294, *((_QWORD *)&gpviCPUserPreferences + 1));
            v297 = gpviCPUserPreferences;
            if ( v298 )
            {
              v9 = 0;
              PointerDeviceSettings = 0;
            }
          }
          if ( v9 )
          {
            ProfileValue = FastGetProfileValue(
                             v296,
                             *(unsigned int *)(v297 + 4),
                             *(_QWORD *)(v297 + 8),
                             0LL,
                             v338,
                             8,
                             0);
            memmove(&v338[ProfileValue], (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
            v300 = &v338[4 * ((unsigned __int64)(v327 - 4096) >> 6)];
            v301 = 1 << (((v327 - 4096) >> 1) - 32 * ((v327 - 4096) >> 6));
            if ( Src )
              *v300 |= v301;
            else
              *v300 &= ~v301;
            updated = FastWriteProfileValue(
                        v296,
                        *((unsigned int *)&gpviCPUserPreferences + 1),
                        *((_QWORD *)&gpviCPUserPreferences + 1),
                        3LL,
                        v338,
                        8);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
          {
            v302 = (unsigned __int64)(v327 - 4096) >> 6;
            v303 = (_DWORD *)&gpdwCPUserPreferencesMask + v302;
            v304 = 1 << (((v327 - 4096) >> 1) - 32 * ((v327 - 4096) >> 6));
            if ( Src )
              *v303 |= v304;
            else
              *v303 &= ~v304;
            switch ( v327 )
            {
              case 0x1005u:
                *(_DWORD *)(gpsi + 7292LL) ^= ((unsigned __int8)*(_DWORD *)(gpsi + 7292LL) ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 4;
                goto LABEL_1240;
              case 0x1007u:
                *(_DWORD *)(gpsi + 7292LL) ^= ((unsigned __int8)*(_DWORD *)(gpsi + 7292LL) ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 8;
                goto LABEL_1240;
              case 0x1009u:
                goto LABEL_1173;
              case 0x100Bu:
                *(_DWORD *)(gpsi + 7292LL) ^= ((unsigned __int8)*(_DWORD *)(gpsi + 7292LL) ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 0x20;
                goto LABEL_1240;
              case 0x101Bu:
                SetPointer(1);
                goto LABEL_1240;
              case 0x1023u:
                goto LABEL_1174;
              case 0x1025u:
                v307 = (void *)ReferenceDwmApiPort(((v327 - 4096) >> 1) - 32 * ((v327 - 4096) >> 6), v302, v303, v295);
                DwmAsyncNotifyWindowShadowChange(v307);
                goto LABEL_1240;
              case 0x103Fu:
                *(_DWORD *)(gpsi + 7292LL) ^= (*(_DWORD *)(gpsi + 7292LL) ^ (unsigned int)gpdwCPUserPreferencesMask) & 0x80000000;
                SetPointer(1);
LABEL_1173:
                CreateBitmapStrip();
LABEL_1174:
                v305 = *(_QWORD *)(gptiCurrent + 408LL);
                if ( v305 )
                  v306 = *(struct tagWND **)(*(_QWORD *)(v305 + 8) + 16LL);
                else
                  v306 = 0LL;
                xxxInternalInvalidate(v306, (HRGN)1, 0x10485u);
                break;
              case 0x104Fu:
              case 0x1051u:
                xxxWindowEvent(0x80000007, 0LL, v327, Src != 0LL, 0);
                break;
              default:
                goto LABEL_1240;
            }
          }
          goto LABEL_1240;
        }
        if ( *(_DWORD *)(UPDWORDPointer(v327) + 4) == 4 )
        {
          v308 = UPDWORDPointer(v327);
          if ( (unsigned int)CheckDesktopPolicy(v296, *(_QWORD *)(v308 + 8)) )
          {
            v9 = 0;
            PointerDeviceSettings = 0;
            v329 = 0;
          }
        }
        if ( v9 )
        {
          v309 = UPDWORDPointer(v327);
          v310 = UPDWORDPointer(v327);
          updated = FastWriteProfileValue(v296, *(unsigned int *)(v310 + 4), *(_QWORD *)(v309 + 8), 4LL, &Src, 4);
          PointerDeviceSettings = updated;
          v329 = updated;
          v15 = v327;
        }
        v311 = *(_DWORD *)UPDWORDPointer(v15);
        if ( !PointerDeviceSettings )
          goto LABEL_1240;
        v312 = (int)Src;
        *(_DWORD *)UPDWORDPointer(v327) = v312;
        v15 = v327;
        switch ( v327 )
        {
          case 0x2007u:
            *(_DWORD *)(gpsi + 7296LL) = *(_DWORD *)UPDWORDPointer(v327);
            goto LABEL_1240;
          case 0x200Bu:
            v324 = (_BYTE *)UPDWORDPointer(v327);
            GreSetFontEnumeration(8 * (*v324 & 2 | 4));
            goto LABEL_1240;
          case 0x200Du:
            gulGamma = *(_DWORD *)UPDWORDPointer(v327);
            goto LABEL_1240;
          case 0x200Fu:
            if ( !*(_DWORD *)UPDWORDPointer(v327) )
              goto LABEL_1240;
            if ( (unsigned int)IsDPIAbsoluteSysMet(0x53uLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v313) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v314) + 776) & 0x4000) != 0 )
              {
                goto LABEL_1205;
              }
            }
            else
            {
              if ( !IsDPIDWMSysMet(v313)
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v315) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v316) + 776) & 0x4000) != 0 )
              {
LABEL_1205:
                if ( IsDPIDWMSysMet(0x53uLL) && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v318) + 776) & 0x2000) != 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v317 = (_DWORD *)(gpsi + 2988LL);
                    PointerDeviceSettings = v329;
LABEL_1212:
                    *v317 = *(_DWORD *)UPDWORDPointer(v327);
                    v15 = v327;
LABEL_1240:
                    FreeProfileUserName(v296, v336);
                    goto LABEL_1248;
                  }
                  PointerDeviceSettings = v329;
                }
                v317 = (_DWORD *)(gpsi + 2212LL);
                goto LABEL_1212;
              }
              if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1) == 0 )
              {
                PointerDeviceSettings = v329;
                goto LABEL_1205;
              }
              PointerDeviceSettings = v329;
            }
            v317 = (_DWORD *)(gpsi + 2600LL);
            goto LABEL_1212;
          case 0x2011u:
            if ( !*(_DWORD *)UPDWORDPointer(v327) )
              goto LABEL_1240;
            if ( (unsigned int)IsDPIAbsoluteSysMet(0x54uLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v319) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v320) + 776) & 0x4000) != 0 )
              {
                goto LABEL_1226;
              }
            }
            else
            {
              if ( !IsDPIDWMSysMet(v319)
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v321) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v322) + 776) & 0x4000) != 0 )
              {
LABEL_1226:
                if ( IsDPIDWMSysMet(0x54uLL) && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v323) + 776) & 0x2000) != 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v317 = (_DWORD *)(gpsi + 2992LL);
                    PointerDeviceSettings = v329;
                    goto LABEL_1212;
                  }
                  PointerDeviceSettings = v329;
                }
                v317 = (_DWORD *)(gpsi + 2216LL);
                goto LABEL_1212;
              }
              if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1) == 0 )
              {
                PointerDeviceSettings = v329;
                goto LABEL_1226;
              }
              PointerDeviceSettings = v329;
            }
            v317 = (_DWORD *)(gpsi + 2604LL);
            goto LABEL_1212;
          case 0x2013u:
            v325 = *(_BYTE *)UPDWORDPointer(v327);
            v326 = &unk_1C02DFAE0;
            if ( (v325 & 1) == 0 )
              v326 = &unk_1C02E9F70;
            off_1C031B228 = v326;
            goto LABEL_1240;
          case 0x201Du:
            TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
            goto LABEL_1240;
          case 0x201Fu:
            TraceLoggingSPISetPenVisualizationEvent(v311, (unsigned int)Src);
            goto LABEL_1240;
          default:
            goto LABEL_1240;
        }
      }
      if ( v6 > 0x1027 )
      {
LABEL_13:
        if ( (v6 & 0x3000) == 0 || (v6 & 1) == 0 )
        {
LABEL_16:
          v14 = 2LL;
          v335 = 2;
          if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), 2u) )
          {
            UserSetLastError(5);
            return 0LL;
          }
          goto LABEL_18;
        }
LABEL_14:
        v335 = 16;
        if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
          return 0LL;
        v14 = 2LL;
LABEL_18:
        CurrentProcessWin32Process = v334;
        v8 = (unsigned int)v333;
        if ( v335 != 2 )
          goto LABEL_22;
        goto LABEL_21;
      }
      if ( v6 == 4135 )
        goto LABEL_14;
      switch ( v6 )
      {
        case 2u:
        case 4u:
        case 6u:
        case 0xBu:
        case 0xFu:
        case 0x11u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x17u:
        case 0x1Au:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x24u:
        case 0x25u:
        case 0x2Au:
        case 0x2Cu:
        case 0x2Eu:
        case 0x2Fu:
        case 0x33u:
        case 0x35u:
        case 0x37u:
        case 0x39u:
        case 0x3Bu:
        case 0x3Du:
        case 0x41u:
        case 0x43u:
        case 0x45u:
        case 0x47u:
        case 0x49u:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Du:
        case 0x57u:
        case 0x58u:
        case 0x5Au:
        case 0x5Bu:
        case 0x60u:
        case 0x63u:
        case 0x65u:
        case 0x67u:
        case 0x69u:
        case 0x6Bu:
        case 0x6Du:
        case 0x77u:
        case 0xA1u:
        case 0xA3u:
          goto LABEL_14;
        case 0xDu:
        case 0x18u:
          if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
            goto LABEL_16;
          if ( a2 )
            goto LABEL_14;
          result = 1LL;
          break;
        default:
          goto LABEL_13;
      }
      return result;
  }
}
