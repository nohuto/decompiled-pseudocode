/*
 * XREFs of xxxSystemParametersInfo @ 0x1C003A8E0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     GetWindowNCMetrics @ 0x1C0011420 (GetWindowNCMetrics.c)
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     SnapshotMonitorRects @ 0x1C0038D80 (SnapshotMonitorRects.c)
 *     SetDesktopMetrics @ 0x1C0038EB0 (SetDesktopMetrics.c)
 *     xxxDesktopRecalc @ 0x1C0039710 (xxxDesktopRecalc.c)
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 *     CheckWinstaAttributeAccess @ 0x1C003DD20 (CheckWinstaAttributeAccess.c)
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     RtlInitLargeUnicodeString @ 0x1C0052BC8 (RtlInitLargeUnicodeString.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     HKLtoPKL @ 0x1C00DAB90 (HKLtoPKL.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DCB5C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     CreateBitmapStrip @ 0x1C00FC5F0 (CreateBitmapStrip.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C0132FF0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 *     GreSetFontEnumeration @ 0x1C0134DE0 (GreSetFontEnumeration.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C01357A4 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C01357CC (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C01357F4 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C013581C (-CalculateMouseTable@@YAXXZ.c)
 *     SetMouseTrails @ 0x1C01359E4 (SetMouseTrails.c)
 *     ResetMouseAccelerationCurves @ 0x1C0135A58 (ResetMouseAccelerationCurves.c)
 *     CalculateMouseSensitivity @ 0x1C0135BB8 (CalculateMouseSensitivity.c)
 *     GetEasTimeout @ 0x1C0135BDC (GetEasTimeout.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0135D14 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C01360BC (xxxUpdateSystemCursorsFromRegistry.c)
 *     GetKbdLangSwitch @ 0x1C0137244 (GetKbdLangSwitch.c)
 *     SetKeyboardRate @ 0x1C0138A40 (SetKeyboardRate.c)
 *     bSetDevDragWidth @ 0x1C014E1A0 (bSetDevDragWidth.c)
 *     _SetDoubleClickTime @ 0x1C0151F00 (_SetDoubleClickTime.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C0151FC4 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C0152208 (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0152250 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0152530 (LoadWallpaperFilenameFromRegistry.c)
 *     SetDesktopPattern @ 0x1C0152980 (SetDesktopPattern.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C015520C (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxSetIMEShowStatus @ 0x1C01568F4 (xxxSetIMEShowStatus.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C01571CC (xxxInvalidateWallpaperWindow.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01D4F8C (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D50CC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01D52D0 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D53B8 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D54CC (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D5A6C (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     UpdateWinIniInt @ 0x1C01D5EE4 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01D61DC (xxxMetricsRecalc.c)
 *     _SwapMouseButton @ 0x1C01E9660 (_SwapMouseButton.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01ED628 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01EDC58 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF1CC (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C02242EC (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C022495C (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C0224A00 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C0224AA4 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     WritePointerDeviceSettings @ 0x1C0225B3C (WritePointerDeviceSettings.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C025F81C (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfo(__int64 a1, unsigned int a2, void *a3, unsigned __int8 a4)
{
  unsigned int v6; // r14d
  __int64 CurrentProcessWin32Process; // rdx
  __int64 v8; // r8
  BOOL v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // r13
  int v12; // eax
  _QWORD *v13; // rdx
  _OWORD *v14; // rax
  unsigned __int16 *v15; // rcx
  int v16; // eax
  int PointerDeviceSettings; // eax
  int v19; // r9d
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  int *v23; // rax
  int v24; // ecx
  __int64 DPIMetrics; // rax
  unsigned __int16 *v26; // r8
  unsigned int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int *v34; // rcx
  int *DPIServerInfo; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _OWORD *v40; // rcx
  unsigned int v41; // ebx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // r15d
  _DWORD *v46; // rcx
  int v47; // esi
  int v48; // r14d
  __int64 v49; // r13
  int v50; // esi
  bool v51; // zf
  __int64 v52; // r9
  _QWORD *v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rcx
  char *v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rcx
  _OWORD *v59; // rdx
  _OWORD *v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  _DWORD *v64; // rcx
  _DWORD *v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned int *v69; // rcx
  struct _UNICODE_STRING *v70; // rbx
  __int64 v71; // rcx
  int v72; // ebx
  int v73; // esi
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v78; // r15d
  __int64 v79; // rcx
  __int64 v80; // rcx
  int *v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  _DWORD *v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  BOOL v91; // eax
  _DWORD *v92; // r14
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  _DWORD *v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  _DWORD *v102; // rcx
  __int64 v103; // rcx
  _DWORD *v104; // r13
  __int64 v105; // rcx
  int v106; // r15d
  __int64 v107; // rcx
  __int64 v108; // rcx
  _DWORD *v109; // rsi
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rcx
  _DWORD *v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rcx
  __int64 v116; // rcx
  _DWORD *v117; // rsi
  __int64 v118; // rcx
  __int64 v119; // rcx
  _DWORD *v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // rcx
  _DWORD *v124; // rsi
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rcx
  _DWORD *v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rcx
  _DWORD *v132; // rcx
  int v133; // ecx
  int v134; // r14d
  int v135; // eax
  struct _UNICODE_STRING *v136; // rcx
  _QWORD *v137; // r14
  __int64 v138; // rcx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // rcx
  __int64 v142; // rcx
  _QWORD *v143; // rcx
  __int64 v144; // rax
  char *v145; // r14
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // rax
  unsigned int *v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // rcx
  __int64 v160; // rcx
  int v161; // ecx
  __int64 v162; // rcx
  unsigned int v163; // ebx
  __int64 v164; // rdx
  __int64 v165; // rdx
  struct _UNICODE_STRING *v166; // rax
  __int64 v167; // rsi
  int v168; // r14d
  int v169; // r13d
  __int64 v170; // rcx
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v175; // rcx
  int v176; // ecx
  __int64 v177; // rcx
  unsigned int v178; // ebx
  __int64 v179; // rax
  struct tagWND *v180; // rcx
  int v181; // eax
  struct _UNICODE_STRING *v182; // rbx
  int v183; // r14d
  __int64 v184; // rcx
  __int64 v185; // rcx
  int v187; // ecx
  __int64 v188; // rcx
  __int64 v189; // rcx
  int v191; // ecx
  __int64 v192; // rcx
  __int64 v193; // rcx
  int v195; // ecx
  __int64 v196; // rcx
  __int64 v197; // rcx
  int v199; // ecx
  __int64 v200; // rcx
  __int64 v201; // rcx
  int v203; // ecx
  __int64 v204; // rcx
  __int64 v205; // rcx
  int v207; // ecx
  __int64 v208; // rcx
  __int64 v209; // rcx
  int v211; // ecx
  __int64 v212; // rcx
  __int64 v213; // rcx
  int v215; // ecx
  __int64 v216; // rcx
  __int64 v217; // rcx
  int v219; // ecx
  __int64 v220; // rcx
  __int64 v221; // rcx
  __int64 v222; // rcx
  __int64 v223; // rcx
  int v225; // ecx
  __int64 v226; // rcx
  __int64 v227; // rcx
  int v229; // ecx
  __int64 v230; // rcx
  __int64 v231; // rcx
  int v233; // ecx
  __int64 v234; // rcx
  __int64 v235; // rcx
  int v237; // ecx
  struct tagMOUSEKEYS *v238; // rbx
  int v239; // ecx
  struct _UNICODE_STRING *v240; // rsi
  __int64 v241; // rdx
  unsigned int *v242; // rbx
  int v243; // ecx
  unsigned int v244; // ecx
  struct tagFILTERKEYS *v245; // rbx
  int v246; // ecx
  unsigned int v247; // ecx
  struct _UNICODE_STRING *v248; // rsi
  int v249; // ecx
  int v250; // ecx
  _DWORD *v251; // r10
  __int64 v252; // rcx
  __int64 v253; // rcx
  __int64 v254; // rcx
  __int64 v255; // rcx
  __int64 v257; // rcx
  int v258; // ecx
  int v259; // eax
  struct tagSOUNDSENTRYW *v260; // rbx
  int v261; // ecx
  unsigned int v262; // ecx
  struct _UNICODE_STRING *v263; // rsi
  char *v264; // rcx
  __int64 v265; // r15
  int v266; // eax
  char *v267; // rax
  __int64 v268; // xmm0_8
  unsigned int *v269; // rbx
  int v270; // r14d
  unsigned int v271; // ecx
  unsigned int v272; // ecx
  __int64 v273; // rcx
  __int64 v274; // rcx
  int v276; // ecx
  unsigned int v277; // ebx
  const wchar_t *v278; // r9
  const wchar_t *v279; // r9
  __int64 v280; // rcx
  __int64 v281; // rcx
  int v283; // ecx
  int v284; // edx
  __int64 v285; // rax
  void *v286; // rcx
  unsigned int *v287; // rax
  __int64 ProfileUserName; // rcx
  const wchar_t *v289; // r15
  const wchar_t *v290; // r9
  int v291; // eax
  __int64 DispInfo; // rax
  __int64 v293; // rcx
  __int64 v294; // rcx
  __int64 v295; // rdx
  __int64 v296; // r8
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 v300; // rcx
  __int64 v301; // rdx
  __int64 v302; // r8
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 v305; // r8
  int v306; // ecx
  int v308; // eax
  int v309; // ecx
  _DWORD *v310; // rcx
  __int64 v311; // rax
  __int64 v312; // rbx
  unsigned int ProfileValue; // eax
  unsigned __int64 v314; // rdx
  int v315; // eax
  unsigned __int64 v316; // r8
  int v317; // edx
  unsigned int v318; // r14d
  unsigned int v319; // r14d
  unsigned int v320; // r14d
  unsigned int v321; // r14d
  __int64 v322; // r8
  int v323; // edx
  int v324; // ecx
  __int64 v325; // rax
  struct tagWND *v326; // rcx
  void *v327; // rax
  __int64 v328; // rax
  __int64 v329; // rbx
  __int64 v330; // rax
  unsigned int v331; // esi
  int v332; // ebx
  unsigned int v333; // r14d
  unsigned int v334; // r14d
  unsigned int v335; // r14d
  unsigned int v336; // r14d
  unsigned int v337; // r14d
  unsigned int v338; // r14d
  unsigned int v339; // r14d
  char v340; // cl
  void *v341; // rax
  __int64 v342; // rcx
  __int64 v343; // rcx
  __int64 v344; // rcx
  __int64 v345; // rcx
  _DWORD *v347; // rbx
  __int64 v348; // rcx
  int v349; // ecx
  __int64 v350; // rcx
  __int64 v351; // rcx
  __int64 v352; // rcx
  __int64 v353; // rcx
  __int64 v354; // rcx
  __int64 v356; // rcx
  int v357; // ecx
  _BYTE *v358; // rax
  unsigned int v359; // r11d
  int v360; // [rsp+28h] [rbp-420h]
  unsigned int v361; // [rsp+40h] [rbp-408h]
  int v362; // [rsp+44h] [rbp-404h]
  int v363; // [rsp+48h] [rbp-400h] BYREF
  int updated; // [rsp+4Ch] [rbp-3FCh] BYREF
  void *Src; // [rsp+50h] [rbp-3F8h] BYREF
  __int64 v366; // [rsp+58h] [rbp-3F0h] BYREF
  _OWORD *v367; // [rsp+60h] [rbp-3E8h] BYREF
  int v368; // [rsp+68h] [rbp-3E0h]
  __int64 v369; // [rsp+70h] [rbp-3D8h] BYREF
  BOOL v370; // [rsp+78h] [rbp-3D0h] BYREF
  int v371[2]; // [rsp+80h] [rbp-3C8h]
  _BYTE v372[24]; // [rsp+88h] [rbp-3C0h] BYREF
  int v373; // [rsp+A0h] [rbp-3A8h]
  _DWORD v374[2]; // [rsp+A8h] [rbp-3A0h] BYREF
  char *v375; // [rsp+B0h] [rbp-398h]
  char v376; // [rsp+C8h] [rbp-380h] BYREF
  _BYTE v377[16]; // [rsp+D0h] [rbp-378h] BYREF
  _BYTE v378[24]; // [rsp+E0h] [rbp-368h] BYREF
  __int128 v379; // [rsp+F8h] [rbp-350h] BYREF
  __int128 v380; // [rsp+108h] [rbp-340h] BYREF
  char v381[20]; // [rsp+118h] [rbp-330h] BYREF
  __int64 v382; // [rsp+12Ch] [rbp-31Ch]
  int v383; // [rsp+134h] [rbp-314h]
  char v384[20]; // [rsp+138h] [rbp-310h] BYREF
  unsigned int v385; // [rsp+14Ch] [rbp-2FCh]
  wchar_t Dest[40]; // [rsp+150h] [rbp-2F8h] BYREF
  _WORD v387[40]; // [rsp+1A0h] [rbp-2A8h] BYREF
  _BYTE v388[528]; // [rsp+1F0h] [rbp-258h] BYREF

  v6 = a1;
  v361 = a1;
  v370 = a1;
  Src = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v369 = CurrentProcessWin32Process;
  updated = 0;
  v8 = a4 & 1;
  v371[0] = a4 & 1;
  v9 = v371[0] != 0;
  v362 = (a4 >> 1) & 1;
  v363 = v371[0] == 0;
  v373 = 0;
  v387[0] = 0;
  if ( v6 > 0x50 )
  {
    if ( v6 > 0x52 )
    {
      if ( v6 <= 0x54 )
        goto LABEL_1542;
      if ( v6 > 0x56 )
      {
        if ( v6 == 92 || v6 == 97 )
          goto LABEL_493;
        goto LABEL_11;
      }
    }
    return 1LL;
  }
  if ( v6 >= 0x4F )
  {
LABEL_1542:
    *(_DWORD *)Src = 0;
    return 1LL;
  }
  if ( v6 >= 7 && (v6 <= 8 || v6 == 12 || v6 > 0x26 && (v6 <= 0x28 || v6 == 49 || v6 > 0x3D && v6 <= 0x3F)) )
    goto LABEL_493;
LABEL_11:
  v10 = gpepCSRSS;
  if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
  {
    if ( v6 <= 0x3B )
    {
      if ( v6 != 59 )
      {
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
            goto LABEL_96;
          case 0xDu:
          case 0x18u:
            if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              v11 = 2LL;
              v368 = 2;
              goto LABEL_26;
            }
            if ( !a2 )
              return 1LL;
            v368 = 16;
            v11 = 2LL;
            break;
          default:
            goto LABEL_22;
        }
        goto LABEL_188;
      }
    }
    else if ( v6 > 0x63 )
    {
      if ( v6 != 101 )
      {
        v11 = 2LL;
        if ( v6 != 103 && v6 != 105 && v6 != 107 && v6 != 109 && v6 != 119 && v6 != 161 && v6 != 163 && v6 != 4135 )
          goto LABEL_23;
        goto LABEL_97;
      }
    }
    else if ( v6 != 99 )
    {
      if ( v6 <= 0x49 )
      {
        if ( v6 != 73 && v6 != 61 && v6 != 65 && v6 != 67 && v6 != 69 && v6 != 71 )
          goto LABEL_22;
        goto LABEL_96;
      }
      if ( v6 < 0x4B )
        goto LABEL_22;
      if ( v6 > 0x4D )
      {
        if ( v6 <= 0x56 )
          goto LABEL_22;
        if ( v6 > 0x58 )
        {
          if ( v6 > 0x59 )
          {
            v11 = 2LL;
            if ( v6 > 0x5B && v6 != 96 )
              goto LABEL_23;
LABEL_97:
            v12 = 16;
LABEL_25:
            v368 = v12;
            if ( v12 == 2 )
            {
LABEL_26:
              if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), 2u) )
              {
                v71 = 5LL;
                goto LABEL_365;
              }
LABEL_27:
              CurrentProcessWin32Process = v369;
              v8 = (unsigned int)v371[0];
              if ( v368 != 2 )
                goto LABEL_29;
              goto LABEL_28;
            }
LABEL_188:
            if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) )
              return 0LL;
            goto LABEL_27;
          }
LABEL_22:
          v11 = 2LL;
LABEL_23:
          if ( (v6 & 0x3000) != 0 && (v6 & 1) != 0 )
          {
            v368 = 16;
            goto LABEL_188;
          }
          v12 = 2;
          goto LABEL_25;
        }
      }
    }
LABEL_96:
    v11 = 2LL;
    goto LABEL_97;
  }
  v11 = 2LL;
LABEL_28:
  v363 = 1;
LABEL_29:
  if ( v6 > 0x1026 )
  {
    if ( v6 == 4135 )
    {
      if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
      {
        v9 = 0;
        v363 = 0;
      }
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 112LL, a2 != 0);
        v363 = updated;
      }
      if ( v363 )
        gbBlockSendInputResets = a2 != 0;
      goto LABEL_74;
    }
    goto LABEL_76;
  }
  if ( v6 == 4134 )
  {
    v30 = gbBlockSendInputResets == 0;
    goto LABEL_167;
  }
  if ( v6 > 0x60 )
  {
    if ( v6 <= 0x87 )
    {
      if ( v6 == 135 )
      {
        if ( a2 > *(_DWORD *)(gpDispInfo + 184LL) || a2 < dword_1C031B108 || a2 < dword_1C031B104 )
          goto LABEL_74;
        v360 = 3;
        v52 = 20LL;
        goto LABEL_279;
      }
      if ( v6 > 0x74 )
      {
        if ( v6 <= 0x7E )
        {
          switch ( v6 )
          {
            case '~':
              v29 = gWinArrGlobal[0];
              goto LABEL_157;
            case 'u':
              if ( (!a2 || a2 == 12) && Src && *(_DWORD *)Src == 12 )
              {
                if ( (a4 & 1) != 0 )
                {
                  ProfileUserName = CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
                  v369 = ProfileUserName;
                  v289 = L"1";
                  v290 = L"1";
                  if ( !*((_DWORD *)Src + 1) )
                    v290 = L"0";
                  updated = FastWriteProfileStringW(ProfileUserName, 48LL, L"On", v290);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 2));
                  v291 = FastWriteProfileStringW(v369, 48LL, L"Locale", Dest);
                  v30 = (v291 & updated) == 0;
                  updated &= v291;
                  v363 = updated;
                  if ( v30 )
                  {
                    if ( !(_DWORD)qword_1C03238E4 )
                      v289 = L"0";
                    FastWriteProfileStringW(v369, 48LL, L"On", v289);
                    RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", HIDWORD(qword_1C03238E4));
                    FastWriteProfileStringW(v369, 48LL, L"Locale", Dest);
                  }
                  FreeProfileUserName(v369, v372);
                }
                if ( v363 )
                {
                  memmove(&gAudioDescription, Src, *(unsigned int *)Src);
                  gAudioDescription = 12;
                }
                goto LABEL_74;
              }
              return 0LL;
            case 'v':
              v284 = *gpsi >> 9;
              goto LABEL_1246;
          }
          if ( v6 != 119 )
          {
            switch ( v6 )
            {
              case 'x':
                DPIServerInfo = (int *)gdwHungAppTimeout;
                goto LABEL_186;
              case 'y':
                if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
                {
                  v9 = 0;
                  v363 = 0;
                }
                if ( v9 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
                  v363 = updated;
                }
                if ( !v363 )
                  goto LABEL_74;
                v287 = (unsigned int *)gdwHungAppTimeout;
                break;
              case 'z':
                v29 = gdwWaitToKillTimeout;
                goto LABEL_157;
              case '{':
                if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
                {
                  v9 = 0;
                  v363 = 0;
                }
                if ( v9 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
                  v363 = updated;
                }
                if ( v363 )
                  gdwWaitToKillTimeout = a2;
                goto LABEL_74;
              case '|':
                DPIServerInfo = (int *)gdwWaitToKillServiceTimeout;
                goto LABEL_186;
              default:
                if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
                {
                  v9 = 0;
                  v363 = 0;
                }
                if ( v9 )
                {
                  updated = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
                  v363 = updated;
                }
                if ( !v363 )
                  goto LABEL_74;
                v287 = (unsigned int *)gdwWaitToKillServiceTimeout;
                break;
            }
            *v287 = a2;
            goto LABEL_74;
          }
          if ( !gdwRITdemonLockState )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
            {
              v9 = 0;
              v363 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
              v363 = updated;
            }
            if ( v363 )
            {
              v16 = (a4 >> 1) & 1;
              if ( a2 )
                *gpsi |= 0x200u;
              else
                *gpsi &= ~0x200u;
              goto LABEL_47;
            }
            goto LABEL_74;
          }
          goto LABEL_364;
        }
        switch ( v6 )
        {
          case 0x7Fu:
            if ( a2 > *(_DWORD *)(gpDispInfo + 184LL)
              || a2 > dword_1C031B104
              || a2 > dword_1C031B108
              || a2 > dword_1C031B110 )
            {
              goto LABEL_74;
            }
            v360 = 0;
            v52 = 16LL;
            break;
          case 0x80u:
            v29 = dword_1C031B104;
            goto LABEL_157;
          case 0x81u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 184LL)
              || a2 < gWinArrGlobal[0]
              || a2 > dword_1C031B10C
              || a2 > dword_1C031B114 )
            {
              goto LABEL_74;
            }
            v360 = 1;
            v52 = 17LL;
            break;
          case 0x82u:
            LOBYTE(v28) = dword_1C031B11C;
            goto LABEL_156;
          case 0x83u:
            v41 = 18;
            LODWORD(v11) = 1;
            goto LABEL_227;
          case 0x84u:
            v29 = dword_1C031B108;
            goto LABEL_157;
          case 0x85u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 184LL) || a2 > dword_1C031B10C || a2 < gWinArrGlobal[0] )
              goto LABEL_74;
            v360 = 2;
            v52 = 19LL;
            break;
          default:
            v29 = dword_1C031B10C;
            goto LABEL_157;
        }
LABEL_279:
        UpdateThresholdFromMetric((a4 & 1) != 0, &updated, &v363, v52, (_BYTE)a2, v360);
        goto LABEL_74;
      }
      if ( v6 == 116 )
      {
        if ( a2 && a2 != 12 )
          return 0LL;
        v267 = (char *)Src;
        if ( !Src || *(_DWORD *)Src != 12 )
          return 0LL;
        v268 = qword_1C03238E4;
        goto LABEL_1168;
      }
      if ( v6 <= 0x6B )
      {
        switch ( v6 )
        {
          case 'k':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
            {
              v9 = 0;
              v363 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
              v363 = updated;
            }
            if ( v363 )
              gdtMNDropDown = a2;
            goto LABEL_74;
          case 'b':
            v29 = gcxMouseHover;
            goto LABEL_157;
          case 'c':
            if ( (a4 & 1) != 0 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
              v363 = updated;
            }
            if ( v363 )
              gcxMouseHover = a2;
            goto LABEL_74;
          case 'd':
            v29 = gcyMouseHover;
            goto LABEL_157;
          case 'e':
            if ( (a4 & 1) != 0 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
              v363 = updated;
            }
            if ( v363 )
              gcyMouseHover = a2;
            goto LABEL_74;
          case 'f':
            v29 = gdtMouseHover;
            goto LABEL_157;
          case 'g':
            if ( a2 < 0xA )
              a2 = 10;
            if ( a2 > 0x7FFFFFFF )
              a2 = 0x7FFFFFFF;
            if ( (a4 & 1) != 0 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 93LL, a2);
              v363 = updated;
            }
            if ( v363 )
              gdtMouseHover = a2;
            goto LABEL_74;
        }
        if ( v6 != 104 )
        {
          if ( v6 == 105 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 14LL) )
            {
              v9 = 0;
              v363 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 14LL, a2);
              v363 = updated;
            }
            if ( v363 )
              *(_DWORD *)(gpsi + 4004LL) = a2;
            goto LABEL_74;
          }
          v29 = gdtMNDropDown;
          goto LABEL_157;
        }
        v22 = *(_DWORD *)(gpsi + 4004LL);
        goto LABEL_83;
      }
      switch ( v6 )
      {
        case 'l':
          v22 = *(_DWORD *)(gpsi + 4008LL);
          goto LABEL_83;
        case 'm':
          if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
          {
            v9 = 0;
            v363 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
            v363 = updated;
          }
          if ( v363 )
            *(_DWORD *)(gpsi + 4008LL) = a2;
          goto LABEL_74;
        case 'n':
          v30 = gfIMEShowStatus == 0;
          goto LABEL_167;
      }
      if ( v6 != 111 )
      {
        switch ( v6 )
        {
          case 'p':
            v29 = gMouseSensitivity;
            goto LABEL_157;
          case 'q':
            v286 = Src;
            if ( (char *)Src - 1 <= (char *)0x13 )
            {
              if ( (a4 & 1) != 0 )
              {
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", Src);
                updated = FastUpdateWinIni(0LL, 12LL, 608LL, Dest);
                v363 = updated;
                v286 = Src;
              }
              if ( v363 )
              {
                gMouseSensitivity = (int)v286;
                gMouseSensitivityFactor = CalculateMouseSensitivity(v286, CurrentProcessWin32Process, v8);
                ResetMouseAccelerationCurves();
              }
              goto LABEL_74;
            }
            return 0LL;
          case 'r':
            v30 = gppiScreenSaver == 0LL;
LABEL_167:
            v29 = !v30;
            goto LABEL_157;
        }
        if ( g_pWallpaperSettings )
        {
          RtlStringCchCopyW((unsigned __int16 *)Src, 0x104uLL, (const unsigned __int16 *)(g_pWallpaperSettings + 4LL));
          goto LABEL_74;
        }
        v70 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, CurrentProcessWin32Process, 0LL);
        LoadWallpaperFilenameFromRegistry(v70, Src, 260LL);
        goto LABEL_556;
      }
      PointerDeviceSettings = xxxSetIMEShowStatus(a2 != 0, (a4 & 1) != 0, &updated);
LABEL_73:
      v363 = PointerDeviceSettings;
      goto LABEL_74;
    }
    if ( v6 <= 0x9A )
    {
      if ( v6 != 154 )
      {
        if ( v6 > 0x91 )
        {
          if ( v6 != 146 && (v6 == 147 || v6 != 148 && (v6 == 149 || v6 != 150 && v6 != 152)) )
            goto LABEL_1128;
          goto LABEL_72;
        }
        switch ( v6 )
        {
          case 0x91u:
            v41 = 625;
            LODWORD(v11) = 8;
            goto LABEL_227;
          case 0x88u:
            v29 = dword_1C031B110;
            goto LABEL_157;
          case 0x89u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 184LL) || a2 > dword_1C031B114 || a2 < gWinArrGlobal[0] )
              goto LABEL_74;
            v360 = 4;
            v52 = 21LL;
            break;
          case 0x8Au:
            v29 = dword_1C031B114;
            goto LABEL_157;
          case 0x8Bu:
            if ( a2 > *(_DWORD *)(gpDispInfo + 184LL) || a2 < dword_1C031B110 || a2 < dword_1C031B104 )
              goto LABEL_74;
            v360 = 5;
            v52 = 22LL;
            break;
          default:
            switch ( v6 )
            {
              case 0x8Cu:
                v27 = (unsigned __int8)dword_1C031B11C;
                goto LABEL_155;
              case 0x8Du:
                v41 = 624;
                break;
              case 0x8Eu:
                v28 = (unsigned __int8)dword_1C031B11C >> 2;
                goto LABEL_156;
              case 0x8Fu:
                v41 = 626;
                LODWORD(v11) = 4;
                break;
              default:
                v28 = (unsigned __int8)dword_1C031B11C >> 3;
                goto LABEL_156;
            }
LABEL_227:
            if ( (unsigned int)CheckDesktopPolicy(0LL, v41) )
            {
              v9 = 0;
              v363 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, v41, a2);
              v363 = updated;
            }
            if ( v363 )
            {
              v42 = dword_1C031B11C;
              if ( a2 )
                v43 = v11 | dword_1C031B11C;
              else
                v43 = ~(_DWORD)v11 & dword_1C031B11C;
              dword_1C031B11C = v43;
              PostWindowArrangementCheck(v42);
            }
            goto LABEL_74;
        }
        goto LABEL_279;
      }
LABEL_72:
      PointerDeviceSettings = ReadPointerDeviceSettings(v6, Src, v8);
      goto LABEL_73;
    }
    if ( v6 > 0xA3 )
    {
      if ( v6 == 164 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
          || (v45 = 0, (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0) )
        {
          v45 = 1;
        }
        v46 = Src;
        v47 = 0;
        LOWORD(v48) = 1;
        if ( Src )
        {
          v49 = v369;
          if ( v45 )
          {
            v47 = (*(_DWORD *)(v369 + 776) >> 13) & 1;
            v48 = (*(_DWORD *)(v369 + 776) >> 14) & 1;
            *(_DWORD *)(v369 + 776) &= 0xFFFF9FFF;
          }
          GetWindowNCMetrics(v46);
          if ( v45 )
          {
            v50 = *(_DWORD *)(v49 + 776) ^ (*(_DWORD *)(v49 + 776) ^ (v47 << 13)) & 0x2000;
            *(_DWORD *)(v49 + 776) = v50 ^ ((unsigned __int16)v50 ^ (unsigned __int16)((_WORD)v48 << 14)) & 0x4000;
          }
          goto LABEL_74;
        }
        return 0LL;
      }
      if ( v6 == 165 )
        goto LABEL_1423;
      if ( v6 != 166 )
      {
        if ( v6 != 167 )
        {
          if ( v6 == 168 )
          {
            v29 = gbLockScreenAutoLockActive;
            goto LABEL_157;
          }
          if ( v6 != 169 )
          {
            if ( v6 != 170 )
            {
              if ( v6 == 171 )
              {
                if ( *(_DWORD *)(CurrentProcessWin32Process + 56) == gpidLogonUI )
                {
                  v154 = (unsigned int *)gbLockScreenActive;
                  gbLockScreenActive = a2 != 0;
                  if ( a2 )
                  {
                    xxxSetForegroundWindow2(0LL);
                    v154 = (unsigned int *)gbLockScreenActive;
                  }
                  GreLddmProcessLockScreen(*v154, CurrentProcessWin32Process, v8);
                  goto LABEL_74;
                }
                return 0LL;
              }
              goto LABEL_76;
            }
            DPIServerInfo = (int *)gbLockScreenActive;
            goto LABEL_186;
          }
          if ( gfSwitchInProgress )
            return 0LL;
          if ( gdwRITdemonLockState )
            goto LABEL_364;
          gbLockScreenAutoLockActive = a2 != 0;
          if ( (a4 & 1) == 0 )
            goto LABEL_74;
          PointerDeviceSettings = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
          updated = PointerDeviceSettings;
          goto LABEL_73;
        }
LABEL_1423:
        if ( (int)DrvDisplayConfigGetScaleFactorOverrides(v381, 1LL, v8) >= 0 )
        {
          if ( a2 == 158 )
          {
            *(_DWORD *)Src = HIDWORD(v382);
          }
          else
          {
            v310 = Src;
            *(_QWORD *)Src = v382;
            v310[2] = v383;
          }
          goto LABEL_74;
        }
        return 0LL;
      }
LABEL_478:
      if ( a2 + 11 <= 0x16 )
      {
        if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
        {
          v9 = 0;
          v363 = 0;
        }
        if ( v9 )
        {
          v385 = a2;
          v370 = a2 != 159;
          v308 = DrvDisplayConfigSetScaleFactorOverride(v384, &v370);
          if ( v308 < 0 )
          {
            v363 = 0;
          }
          else
          {
            if ( a2 == 159 )
              TraceLoggingSPISetModernDPIOverrideEvent(v309, 159);
            else
              TraceLoggingSPISetDesktopDPIOverrideEvent(v309, a2);
            v363 = 1;
          }
          updated = 0;
        }
        goto LABEL_74;
      }
      return 0LL;
    }
    if ( v6 != 163 )
    {
      switch ( v6 )
      {
        case 0x9Bu:
          goto LABEL_1128;
        case 0x9Cu:
          goto LABEL_72;
        case 0x9Du:
LABEL_1128:
          v259 = WritePointerDeviceSettings(v6, Src, v8);
LABEL_1129:
          updated = v259;
          goto LABEL_74;
        case 0x9Eu:
          goto LABEL_1423;
      }
      if ( v6 != 159 )
      {
        if ( v6 == 160 )
        {
          *(_DWORD *)Src = 6;
          goto LABEL_74;
        }
        if ( v6 != 161 )
        {
          DispInfo = GetDispInfo(v10, CurrentProcessWin32Process, v8);
          if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(DispInfo + 88) + 512LL)) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v293) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v294) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v294 = 0LL)
                : (v294 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  !(_DWORD)v294) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v294) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v298 = 0LL)
                  : (v298 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                    (_DWORD)v298) )
              {
                v40 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v298, v297, v299) + 88) + 60LL);
              }
              else
              {
                v40 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v298, v297, v299) + 88) + 28LL);
              }
            }
            else
            {
              v40 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v294, v295, v296) + 88) + 44LL);
            }
          }
          else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v293) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v300) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v300 = 0LL)
                   : (v300 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL) & 1),
                     !(_DWORD)v300) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v300) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v304 = 0LL)
                : (v304 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  (_DWORD)v304) )
            {
              v40 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v304, v303, v305) + 88) + 544LL);
            }
            else
            {
              v40 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v304, v303, v305) + 88) + 512LL);
            }
          }
          else
          {
            v40 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v300, v301, v302) + 88) + 528LL);
          }
          goto LABEL_197;
        }
        updated = 0;
LABEL_589:
        v363 = 1;
        goto LABEL_74;
      }
      goto LABEL_478;
    }
    v53 = Src;
    if ( Src )
    {
      if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
        return 0LL;
      v367 = (_OWORD *)MonitorFromRect(Src, 1LL, v8);
    }
    else
    {
      v367 = *(_OWORD **)(GetDispInfo(v10, CurrentProcessWin32Process, v8) + 88);
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v367) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v54 = 0LL)
          : (v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            !(_DWORD)v54) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v54 = 0LL)
            : (v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              (_DWORD)v54) )
        {
          v53 = (_QWORD *)((char *)v367 + 60);
        }
        else
        {
          v53 = (_QWORD *)((char *)v367 + 28);
        }
      }
      else
      {
        v53 = (_QWORD *)((char *)v367 + 44);
      }
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v55 = 0LL)
        : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v55) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v306 = 0)
          : (v306 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            v306) )
      {
        v56 = (char *)v367 + 60;
      }
      else
      {
        v56 = (char *)v367 + 28;
      }
    }
    else
    {
      v56 = (char *)v367 + 44;
    }
    if ( !(unsigned int)IntersectRect(&v380, v53, v56) )
      goto LABEL_493;
    v57 = v380 - *v53;
    if ( (_QWORD)v380 == *v53 )
      v57 = *((_QWORD *)&v380 + 1) - v53[1];
    if ( v57 )
      goto LABEL_493;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(0LL) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v58 = 0LL)
        : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v58) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1 )
      {
        v367[34] = v380;
        LogicalToPhysicalDPIRect(v367 + 32, &v380, 128LL, &v367);
        v59 = v367 + 32;
        v60 = v367 + 33;
        v61 = 64LL;
        goto LABEL_297;
      }
      v367[32] = v380;
      PhysicalToLogicalDPIRect(v367 + 33, v367 + 32, 64LL, &v367);
    }
    else
    {
      v367[33] = v380;
      LogicalToPhysicalDPIRect(v367 + 32, &v380, 64LL, &v367);
    }
    v59 = v367 + 32;
    v60 = v367 + 34;
    v61 = 128LL;
LABEL_297:
    PhysicalToLogicalDPIRect(v60, v59, v61, &v367);
    goto LABEL_74;
  }
  if ( v6 == 96 )
  {
    v91 = a2 != 0;
    v370 = v91;
    if ( (a4 & 1) != 0 )
    {
      updated = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
      v363 = updated;
      v91 = v370;
    }
    if ( v363 )
    {
      v30 = !v91;
      v16 = (a4 >> 1) & 1;
      if ( v30 )
        *(_DWORD *)(gpsi + 7292LL) &= ~2u;
      else
        *(_DWORD *)(gpsi + 7292LL) |= 2u;
      goto LABEL_47;
    }
    goto LABEL_74;
  }
  if ( v6 <= 0x2E )
  {
    if ( v6 == 46 )
      goto LABEL_547;
    if ( v6 > 0x19 )
    {
      if ( v6 > 0x23 )
      {
        switch ( v6 )
        {
          case '$':
            goto LABEL_74;
          case '%':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
            {
              v9 = 0;
              v363 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 107LL, a2 == 1);
              v363 = updated;
            }
            if ( v363 )
            {
              if ( a2 == 1 )
                gdwPUDFlags |= 0x100000u;
              else
                gdwPUDFlags &= ~0x100000u;
            }
            goto LABEL_74;
          case '&':
            v28 = gdwPUDFlags >> 20;
            goto LABEL_156;
          case ')':
            if ( !Src )
              return 0LL;
            GetWindowNCMetrics(Src);
            goto LABEL_74;
          case '*':
            goto LABEL_547;
        }
        if ( v6 != 43 )
        {
          if ( v6 == 44 )
            goto LABEL_547;
          v92 = Src;
          *(_DWORD *)Src = 108;
          if ( (unsigned int)IsDPIAbsoluteSysMet(38LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v94) + 776) & 0x4000) == 0 )
            {
LABEL_852:
              v96 = (_DWORD *)(gpsi + 2420LL);
              goto LABEL_498;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v93)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v204) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v205) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_852;
          }
          if ( (unsigned int)IsDPIDWMSysMet(38LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v207 = 0)
              : (v207 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v207) )
          {
            v96 = (_DWORD *)(gpsi + 2808LL);
          }
          else
          {
            v96 = (_DWORD *)(gpsi + 2032LL);
          }
LABEL_498:
          v92[1] = *v96;
          if ( (unsigned int)IsDPIAbsoluteSysMet(39LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x4000) == 0 )
            {
LABEL_867:
              v102 = (_DWORD *)(gpsi + 2424LL);
LABEL_502:
              v92[2] = *v102;
              v103 = (gdwPUDFlags >> 21) & 1;
              v92[3] = v103;
              DPIMetrics = GetDPIMetrics(v103, v99, v101);
              v26 = (unsigned __int16 *)(v92 + 4);
LABEL_145:
              GreExtGetObjectW(*(HSURF *)(DPIMetrics + 32), 92, v26);
              goto LABEL_74;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v97)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v208) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v209) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_867;
          }
          if ( (unsigned int)IsDPIDWMSysMet(39LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v211 = 0)
              : (v211 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v211) )
          {
            v102 = (_DWORD *)(gpsi + 2812LL);
          }
          else
          {
            v102 = (_DWORD *)(gpsi + 2036LL);
          }
          goto LABEL_502;
        }
        v104 = Src;
        *(_DWORD *)Src = 20;
        v106 = IsDPIAbsoluteSysMet(57LL);
        if ( v106 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v105) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v212) + 776) & 0x4000) == 0 )
          {
LABEL_883:
            v109 = (_DWORD *)(gpsi + 2496LL);
            goto LABEL_507;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v105)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v107) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v213) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_883;
        }
        if ( (unsigned int)IsDPIDWMSysMet(57LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v108) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v215 = 0)
            : (v215 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v215) )
        {
          v109 = (_DWORD *)(gpsi + 2884LL);
        }
        else
        {
          v109 = (_DWORD *)(gpsi + 2108LL);
        }
LABEL_507:
        if ( (unsigned int)IsDPIAbsoluteSysMet(7LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v110) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v216) + 776) & 0x4000) == 0 )
          {
LABEL_899:
            v113 = (_DWORD *)(gpsi + 2296LL);
            goto LABEL_511;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v110)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v111) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v217) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_899;
        }
        if ( (unsigned int)IsDPIDWMSysMet(7LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v112) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v219 = 0)
            : (v219 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v219) )
        {
          v113 = (_DWORD *)(gpsi + 2684LL);
        }
        else
        {
          v113 = (_DWORD *)(gpsi + 1908LL);
        }
LABEL_511:
        v104[1] = *v109 - 2 * *v113;
        if ( (unsigned int)IsDPIAbsoluteSysMet(47LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v114) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v220) + 776) & 0x4000) == 0 )
          {
LABEL_915:
            v117 = (_DWORD *)(gpsi + 2456LL);
            goto LABEL_515;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v114)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v115) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v221) + 776) & 0x4000) == 0 )
        {
          v116 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1;
          if ( (_DWORD)v116 )
            goto LABEL_915;
        }
        if ( (unsigned int)IsDPIDWMSysMet(47LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v116 = 0LL)
            : (v116 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              (_DWORD)v116) )
        {
          v117 = (_DWORD *)(gpsi + 2844LL);
        }
        else
        {
          v117 = (_DWORD *)(gpsi + 2068LL);
        }
LABEL_515:
        if ( v106 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v222) + 776) & 0x4000) == 0 )
          {
LABEL_931:
            v120 = (_DWORD *)(gpsi + 2496LL);
            goto LABEL_519;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(57LL)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v223) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_931;
        }
        if ( (unsigned int)IsDPIDWMSysMet(57LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v225 = 0)
            : (v225 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v225) )
        {
          v120 = (_DWORD *)(gpsi + 2884LL);
        }
        else
        {
          v120 = (_DWORD *)(gpsi + 2108LL);
        }
LABEL_519:
        v104[2] = *v117 - *v120;
        if ( (unsigned int)IsDPIAbsoluteSysMet(48LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v121) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v226) + 776) & 0x4000) == 0 )
          {
LABEL_947:
            v124 = (_DWORD *)(gpsi + 2460LL);
            goto LABEL_523;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v121)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v122) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v227) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_947;
        }
        if ( (unsigned int)IsDPIDWMSysMet(48LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v229 = 0)
            : (v229 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v229) )
        {
          v124 = (_DWORD *)(gpsi + 2848LL);
        }
        else
        {
          v124 = (_DWORD *)(gpsi + 2072LL);
        }
LABEL_523:
        if ( (unsigned int)IsDPIAbsoluteSysMet(58LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v125) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v230) + 776) & 0x4000) == 0 )
          {
LABEL_963:
            v128 = (_DWORD *)(gpsi + 2500LL);
            goto LABEL_527;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v125)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v126) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v231) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_963;
        }
        if ( (unsigned int)IsDPIDWMSysMet(58LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v127) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v233 = 0)
            : (v233 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v233) )
        {
          v128 = (_DWORD *)(gpsi + 2888LL);
        }
        else
        {
          v128 = (_DWORD *)(gpsi + 2112LL);
        }
LABEL_527:
        v104[3] = *v124 - *v128;
        if ( (unsigned int)IsDPIAbsoluteSysMet(56LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v129) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v234) + 776) & 0x4000) == 0 )
          {
LABEL_979:
            v132 = (_DWORD *)(gpsi + 2492LL);
LABEL_531:
            v104[4] = *v132;
            goto LABEL_74;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v129)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v130) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v235) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_979;
        }
        if ( (unsigned int)IsDPIDWMSysMet(56LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v237 = 0)
            : (v237 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v237) )
        {
          v132 = (_DWORD *)(gpsi + 2880LL);
        }
        else
        {
          v132 = (_DWORD *)(gpsi + 2104LL);
        }
        goto LABEL_531;
      }
      if ( v6 == 35 )
      {
        *(_DWORD *)Src = 1;
        goto LABEL_74;
      }
      if ( v6 == 26 )
      {
        if ( (a4 & 1) != 0 )
        {
          updated = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
          v363 = updated;
        }
        if ( v363 )
        {
          if ( a2 )
            gdwPUDFlags |= 0x200000u;
          else
            gdwPUDFlags &= ~0x200000u;
          xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
        }
        goto LABEL_74;
      }
      if ( v6 != 27 )
      {
        if ( v6 != 28 )
        {
          if ( v6 != 29 )
          {
            if ( v6 != 30 )
            {
              if ( v6 != 31 )
              {
                if ( v6 == 32 )
                {
                  if ( (a4 & 1) != 0 )
                  {
                    updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
                    v363 = updated;
                  }
                  if ( v363 )
                    SetDoubleClickTime(a2, CurrentProcessWin32Process, v8);
                  goto LABEL_74;
                }
                if ( v6 == 33 )
                {
                  if ( (a4 & 1) != 0 )
                  {
                    updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
                    v363 = updated;
                  }
                  if ( v363 )
                    SwapMouseButton(a2 != 0, CurrentProcessWin32Process, v8);
                  goto LABEL_74;
                }
                if ( Src )
                {
                  if ( a2 != 92 )
                    return 0LL;
                }
                else if ( a2 )
                {
                  return 0LL;
                }
                v182 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
                v183 = xxxSetSPIMetrics(v182, 0x22u, Src, v9);
                updated = v183;
                FreeProfileUserName(v182, v372);
                if ( v371[0] )
                  v363 = v183;
                goto LABEL_74;
              }
              DPIMetrics = GetDPIMetrics(v10, CurrentProcessWin32Process, v8);
              v26 = (unsigned __int16 *)Src;
              goto LABEL_145;
            }
            if ( (a4 & 1) != 0 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
              v363 = updated;
            }
            if ( !v363 )
              goto LABEL_74;
            if ( (unsigned int)IsDPIAbsoluteSysMet(37LL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v184) + 776) & 0x4000) == 0 )
              {
LABEL_766:
                v69 = (unsigned int *)(gpsi + 2416LL);
LABEL_330:
                *v69 = a2;
                goto LABEL_74;
              }
            }
            else if ( (unsigned int)IsDPIDWMSysMet(v74)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v185) + 776) & 0x4000) == 0
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1 )
            {
              goto LABEL_766;
            }
            if ( (unsigned int)IsDPIDWMSysMet(37LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v187 = 0)
                : (v187 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v187) )
            {
              v69 = (unsigned int *)(gpsi + 2804LL);
            }
            else
            {
              v69 = (unsigned int *)(gpsi + 2028LL);
            }
            goto LABEL_330;
          }
          if ( (a4 & 1) != 0 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
            v363 = updated;
          }
          if ( !v363 )
            goto LABEL_74;
          if ( (unsigned int)IsDPIAbsoluteSysMet(36LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v188) + 776) & 0x4000) == 0 )
            {
LABEL_782:
              v69 = (unsigned int *)(gpsi + 2412LL);
              goto LABEL_330;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v66)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v189) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_782;
          }
          if ( (unsigned int)IsDPIDWMSysMet(36LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v191 = 0)
              : (v191 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v191) )
          {
            v69 = (unsigned int *)(gpsi + 2800LL);
          }
          else
          {
            v69 = (unsigned int *)(gpsi + 2024LL);
          }
          goto LABEL_330;
        }
        if ( (a4 & 1) != 0 )
        {
          updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
          v363 = updated;
        }
        if ( !v363 )
          goto LABEL_74;
        v78 = IsDPIAbsoluteSysMet(40LL);
        if ( v78 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v192) + 776) & 0x4000) == 0 )
          {
LABEL_798:
            v81 = (int *)(gpsi + 2428LL);
            goto LABEL_410;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v77)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v79) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v193) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_798;
        }
        if ( (unsigned int)IsDPIDWMSysMet(40LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v195 = 0)
            : (v195 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v195) )
        {
          v81 = (int *)(gpsi + 2816LL);
        }
        else
        {
          v81 = (int *)(gpsi + 2040LL);
        }
LABEL_410:
        v371[0] = *v81;
        if ( v78 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v196) + 776) & 0x4000) == 0 )
          {
LABEL_814:
            v84 = (_DWORD *)(gpsi + 2428LL);
LABEL_414:
            *v84 = a2 != 0;
            TraceLoggingSPISetMenuDropAlignmentEvent(v371[0], a2 != 0);
            goto LABEL_74;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(40LL)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v197) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_814;
        }
        if ( (unsigned int)IsDPIDWMSysMet(40LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v199 = 0)
            : (v199 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v199) )
        {
          v84 = (_DWORD *)(gpsi + 2816LL);
        }
        else
        {
          v84 = (_DWORD *)(gpsi + 2040LL);
        }
        goto LABEL_414;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(40LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v200) + 776) & 0x4000) == 0 )
        {
LABEL_830:
          v34 = (int *)(gpsi + 2428LL);
          goto LABEL_174;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v31)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v201) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_830;
      }
      if ( (unsigned int)IsDPIDWMSysMet(40LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v203 = 0)
          : (v203 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            v203) )
      {
        v34 = (int *)(gpsi + 2816LL);
      }
      else
      {
        v34 = (int *)(gpsi + 2040LL);
      }
      goto LABEL_174;
    }
    if ( v6 == 25 )
    {
      v28 = gdwPUDFlags >> 21;
      goto LABEL_156;
    }
    if ( v6 <= 0xE )
    {
      switch ( v6 )
      {
        case 0xEu:
          v22 = (int)abs32(giScreenSaveTimeOutMs) / 1000;
          goto LABEL_83;
        case 1u:
          v28 = gdwPUDFlags >> 19;
          goto LABEL_156;
        case 2u:
          if ( (a4 & 1) != 0 )
          {
            RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), Dest, 10LL, 0LL);
            updated = FastUpdateWinIni(0LL, 11LL, 9LL, Dest);
            v363 = updated;
          }
          if ( v363 )
          {
            if ( a2 )
              gdwPUDFlags |= 0x80000u;
            else
              gdwPUDFlags &= ~0x80000u;
          }
          goto LABEL_74;
        case 3u:
          *(_DWORD *)Src = gMouseThresh1;
          *((_DWORD *)Src + 1) = gMouseThresh2;
          *((_DWORD *)Src + 2) = gMouseSpeed;
          goto LABEL_74;
      }
      if ( v6 != 4 )
      {
        if ( v6 != 5 )
        {
          switch ( v6 )
          {
            case 6u:
              if ( (int)a2 <= 1 )
                a2 = 1;
              if ( a2 >= 0x32 )
                a2 = 50;
              if ( a2 == *(_DWORD *)GetDPIServerInfo(v10, CurrentProcessWin32Process, v8) )
                goto LABEL_589;
              v166 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, v165, v8);
              v70 = v166;
              if ( v371[0] )
              {
                updated = SetWindowMetricInt(v166, 0x88u, a2);
                v363 = updated;
              }
              if ( v363 )
              {
                xxxSetAndDrawNCMetrics(v70, a2, 0LL);
                bSetDevDragWidth(*gpDispInfo, (unsigned int)(*(_DWORD *)(gpsi + 4024LL) + 3));
              }
              goto LABEL_556;
            case 0xAu:
              v29 = gnKeyboardSpeed & 0x1F;
              goto LABEL_157;
            case 0xBu:
              if ( a2 > 0x1F )
                a2 = 31;
              if ( (a4 & 1) != 0 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 13LL, a2);
                v363 = updated;
              }
              if ( !v363 )
                goto LABEL_74;
              gnKeyboardSpeed = a2 | gnKeyboardSpeed & 0xFFFFFFE0;
              goto LABEL_337;
          }
          if ( v6 != 13 )
            goto LABEL_76;
          if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
          {
            if ( a2 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v162) + 776) & 0x4000) != 0 )
              {
                v163 = a2;
                a2 = EngMulDiv(a2, 96, *(unsigned __int16 *)(gpsi + 7286LL));
              }
              else
              {
                v163 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 7286LL), 96);
              }
              v164 = gpsi;
              if ( v163 <= *(_DWORD *)(gpsi + 1924LL) )
                v163 = *(_DWORD *)(gpsi + 1924LL);
              if ( a2 <= *(_DWORD *)(gpsi + 2312LL) )
                a2 = *(_DWORD *)(gpsi + 2312LL);
              if ( v371[0] )
              {
                updated = SetWindowMetricInt(0LL, 0x40u, v163);
                v363 = updated;
                v164 = gpsi;
              }
              if ( v363 )
              {
                *(_DWORD *)(*(_QWORD *)v164 + 2032LL) = v163;
                *(_DWORD *)(*(_QWORD *)v164 + 2420LL) = a2;
              }
            }
            goto LABEL_74;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(38LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v155) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v156) + 776) & 0x4000) == 0 )
            {
LABEL_623:
              v34 = (int *)(gpsi + 2420LL);
LABEL_174:
              v29 = *v34;
              goto LABEL_157;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v155)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v157) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v158) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_623;
          }
          if ( (unsigned int)IsDPIDWMSysMet(38LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v160) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v161 = 0)
              : (v161 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v161) )
          {
            v34 = (int *)(gpsi + 2808LL);
          }
          else
          {
            v34 = (int *)(gpsi + 2032LL);
          }
          goto LABEL_174;
        }
        DPIServerInfo = (int *)GetDPIServerInfo(v10, CurrentProcessWin32Process, v8);
LABEL_186:
        v29 = *DPIServerInfo;
        goto LABEL_157;
      }
      if ( (a4 & 1) == 0 )
      {
LABEL_667:
        if ( v363 )
        {
          gMouseThresh1 = *(_DWORD *)Src;
          gMouseThresh2 = *((_DWORD *)Src + 1);
          gMouseSpeed = *((_DWORD *)Src + 2);
        }
        goto LABEL_74;
      }
      v167 = CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
      v371[0] = UpdateWinIniInt(v167, 12LL, 10LL, *(unsigned int *)Src);
      v168 = UpdateWinIniInt(v167, 12LL, 11LL, *((unsigned int *)Src + 1));
      v169 = UpdateWinIniInt(v167, 12LL, 12LL, *((unsigned int *)Src + 2));
      if ( v371[0] )
      {
        if ( v168 && v169 )
        {
          updated = 1;
LABEL_666:
          v363 = updated;
          FreeProfileUserName(v167, v372);
          goto LABEL_667;
        }
        UpdateWinIniInt(v167, 12LL, 10LL, (unsigned int)gMouseThresh1);
      }
      if ( v168 )
        UpdateWinIniInt(v167, 12LL, 11LL, (unsigned int)gMouseThresh2);
      if ( v169 )
        UpdateWinIniInt(v167, 12LL, 12LL, (unsigned int)gMouseSpeed);
      goto LABEL_666;
    }
    if ( v6 != 15 )
    {
      if ( v6 == 16 )
      {
        v29 = giScreenSaveTimeOutMs > 0;
        goto LABEL_157;
      }
      if ( v6 != 17 )
      {
        switch ( v6 )
        {
          case 0x14u:
            v70 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
            if ( (unsigned int)CheckDesktopPolicy(v70, 67LL) )
            {
              v9 = 0;
              v363 = 0;
            }
            if ( v9 )
            {
              if ( a2 == -1 )
              {
                v363 = 1;
              }
              else
              {
                FastGetProfileStringFromIDW(v70, 4LL, 67LL, &qword_1C015E270, v388, 260, 8);
                updated = FastUpdateWinIni(v70, 4LL, 67LL, Src);
                v363 = updated;
              }
            }
            if ( !v363 )
              goto LABEL_556;
            if ( (unsigned int)xxxSetDeskWallpaper(v70, Src) )
            {
              xxxInvalidateWallpaperWindow();
            }
            else
            {
              if ( v9 )
              {
                if ( a2 == -1 )
                  goto LABEL_556;
                FastUpdateWinIni(v70, 4LL, 67LL, v388);
              }
              v363 = 0;
              updated = 0;
            }
LABEL_556:
            v136 = v70;
LABEL_557:
            FreeProfileUserName(v136, v372);
            goto LABEL_74;
          case 0x15u:
            if ( a2 != -1 || !Src )
            {
              v70 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
              if ( (unsigned int)CheckDesktopPolicy(v70, 2LL) )
              {
                v9 = 0;
                v363 = 0;
              }
              if ( v9 && Src )
              {
                FastGetProfileStringFromIDW(v70, 4LL, 2LL, &qword_1C015E270, v388, 260, 0);
                updated = FastUpdateWinIni(v70, 4LL, 2LL, Src);
                v363 = updated;
              }
              if ( v363 )
              {
                if ( !(unsigned int)SetDesktopPattern(v70, Src) )
                {
                  if ( v9 && Src )
                    FastUpdateWinIni(v70, 4LL, 2LL, v388);
                  FreeProfileUserName(v70, v372);
                  return 0LL;
                }
                xxxSendNotifyMessage(-1LL, 21LL, 0LL, 0LL, 1);
                v179 = *(_QWORD *)(gptiCurrent + 416LL);
                if ( v179 )
                  v180 = *(struct tagWND **)(*(_QWORD *)(v179 + 8) + 16LL);
                else
                  v180 = 0LL;
                xxxInternalInvalidate(v180, (HRGN)1, 0x10485u);
              }
              goto LABEL_556;
            }
LABEL_493:
            v71 = 87LL;
            goto LABEL_365;
          case 0x16u:
            v29 = (gnKeyboardSpeed >> 5) & 3;
            goto LABEL_157;
          case 0x17u:
            if ( (a4 & 1) != 0 )
            {
              updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
              v363 = updated;
            }
            if ( !v363 )
              goto LABEL_74;
            gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * a2);
LABEL_337:
            SetKeyboardRate(v10, CurrentProcessWin32Process, v8);
            goto LABEL_74;
        }
        if ( v6 != 24 )
          goto LABEL_76;
        if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          if ( a2 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v177) + 776) & 0x4000) != 0 )
            {
              v178 = a2;
              a2 = EngMulDiv(a2, 96, *(unsigned __int16 *)(gpsi + 7286LL));
            }
            else
            {
              v178 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 7286LL), 96);
            }
            v8 = gpsi;
            if ( v178 <= *(_DWORD *)(gpsi + 1928LL) )
              v178 = *(_DWORD *)(gpsi + 1928LL);
            if ( a2 <= *(_DWORD *)(gpsi + 2316LL) )
              a2 = *(_DWORD *)(gpsi + 2316LL);
            if ( v371[0] )
            {
              updated = SetWindowMetricInt(0LL, 0x41u, v178);
              v363 = updated;
              v8 = gpsi;
            }
            if ( v363 )
            {
              *(_DWORD *)(*(_QWORD *)v8 + 2036LL) = v178;
              *(_DWORD *)(*(_QWORD *)v8 + 2424LL) = a2;
            }
          }
          goto LABEL_74;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(39LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v170) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v171) + 776) & 0x4000) == 0 )
          {
LABEL_690:
            v34 = (int *)(gpsi + 2424LL);
            goto LABEL_174;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v170)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v172) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v173) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_690;
        }
        if ( (unsigned int)IsDPIDWMSysMet(39LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v175) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v176 = 0)
            : (v176 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v176) )
        {
          v34 = (int *)(gpsi + 2812LL);
        }
        else
        {
          v34 = (int *)(gpsi + 2036LL);
        }
        goto LABEL_174;
      }
      if ( a2 - 2 <= 0xFFFFFFFC )
        return 0LL;
      if ( !gdwRITdemonLockState )
      {
        gbLockConsoleActive = a2 == -1;
        if ( gfSwitchInProgress )
          return 0LL;
        if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
        {
          v9 = 0;
          v363 = 0;
        }
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
          v363 = updated;
        }
        if ( !v363 )
          goto LABEL_74;
        if ( !gbBlockSendInputResets )
          UpdateLastInput(
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            5LL);
        if ( giScreenSaveTimeOutMs < 0 )
        {
          if ( a2 )
            goto LABEL_379;
          if ( giScreenSaveTimeOutMs < 0 )
            goto LABEL_74;
        }
        if ( a2 )
          goto LABEL_74;
LABEL_379:
        giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
        goto LABEL_74;
      }
LABEL_364:
      v71 = 329LL;
      goto LABEL_365;
    }
    if ( gfSwitchInProgress )
      return 0LL;
    if ( gdwRITdemonLockState )
      goto LABEL_364;
    v72 = 1000 * a2;
    v73 = 1000 * GetEasTimeout(v10, CurrentProcessWin32Process, v8);
    if ( v73 )
    {
      if ( (v373 = 1, giScreenSaveTimeOutMs > 0) && v73 < v72 || v72 <= 0 )
      {
        UserSetLastError(1260LL);
        v9 = 0;
        v363 = 0;
      }
    }
    if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL) )
    {
      if ( v373 )
      {
        v368 = 0;
        if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
          goto LABEL_384;
        v181 = 1000 * v368;
        v368 = v181;
        if ( !v181 || v181 >= v73 || giScreenSaveTimeOutMs <= 0 || v181 >= v72 )
          goto LABEL_384;
        UserSetLastError(1260LL);
      }
      v363 = 0;
      v9 = 0;
    }
LABEL_384:
    if ( v9 )
    {
      updated = UpdateWinIniInt(0LL, 4LL, 99LL, v72 / 0x3E8u);
      v363 = updated;
    }
    if ( v363 )
    {
      if ( !gbBlockSendInputResets )
        UpdateLastInput(
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          5LL);
      if ( giScreenSaveTimeOutMs < 0 && !v373 )
        v72 = -v72;
      giScreenSaveTimeOutMs = v72;
    }
    goto LABEL_74;
  }
  if ( v6 > 0x44 )
  {
    if ( v6 <= 0x4D )
    {
      if ( v6 != 77 )
      {
        switch ( v6 )
        {
          case 'E':
            if ( (a4 & 1) != 0 )
            {
              v279 = L"1";
              if ( !a2 )
                v279 = L"0";
              updated = FastWriteProfileStringW(0LL, 27LL, L"On", v279);
              v363 = updated;
            }
            if ( v363 )
            {
              if ( a2 )
                gdwPUDFlags |= 0x20000u;
              else
                gdwPUDFlags &= ~0x20000u;
            }
            goto LABEL_74;
          case 'F':
            v28 = gdwPUDFlags >> 18;
            goto LABEL_156;
          case 'G':
            if ( (a4 & 1) != 0 )
            {
              v278 = L"1";
              if ( !a2 )
                v278 = L"0";
              updated = FastWriteProfileStringW(0LL, 28LL, L"On", v278);
              v363 = updated;
            }
            if ( v363 )
            {
              if ( a2 )
                gdwPUDFlags |= 0x40000u;
              else
                gdwPUDFlags &= ~0x40000u;
            }
            goto LABEL_74;
          case 'H':
            v65 = Src;
            if ( !Src || a2 != 8 )
              return 0LL;
            *(_DWORD *)Src = 8;
            v65[1] = HIWORD(gdwPUDFlags) & 1;
            goto LABEL_74;
        }
        if ( v6 != 73 )
        {
          if ( v6 == 74 )
          {
            v27 = gulFontInformation;
LABEL_155:
            v28 = v27 >> 1;
LABEL_156:
            v29 = v28 & 1;
LABEL_157:
            *(_DWORD *)Src = v29;
            goto LABEL_74;
          }
          if ( v6 == 75 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
            {
              v9 = 0;
              v363 = 0;
            }
            v277 = a2 != 0 ? 2 : 0;
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 200LL, v277);
              v363 = updated;
            }
            if ( v363 )
              GreSetFontEnumeration(v277 | 4);
            goto LABEL_74;
          }
          if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
          {
            v9 = 0;
            v363 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
            v363 = updated;
          }
          if ( !v363 )
            goto LABEL_74;
          if ( (unsigned int)IsDPIAbsoluteSysMet(68LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v273) + 776) & 0x4000) == 0 )
            {
LABEL_1194:
              v69 = (unsigned int *)(gpsi + 2540LL);
              goto LABEL_330;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v85)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v274) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_1194;
          }
          if ( (unsigned int)IsDPIDWMSysMet(68LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v87) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v276 = 0)
              : (v276 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v276) )
          {
            v69 = (unsigned int *)(gpsi + 2928LL);
          }
          else
          {
            v69 = (unsigned int *)(gpsi + 2152LL);
          }
          goto LABEL_330;
        }
LABEL_547:
        v134 = xxxSetSPIMetrics(0LL, v6, Src, v9);
        updated = v134;
        v135 = v363;
        if ( (a4 & 1) != 0 )
          v135 = v134;
        v363 = v135;
        RtlLoadStringOrError(135LL, v387, 40LL, 0LL);
        goto LABEL_74;
      }
      if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
      {
        v9 = 0;
        v363 = 0;
      }
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
        v363 = updated;
      }
      if ( !v363 )
        goto LABEL_74;
      if ( (unsigned int)IsDPIAbsoluteSysMet(69LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v280) + 776) & 0x4000) == 0 )
        {
LABEL_1232:
          v69 = (unsigned int *)(gpsi + 2544LL);
          goto LABEL_330;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v88)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v281) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1 )
      {
        goto LABEL_1232;
      }
      if ( (unsigned int)IsDPIDWMSysMet(69LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v90) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v283 = 0)
          : (v283 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            v283) )
      {
        v69 = (unsigned int *)(gpsi + 2932LL);
      }
      else
      {
        v69 = (unsigned int *)(gpsi + 2156LL);
      }
      goto LABEL_330;
    }
    switch ( v6 )
    {
      case 'W':
        v70 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
        xxxUpdateSystemCursorsFromRegistry(v70);
        break;
      case 'X':
        v70 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
        xxxUpdateSystemIconsFromRegistry(v70);
        break;
      case 'Y':
        if ( gspklBaseLayout )
        {
          *(_QWORD *)Src = *(_QWORD *)(gspklBaseLayout + 40LL);
          goto LABEL_74;
        }
        v71 = 21LL;
LABEL_365:
        UserSetLastError(v71);
        return 0LL;
      case 'Z':
        v285 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src, v8);
        if ( v285 )
        {
          if ( v363 )
            HMAssignmentLock(gspklBaseLayout, v285);
          goto LABEL_74;
        }
        return 0LL;
      case '[':
        return GetKbdLangSwitch(0LL, CurrentProcessWin32Process, v8);
      case ']':
        if ( (a4 & 1) != 0 )
        {
          RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", a2);
          updated = FastUpdateWinIni(0LL, 12LL, 613LL, Dest);
          v363 = updated;
        }
        if ( v363 )
          SetMouseTrails(a2, CurrentProcessWin32Process, v8);
        goto LABEL_74;
      case '^':
        v29 = gMouseTrails + 1;
        if ( !gMouseTrails )
          v29 = 0;
        goto LABEL_157;
      case '_':
        v284 = *(unsigned __int8 *)(gpsi + 7292LL) >> 1;
LABEL_1246:
        v22 = v284 & 1;
        goto LABEL_83;
      default:
LABEL_76:
        if ( v6 < 0xAC )
        {
          v71 = 1439LL;
          goto LABEL_365;
        }
        if ( (v6 & 1) == 0 )
        {
          v8 = 4096LL;
          if ( (v6 & 0x3000) != 0x1000 )
          {
            v23 = (int *)UPDWORDPointer(v6);
            v24 = *v23;
            *(_DWORD *)Src = *v23;
            if ( v6 != 8204 || v24 )
              goto LABEL_74;
            v29 = gulGamma;
            goto LABEL_157;
          }
          v19 = 0;
          v20 = 0;
          if ( v6 >= 0x103E )
            goto LABEL_80;
          if ( (int)gpdwCPUserPreferencesMask >= 0 )
          {
            if ( v6 == 4096 )
              goto LABEL_80;
            if ( v6 != 4106 )
            {
              if ( v6 == 4108 || v6 == 4124 )
                goto LABEL_80;
              v51 = v6 == 4126;
LABEL_265:
              if ( !v51 )
                goto LABEL_1435;
LABEL_80:
              if ( v20 )
              {
                *(_DWORD *)Src = v19;
                goto LABEL_74;
              }
              if ( v6 == 4158 && gProtocolType )
              {
                v30 = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) == 0;
                goto LABEL_167;
              }
              v8 = (unsigned __int8)(((v6 - 4096) >> 1) - (((v6 - 4096) >> 1) & 0xE0));
              v21 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v6 - 4096) >> 6));
              v22 = _bittest(&v21, v8);
LABEL_83:
              *(_DWORD *)Src = v22;
              goto LABEL_74;
            }
          }
          else
          {
            if ( v6 == 4104 )
              goto LABEL_198;
            if ( v6 != 4106 )
            {
              if ( v6 != 4114 && v6 != 4116 && v6 != 4120 && v6 != 4122 )
              {
                if ( v6 != 4132 )
                  goto LABEL_80;
                if ( !gbDisableAlpha )
                {
                  v51 = gcOverlays == 0;
                  goto LABEL_265;
                }
LABEL_1435:
                v20 = 1;
                goto LABEL_80;
              }
LABEL_198:
              if ( gbDisableAlpha )
                v20 = 1;
              goto LABEL_80;
            }
            if ( (gdwPUDFlags & 0x20000) == 0 )
              goto LABEL_80;
          }
          v19 = 1;
          goto LABEL_1435;
        }
        v311 = CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
        v312 = v311;
        *(_QWORD *)v371 = v311;
        if ( (v6 & 0x3000) == 0x1000 )
        {
          if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4
            && (unsigned int)CheckDesktopPolicy(v311, *((_QWORD *)&gpviCPUserPreferences + 1)) )
          {
            v9 = 0;
            v363 = 0;
          }
          if ( v9 )
          {
            ProfileValue = FastGetProfileValue(
                             v312,
                             *((unsigned int *)&gpviCPUserPreferences + 1),
                             *((_QWORD *)&gpviCPUserPreferences + 1),
                             0LL,
                             &v369,
                             8,
                             0);
            memmove((char *)&v369 + ProfileValue, (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
            v314 = (unsigned __int64)(v6 - 4096) >> 6;
            v315 = 1 << (((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6));
            if ( Src )
              *((_DWORD *)&v369 + v314) |= v315;
            else
              *((_DWORD *)&v369 + v314) &= ~v315;
            updated = FastWriteProfileValue(
                        v312,
                        *((unsigned int *)&gpviCPUserPreferences + 1),
                        *((_QWORD *)&gpviCPUserPreferences + 1),
                        3LL,
                        &v369,
                        8);
            v363 = updated;
            v6 = v361;
          }
          if ( !v363 )
            goto LABEL_1541;
          v316 = (unsigned __int64)(v6 - 4096) >> 6;
          v317 = 1 << (((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6));
          if ( Src )
            *((_DWORD *)&gpdwCPUserPreferencesMask + v316) |= v317;
          else
            *((_DWORD *)&gpdwCPUserPreferencesMask + v316) &= ~v317;
          if ( v6 <= 0x1023 )
          {
            if ( v6 == 4131 )
            {
LABEL_1469:
              v325 = *(_QWORD *)(gptiCurrent + 416LL);
              if ( v325 )
                v326 = *(struct tagWND **)(*(_QWORD *)(v325 + 8) + 16LL);
              else
                v326 = 0LL;
              xxxInternalInvalidate(v326, (HRGN)1, 0x10485u);
              goto LABEL_1541;
            }
            v318 = v6 - 4101;
            if ( v318 )
            {
              v319 = v318 - 2;
              if ( v319 )
              {
                v320 = v319 - 2;
                if ( v320 )
                {
                  v321 = v320 - 2;
                  if ( v321 )
                  {
                    if ( v321 == 16 )
                      SetPointer(1LL);
                    goto LABEL_1541;
                  }
                  v322 = gpsi;
                  v323 = *(_DWORD *)(gpsi + 7292LL);
                  v324 = ((unsigned __int8)v323 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 0x20;
                  goto LABEL_1461;
                }
                goto LABEL_1468;
              }
              v322 = gpsi;
              v323 = *(_DWORD *)(gpsi + 7292LL);
              v324 = ((unsigned __int8)v323 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 8;
            }
            else
            {
              v322 = gpsi;
              v323 = *(_DWORD *)(gpsi + 7292LL);
              v324 = ((unsigned __int8)v323 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 4;
            }
LABEL_1461:
            *(_DWORD *)(v322 + 7292) = v323 ^ v324;
            goto LABEL_1541;
          }
          if ( v6 == 4133 )
          {
            v327 = (void *)ReferenceDwmApiPort();
            DwmAsyncNotifyWindowShadowChange(v327);
            goto LABEL_1541;
          }
          if ( v6 != 4159 )
          {
            if ( v6 == 4175 || v6 == 4177 )
              xxxWindowEvent(-2147483641, 0, v6, Src != 0LL, 0);
            goto LABEL_1541;
          }
          *(_DWORD *)(gpsi + 7292LL) ^= (*(_DWORD *)(gpsi + 7292LL) ^ (unsigned int)gpdwCPUserPreferencesMask) & 0x80000000;
          SetPointer(1LL);
LABEL_1468:
          CreateBitmapStrip();
          goto LABEL_1469;
        }
        if ( *(_DWORD *)(UPDWORDPointer(v6) + 4) == 4 )
        {
          v328 = UPDWORDPointer(v6);
          if ( (unsigned int)CheckDesktopPolicy(v312, *(_QWORD *)(v328 + 8)) )
          {
            v9 = 0;
            v363 = 0;
          }
        }
        if ( v9 )
        {
          v329 = UPDWORDPointer(v6);
          v330 = UPDWORDPointer(v6);
          updated = FastWriteProfileValue(
                      *(_QWORD *)v371,
                      *(unsigned int *)(v330 + 4),
                      *(_QWORD *)(v329 + 8),
                      4LL,
                      &Src,
                      4);
          v363 = updated;
          v6 = v361;
        }
        v331 = *(_DWORD *)UPDWORDPointer(v6);
        if ( !v363 )
          goto LABEL_1541;
        v332 = (int)Src;
        *(_DWORD *)UPDWORDPointer(v6) = v332;
        v333 = v6 - 8199;
        if ( !v333 )
        {
          *(_DWORD *)(gpsi + 7296LL) = *(_DWORD *)UPDWORDPointer(8199LL);
          goto LABEL_1541;
        }
        v334 = v333 - 4;
        if ( !v334 )
        {
          v358 = (_BYTE *)UPDWORDPointer(8203LL);
          GreSetFontEnumeration(8 * (*v358 & 2 | 4u));
          goto LABEL_1541;
        }
        v335 = v334 - 2;
        if ( !v335 )
        {
          gulGamma = *(_DWORD *)UPDWORDPointer(8205LL);
          goto LABEL_1541;
        }
        v336 = v335 - 2;
        if ( v336 )
        {
          v337 = v336 - 2;
          if ( v337 )
          {
            v338 = v337 - 2;
            if ( v338 )
            {
              v339 = v338 - 10;
              if ( v339 )
              {
                if ( v339 == 2 )
                  TraceLoggingSPISetPenVisualizationEvent(v331, (unsigned int)Src);
              }
              else
              {
                TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
              }
            }
            else
            {
              v340 = *(_BYTE *)UPDWORDPointer(8211LL);
              v341 = &unk_1C02E0390;
              if ( (v340 & 1) == 0 )
                v341 = &unk_1C02EAF90;
              off_1C031B238 = v341;
            }
            goto LABEL_1541;
          }
          if ( !*(_DWORD *)UPDWORDPointer(8209LL) )
          {
LABEL_1541:
            v136 = *(struct _UNICODE_STRING **)v371;
            goto LABEL_557;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(84LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v342) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v343) + 776) & 0x4000) == 0 )
            {
LABEL_1505:
              v347 = (_DWORD *)(gpsi + 2604LL);
LABEL_1514:
              v350 = 8209LL;
LABEL_1537:
              *v347 = *(_DWORD *)UPDWORDPointer(v350);
              goto LABEL_1541;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v342)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v344) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v345) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_1505;
          }
          if ( (unsigned int)IsDPIDWMSysMet(84LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v348) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v349 = 0)
              : (v349 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v349) )
          {
            v347 = (_DWORD *)(gpsi + 2992LL);
          }
          else
          {
            v347 = (_DWORD *)(gpsi + 2216LL);
          }
          goto LABEL_1514;
        }
        if ( !*(_DWORD *)UPDWORDPointer(8207LL) )
          goto LABEL_1541;
        if ( (unsigned int)IsDPIAbsoluteSysMet(83LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v351) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v352) + 776) & 0x4000) == 0 )
          {
LABEL_1527:
            v347 = (_DWORD *)(gpsi + 2600LL);
LABEL_1536:
            v350 = 8207LL;
            goto LABEL_1537;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v351)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v353) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v354) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_1527;
        }
        if ( (unsigned int)IsDPIDWMSysMet(83LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v356) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v357 = 0)
            : (v357 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v357) )
        {
          v347 = (_DWORD *)(gpsi + 2988LL);
        }
        else
        {
          v347 = (_DWORD *)(gpsi + 2212LL);
        }
        goto LABEL_1536;
    }
    goto LABEL_556;
  }
  if ( v6 == 68 )
  {
    v28 = gdwPUDFlags >> 17;
    goto LABEL_156;
  }
  if ( v6 <= 0x39 )
  {
    if ( v6 != 57 )
    {
      if ( v6 != 47 )
      {
        switch ( v6 )
        {
          case '0':
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v36 = 0LL)
                : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  !(_DWORD)v36) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v38 = 0LL)
                  : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    (_DWORD)v38) )
              {
                v40 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v38, v37, v39) + 88) + 108LL);
              }
              else
              {
                v40 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v38, v37, v39) + 88) + 76LL);
              }
            }
            else
            {
              v40 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v36, v62, v63) + 88) + 92LL);
            }
LABEL_197:
            *(_OWORD *)Src = *v40;
            goto LABEL_74;
          case '2':
            if ( a2 && a2 != 24 )
              return 0LL;
            v64 = Src;
            if ( !Src || *(_DWORD *)Src != 24 )
              return 0LL;
            *(_OWORD *)((char *)Src + 4) = xmmword_1C0323934;
            v64[5] = dword_1C0323944;
            goto LABEL_74;
          case '3':
            v245 = (struct tagFILTERKEYS *)Src;
            if ( a2 && a2 != 24 )
              return 0LL;
            if ( !Src || *(_DWORD *)Src != 24 || *((_DWORD *)Src + 2) && *((_DWORD *)Src + 5) )
              return 0LL;
            v246 = *((_DWORD *)Src + 1);
            if ( (v246 & 0x7F) != v246 )
              return 0LL;
            v247 = (xmmword_1C0323934 & 2) != 0 ? v246 | 2 : v246 & 0xFFFFFFFD;
            *((_DWORD *)Src + 1) = v247;
            if ( *((_DWORD *)v245 + 2) > 0x4E20u
              || *((_DWORD *)v245 + 3) > 0x4E20u
              || *((_DWORD *)v245 + 4) > 0x4E20u
              || *((_DWORD *)v245 + 5) > 0x4E20u )
            {
              return 0LL;
            }
            if ( v9 )
            {
              v248 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
              updated = SetFilterKeys(v248, v245);
              v363 = updated;
              if ( !updated )
                SetFilterKeys(v248, (struct tagFILTERKEYS *)&gFilterKeys);
              FreeProfileUserName(v248, v372);
            }
            if ( !v363 )
              goto LABEL_74;
            memmove(&gFilterKeys, v245, *(unsigned int *)v245);
            gFilterKeys = 24;
            if ( (xmmword_1C0323934 & 1) == 0 )
              StopFilterKeysTimers();
            SetAccessEnabledFlag();
            if ( ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0 )
              xxxCallHook(11LL, 2LL, 0LL);
            v241 = 2LL;
            break;
          case '4':
            if ( (a2 & 0xFFFFFFF7) == 0 && Src && *(_DWORD *)Src == 8 )
            {
              *((_DWORD *)Src + 1) = dword_1C0323924;
              goto LABEL_74;
            }
            return 0LL;
          case '5':
            v242 = (unsigned int *)Src;
            if ( (a2 & 0xFFFFFFF7) == 0 )
            {
              if ( Src )
              {
                if ( *(_DWORD *)Src == 8 )
                {
                  v243 = *((_DWORD *)Src + 1);
                  if ( (v243 & 0x3F) == v243 )
                  {
                    if ( (dword_1C0323924 & 2) != 0 )
                      v244 = v243 | 2;
                    else
                      v244 = v243 & 0xFFFFFFFD;
                    *((_DWORD *)Src + 1) = v244;
                    if ( v9 )
                    {
                      RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", v244);
                      updated = FastWriteProfileStringW(0LL, 17LL, L"Flags", Dest);
                      v363 = updated;
                    }
                    if ( !v363 )
                      goto LABEL_74;
                    memmove(&gToggleKeys, v242, *v242);
                    gToggleKeys = 8;
LABEL_1030:
                    SetAccessEnabledFlag();
                    goto LABEL_74;
                  }
                }
              }
            }
            return 0LL;
          case '6':
            if ( !a2 || a2 == 28 )
            {
              v8 = (__int64)Src;
              if ( Src )
              {
                if ( *(_DWORD *)Src == 28 )
                {
                  *(_OWORD *)((char *)Src + 4) = xmmword_1C0323904;
                  *(_QWORD *)(v8 + 20) = qword_1C0323914;
                  v133 = *(_DWORD *)(v8 + 4) & 0x4CFFFFFF;
                  *(_DWORD *)(v8 + 4) = v133;
                  if ( gbMKMouseMode )
                    *(_DWORD *)(v8 + 4) = v133 | 0x80000000;
                  *(_DWORD *)(v8 + 4) |= ((gwMKButtonState & 3) << 24) | ((gwMKCurrentButton & 3) << 28);
                  goto LABEL_74;
                }
              }
            }
            return 0LL;
          case '7':
            v238 = (struct tagMOUSEKEYS *)Src;
            if ( a2 && a2 != 28 )
              return 0LL;
            if ( !Src )
              return 0LL;
            if ( *(_DWORD *)Src != 28 )
              return 0LL;
            v239 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
            *((_DWORD *)Src + 1) = v239;
            if ( (unsigned __int8)v239 != v239 )
              return 0LL;
            if ( (xmmword_1C0323904 & 2) != 0 )
              *((_DWORD *)v238 + 1) |= 2u;
            else
              *((_DWORD *)v238 + 1) = v239 & 0xFFFFFFFD;
            if ( (unsigned int)(*((_DWORD *)v238 + 2) - 10) > 0x15E
              || (unsigned int)(*((_DWORD *)v238 + 3) - 1000) > 0xFA0 )
            {
              return 0LL;
            }
            if ( v9 )
            {
              v240 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
              updated = SetMouseKeys(v240, v238);
              v363 = updated;
              if ( !updated )
                SetMouseKeys(v240, (struct tagMOUSEKEYS *)&gMouseKeys);
              FreeProfileUserName(v240, v372);
            }
            if ( !v363 )
              goto LABEL_74;
            memmove(&gMouseKeys, v238, *(unsigned int *)v238);
            gMouseKeys = 28;
            CalculateMouseTable();
            if ( (xmmword_1C0323904 & 1) != 0 )
            {
              gbMKMouseMode = (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)(unsigned __int8)gNumLockVk >> 2]) != 0) != (unsigned __int8)xmmword_1C0323904 >> 7;
              MKShowMouseCursor();
            }
            else
            {
              MKHideMouseCursor();
            }
            SetAccessEnabledFlag();
            if ( ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0 )
              xxxCallHook(11LL, 3LL, 0LL);
            v241 = 3LL;
            break;
          default:
            v28 = gdwPUDFlags >> 15;
            goto LABEL_156;
        }
LABEL_1018:
        PostShellHookMessagesEx(0xBuLL, v241, 0LL);
        goto LABEL_74;
      }
      v137 = Src;
      if ( Src )
      {
        if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
          return 0LL;
        v366 = MonitorFromRect(Src, 1LL, v8);
      }
      else
      {
        v366 = *(_QWORD *)(GetDispInfo(v10, CurrentProcessWin32Process, v8) + 88);
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v366) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v138) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v138 = 0LL)
            : (v138 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              !(_DWORD)v138) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v138) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v138 = 0LL)
              : (v138 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                (_DWORD)v138) )
          {
            v137 = (_QWORD *)(v366 + 60);
          }
          else
          {
            v137 = (_QWORD *)(v366 + 28);
          }
        }
        else
        {
          v137 = (_QWORD *)(v366 + 44);
        }
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v138) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v139) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v139 = 0LL)
          : (v139 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            !(_DWORD)v139) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v139) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v249 = 0)
            : (v249 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v249) )
        {
          v140 = v366 + 60;
        }
        else
        {
          v140 = v366 + 28;
        }
      }
      else
      {
        v140 = v366 + 44;
      }
      if ( (unsigned int)IntersectRect(&v379, v137, v140) )
      {
        v141 = v379 - *v137;
        if ( (_QWORD)v379 == *v137 )
          v141 = *((_QWORD *)&v379 + 1) - v137[1];
        if ( !v141 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(0LL) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v142 = 0LL)
              : (v142 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                !(_DWORD)v142) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v250 = 0)
                : (v250 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v250) )
            {
              v143 = (_QWORD *)(v366 + 108);
            }
            else
            {
              v143 = (_QWORD *)(v366 + 76);
            }
          }
          else
          {
            v143 = (_QWORD *)(v366 + 92);
          }
          v144 = *v143 - v379;
          if ( *v143 == (_QWORD)v379 )
            v144 = v143[1] - *((_QWORD *)&v379 + 1);
          if ( !v144 )
            goto LABEL_589;
          v145 = 0LL;
          if ( a2 )
          {
            v145 = SnapshotMonitorRects();
            if ( !v145 )
              return 0LL;
          }
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v143) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v146) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v146 = 0LL)
              : (v146 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                !(_DWORD)v146) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v146) + 776) & 0x2000) != 0 )
            {
              *(_OWORD *)(v366 + 108) = v379;
              LogicalToPhysicalDPIRect(v366 + 76, &v379, 128LL, &v366);
              v147 = v366 + 76;
              v149 = v366 + 92;
              v148 = 64LL;
              goto LABEL_584;
            }
            *(_OWORD *)(v366 + 76) = v379;
            PhysicalToLogicalDPIRect(v366 + 92, v366 + 76, 64LL, &v366);
          }
          else
          {
            *(_OWORD *)(v366 + 92) = v379;
            LogicalToPhysicalDPIRect(v366 + 76, &v379, 64LL, &v366);
          }
          v147 = v366 + 76;
          v148 = 128LL;
          v149 = v366 + 108;
LABEL_584:
          PhysicalToLogicalDPIRect(v149, v147, v148, &v366);
          v153 = GetDispInfo(v151, v150, v152);
          if ( v366 == *(_QWORD *)(v153 + 88) )
            SetDesktopMetrics();
          if ( a2 )
          {
            PushW32ThreadLock(v145, v378, Win32FreePool);
            xxxDesktopRecalc(*(_QWORD *)(gptiCurrent + 416LL), (struct tagMONITORRECTS *)v145);
            PopAndFreeAlwaysW32ThreadLock(v378);
          }
          updated = 1;
          goto LABEL_589;
        }
      }
      goto LABEL_493;
    }
    if ( (a4 & 1) != 0 )
    {
      RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", a2 == 1);
      updated = FastWriteProfileStringW(0LL, 20LL, L"On", Dest);
      v363 = updated;
    }
    if ( !v363 )
      goto LABEL_74;
    if ( a2 == 1 )
      gdwPUDFlags |= 0x8000u;
    else
      gdwPUDFlags &= ~0x8000u;
    SetAccessEnabledFlag();
    a2 = (*v251 >> 15) & 1;
    if ( (unsigned int)IsDPIAbsoluteSysMet(70LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v252) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v253) + 776) & 0x4000) == 0 )
      {
LABEL_1118:
        v69 = (unsigned int *)(gpsi + 2548LL);
        goto LABEL_330;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v252)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v254) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v255) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
      goto LABEL_1118;
    }
    if ( (unsigned int)IsDPIDWMSysMet(70LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v257) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v258 = 0)
        : (v258 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1),
          v258) )
    {
      v69 = (unsigned int *)(gpsi + 2936LL);
    }
    else
    {
      v69 = (unsigned int *)(gpsi + 2160LL);
    }
    goto LABEL_330;
  }
  if ( v6 != 58 )
  {
    if ( v6 != 59 )
    {
      if ( v6 != 60 )
      {
        switch ( v6 )
        {
          case '=':
            if ( (!a2 || a2 == 12)
              && Src
              && __PAIR64__(*((_DWORD *)Src + 1) & 3, 12) == *(_QWORD *)Src
              && *((_DWORD *)Src + 2) <= 0x36EE80u )
            {
              if ( (a4 & 1) != 0 )
              {
                v265 = CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 1));
                updated = FastWriteProfileStringW(v265, 18LL, L"Flags", Dest);
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 2));
                v266 = FastWriteProfileStringW(v265, 18LL, L"TimeToWait", Dest);
                v30 = (v266 & updated) == 0;
                updated &= v266;
                v363 = updated;
                if ( v30 )
                {
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", (unsigned int)qword_1C03238F4);
                  FastWriteProfileStringW(v265, 18LL, L"Flags", Dest);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", HIDWORD(qword_1C03238F4));
                  FastWriteProfileStringW(v265, 18LL, L"TimeToWait", Dest);
                }
                FreeProfileUserName(v265, v372);
              }
              if ( v363 )
              {
                memmove(&gAccessTimeOut, Src, *(unsigned int *)Src);
                gAccessTimeOut = 12;
                SetAccessEnabledFlag();
                AccessTimeOutReset();
              }
              goto LABEL_74;
            }
            break;
          case '@':
            if ( !a2 || a2 == 56 )
            {
              v264 = (char *)Src;
              if ( Src )
              {
                if ( *(_DWORD *)Src == 56 )
                {
                  *(_OWORD *)((char *)Src + 4) = xmmword_1C0328824;
                  *(_OWORD *)(v264 + 20) = xmmword_1C0328834;
                  *(_OWORD *)(v264 + 36) = xmmword_1C0328844;
                  *((_DWORD *)v264 + 13) = dword_1C0328854;
                  goto LABEL_74;
                }
              }
            }
            break;
          case 'A':
            v260 = (struct tagSOUNDSENTRYW *)Src;
            if ( !a2 || a2 == 56 )
            {
              if ( Src )
              {
                if ( *(_DWORD *)Src == 56 )
                {
                  v261 = *((_DWORD *)Src + 1);
                  if ( (v261 & 7) == v261
                    && *((_DWORD *)Src + 8) <= 3u
                    && !*((_DWORD *)Src + 2)
                    && !*((_DWORD *)Src + 5) )
                  {
                    if ( (xmmword_1C0328824 & 2) != 0 )
                      v262 = v261 | 2;
                    else
                      v262 = v261 & 0xFFFFFFFD;
                    *((_DWORD *)Src + 1) = v262;
                    if ( v9 )
                    {
                      v263 = (struct _UNICODE_STRING *)CreateProfileUserName(v372, CurrentProcessWin32Process, v8);
                      updated = SetSoundSentry(v263, v260);
                      v363 = updated;
                      if ( !updated )
                        SetSoundSentry(v263, (struct tagSOUNDSENTRYW *)&gSoundSentry);
                      FreeProfileUserName(v263, v372);
                    }
                    if ( !v363 )
                      goto LABEL_74;
                    memmove(&gSoundSentry, v260, *(unsigned int *)v260);
                    gSoundSentry = 56;
                    goto LABEL_1030;
                  }
                }
              }
            }
            break;
          case 'B':
            v13 = Src;
            *((_DWORD *)Src + 1) = gHighContrast[1];
            v14 = (_OWORD *)v13[1];
            v15 = &gHighContrastDefaultScheme;
            do
            {
              *v14 = *(_OWORD *)v15;
              v14[1] = *((_OWORD *)v15 + 1);
              v14[2] = *((_OWORD *)v15 + 2);
              v14[3] = *((_OWORD *)v15 + 3);
              v14[4] = *((_OWORD *)v15 + 4);
              v14[5] = *((_OWORD *)v15 + 5);
              v14[6] = *((_OWORD *)v15 + 6);
              v14 += 8;
              *(v14 - 1) = *((_OWORD *)v15 + 7);
              v15 += 64;
              --v11;
            }
            while ( v11 );
            v16 = (a4 >> 1) & 1;
            goto LABEL_47;
          default:
            v259 = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v9, &v363);
            goto LABEL_1129;
        }
        return 0LL;
      }
      if ( a2 && a2 != 12 )
        return 0LL;
      v267 = (char *)Src;
      if ( !Src || *(_DWORD *)Src != 12 )
        return 0LL;
      v268 = qword_1C03238F4;
LABEL_1168:
      *(_QWORD *)(v267 + 4) = v268;
      goto LABEL_74;
    }
    v269 = (unsigned int *)Src;
    v270 = dword_1C032392C & 1;
    if ( (a2 & 0xFFFFFFF7) != 0 )
      return 0LL;
    if ( !Src )
      return 0LL;
    if ( *(_DWORD *)Src != 8 )
      return 0LL;
    *((_WORD *)Src + 3) = 0;
    v271 = v269[1];
    if ( (v271 & 0x1FF) != v271 )
      return 0LL;
    if ( (dword_1C032392C & 2) != 0 )
      v272 = v271 | 2;
    else
      v272 = v271 & 0xFFFFFFFD;
    v269[1] = v272;
    if ( v9 )
    {
      RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", v272);
      updated = FastWriteProfileStringW(0LL, 14LL, L"Flags", Dest);
      v363 = updated;
    }
    if ( !v363 )
      goto LABEL_74;
    memmove(&gStickyKeys, v269, *v269);
    gStickyKeys = 8;
    if ( (dword_1C032392C & 1) == 0 && v270 )
      xxxTurnOffStickyKeys();
    SetAccessEnabledFlag();
    if ( ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0 )
      xxxCallHook(11LL, 1LL, 0LL);
    v241 = 1LL;
    goto LABEL_1018;
  }
  v8 = (__int64)Src;
  if ( (a2 & 0xFFFFFFF7) != 0 || !Src || *(_DWORD *)Src != 8 )
    return 0LL;
  *((_DWORD *)Src + 1) = dword_1C032392C;
  *(_WORD *)(v8 + 6) = 0;
  *(_DWORD *)(v8 + 4) |= ((unsigned __int8)gLockBits << 16) | ((unsigned __int8)gLatchBits << 24);
LABEL_74:
  v16 = v362;
LABEL_47:
  if ( updated )
  {
    if ( v16 )
    {
      RtlInitLargeUnicodeString(v377, v387, v8);
      v374[0] = 0;
      v374[1] = 100;
      v375 = &v376;
      xxxBroadcastMessageEx(0LL, 26LL, v359, v377, 6, v374, 1, 0);
    }
  }
  return (unsigned int)v363;
}
