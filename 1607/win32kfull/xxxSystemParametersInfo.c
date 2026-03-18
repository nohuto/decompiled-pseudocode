/*
 * XREFs of xxxSystemParametersInfo @ 0x1C0068630
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C000A010 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     GetWindowNCMetrics @ 0x1C0067650 (GetWindowNCMetrics.c)
 *     ReadPointerDeviceSettings @ 0x1C006A3E0 (ReadPointerDeviceSettings.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0084BE0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C008E2D4 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 *     GetKbdLangSwitch @ 0x1C008ECB0 (GetKbdLangSwitch.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C008EFCC (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C008F1B8 (xxxUpdateSystemCursorsFromRegistry.c)
 *     GetEasTimeout @ 0x1C0091344 (GetEasTimeout.c)
 *     CalculateMouseSensitivity @ 0x1C009147C (CalculateMouseSensitivity.c)
 *     ResetMouseAccelerationCurves @ 0x1C00915D0 (ResetMouseAccelerationCurves.c)
 *     GreSetFontEnumeration @ 0x1C009282C (GreSetFontEnumeration.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00931E4 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C009320C (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0093234 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C0093250 (-CalculateMouseTable@@YAXXZ.c)
 *     SetMouseTrails @ 0x1C0094A28 (SetMouseTrails.c)
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     ClearKeyboardStates @ 0x1C0094F30 (ClearKeyboardStates.c)
 *     CheckWinstaAttributeAccess @ 0x1C0098290 (CheckWinstaAttributeAccess.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C009D208 (RtlInitLargeUnicodeString.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     CreateBitmapStrip @ 0x1C00BA210 (CreateBitmapStrip.c)
 *     SetDesktopMetrics @ 0x1C00BA970 (SetDesktopMetrics.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00BAAE4 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     bSetDevDragWidth @ 0x1C00BAF04 (bSetDevDragWidth.c)
 *     SetKeyboardRate @ 0x1C00BC7DC (SetKeyboardRate.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DAA3C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C00E722C (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     HKLtoPKL @ 0x1C00E8460 (HKLtoPKL.c)
 *     SetDesktopPattern @ 0x1C010CF14 (SetDesktopPattern.c)
 *     xxxDesktopRecalc @ 0x1C010DE48 (xxxDesktopRecalc.c)
 *     _SetDoubleClickTime @ 0x1C011F860 (_SetDoubleClickTime.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C01282BC (IsWindowUnderActiveLockScreen.c)
 *     SnapshotMonitorRects @ 0x1C012C970 (SnapshotMonitorRects.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C012DF54 (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C012E514 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012E7F4 (LoadWallpaperFilenameFromRegistry.c)
 *     xxxSetIMEShowStatus @ 0x1C01341F8 (xxxSetIMEShowStatus.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0134FF0 (xxxInvalidateWallpaperWindow.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01CD9CC (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01CDB0C (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01CDD10 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01CDDF8 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01CDF0C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01CE450 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     UpdateWinIniInt @ 0x1C01CE8E8 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01CEDD8 (xxxMetricsRecalc.c)
 *     _SwapMouseButton @ 0x1C01E0580 (_SwapMouseButton.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01E41B8 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01E4558 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01E542C (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C021E364 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C021EDDC (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C021EE8C (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C021EF3C (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     WritePointerDeviceSettings @ 0x1C0225C04 (WritePointerDeviceSettings.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C023AE10 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C023C2DC (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C025C76C (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfo(__int64 a1, __int64 a2, void *a3, __int16 a4)
{
  __int64 CurrentProcessWin32Process; // r13
  unsigned int v6; // r15d
  BOOL v7; // r12d
  unsigned int PointerDeviceSettings; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // r14d
  _QWORD *v13; // rdx
  _OWORD *v14; // rcx
  unsigned __int16 *v15; // rax
  __int64 result; // rax
  __int64 v17; // r8
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // r8d
  int v22; // ecx
  __int64 DPIMetrics; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _DWORD *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _OWORD *v41; // rcx
  unsigned int v42; // ebx
  int *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int *v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  _DWORD *v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  char v69; // al
  __int64 v70; // r9
  unsigned int v71; // r14d
  unsigned int v72; // ecx
  unsigned int v73; // eax
  unsigned int v74; // ecx
  int v75; // r13d
  INT v76; // eax
  int v77; // r14d
  __int64 v78; // r14
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  INT *v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  INT *v98; // rcx
  INT v99; // r13d
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // ebx
  __int64 v103; // r8
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  int *v110; // rcx
  int v111; // r15d
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  _DWORD *v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  INT *v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  INT *v138; // rcx
  __int64 v139; // r9
  __int64 v140; // rax
  _DWORD *v141; // rcx
  void *v142; // rbx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  _DWORD *v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  _DWORD *v156; // rcx
  __int64 v157; // rax
  _DWORD *v158; // r14
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  int v162; // r15d
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  _DWORD *v169; // rbx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  _DWORD *v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  _DWORD *v189; // rbx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  _DWORD *v196; // rcx
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  _DWORD *v206; // rbx
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // r8
  _DWORD *v216; // rcx
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  _DWORD *v226; // rcx
  unsigned int v227; // eax
  int *v228; // rbx
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rdx
  __int64 v237; // r8
  __int64 v238; // r9
  int *v239; // r8
  __int64 v240; // rdx
  __int64 v241; // r8
  __int64 v242; // rcx
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // r9
  _QWORD *v248; // rcx
  __int64 v249; // rax
  __int64 v250; // rbx
  INT v251; // esi
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rdx
  __int64 v257; // r8
  __int64 v258; // rcx
  _WORD *v259; // rdx
  char *v260; // rdx
  int v261; // eax
  struct _UNICODE_STRING *v262; // rbx
  __int64 v263; // rcx
  unsigned int *v264; // rbx
  char *v265; // rcx
  const GUID *v266; // r8
  const GUID *v267; // r9
  int v268; // ecx
  __int64 ProfileUserName; // rbx
  int v270; // r12d
  int v271; // esi
  int v272; // eax
  int v273; // r15d
  INT v274; // r14d
  struct _UNICODE_STRING *v275; // rax
  bool v276; // cf
  unsigned int v277; // ebx
  __int64 v278; // rax
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // rdx
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // rdx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 v288; // rdx
  __int64 v289; // r8
  __int64 v290; // r9
  _DWORD *v291; // rcx
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // rdx
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 v298; // rdx
  __int64 v299; // r8
  __int64 v300; // r9
  unsigned int v301; // r14d
  unsigned int v302; // ebx
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 v305; // r8
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // rdx
  __int64 v310; // r8
  __int64 v311; // r9
  __int64 v312; // rdx
  __int64 v313; // r8
  __int64 v314; // r9
  _DWORD *v315; // rcx
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // rdx
  __int64 v320; // r8
  __int64 v321; // r9
  __int64 v322; // rdx
  __int64 v323; // r8
  __int64 v324; // r9
  unsigned int v325; // r14d
  unsigned int v326; // ebx
  INT v327; // eax
  __int64 v328; // rax
  __int64 v329; // rax
  struct tagWND *v330; // rcx
  __int64 v331; // rdx
  __int64 v332; // r8
  __int64 v333; // r9
  __int64 v334; // rdx
  __int64 v335; // r8
  __int64 v336; // r9
  __int64 v337; // rdx
  __int64 v338; // r8
  __int64 v339; // r9
  __int64 v340; // rdx
  __int64 v341; // r8
  __int64 v342; // r9
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
  __int64 v359; // r8
  __int64 v360; // r9
  __int64 v361; // rdx
  __int64 v362; // r8
  __int64 v363; // r9
  __int64 v364; // rdx
  __int64 v365; // r8
  __int64 v366; // r9
  __int64 v367; // rdx
  __int64 v368; // r8
  __int64 v369; // r9
  __int64 v370; // rdx
  __int64 v371; // r8
  __int64 v372; // r9
  __int64 v373; // r9
  __int64 v374; // r9
  __int64 v375; // rdx
  __int64 v376; // r8
  __int64 v377; // r9
  __int64 v378; // rdx
  __int64 v379; // r8
  __int64 v380; // r9
  __int64 v381; // rdx
  __int64 v382; // r8
  __int64 v383; // r9
  __int64 v384; // rdx
  __int64 v385; // r8
  __int64 v386; // r9
  __int64 v387; // rdx
  __int64 v388; // r8
  __int64 v389; // r9
  __int64 v390; // rdx
  __int64 v391; // r8
  __int64 v392; // r9
  __int64 v393; // rdx
  __int64 v394; // r8
  __int64 v395; // r9
  __int64 v396; // rdx
  __int64 v397; // r8
  __int64 v398; // r9
  __int64 v399; // rdx
  __int64 v400; // r8
  __int64 v401; // r9
  __int64 v402; // rdx
  __int64 v403; // r8
  __int64 v404; // r9
  __int64 v405; // rdx
  __int64 v406; // r8
  __int64 v407; // r9
  __int64 v408; // rdx
  __int64 v409; // r8
  __int64 v410; // r9
  struct _UNICODE_STRING *v411; // rbx
  unsigned int v412; // r15d
  __int64 v413; // rdx
  __int64 v414; // r8
  __int64 v415; // r9
  __int64 v416; // rdx
  __int64 v417; // r8
  __int64 v418; // r9
  __int64 v419; // rdx
  __int64 v420; // r8
  __int64 v421; // r9
  __int64 v422; // rdx
  __int64 v423; // r8
  __int64 v424; // r9
  __int64 v425; // rdx
  __int64 v426; // r8
  __int64 v427; // r9
  __int64 v428; // rdx
  __int64 v429; // r8
  __int64 v430; // r9
  __int64 v431; // rdx
  __int64 v432; // r8
  __int64 v433; // r9
  __int64 v434; // rdx
  __int64 v435; // r8
  __int64 v436; // r9
  __int64 v437; // rdx
  __int64 v438; // r8
  __int64 v439; // r9
  __int64 v440; // rdx
  __int64 v441; // r8
  __int64 v442; // r9
  __int64 v443; // rax
  __int64 v444; // r9
  __int64 v445; // r9
  __int64 v446; // rax
  __int64 v447; // rdx
  __int64 v448; // r8
  __int64 v449; // r9
  __int64 v450; // rdx
  __int64 v451; // r8
  __int64 v452; // r9
  __int64 v453; // rdx
  __int64 v454; // r8
  __int64 v455; // r9
  __int64 v456; // rdx
  __int64 v457; // r8
  __int64 v458; // r9
  __int64 v459; // rdx
  __int64 v460; // r8
  __int64 v461; // r9
  __int64 v462; // rdx
  __int64 v463; // r8
  __int64 v464; // r9
  __int64 v465; // rdx
  __int64 v466; // r8
  __int64 v467; // r9
  __int64 v468; // rdx
  __int64 v469; // r8
  __int64 v470; // r9
  __int64 v471; // rdx
  __int64 v472; // r8
  __int64 v473; // r9
  __int64 v474; // rdx
  __int64 v475; // r8
  __int64 v476; // r9
  __int64 v477; // rdx
  __int64 v478; // r8
  __int64 v479; // r9
  __int64 v480; // rdx
  __int64 v481; // r8
  __int64 v482; // r9
  __int64 v483; // rdx
  __int64 v484; // r8
  __int64 v485; // r9
  __int64 v486; // rdx
  __int64 v487; // r8
  __int64 v488; // r9
  __int64 v489; // rdx
  __int64 v490; // r8
  __int64 v491; // r9
  __int64 v492; // rdx
  __int64 v493; // r8
  __int64 v494; // r9
  __int64 v495; // rdx
  __int64 v496; // rcx
  __int64 v497; // r8
  __int64 v498; // rdx
  __int64 v499; // r8
  __int64 v500; // r9
  __int64 v501; // rdx
  __int64 v502; // r8
  __int64 v503; // r9
  __int64 v504; // rdx
  __int64 v505; // r8
  __int64 v506; // r9
  __int64 v507; // rdx
  __int64 v508; // r8
  __int64 v509; // r9
  __int64 v510; // rdx
  __int64 v511; // rcx
  __int64 v512; // r8
  __int64 v513; // rdx
  __int64 v514; // r8
  __int64 v515; // r9
  __int64 v516; // rdx
  __int64 v517; // r8
  __int64 v518; // r9
  __int64 v519; // rdx
  __int64 v520; // r8
  __int64 v521; // r9
  __int64 v522; // rdx
  __int64 v523; // r8
  __int64 v524; // r9
  __int64 v525; // rdx
  __int64 v526; // r8
  __int64 v527; // r9
  __int64 v528; // r9
  __int64 v529; // rax
  __int64 v530; // r9
  __int64 v531; // r9
  __int64 v532; // rax
  __int64 v533; // r9
  __int64 v534; // rax
  __int64 v535; // rdx
  __int64 v536; // r8
  __int64 v537; // r9
  __int64 v538; // r9
  __int64 v539; // rax
  __int64 v540; // r9
  __int64 v541; // r9
  __int64 v542; // rax
  __int64 DispInfo; // rax
  __int64 v544; // rdx
  __int64 v545; // rcx
  __int64 v546; // r8
  __int64 v547; // rdx
  __int64 v548; // rcx
  __int64 v549; // r8
  __int64 v550; // r9
  __int64 v551; // r9
  __int64 v552; // rax
  _OWORD *v553; // rcx
  __int64 v554; // rdx
  __int64 v555; // r8
  __int64 v556; // r9
  __int64 v557; // rdx
  __int64 v558; // r8
  __int64 v559; // r9
  __int64 v560; // rdx
  __int64 v561; // rcx
  __int64 v562; // r8
  __int64 v563; // r9
  __int64 v564; // r9
  __int64 v565; // rax
  __int64 v566; // rdx
  __int64 v567; // r8
  __int64 v568; // r9
  __int64 v569; // rdx
  __int64 v570; // r8
  __int64 v571; // r9
  __int64 v572; // rdx
  __int64 v573; // r8
  __int64 v574; // r9
  __int64 v575; // r9
  __int64 v576; // rax
  __int64 v577; // r9
  __int64 v578; // r9
  __int64 v579; // rax
  __int64 v580; // r9
  __int64 v581; // rax
  __int64 v582; // rdx
  __int64 v583; // r8
  __int64 v584; // r9
  __int64 v585; // r9
  __int64 v586; // rax
  __int64 v587; // rdx
  __int64 v588; // r8
  __int64 v589; // r9
  struct tagFILTERKEYS *v590; // r14
  int v591; // ecx
  unsigned int v592; // ecx
  struct _UNICODE_STRING *v593; // r12
  unsigned int *v594; // rbx
  int v595; // r14d
  unsigned int v596; // ecx
  unsigned int v597; // ecx
  unsigned int *v598; // rbx
  int v599; // ecx
  unsigned int v600; // ecx
  struct tagMOUSEKEYS *v601; // rbx
  int v602; // ecx
  struct _UNICODE_STRING *v603; // r14
  __int64 v604; // r12
  int v605; // eax
  bool v606; // zf
  _DWORD *v607; // r10
  int v608; // ebx
  __int64 v609; // rdx
  __int64 v610; // rcx
  __int64 v611; // r8
  __int64 v612; // rdx
  __int64 v613; // rcx
  __int64 v614; // r8
  __int64 v615; // rdx
  __int64 v616; // r8
  __int64 v617; // r9
  __int64 v618; // rdx
  __int64 v619; // r8
  __int64 v620; // r9
  int *v621; // rcx
  __int64 v622; // rdx
  __int64 v623; // rcx
  __int64 v624; // r8
  __int64 v625; // rdx
  __int64 v626; // r8
  __int64 v627; // r9
  __int64 v628; // rdx
  __int64 v629; // r8
  __int64 v630; // r9
  const wchar_t *v631; // r9
  const wchar_t *v632; // r9
  struct tagSOUNDSENTRYW *v633; // rbx
  int v634; // ecx
  unsigned int v635; // ecx
  struct _UNICODE_STRING *v636; // r14
  unsigned int v637; // r14d
  __int64 v638; // rax
  __int64 v639; // r13
  const wchar_t *v640; // rbx
  const wchar_t *v641; // r9
  int v642; // eax
  _DWORD *v643; // rcx
  int v644; // eax
  int v645; // ecx
  InteractiveControlManager *v646; // rax
  InteractiveControlManager *v647; // rax
  __int64 v648; // rax
  __int64 v649; // r13
  unsigned int v650; // r8d
  __int64 v651; // rcx
  int v652; // eax
  unsigned int ProfileValue; // eax
  _DWORD *v654; // rdx
  int v655; // eax
  unsigned int v656; // ecx
  _DWORD *v657; // r8
  int v658; // eax
  __int64 v659; // rax
  struct tagWND *v660; // rcx
  void *v661; // rax
  __int64 v662; // rax
  __int64 v663; // rbx
  __int64 v664; // rax
  unsigned int v665; // r15d
  int v666; // ebx
  __int64 v667; // rdx
  __int64 v668; // rcx
  __int64 v669; // r8
  __int64 v670; // rdx
  __int64 v671; // rcx
  __int64 v672; // r8
  __int64 v673; // rdx
  __int64 v674; // r8
  __int64 v675; // r9
  __int64 v676; // rdx
  __int64 v677; // r8
  __int64 v678; // r9
  _DWORD *v679; // rbx
  __int64 v680; // rdx
  __int64 v681; // rcx
  __int64 v682; // r8
  __int64 v683; // rdx
  __int64 v684; // r8
  __int64 v685; // r9
  __int64 v686; // rdx
  __int64 v687; // r8
  __int64 v688; // r9
  __int64 v689; // rdx
  __int64 v690; // rcx
  __int64 v691; // r8
  __int64 v692; // rdx
  __int64 v693; // rcx
  __int64 v694; // r8
  __int64 v695; // rdx
  __int64 v696; // r8
  __int64 v697; // r9
  __int64 v698; // rdx
  __int64 v699; // r8
  __int64 v700; // r9
  __int64 v701; // rdx
  __int64 v702; // rcx
  __int64 v703; // r8
  __int64 v704; // rdx
  __int64 v705; // r8
  __int64 v706; // r9
  __int64 v707; // rdx
  __int64 v708; // r8
  __int64 v709; // r9
  _BYTE *v710; // rax
  int *v711; // rax
  BOOL *cData; // [rsp+20h] [rbp-458h]
  int pData; // [rsp+28h] [rbp-450h]
  int v714; // [rsp+40h] [rbp-438h] BYREF
  INT a; // [rsp+44h] [rbp-434h]
  int updated; // [rsp+48h] [rbp-430h] BYREF
  BOOL v717; // [rsp+4Ch] [rbp-42Ch] BYREF
  void *Src; // [rsp+50h] [rbp-428h] BYREF
  unsigned int v719; // [rsp+58h] [rbp-420h] BYREF
  __int64 v720; // [rsp+60h] [rbp-418h] BYREF
  int *v721; // [rsp+68h] [rbp-410h] BYREF
  BOOL v722; // [rsp+70h] [rbp-408h] BYREF
  _BYTE v723[24]; // [rsp+78h] [rbp-400h] BYREF
  _BYTE v724[8]; // [rsp+90h] [rbp-3E8h] BYREF
  BOOL v725; // [rsp+98h] [rbp-3E0h]
  _DWORD v726[2]; // [rsp+A0h] [rbp-3D8h] BYREF
  char *v727; // [rsp+A8h] [rbp-3D0h]
  char v728; // [rsp+C0h] [rbp-3B8h] BYREF
  _BYTE v729[16]; // [rsp+C8h] [rbp-3B0h] BYREF
  _BYTE v730[24]; // [rsp+D8h] [rbp-3A0h] BYREF
  __int128 v731; // [rsp+F0h] [rbp-388h] BYREF
  __int128 v732; // [rsp+100h] [rbp-378h] BYREF
  char v733[20]; // [rsp+110h] [rbp-368h] BYREF
  __int64 v734; // [rsp+124h] [rbp-354h]
  int v735; // [rsp+12Ch] [rbp-34Ch]
  char v736[20]; // [rsp+130h] [rbp-348h] BYREF
  INT v737; // [rsp+144h] [rbp-334h]
  EVENT_DATA_DESCRIPTOR v738; // [rsp+148h] [rbp-330h] BYREF
  unsigned int *v739; // [rsp+168h] [rbp-310h]
  __int64 v740; // [rsp+170h] [rbp-308h]
  wchar_t Dest[40]; // [rsp+180h] [rbp-2F8h] BYREF
  _WORD v742[40]; // [rsp+1D0h] [rbp-2A8h] BYREF
  _BYTE v743[528]; // [rsp+220h] [rbp-258h] BYREF

  a = a2;
  v719 = a1;
  Src = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  updated = 0;
  v6 = a4 & 1;
  v7 = (a4 & 1) != 0;
  v725 = (a4 & 2) != 0;
  if ( (a4 & 1) != 0 )
  {
    PointerDeviceSettings = 0;
    v714 = 0;
  }
  else
  {
    PointerDeviceSettings = 1;
    v714 = 1;
  }
  v722 = a4 < 0;
  v742[0] = 0;
  if ( v719 >= 0x4F || v719 < 0x40 )
  {
    switch ( v719 )
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
        goto LABEL_289;
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
        break;
    }
  }
  if ( (unsigned __int8)PsIsWin32KFilterEnabled() && !IsSPIActionAllowedForFilteredProcess(v719) )
  {
    EtwTraceSPIBlockedByFiltering(v21);
    if ( dword_1C0320120 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320120, 0x400000000000uLL) )
    {
      v739 = &v719;
      v740 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320120, &unk_1C02EE354, v266, v267, 3u, &v738);
      return 0LL;
    }
    return 0LL;
  }
  v10 = gpepCSRSS;
  if ( *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS )
  {
    v11 = 2LL;
    goto LABEL_11;
  }
  if ( v719 == 66 || v719 > 0x1027 )
  {
LABEL_8:
    if ( (v719 & 0x3000) == 0 || (v719 & 1) == 0 )
    {
LABEL_9:
      v11 = 2LL;
      v12 = 2;
      if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 648), 2u) )
      {
        UserSetLastError(5LL);
        return 0LL;
      }
LABEL_10:
      if ( v12 != 2 )
      {
LABEL_12:
        if ( v719 == 66 )
        {
          v13 = Src;
          *((_DWORD *)Src + 1) = gHighContrast[1];
          v14 = (_OWORD *)v13[1];
          v15 = gHighContrastDefaultScheme;
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
          goto LABEL_15;
        }
        if ( v719 <= 0x1026 )
        {
          if ( v719 == 4134 )
          {
            *(_DWORD *)Src = gbBlockSendInputResets != 0;
            goto LABEL_15;
          }
          v17 = v719 - 1;
          switch ( v719 )
          {
            case 1u:
              *(_DWORD *)Src = (gdwPUDFlags >> 19) & 1;
              goto LABEL_15;
            case 2u:
              if ( v7 )
              {
                RtlLoadStringOrError(105 - (unsigned int)(a != 0), Dest, 10LL);
                updated = FastUpdateWinIni(0LL, 11LL, 9LL, Dest);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( a )
                  gdwPUDFlags |= 0x80000u;
                else
                  gdwPUDFlags &= ~0x80000u;
              }
              goto LABEL_15;
            case 3u:
              *(_DWORD *)Src = gMouseThresh1;
              *((_DWORD *)Src + 1) = gMouseThresh2;
              *((_DWORD *)Src + 2) = gMouseSpeed;
              goto LABEL_15;
            case 4u:
              if ( !v7 )
                goto LABEL_450;
              ProfileUserName = CreateProfileUserName(v723);
              v270 = UpdateWinIniInt(ProfileUserName, 12LL, 10LL, *(unsigned int *)Src);
              v271 = UpdateWinIniInt(ProfileUserName, 12LL, 11LL, *((unsigned int *)Src + 1));
              v272 = UpdateWinIniInt(ProfileUserName, 12LL, 12LL, *((unsigned int *)Src + 2));
              v273 = v272;
              if ( !v270 )
                goto LABEL_445;
              if ( v271 && v272 )
              {
                updated = 1;
              }
              else
              {
                UpdateWinIniInt(ProfileUserName, 12LL, 10LL, (unsigned int)gMouseThresh1);
LABEL_445:
                if ( v271 )
                  UpdateWinIniInt(ProfileUserName, 12LL, 11LL, (unsigned int)gMouseThresh2);
                if ( v273 )
                  UpdateWinIniInt(ProfileUserName, 12LL, 12LL, (unsigned int)gMouseSpeed);
              }
              PointerDeviceSettings = updated;
              FreeProfileUserName(ProfileUserName, v723);
LABEL_450:
              if ( PointerDeviceSettings )
              {
                gMouseThresh1 = *(_DWORD *)Src;
                gMouseThresh2 = *((_DWORD *)Src + 1);
                gMouseSpeed = *((_DWORD *)Src + 2);
              }
              goto LABEL_15;
            case 5u:
              *(_DWORD *)Src = *(_DWORD *)GetDPIServerInfo();
              goto LABEL_15;
            case 6u:
              v274 = a;
              if ( a > 1 )
              {
                if ( (unsigned int)a >= 0x32 )
                  v274 = 50;
              }
              else
              {
                v274 = 1;
              }
              if ( v274 == *(_DWORD *)GetDPIServerInfo() )
              {
                PointerDeviceSettings = 1;
                goto LABEL_15;
              }
              v275 = (struct _UNICODE_STRING *)CreateProfileUserName(v723);
              v262 = v275;
              if ( v7 )
              {
                updated = SetWindowMetricInt(v275, 0x88u, v274);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                xxxSetAndDrawNCMetrics(v262, v274, 0LL);
                bSetDevDragWidth(*gpDispInfo, (unsigned int)(*(_DWORD *)(gpsi + 5416LL) + 3));
              }
              goto LABEL_384;
            case 0xAu:
              *(_DWORD *)Src = gnKeyboardSpeed & 0x1F;
              goto LABEL_15;
            case 0xBu:
              v74 = a;
              if ( (unsigned int)a > 0x1F )
              {
                v74 = 31;
                a = 31;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 13LL, v74);
                PointerDeviceSettings = updated;
                v74 = a;
              }
              if ( PointerDeviceSettings )
              {
                gnKeyboardSpeed = v74 | gnKeyboardSpeed & 0xFFFFFFE0;
                SetKeyboardRate();
              }
              goto LABEL_15;
            case 0xDu:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
              {
                v301 = a;
                if ( a )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v17) & 0xF) != 0 )
                  {
                    v302 = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 8678LL));
                  }
                  else
                  {
                    v302 = a;
                    v301 = EngMulDiv(a, *(unsigned __int16 *)(gpsi + 8678LL), 96);
                  }
                  if ( v301 <= *(_DWORD *)(gpsi + 1924LL) )
                    v301 = *(_DWORD *)(gpsi + 1924LL);
                  if ( v302 <= *(_DWORD *)(gpsi + 2312LL) )
                    v302 = *(_DWORD *)(gpsi + 2312LL);
                  if ( v7 )
                  {
                    updated = SetWindowMetricInt(0LL, 0x40u, v301);
                    PointerDeviceSettings = updated;
                  }
                  if ( PointerDeviceSettings )
                  {
                    SetDpiDepSysMet(38LL, v301);
                    *(_DWORD *)(gpsi + 2420LL) = v302;
                  }
                }
                goto LABEL_15;
              }
              if ( (unsigned int)IsDPIAbsoluteSysMet(38LL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v280, v279, v281) & 0xF) == 0 )
                  goto LABEL_487;
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v280)
                     && (W32GetCurrentThreadDpiAwarenessContext(v283, v282, v284) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v285, v286, v287) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v288,
                                                            v289,
                                                            v290)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
LABEL_487:
                  v291 = (_DWORD *)(gpsi + 2420LL);
LABEL_496:
                  *(_DWORD *)Src = *v291;
                  goto LABEL_15;
                }
                PointerDeviceSettings = v714;
              }
              if ( (unsigned int)IsDPIDWMSysMet(38LL)
                && (W32GetCurrentThreadDpiAwarenessContext(v293, v292, v294) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v295, v296, v297) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v298,
                                                            v299,
                                                            v300)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v291 = (_DWORD *)(gpsi + 2808LL);
                  PointerDeviceSettings = v714;
                  goto LABEL_496;
                }
                PointerDeviceSettings = v714;
              }
              v291 = (_DWORD *)(gpsi + 2032LL);
              goto LABEL_496;
            case 0xEu:
              *(_DWORD *)Src = (int)abs32(giScreenSaveTimeOutMs) / 1000;
              goto LABEL_15;
            case 0xFu:
              if ( gfSwitchInProgress )
                return 0LL;
              if ( gdwRITdemonLockState && !v722 )
                goto LABEL_540;
              v75 = 1000 * a;
              v76 = 1000 * GetEasTimeout();
              a = v76;
              if ( v76 )
              {
                v77 = 1;
                if ( giScreenSaveTimeOutMs > 0 && v76 < v75 || v75 <= 0 )
                {
                  UserSetLastError(1260LL);
                  v7 = 0;
                  PointerDeviceSettings = 0;
                  v714 = 0;
                }
              }
              else
              {
                v77 = 0;
              }
              if ( !(unsigned int)CheckDesktopPolicy(0LL, 99LL) )
                goto LABEL_149;
              if ( !v77 )
                goto LABEL_552;
              v722 = 0;
              cData = &v722;
              if ( (unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
              {
                v327 = 1000 * v722;
                v722 = v327;
                if ( v327 )
                {
                  if ( v327 < a && giScreenSaveTimeOutMs > 0 && v327 < v75 )
                  {
                    UserSetLastError(1260LL);
LABEL_552:
                    v714 = 0;
                    PointerDeviceSettings = 0;
                    v7 = 0;
                  }
                }
              }
LABEL_149:
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 99LL, v75 / 0x3E8u);
                PointerDeviceSettings = updated;
                v714 = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( !gbBlockSendInputResets )
                {
                  UpdateLastInput(
                    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                    5LL);
                  PointerDeviceSettings = v714;
                }
                if ( giScreenSaveTimeOutMs < 0 && !v77 )
                  v75 = -v75;
                giScreenSaveTimeOutMs = v75;
              }
              goto LABEL_15;
            case 0x10u:
              *(_DWORD *)Src = giScreenSaveTimeOutMs > 0;
              goto LABEL_15;
            case 0x11u:
              if ( (unsigned int)(a - 2) <= 0xFFFFFFFC )
                return 0LL;
              if ( gdwRITdemonLockState && !v722 )
                goto LABEL_540;
              gbLockConsoleActive = a == -1;
              if ( gfSwitchInProgress )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
                v714 = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 100LL, (unsigned int)a);
                PointerDeviceSettings = updated;
                v714 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_15;
              if ( !gbBlockSendInputResets )
              {
                UpdateLastInput(
                  (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                  5LL);
                PointerDeviceSettings = v714;
              }
              if ( giScreenSaveTimeOutMs >= 0 )
                goto LABEL_173;
              if ( a )
                goto LABEL_174;
              if ( giScreenSaveTimeOutMs >= 0 )
              {
LABEL_173:
                if ( !a )
LABEL_174:
                  giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
              }
              goto LABEL_15;
            case 0x14u:
              v262 = (struct _UNICODE_STRING *)CreateProfileUserName(v723);
              if ( (unsigned int)CheckDesktopPolicy(v262, 67LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( !v7 )
                goto LABEL_381;
              if ( a == -1 )
              {
                PointerDeviceSettings = 1;
              }
              else
              {
                FastGetProfileStringFromIDW(v262, 4LL, 67LL, &qword_1C015B240, v743, 260, 8);
                updated = FastUpdateWinIni(v262, 4LL, 67LL, Src);
                PointerDeviceSettings = updated;
LABEL_381:
                if ( !PointerDeviceSettings )
                  goto LABEL_384;
              }
              if ( (unsigned int)xxxSetDeskWallpaper(v262, Src) )
              {
                xxxInvalidateWallpaperWindow();
                goto LABEL_384;
              }
              if ( v7 )
              {
                if ( a == -1 )
                  goto LABEL_384;
                FastUpdateWinIni(v262, 4LL, 67LL, v743);
              }
              PointerDeviceSettings = 0;
              updated = 0;
              goto LABEL_384;
            case 0x15u:
              if ( a == -1 && Src )
                goto LABEL_289;
              v78 = CreateProfileUserName(v723);
              if ( (unsigned int)CheckDesktopPolicy(v78, 2LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 && Src )
              {
                FastGetProfileStringFromIDW(v78, 4LL, 2LL, &qword_1C015B240, v743, 260, 0);
                updated = FastUpdateWinIni(v78, 4LL, 2LL, Src);
                PointerDeviceSettings = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_586;
              if ( !(unsigned int)SetDesktopPattern(v78, Src) )
              {
                if ( v7 && Src )
                  FastUpdateWinIni(v78, 4LL, 2LL, v743);
                FreeProfileUserName(v78, v723);
                return 0LL;
              }
              xxxSendNotifyMessage(-1LL, 21LL, 0LL, 0LL, 1);
              v329 = *(_QWORD *)(gptiCurrent + 408LL);
              if ( v329 )
                v330 = *(struct tagWND **)(*(_QWORD *)(v329 + 8) + 16LL);
              else
                v330 = 0LL;
              xxxInternalInvalidate(v330, (HRGN)1, 0x10485u);
LABEL_586:
              v263 = v78;
              goto LABEL_385;
            case 0x16u:
              *(_DWORD *)Src = (gnKeyboardSpeed >> 5) & 3;
              goto LABEL_15;
            case 0x17u:
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 106LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * a);
                SetKeyboardRate();
              }
              goto LABEL_15;
            case 0x18u:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
              {
                v325 = a;
                if ( a )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v17) & 0xF) != 0 )
                  {
                    v326 = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 8678LL));
                  }
                  else
                  {
                    v326 = a;
                    v325 = EngMulDiv(a, *(unsigned __int16 *)(gpsi + 8678LL), 96);
                  }
                  if ( v325 <= *(_DWORD *)(gpsi + 1928LL) )
                    v325 = *(_DWORD *)(gpsi + 1928LL);
                  if ( v326 <= *(_DWORD *)(gpsi + 2316LL) )
                    v326 = *(_DWORD *)(gpsi + 2316LL);
                  if ( v7 )
                  {
                    updated = SetWindowMetricInt(0LL, 0x41u, v325);
                    PointerDeviceSettings = updated;
                  }
                  if ( PointerDeviceSettings )
                  {
                    SetDpiDepSysMet(39LL, v325);
                    *(_DWORD *)(gpsi + 2424LL) = v326;
                  }
                }
                goto LABEL_15;
              }
              if ( (unsigned int)IsDPIAbsoluteSysMet(39LL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v304, v303, v305) & 0xF) == 0 )
                  goto LABEL_518;
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v304)
                     && (W32GetCurrentThreadDpiAwarenessContext(v307, v306, v308) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v309, v310, v311) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v312,
                                                            v313,
                                                            v314)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
LABEL_518:
                  v315 = (_DWORD *)(gpsi + 2424LL);
LABEL_527:
                  *(_DWORD *)Src = *v315;
                  goto LABEL_15;
                }
                PointerDeviceSettings = v714;
              }
              if ( (unsigned int)IsDPIDWMSysMet(39LL)
                && (W32GetCurrentThreadDpiAwarenessContext(v317, v316, v318) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v319, v320, v321) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v322,
                                                            v323,
                                                            v324)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v315 = (_DWORD *)(gpsi + 2812LL);
                  PointerDeviceSettings = v714;
                  goto LABEL_527;
                }
                PointerDeviceSettings = v714;
              }
              v315 = (_DWORD *)(gpsi + 2036LL);
              goto LABEL_527;
            case 0x19u:
              *(_DWORD *)Src = (gdwPUDFlags >> 21) & 1;
              goto LABEL_15;
            case 0x1Au:
              if ( v7 )
              {
                updated = SetWindowMetricInt(0LL, 0x42u, a != 0);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( a )
                  gdwPUDFlags |= 0x200000u;
                else
                  gdwPUDFlags &= ~0x200000u;
                xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
              }
              goto LABEL_15;
            case 0x1Bu:
              if ( (unsigned int)IsDPIAbsoluteSysMet(40LL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26) & 0xF) == 0 )
                {
LABEL_627:
                  v33 = (_DWORD *)(gpsi + 2428LL);
LABEL_62:
                  *(_DWORD *)Src = *v33;
LABEL_15:
                  if ( updated )
                  {
LABEL_376:
                    if ( v725 )
                    {
                      RtlInitLargeUnicodeString(v729, v742);
                      v726[0] = 0;
                      v726[1] = 100;
                      v727 = &v728;
                      LODWORD(cData) = 6;
                      xxxBroadcastMessageEx(0LL, 26LL, v719, v729, cData, v726, 1, 0);
                    }
                  }
                  return PointerDeviceSettings;
                }
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v25)
                     && (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v355, v356, v357) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v358,
                                                            v359,
                                                            v360)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
                  goto LABEL_627;
                }
                PointerDeviceSettings = v714;
              }
              if ( (unsigned int)IsDPIDWMSysMet(40LL)
                && (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v361, v362, v363) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v364,
                                                            v365,
                                                            v366)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v33 = (_DWORD *)(gpsi + 2816LL);
                  PointerDeviceSettings = v714;
                  goto LABEL_62;
                }
                PointerDeviceSettings = v714;
              }
              v33 = (_DWORD *)(gpsi + 2040LL);
              goto LABEL_62;
            case 0x1Cu:
              v99 = a;
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 3LL, 96LL, (unsigned int)a);
                PointerDeviceSettings = updated;
                v714 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_15;
              v102 = IsDPIAbsoluteSysMet(40LL);
              if ( v102 )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v101, v100, v103) & 0xF) == 0 )
                {
LABEL_640:
                  v110 = (int *)(gpsi + 2428LL);
                  goto LABEL_213;
                }
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v101)
                     && (W32GetCurrentThreadDpiAwarenessContext(v105, v104, v106) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v367, v368, v369) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v370,
                                                            v371,
                                                            v372)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
                  goto LABEL_640;
                }
                PointerDeviceSettings = v714;
              }
              if ( (unsigned int)IsDPIDWMSysMet(40LL)
                && (W32GetCurrentThreadDpiAwarenessContext(v108, v107, v109) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v109, v373) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v107,
                                                            v109,
                                                            v374)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v110 = (int *)(gpsi + 2816LL);
                  PointerDeviceSettings = v714;
LABEL_213:
                  v111 = *v110;
                  if ( v102 )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v110, v107, v109) & 0xF) == 0 )
                    {
LABEL_653:
                      v118 = (_DWORD *)(gpsi + 2428LL);
                      goto LABEL_217;
                    }
                  }
                  else if ( (unsigned int)IsDPIDWMSysMet(40LL)
                         && (W32GetCurrentThreadDpiAwarenessContext(v113, v112, v114) & 0xF) == 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v375, v376, v377) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v378,
                                                                v379,
                                                                v380)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      PointerDeviceSettings = v714;
                      goto LABEL_653;
                    }
                    PointerDeviceSettings = v714;
                  }
                  if ( (unsigned int)IsDPIDWMSysMet(40LL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v116, v115, v117) & 0xF) == 1 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v381, v382, v383) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v384,
                                                                v385,
                                                                v386)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v118 = (_DWORD *)(gpsi + 2816LL);
                      PointerDeviceSettings = v714;
                      goto LABEL_217;
                    }
                    PointerDeviceSettings = v714;
                  }
                  v118 = (_DWORD *)(gpsi + 2040LL);
LABEL_217:
                  *v118 = a != 0;
                  TraceLoggingSPISetMenuDropAlignmentEvent(v111, v99 != 0);
                  goto LABEL_15;
                }
                PointerDeviceSettings = v714;
              }
              v110 = (int *)(gpsi + 2040LL);
              goto LABEL_213;
            case 0x1Du:
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 97LL, (unsigned int)a);
                PointerDeviceSettings = updated;
                v714 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_15;
              if ( (unsigned int)IsDPIAbsoluteSysMet(36LL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v120, v119, v121) & 0xF) == 0 )
                {
LABEL_666:
                  v128 = (INT *)(gpsi + 2412LL);
LABEL_225:
                  *v128 = a;
                  goto LABEL_15;
                }
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v120)
                     && (W32GetCurrentThreadDpiAwarenessContext(v123, v122, v124) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v387, v388, v389) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v390,
                                                            v391,
                                                            v392)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
                  goto LABEL_666;
                }
                PointerDeviceSettings = v714;
              }
              if ( (unsigned int)IsDPIDWMSysMet(36LL)
                && (W32GetCurrentThreadDpiAwarenessContext(v126, v125, v127) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v393, v394, v395) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v396,
                                                            v397,
                                                            v398)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v128 = (INT *)(gpsi + 2800LL);
                  PointerDeviceSettings = v714;
                  goto LABEL_225;
                }
                PointerDeviceSettings = v714;
              }
              v128 = (INT *)(gpsi + 2024LL);
              goto LABEL_225;
            case 0x1Eu:
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 98LL, (unsigned int)a);
                PointerDeviceSettings = updated;
                v714 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_15;
              if ( (unsigned int)IsDPIAbsoluteSysMet(37LL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v130, v129, v131) & 0xF) == 0 )
                {
LABEL_679:
                  v138 = (INT *)(gpsi + 2416LL);
LABEL_233:
                  *v138 = a;
                  goto LABEL_15;
                }
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v130)
                     && (W32GetCurrentThreadDpiAwarenessContext(v133, v132, v134) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v399, v400, v401) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v402,
                                                            v403,
                                                            v404)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
                  goto LABEL_679;
                }
                PointerDeviceSettings = v714;
              }
              if ( (unsigned int)IsDPIDWMSysMet(37LL)
                && (W32GetCurrentThreadDpiAwarenessContext(v136, v135, v137) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v405, v406, v407) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v408,
                                                            v409,
                                                            v410)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v138 = (INT *)(gpsi + 2804LL);
                  PointerDeviceSettings = v714;
                  goto LABEL_233;
                }
                PointerDeviceSettings = v714;
              }
              v138 = (INT *)(gpsi + 2028LL);
              goto LABEL_233;
            case 0x1Fu:
              DPIMetrics = GetDPIMetrics();
              GreExtGetObjectW(*(struct HLFONT__ **)(DPIMetrics + 32), 92, (unsigned __int16 *)Src);
              goto LABEL_15;
            case 0x20u:
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 6LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                SetDoubleClickTime((unsigned int)a);
              goto LABEL_15;
            case 0x21u:
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 5LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                SwapMouseButton(a != 0);
              goto LABEL_15;
            case 0x22u:
              if ( Src )
              {
                if ( a != 92 )
                  return 0LL;
              }
              else if ( a )
              {
                return 0LL;
              }
              v411 = (struct _UNICODE_STRING *)CreateProfileUserName(v723);
              v412 = xxxSetSPIMetrics(v411, v719, Src, v7);
              updated = v412;
              FreeProfileUserName(v411, v723);
              if ( v7 )
                PointerDeviceSettings = v412;
              goto LABEL_15;
            case 0x23u:
              *(_DWORD *)Src = 1;
              goto LABEL_15;
            case 0x24u:
              goto LABEL_15;
            case 0x25u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 107LL, a == 1);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( a == 1 )
                  gdwPUDFlags |= 0x100000u;
                else
                  gdwPUDFlags &= ~0x100000u;
              }
              goto LABEL_15;
            case 0x26u:
              if ( (gdwPUDFlags & 0x100000) == 0 )
                goto LABEL_54;
              v22 = 1;
              goto LABEL_49;
            case 0x29u:
              if ( !Src )
                return 0LL;
              GetWindowNCMetrics((__int64)Src);
              goto LABEL_15;
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x49u:
              v227 = xxxSetSPIMetrics(0LL, v719, Src, v7);
              updated = v227;
              if ( v7 )
                PointerDeviceSettings = v227;
              RtlLoadStringOrError(135LL, v742, 40LL);
              goto LABEL_15;
            case 0x2Bu:
              v158 = Src;
              *(_DWORD *)Src = 20;
              v162 = IsDPIAbsoluteSysMet(57LL);
              if ( v162 )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v160, v159, v161) & 0xF) == 0 )
                {
LABEL_698:
                  v169 = (_DWORD *)(gpsi + 2496LL);
                  goto LABEL_308;
                }
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v160)
                     && (W32GetCurrentThreadDpiAwarenessContext(v164, v163, v165) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v413, v414, v415) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v416,
                                                            v417,
                                                            v418)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
                  goto LABEL_698;
                }
                PointerDeviceSettings = v714;
              }
              if ( (unsigned int)IsDPIDWMSysMet(57LL)
                && (W32GetCurrentThreadDpiAwarenessContext(v167, v166, v168) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v419, v420, v421) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v422,
                                                            v423,
                                                            v424)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v169 = (_DWORD *)(gpsi + 2884LL);
                  PointerDeviceSettings = v714;
LABEL_308:
                  if ( (unsigned int)IsDPIAbsoluteSysMet(7LL) )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v171, v170, v172) & 0xF) == 0 )
                    {
LABEL_711:
                      v179 = (_DWORD *)(gpsi + 2296LL);
                      goto LABEL_312;
                    }
                  }
                  else if ( (unsigned int)IsDPIDWMSysMet(v171)
                         && (W32GetCurrentThreadDpiAwarenessContext(v174, v173, v175) & 0xF) == 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v425, v426, v427) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v428,
                                                                v429,
                                                                v430)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      PointerDeviceSettings = v714;
                      goto LABEL_711;
                    }
                    PointerDeviceSettings = v714;
                  }
                  if ( (unsigned int)IsDPIDWMSysMet(7LL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v177, v176, v178) & 0xF) == 1 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v431, v432, v433) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v434,
                                                                v435,
                                                                v436)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v179 = (_DWORD *)(gpsi + 2684LL);
                      PointerDeviceSettings = v714;
LABEL_312:
                      v158[1] = *v169 - 2 * *v179;
                      if ( (unsigned int)IsDPIAbsoluteSysMet(47LL) )
                      {
                        if ( (W32GetCurrentThreadDpiAwarenessContext(v181, v180, v182) & 0xF) == 0 )
                        {
LABEL_724:
                          v189 = (_DWORD *)(gpsi + 2456LL);
                          goto LABEL_316;
                        }
                      }
                      else if ( (unsigned int)IsDPIDWMSysMet(v181)
                             && (W32GetCurrentThreadDpiAwarenessContext(v184, v183, v185) & 0xF) == 0 )
                      {
                        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v437, v438, v439) + 408) )
                        {
                          v443 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v440,
                                                           v441,
                                                           v442)
                                                       + 408)
                                           + 8LL);
                          v187 = *(_DWORD *)(v443 + 244) & 1;
                          if ( (*(_DWORD *)(v443 + 244) & 1) != 0 )
                          {
                            PointerDeviceSettings = v714;
                            goto LABEL_724;
                          }
                        }
                        PointerDeviceSettings = v714;
                      }
                      if ( (unsigned int)IsDPIDWMSysMet(47LL)
                        && (W32GetCurrentThreadDpiAwarenessContext(v187, v186, v188) & 0xF) == 1 )
                      {
                        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v186, v188, v444) + 408) )
                        {
                          v446 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v186,
                                                           v188,
                                                           v445)
                                                       + 408)
                                           + 8LL);
                          v187 = *(_DWORD *)(v446 + 244) & 1;
                          if ( (*(_DWORD *)(v446 + 244) & 1) != 0 )
                          {
                            v189 = (_DWORD *)(gpsi + 2844LL);
                            PointerDeviceSettings = v714;
LABEL_316:
                            if ( v162 )
                            {
                              if ( (W32GetCurrentThreadDpiAwarenessContext(v187, v186, v188) & 0xF) == 0 )
                              {
LABEL_737:
                                v196 = (_DWORD *)(gpsi + 2496LL);
                                goto LABEL_320;
                              }
                            }
                            else if ( (unsigned int)IsDPIDWMSysMet(57LL)
                                   && (W32GetCurrentThreadDpiAwarenessContext(v191, v190, v192) & 0xF) == 0 )
                            {
                              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v447, v448, v449)
                                             + 408)
                                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                          (__int64)KeGetCurrentThread(),
                                                                          v450,
                                                                          v451,
                                                                          v452)
                                                                      + 408)
                                                          + 8LL)
                                              + 244LL) & 1) != 0 )
                              {
                                PointerDeviceSettings = v714;
                                goto LABEL_737;
                              }
                              PointerDeviceSettings = v714;
                            }
                            if ( (unsigned int)IsDPIDWMSysMet(57LL)
                              && (W32GetCurrentThreadDpiAwarenessContext(v194, v193, v195) & 0xF) == 1 )
                            {
                              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v453, v454, v455)
                                             + 408)
                                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                          (__int64)KeGetCurrentThread(),
                                                                          v456,
                                                                          v457,
                                                                          v458)
                                                                      + 408)
                                                          + 8LL)
                                              + 244LL) & 1) != 0 )
                              {
                                v196 = (_DWORD *)(gpsi + 2884LL);
                                PointerDeviceSettings = v714;
LABEL_320:
                                v158[2] = *v189 - *v196;
                                if ( (unsigned int)IsDPIAbsoluteSysMet(48LL) )
                                {
                                  if ( (W32GetCurrentThreadDpiAwarenessContext(v198, v197, v199) & 0xF) == 0 )
                                  {
LABEL_750:
                                    v206 = (_DWORD *)(gpsi + 2460LL);
                                    goto LABEL_324;
                                  }
                                }
                                else if ( (unsigned int)IsDPIDWMSysMet(v198)
                                       && (W32GetCurrentThreadDpiAwarenessContext(v201, v200, v202) & 0xF) == 0 )
                                {
                                  if ( *(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v459,
                                                     v460,
                                                     v461)
                                                 + 408)
                                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                              (__int64)KeGetCurrentThread(),
                                                                              v462,
                                                                              v463,
                                                                              v464)
                                                                          + 408)
                                                              + 8LL)
                                                  + 244LL) & 1) != 0 )
                                  {
                                    PointerDeviceSettings = v714;
                                    goto LABEL_750;
                                  }
                                  PointerDeviceSettings = v714;
                                }
                                if ( (unsigned int)IsDPIDWMSysMet(48LL)
                                  && (W32GetCurrentThreadDpiAwarenessContext(v204, v203, v205) & 0xF) == 1 )
                                {
                                  if ( *(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v465,
                                                     v466,
                                                     v467)
                                                 + 408)
                                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                              (__int64)KeGetCurrentThread(),
                                                                              v468,
                                                                              v469,
                                                                              v470)
                                                                          + 408)
                                                              + 8LL)
                                                  + 244LL) & 1) != 0 )
                                  {
                                    v206 = (_DWORD *)(gpsi + 2848LL);
                                    PointerDeviceSettings = v714;
LABEL_324:
                                    if ( (unsigned int)IsDPIAbsoluteSysMet(58LL) )
                                    {
                                      if ( (W32GetCurrentThreadDpiAwarenessContext(v208, v207, v209) & 0xF) == 0 )
                                      {
LABEL_763:
                                        v216 = (_DWORD *)(gpsi + 2500LL);
                                        goto LABEL_328;
                                      }
                                    }
                                    else if ( (unsigned int)IsDPIDWMSysMet(v208)
                                           && (W32GetCurrentThreadDpiAwarenessContext(v211, v210, v212) & 0xF) == 0 )
                                    {
                                      if ( *(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v471,
                                                         v472,
                                                         v473)
                                                     + 408)
                                        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                  (__int64)KeGetCurrentThread(),
                                                                                  v474,
                                                                                  v475,
                                                                                  v476)
                                                                              + 408)
                                                                  + 8LL)
                                                      + 244LL) & 1) != 0 )
                                      {
                                        PointerDeviceSettings = v714;
                                        goto LABEL_763;
                                      }
                                      PointerDeviceSettings = v714;
                                    }
                                    if ( (unsigned int)IsDPIDWMSysMet(58LL)
                                      && (W32GetCurrentThreadDpiAwarenessContext(v214, v213, v215) & 0xF) == 1 )
                                    {
                                      if ( *(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v477,
                                                         v478,
                                                         v479)
                                                     + 408)
                                        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                  (__int64)KeGetCurrentThread(),
                                                                                  v480,
                                                                                  v481,
                                                                                  v482)
                                                                              + 408)
                                                                  + 8LL)
                                                      + 244LL) & 1) != 0 )
                                      {
                                        v216 = (_DWORD *)(gpsi + 2888LL);
                                        PointerDeviceSettings = v714;
LABEL_328:
                                        v158[3] = *v206 - *v216;
                                        if ( (unsigned int)IsDPIAbsoluteSysMet(56LL) )
                                        {
                                          if ( (W32GetCurrentThreadDpiAwarenessContext(v218, v217, v219) & 0xF) == 0 )
                                          {
LABEL_776:
                                            v226 = (_DWORD *)(gpsi + 2492LL);
                                            goto LABEL_332;
                                          }
                                        }
                                        else if ( (unsigned int)IsDPIDWMSysMet(v218)
                                               && (W32GetCurrentThreadDpiAwarenessContext(v221, v220, v222) & 0xF) == 0 )
                                        {
                                          if ( *(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v483,
                                                             v484,
                                                             v485)
                                                         + 408)
                                            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                      (__int64)KeGetCurrentThread(),
                                                                                      v486,
                                                                                      v487,
                                                                                      v488)
                                                                                  + 408)
                                                                      + 8LL)
                                                          + 244LL) & 1) != 0 )
                                          {
                                            PointerDeviceSettings = v714;
                                            goto LABEL_776;
                                          }
                                          PointerDeviceSettings = v714;
                                        }
                                        if ( (unsigned int)IsDPIDWMSysMet(56LL)
                                          && (W32GetCurrentThreadDpiAwarenessContext(v224, v223, v225) & 0xF) == 1 )
                                        {
                                          if ( *(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v489,
                                                             v490,
                                                             v491)
                                                         + 408)
                                            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                                      (__int64)KeGetCurrentThread(),
                                                                                      v492,
                                                                                      v493,
                                                                                      v494)
                                                                                  + 408)
                                                                      + 8LL)
                                                          + 244LL) & 1) != 0 )
                                          {
                                            v226 = (_DWORD *)(gpsi + 2880LL);
                                            PointerDeviceSettings = v714;
                                            goto LABEL_332;
                                          }
                                          PointerDeviceSettings = v714;
                                        }
                                        v226 = (_DWORD *)(gpsi + 2104LL);
LABEL_332:
                                        v158[4] = *v226;
                                        goto LABEL_15;
                                      }
                                      PointerDeviceSettings = v714;
                                    }
                                    v216 = (_DWORD *)(gpsi + 2112LL);
                                    goto LABEL_328;
                                  }
                                  PointerDeviceSettings = v714;
                                }
                                v206 = (_DWORD *)(gpsi + 2072LL);
                                goto LABEL_324;
                              }
                              PointerDeviceSettings = v714;
                            }
                            v196 = (_DWORD *)(gpsi + 2108LL);
                            goto LABEL_320;
                          }
                        }
                        PointerDeviceSettings = v714;
                      }
                      v189 = (_DWORD *)(gpsi + 2068LL);
                      goto LABEL_316;
                    }
                    PointerDeviceSettings = v714;
                  }
                  v179 = (_DWORD *)(gpsi + 1908LL);
                  goto LABEL_312;
                }
                PointerDeviceSettings = v714;
              }
              v169 = (_DWORD *)(gpsi + 2108LL);
              goto LABEL_308;
            case 0x2Du:
              v142 = Src;
              *(_DWORD *)Src = 108;
              if ( (unsigned int)IsDPIAbsoluteSysMet(38LL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v144, v143, v145) & 0xF) != 0 )
                  goto LABEL_297;
              }
              else
              {
                if ( !(unsigned int)IsDPIDWMSysMet(v144)
                  || (W32GetCurrentThreadDpiAwarenessContext(v496, v495, v497) & 0xF) != 0 )
                {
LABEL_297:
                  if ( (unsigned int)IsDPIDWMSysMet(38LL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v147, v146, v148) & 0xF) == 1 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v504, v505, v506) + 408)
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v507,
                                                                v508,
                                                                v509)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1) != 0 )
                    {
                      v149 = (_DWORD *)(gpsi + 2808LL);
                      PointerDeviceSettings = v714;
LABEL_299:
                      *((_DWORD *)v142 + 1) = *v149;
                      if ( (unsigned int)IsDPIAbsoluteSysMet(39LL) )
                      {
                        if ( (W32GetCurrentThreadDpiAwarenessContext(v151, v150, v152) & 0xF) != 0 )
                          goto LABEL_301;
                      }
                      else
                      {
                        if ( !(unsigned int)IsDPIDWMSysMet(v151)
                          || (W32GetCurrentThreadDpiAwarenessContext(v511, v510, v512) & 0xF) != 0 )
                        {
                          goto LABEL_301;
                        }
                        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v513, v514, v515) + 408)
                          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v516,
                                                                    v517,
                                                                    v518)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1) == 0 )
                        {
                          PointerDeviceSettings = v714;
LABEL_301:
                          if ( (unsigned int)IsDPIDWMSysMet(39LL)
                            && (W32GetCurrentThreadDpiAwarenessContext(v154, v153, v155) & 0xF) == 1 )
                          {
                            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v519, v520, v521)
                                           + 408)
                              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                        (__int64)KeGetCurrentThread(),
                                                                        v522,
                                                                        v523,
                                                                        v524)
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1) != 0 )
                            {
                              v156 = (_DWORD *)(gpsi + 2812LL);
                              PointerDeviceSettings = v714;
                              goto LABEL_303;
                            }
                            PointerDeviceSettings = v714;
                          }
                          v156 = (_DWORD *)(gpsi + 2036LL);
LABEL_303:
                          *((_DWORD *)v142 + 2) = *v156;
                          *((_DWORD *)v142 + 3) = (gdwPUDFlags & 0x200000) != 0;
                          v157 = GetDPIMetrics();
                          GreExtGetObjectW(*(struct HLFONT__ **)(v157 + 32), 92, (unsigned __int16 *)v142 + 8);
                          goto LABEL_15;
                        }
                        PointerDeviceSettings = v714;
                      }
                      v156 = (_DWORD *)(gpsi + 2424LL);
                      goto LABEL_303;
                    }
                    PointerDeviceSettings = v714;
                  }
                  v149 = (_DWORD *)(gpsi + 2032LL);
                  goto LABEL_299;
                }
                if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v498, v499, v500) + 408)
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v501,
                                                            v502,
                                                            v503)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) == 0 )
                {
                  PointerDeviceSettings = v714;
                  goto LABEL_297;
                }
                PointerDeviceSettings = v714;
              }
              v149 = (_DWORD *)(gpsi + 2420LL);
              goto LABEL_299;
            case 0x2Fu:
              v228 = (int *)Src;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v720 = MonitorFromRect(Src, 1LL);
              }
              else
              {
                v720 = *(_QWORD *)(GetDispInfo() + 88);
                if ( (W32GetCurrentThreadDpiAwarenessContext(v720, v525, v526) & 0xF) == 0
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v229, v231, v527) + 408)
                  && (v529 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v229,
                                                       v231,
                                                       v528)
                                                   + 408)
                                       + 8LL),
                      v230 = *(_DWORD *)(v529 + 244) & 1,
                      (*(_DWORD *)(v529 + 244) & 1) != 0) )
                {
                  v228 = (int *)(v720 + 44);
                }
                else if ( (W32GetCurrentThreadDpiAwarenessContext(v230, v229, v231) & 0xF) == 1
                       && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v229, v231, v530) + 408)
                       && (v532 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v229,
                                                            v231,
                                                            v531)
                                                        + 408)
                                            + 8LL),
                           v230 = *(_DWORD *)(v532 + 244) & 1,
                           (*(_DWORD *)(v532 + 244) & 1) != 0) )
                {
                  v228 = (int *)(v720 + 60);
                }
                else
                {
                  v228 = (int *)(v720 + 28);
                }
              }
              if ( (W32GetCurrentThreadDpiAwarenessContext(v230, v229, v231) & 0xF) == 0
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v232, v234, v235) + 408)
                && (v534 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v232,
                                                     v234,
                                                     v533)
                                                 + 408)
                                     + 8LL),
                    v233 = *(_DWORD *)(v534 + 244) & 1,
                    (*(_DWORD *)(v534 + 244) & 1) != 0) )
              {
                v239 = (int *)(v720 + 44);
              }
              else if ( (W32GetCurrentThreadDpiAwarenessContext(v233, v232, v234) & 0xF) == 1
                     && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v236, v237, v238) + 408)
                     && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v535,
                                                               v536,
                                                               v537)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1) != 0 )
              {
                v239 = (int *)(v720 + 60);
              }
              else
              {
                v239 = (int *)(v720 + 28);
              }
              if ( !(unsigned int)IntersectRect(&v731, v228, v239) )
                goto LABEL_289;
              v242 = v731 - *(_QWORD *)v228;
              if ( (_QWORD)v731 == *(_QWORD *)v228 )
                v242 = *((_QWORD *)&v731 + 1) - *((_QWORD *)v228 + 1);
              if ( v242 )
                goto LABEL_289;
              if ( (W32GetCurrentThreadDpiAwarenessContext(0LL, v240, v241) & 0xF) == 0
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v243, v245, v246) + 408)
                && (v539 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v243,
                                                     v245,
                                                     v538)
                                                 + 408)
                                     + 8LL),
                    v244 = *(_DWORD *)(v539 + 244) & 1,
                    (*(_DWORD *)(v539 + 244) & 1) != 0) )
              {
                v248 = (_QWORD *)(v720 + 92);
              }
              else if ( (W32GetCurrentThreadDpiAwarenessContext(v244, v243, v245) & 0xF) == 1
                     && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v243, v245, v247) + 408)
                     && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v243,
                                                               v245,
                                                               v540)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1) != 0 )
              {
                v248 = (_QWORD *)(v720 + 108);
              }
              else
              {
                v248 = (_QWORD *)(v720 + 76);
              }
              v249 = *v248 - v731;
              if ( *v248 == (_QWORD)v731 )
                v249 = v248[1] - *((_QWORD *)&v731 + 1);
              if ( !v249 )
                goto LABEL_364;
              v250 = 0LL;
              v251 = a;
              if ( a )
              {
                v250 = SnapshotMonitorRects();
                if ( !v250 )
                  return 0LL;
              }
              if ( (W32GetCurrentThreadDpiAwarenessContext(v248, v243, v245) & 0xF) == 0
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v252, v254, v255) + 408)
                && (v542 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v252,
                                                     v254,
                                                     v541)
                                                 + 408)
                                     + 8LL),
                    v253 = *(_DWORD *)(v542 + 244) & 1,
                    (*(_DWORD *)(v542 + 244) & 1) != 0) )
              {
                *(_OWORD *)(v720 + 92) = v731;
                LogicalToPhysicalDPIRect(v720 + 76, &v731, 64LL, &v720);
              }
              else
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v253, v252, v254) & 0xF) == 1 )
                {
                  *(_OWORD *)(v720 + 108) = v731;
                  LogicalToPhysicalDPIRect(v720 + 76, &v731, 128LL, &v720);
                  v256 = v720 + 76;
                  v258 = v720 + 92;
                  v257 = 64LL;
                  goto LABEL_359;
                }
                *(_OWORD *)(v720 + 76) = v731;
                PhysicalToLogicalDPIRect(v720 + 92, v720 + 76, 64LL, &v720);
              }
              v256 = v720 + 76;
              v257 = 128LL;
              v258 = v720 + 108;
LABEL_359:
              PhysicalToLogicalDPIRect(v258, v256, v257, &v720);
              if ( v720 == *(_QWORD *)(GetDispInfo() + 88) )
                SetDesktopMetrics();
              if ( v251 )
              {
                PushW32ThreadLock(v250, v730, Win32FreePool);
                xxxDesktopRecalc(*(_QWORD *)(gptiCurrent + 408LL), v250);
                PopAndFreeAlwaysW32ThreadLock(v730);
              }
              updated = 1;
LABEL_364:
              PointerDeviceSettings = 1;
              goto LABEL_15;
            case 0x30u:
              if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v17) & 0xF) != 0 )
                goto LABEL_71;
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v36, v37) + 408) )
              {
                v140 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v36, v139)
                                             + 408)
                                 + 8LL);
                v35 = *(_DWORD *)(v140 + 244) & 1;
                if ( (*(_DWORD *)(v140 + 244) & 1) != 0 )
                {
                  v41 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 92LL);
                  PointerDeviceSettings = v714;
                  goto LABEL_73;
                }
              }
              PointerDeviceSettings = v714;
LABEL_71:
              if ( (W32GetCurrentThreadDpiAwarenessContext(v35, v34, v36) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v66,
                                                            v67,
                                                            v68)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v41 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 108LL);
                  PointerDeviceSettings = v714;
LABEL_73:
                  *(_OWORD *)Src = *v41;
                  goto LABEL_15;
                }
                PointerDeviceSettings = v714;
              }
              v41 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 76LL);
              goto LABEL_73;
            case 0x32u:
              if ( a && a != 24 )
                return 0LL;
              v141 = Src;
              if ( !Src || *(_DWORD *)Src != 24 )
                return 0LL;
              *(_OWORD *)((char *)Src + 4) = xmmword_1C0326F34;
              v141[5] = dword_1C0326F44;
              goto LABEL_15;
            case 0x33u:
              v590 = (struct tagFILTERKEYS *)Src;
              if ( a && a != 24 )
                return 0LL;
              if ( !Src || *(_DWORD *)Src != 24 || *((_DWORD *)Src + 2) && *((_DWORD *)Src + 5) )
                return 0LL;
              v591 = *((_DWORD *)Src + 1);
              if ( (v591 & 0x7F) != v591 )
                return 0LL;
              v592 = (xmmword_1C0326F34 & 2) != 0 ? v591 | 2 : v591 & 0xFFFFFFFD;
              *((_DWORD *)Src + 1) = v592;
              if ( *((_DWORD *)v590 + 2) > 0x4E20u
                || *((_DWORD *)v590 + 3) > 0x4E20u
                || *((_DWORD *)v590 + 4) > 0x4E20u
                || *((_DWORD *)v590 + 5) > 0x4E20u )
              {
                return 0LL;
              }
              if ( v7 )
              {
                v593 = (struct _UNICODE_STRING *)CreateProfileUserName(v723);
                updated = SetFilterKeys(v593, v590);
                PointerDeviceSettings = updated;
                if ( !updated )
                  SetFilterKeys(v593, (struct tagFILTERKEYS *)&gFilterKeys);
                FreeProfileUserName(v593, v723);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gFilterKeys, v590, *(unsigned int *)v590);
                gFilterKeys = 24;
                if ( (xmmword_1C0326F34 & 1) == 0 )
                  StopFilterKeysTimers();
                SetAccessEnabledFlag();
                if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
                  xxxCallHook(11LL, 2LL, 0LL, 10LL);
                PostShellHookMessagesEx(0xBuLL, 2LL, 0LL);
              }
              goto LABEL_15;
            case 0x34u:
              if ( (a & 0xFFFFFFF7) != 0 || !Src || *(_DWORD *)Src != 8 )
                return 0LL;
              *((_DWORD *)Src + 1) = dword_1C0326F24;
              goto LABEL_15;
            case 0x35u:
              v598 = (unsigned int *)Src;
              if ( (a & 0xFFFFFFF7) != 0 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 8 )
                return 0LL;
              v599 = *((_DWORD *)Src + 1);
              if ( (v599 & 0x3F) != v599 )
                return 0LL;
              if ( (dword_1C0326F24 & 2) != 0 )
                v600 = v599 | 2;
              else
                v600 = v599 & 0xFFFFFFFD;
              *((_DWORD *)Src + 1) = v600;
              if ( v7 )
              {
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", v600);
                updated = FastWriteProfileStringW(0LL, 17LL, L"Flags", Dest);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gToggleKeys, v598, *v598);
                gToggleKeys = 8;
                SetAccessEnabledFlag();
              }
              goto LABEL_15;
            case 0x36u:
              if ( a && a != 28 )
                return 0LL;
              v260 = (char *)Src;
              if ( !Src || *(_DWORD *)Src != 28 )
                return 0LL;
              *(_OWORD *)((char *)Src + 4) = xmmword_1C0326F04;
              *(_QWORD *)(v260 + 20) = qword_1C0326F14;
              v261 = *((_DWORD *)v260 + 1) & 0x4CFFFFFF;
              *((_DWORD *)v260 + 1) = v261;
              if ( gbMKMouseMode )
                *((_DWORD *)v260 + 1) = v261 | 0x80000000;
              *((_DWORD *)v260 + 1) |= ((gwMKButtonState & 3) << 24) | ((gwMKCurrentButton & 3) << 28);
              goto LABEL_15;
            case 0x37u:
              v601 = (struct tagMOUSEKEYS *)Src;
              if ( a && a != 28 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 28 )
                return 0LL;
              v602 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
              *((_DWORD *)Src + 1) = v602;
              if ( (unsigned __int8)v602 != v602 )
                return 0LL;
              if ( (xmmword_1C0326F04 & 2) != 0 )
                *((_DWORD *)v601 + 1) |= 2u;
              else
                *((_DWORD *)v601 + 1) = v602 & 0xFFFFFFFD;
              if ( (unsigned int)(*((_DWORD *)v601 + 2) - 10) > 0x15E
                || (unsigned int)(*((_DWORD *)v601 + 3) - 1000) > 0xFA0 )
              {
                return 0LL;
              }
              if ( v7 )
              {
                v603 = (struct _UNICODE_STRING *)CreateProfileUserName(v723);
                updated = SetMouseKeys(v603, v601);
                PointerDeviceSettings = updated;
                if ( !updated )
                  SetMouseKeys(v603, (struct tagMOUSEKEYS *)&gMouseKeys);
                FreeProfileUserName(v603, v723);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gMouseKeys, v601, *(unsigned int *)v601);
                gMouseKeys = 28;
                CalculateMouseTable();
                if ( (xmmword_1C0326F04 & 1) != 0 )
                {
                  gbMKMouseMode = (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)(unsigned __int8)gNumLockVk >> 2]) != 0) != (unsigned __int8)xmmword_1C0326F04 >> 7;
                  MKShowMouseCursor();
                }
                else
                {
                  MKHideMouseCursor();
                }
                SetAccessEnabledFlag();
                if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
                  xxxCallHook(11LL, 3LL, 0LL, 10LL);
                PostShellHookMessagesEx(0xBuLL, 3LL, 0LL);
              }
              goto LABEL_15;
            case 0x38u:
              *(_DWORD *)Src = (gdwPUDFlags >> 15) & 1;
              goto LABEL_15;
            case 0x39u:
              if ( v7 )
              {
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", a == 1);
                updated = FastWriteProfileStringW(0LL, 20LL, L"On", Dest);
                PointerDeviceSettings = updated;
                v714 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_15;
              if ( a == 1 )
                gdwPUDFlags |= 0x8000u;
              else
                gdwPUDFlags &= ~0x8000u;
              SetAccessEnabledFlag();
              v608 = (*v607 >> 15) & 1;
              if ( (unsigned int)IsDPIAbsoluteSysMet(70LL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v610, v609, v611) & 0xF) == 0 )
                  goto LABEL_1006;
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v610)
                     && (W32GetCurrentThreadDpiAwarenessContext(v613, v612, v614) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v615, v616, v617) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v618,
                                                            v619,
                                                            v620)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
LABEL_1006:
                  v621 = (int *)(gpsi + 2548LL);
                  goto LABEL_1015;
                }
                PointerDeviceSettings = v714;
              }
              if ( !(unsigned int)IsDPIDWMSysMet(70LL)
                || (W32GetCurrentThreadDpiAwarenessContext(v623, v622, v624) & 0xF) != 1 )
              {
                goto LABEL_1014;
              }
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v625, v626, v627) + 408)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v628,
                                                          v629,
                                                          v630)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1) != 0 )
              {
                v621 = (int *)(gpsi + 2936LL);
                PointerDeviceSettings = v714;
              }
              else
              {
                PointerDeviceSettings = v714;
LABEL_1014:
                v621 = (int *)(gpsi + 2160LL);
              }
LABEL_1015:
              *v621 = v608;
              goto LABEL_15;
            case 0x3Au:
              v259 = Src;
              if ( (a & 0xFFFFFFF7) != 0 || !Src || *(_DWORD *)Src != 8 )
                return 0LL;
              *((_DWORD *)Src + 1) = dword_1C0326F2C;
              v259[3] = 0;
              *((_DWORD *)v259 + 1) |= ((unsigned __int8)gLockBits << 16) | ((unsigned __int8)gLatchBits << 24);
              goto LABEL_15;
            case 0x3Bu:
              v594 = (unsigned int *)Src;
              v595 = dword_1C0326F2C & 1;
              if ( (a & 0xFFFFFFF7) != 0 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 8 )
                return 0LL;
              *((_WORD *)Src + 3) = 0;
              v596 = v594[1];
              if ( (v596 & 0x1FF) != v596 )
                return 0LL;
              if ( (dword_1C0326F2C & 2) != 0 )
                v597 = v596 | 2;
              else
                v597 = v596 & 0xFFFFFFFD;
              v594[1] = v597;
              if ( v7 )
              {
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", v597);
                updated = FastWriteProfileStringW(0LL, 14LL, L"Flags", Dest);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gStickyKeys, v594, *v594);
                gStickyKeys = 8;
                if ( (dword_1C0326F2C & 1) == 0 && v595 )
                  xxxTurnOffStickyKeys();
                SetAccessEnabledFlag();
                if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
                  xxxCallHook(11LL, 1LL, 0LL, 10LL);
                PostShellHookMessagesEx(0xBuLL, 1LL, 0LL);
              }
              goto LABEL_15;
            case 0x3Cu:
              if ( a && a != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              *(_QWORD *)((char *)Src + 4) = qword_1C0326EF4;
              goto LABEL_15;
            case 0x3Du:
              if ( a && a != 12
                || !Src
                || *(_DWORD *)Src != 12
                || (*((_DWORD *)Src + 1) & 3) != *((_DWORD *)Src + 1)
                || *((_DWORD *)Src + 2) > 0x36EE80u )
              {
                return 0LL;
              }
              if ( v7 )
              {
                v604 = CreateProfileUserName(v723);
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 1));
                updated = FastWriteProfileStringW(v604, 18LL, L"Flags", Dest);
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 2));
                v605 = FastWriteProfileStringW(v604, 18LL, L"TimeToWait", Dest);
                v606 = (v605 & updated) == 0;
                updated &= v605;
                PointerDeviceSettings = updated;
                if ( v606 )
                {
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", (unsigned int)qword_1C0326EF4);
                  FastWriteProfileStringW(v604, 18LL, L"Flags", Dest);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", HIDWORD(qword_1C0326EF4));
                  FastWriteProfileStringW(v604, 18LL, L"TimeToWait", Dest);
                }
                FreeProfileUserName(v604, v723);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gAccessTimeOut, Src, *(unsigned int *)Src);
                gAccessTimeOut = 12;
                SetAccessEnabledFlag();
                AccessTimeOutReset();
              }
              goto LABEL_15;
            case 0x40u:
              if ( a && a != 56 )
                return 0LL;
              v265 = (char *)Src;
              if ( !Src || *(_DWORD *)Src != 56 )
                return 0LL;
              *(_OWORD *)((char *)Src + 4) = xmmword_1C032BBAC;
              *(_OWORD *)(v265 + 20) = xmmword_1C032BBBC;
              *(_OWORD *)(v265 + 36) = xmmword_1C032BBCC;
              *((_DWORD *)v265 + 13) = dword_1C032BBDC;
              goto LABEL_15;
            case 0x41u:
              v633 = (struct tagSOUNDSENTRYW *)Src;
              if ( a && a != 56 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 56 )
                return 0LL;
              v634 = *((_DWORD *)Src + 1);
              if ( (v634 & 7) != v634 || *((_DWORD *)Src + 8) > 3u || *((_DWORD *)Src + 2) || *((_DWORD *)Src + 5) )
                return 0LL;
              if ( (xmmword_1C032BBAC & 2) != 0 )
                v635 = v634 | 2;
              else
                v635 = v634 & 0xFFFFFFFD;
              *((_DWORD *)Src + 1) = v635;
              if ( v7 )
              {
                v636 = (struct _UNICODE_STRING *)CreateProfileUserName(v723);
                updated = SetSoundSentry(v636, v633);
                PointerDeviceSettings = updated;
                if ( !updated )
                  SetSoundSentry(v636, (struct tagSOUNDSENTRYW *)&gSoundSentry);
                FreeProfileUserName(v636, v723);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gSoundSentry, v633, *(unsigned int *)v633);
                gSoundSentry = 56;
                SetAccessEnabledFlag();
              }
              goto LABEL_15;
            case 0x43u:
              updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v7, &v714);
              PointerDeviceSettings = v714;
              goto LABEL_15;
            case 0x44u:
              *(_DWORD *)Src = (gdwPUDFlags >> 17) & 1;
              goto LABEL_15;
            case 0x45u:
              if ( v7 )
              {
                v631 = L"1";
                if ( !a )
                  v631 = L"0";
                updated = FastWriteProfileStringW(0LL, 27LL, L"On", v631);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( a )
                  gdwPUDFlags |= 0x20000u;
                else
                  gdwPUDFlags &= ~0x20000u;
              }
              goto LABEL_15;
            case 0x46u:
              if ( (gdwPUDFlags & 0x40000) == 0 )
                goto LABEL_54;
              v22 = 1;
              goto LABEL_49;
            case 0x47u:
              if ( v7 )
              {
                v632 = L"1";
                if ( !a )
                  v632 = L"0";
                updated = FastWriteProfileStringW(0LL, 28LL, L"On", v632);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( a )
                  gdwPUDFlags |= 0x40000u;
                else
                  gdwPUDFlags &= ~0x40000u;
              }
              goto LABEL_15;
            case 0x48u:
              v65 = Src;
              if ( !Src || a != 8 )
                return 0LL;
              *(_DWORD *)Src = 8;
              v65[1] = (gdwPUDFlags & 0x10000) != 0;
              goto LABEL_15;
            case 0x4Au:
              if ( (gulFontInformation & 2) == 0 )
                goto LABEL_54;
              v22 = 1;
              goto LABEL_49;
            case 0x4Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              v276 = a != 0;
              a = -a;
              v277 = v276 ? 2 : 0;
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 200LL, v277);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                GreSetFontEnumeration(v277 | 4);
              goto LABEL_15;
            case 0x4Cu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
                v714 = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 198LL, (unsigned int)a);
                PointerDeviceSettings = updated;
                v714 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_15;
              if ( (unsigned int)IsDPIAbsoluteSysMet(68LL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v80, v79, v81) & 0xF) == 0 )
                {
LABEL_601:
                  v88 = (INT *)(gpsi + 2540LL);
LABEL_195:
                  *v88 = a;
                  goto LABEL_15;
                }
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v80)
                     && (W32GetCurrentThreadDpiAwarenessContext(v83, v82, v84) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v331, v332, v333) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v334,
                                                            v335,
                                                            v336)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
                  goto LABEL_601;
                }
                PointerDeviceSettings = v714;
              }
              if ( (unsigned int)IsDPIDWMSysMet(68LL)
                && (W32GetCurrentThreadDpiAwarenessContext(v86, v85, v87) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v337, v338, v339) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v340,
                                                            v341,
                                                            v342)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v88 = (INT *)(gpsi + 2928LL);
                  PointerDeviceSettings = v714;
                  goto LABEL_195;
                }
                PointerDeviceSettings = v714;
              }
              v88 = (INT *)(gpsi + 2152LL);
              goto LABEL_195;
            case 0x4Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
                v714 = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 199LL, (unsigned int)a);
                PointerDeviceSettings = updated;
                v714 = updated;
              }
              if ( !PointerDeviceSettings )
                goto LABEL_15;
              if ( (unsigned int)IsDPIAbsoluteSysMet(69LL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v90, v89, v91) & 0xF) == 0 )
                {
LABEL_614:
                  v98 = (INT *)(gpsi + 2544LL);
LABEL_205:
                  *v98 = a;
                  goto LABEL_15;
                }
              }
              else if ( (unsigned int)IsDPIDWMSysMet(v90)
                     && (W32GetCurrentThreadDpiAwarenessContext(v93, v92, v94) & 0xF) == 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v343, v344, v345) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v346,
                                                            v347,
                                                            v348)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  PointerDeviceSettings = v714;
                  goto LABEL_614;
                }
                PointerDeviceSettings = v714;
              }
              if ( (unsigned int)IsDPIDWMSysMet(69LL)
                && (W32GetCurrentThreadDpiAwarenessContext(v96, v95, v97) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v349, v350, v351) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v352,
                                                            v353,
                                                            v354)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v98 = (INT *)(gpsi + 2932LL);
                  PointerDeviceSettings = v714;
                  goto LABEL_205;
                }
                PointerDeviceSettings = v714;
              }
              v98 = (INT *)(gpsi + 2156LL);
              goto LABEL_205;
            case 0x57u:
              v262 = (struct _UNICODE_STRING *)CreateProfileUserName(v723);
              xxxUpdateSystemCursorsFromRegistry(v262);
              goto LABEL_384;
            case 0x58u:
              v262 = (struct _UNICODE_STRING *)CreateProfileUserName(v723);
              xxxUpdateSystemIconsFromRegistry(v262);
              goto LABEL_384;
            case 0x59u:
              if ( gspklBaseLayout )
              {
                *(_QWORD *)Src = *(_QWORD *)(gspklBaseLayout + 40LL);
                goto LABEL_15;
              }
              UserSetLastError(21LL);
              return 0LL;
            case 0x5Au:
              v278 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src);
              if ( !v278 )
                return 0LL;
              if ( PointerDeviceSettings )
                HMAssignmentLock(gspklBaseLayout, v278);
              goto LABEL_15;
            case 0x5Bu:
              return GetKbdLangSwitch(0LL);
            case 0x5Du:
              if ( v7 )
              {
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", (unsigned int)a);
                updated = FastUpdateWinIni(0LL, 12LL, 613LL, Dest);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                SetMouseTrails((unsigned int)a);
              goto LABEL_15;
            case 0x5Eu:
              v22 = gMouseTrails + 1;
              if ( !gMouseTrails )
                goto LABEL_54;
              goto LABEL_49;
            case 0x5Fu:
              *(_DWORD *)Src = (*(unsigned __int8 *)(gpsi + 8684LL) >> 1) & 1;
              goto LABEL_15;
            case 0x60u:
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 7LL, a != 0);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( a )
                  *(_DWORD *)(gpsi + 8684LL) |= 2u;
                else
                  *(_DWORD *)(gpsi + 8684LL) &= ~2u;
              }
              goto LABEL_15;
            case 0x62u:
              *(_DWORD *)Src = gcxMouseHover;
              goto LABEL_15;
            case 0x63u:
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 91LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gcxMouseHover = a;
              goto LABEL_15;
            case 0x64u:
              *(_DWORD *)Src = gcyMouseHover;
              goto LABEL_15;
            case 0x65u:
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 92LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gcyMouseHover = a;
              goto LABEL_15;
            case 0x66u:
              *(_DWORD *)Src = gdtMouseHover;
              goto LABEL_15;
            case 0x67u:
              if ( (unsigned int)a >= 0xA )
              {
                v637 = a;
                if ( (unsigned int)a > 0x7FFFFFFF )
                  v637 = 0x7FFFFFFF;
              }
              else
              {
                v637 = 10;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 93LL, v637);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gdtMouseHover = v637;
              goto LABEL_15;
            case 0x68u:
              *(_DWORD *)Src = *(_DWORD *)(gpsi + 5396LL);
              goto LABEL_15;
            case 0x69u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 14LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 14LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                *(_DWORD *)(gpsi + 5396LL) = a;
              goto LABEL_15;
            case 0x6Au:
              *(_DWORD *)Src = gdtMNDropDown;
              goto LABEL_15;
            case 0x6Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 94LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gdtMNDropDown = a;
              goto LABEL_15;
            case 0x6Cu:
              *(_DWORD *)Src = *(_DWORD *)(gpsi + 5400LL);
              goto LABEL_15;
            case 0x6Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 15LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                *(_DWORD *)(gpsi + 5400LL) = a;
              goto LABEL_15;
            case 0x6Eu:
              *(_DWORD *)Src = gfIMEShowStatus != 0;
              goto LABEL_15;
            case 0x6Fu:
              PointerDeviceSettings = xxxSetIMEShowStatus(a != 0, v7, &updated);
              goto LABEL_15;
            case 0x70u:
              *(_DWORD *)Src = gMouseSensitivity;
              goto LABEL_15;
            case 0x71u:
              v268 = (int)Src;
              if ( (char *)Src - 1 > (char *)0x13 )
                return 0LL;
              if ( v7 )
              {
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", Src);
                updated = FastUpdateWinIni(0LL, 12LL, 608LL, Dest);
                PointerDeviceSettings = updated;
                v268 = (int)Src;
              }
              if ( PointerDeviceSettings )
              {
                gMouseSensitivity = v268;
                gMouseSensitivityFactor = CalculateMouseSensitivity();
                ResetMouseAccelerationCurves();
              }
              goto LABEL_15;
            case 0x72u:
              if ( !gppiScreenSaver )
                goto LABEL_54;
              v22 = 1;
              goto LABEL_49;
            case 0x73u:
              if ( g_pWallpaperSettings )
              {
                RtlStringCchCopyW(
                  (unsigned __int16 *)Src,
                  0x104uLL,
                  (const unsigned __int16 *)(g_pWallpaperSettings + 4LL));
                goto LABEL_15;
              }
              v262 = (struct _UNICODE_STRING *)CreateProfileUserName(v723);
              LoadWallpaperFilenameFromRegistry(v262, Src, 260LL);
LABEL_384:
              v263 = (__int64)v262;
              goto LABEL_385;
            case 0x74u:
              if ( a && a != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              *(_QWORD *)((char *)Src + 4) = qword_1C0326EE4;
              goto LABEL_15;
            case 0x75u:
              if ( a && a != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              if ( v7 )
              {
                v638 = CreateProfileUserName(v723);
                v639 = v638;
                v640 = L"1";
                v641 = L"1";
                if ( !*((_DWORD *)Src + 1) )
                  v641 = L"0";
                updated = FastWriteProfileStringW(v638, 48LL, L"On", v641);
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 2));
                v642 = FastWriteProfileStringW(v639, 48LL, L"Locale", Dest);
                v606 = (v642 & updated) == 0;
                updated &= v642;
                PointerDeviceSettings = updated;
                if ( v606 )
                {
                  if ( !(_DWORD)qword_1C0326EE4 )
                    v640 = L"0";
                  FastWriteProfileStringW(v639, 48LL, L"On", v640);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", HIDWORD(qword_1C0326EE4));
                  FastWriteProfileStringW(v639, 48LL, L"Locale", Dest);
                }
                FreeProfileUserName(v639, v723);
              }
              if ( PointerDeviceSettings )
              {
                memmove(&gAudioDescription, Src, *(unsigned int *)Src);
                gAudioDescription = 12;
              }
              goto LABEL_15;
            case 0x76u:
              *(_DWORD *)Src = (*gpsi >> 9) & 1;
              goto LABEL_15;
            case 0x77u:
              if ( gdwRITdemonLockState && !v722 )
                goto LABEL_540;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 618LL, a != 0);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                if ( a )
                  *gpsi |= 0x200u;
                else
                  *gpsi &= ~0x200u;
              }
              goto LABEL_15;
            case 0x78u:
              *(_DWORD *)Src = gdwHungAppTimeout;
              goto LABEL_15;
            case 0x79u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 621LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gdwHungAppTimeout = a;
              goto LABEL_15;
            case 0x7Au:
              *(_DWORD *)Src = gdwWaitToKillTimeout;
              goto LABEL_15;
            case 0x7Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 622LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gdwWaitToKillTimeout = a;
              goto LABEL_15;
            case 0x7Cu:
              *(_DWORD *)Src = gdwWaitToKillServiceTimeout;
              goto LABEL_15;
            case 0x7Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 52LL, 623LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
                gdwWaitToKillServiceTimeout = a;
              goto LABEL_15;
            case 0x7Eu:
              *(_DWORD *)Src = gWinArrGlobal;
              goto LABEL_15;
            case 0x7Fu:
              v69 = a;
              if ( (unsigned int)a > *(_DWORD *)(gpDispInfo + 184LL)
                || a > (unsigned int)dword_1C03217EC
                || a > (unsigned int)dword_1C03217F0
                || a > (unsigned int)dword_1C03217F8 )
              {
                goto LABEL_15;
              }
              pData = 0;
              v70 = 16LL;
              goto LABEL_118;
            case 0x80u:
              *(_DWORD *)Src = dword_1C03217EC;
              goto LABEL_15;
            case 0x81u:
              v69 = a;
              if ( (unsigned int)a > *(_DWORD *)(gpDispInfo + 184LL)
                || a < (unsigned int)gWinArrGlobal
                || a > (unsigned int)dword_1C03217F4
                || a > (unsigned int)dword_1C03217FC )
              {
                goto LABEL_15;
              }
              pData = 1;
              v70 = 17LL;
              goto LABEL_118;
            case 0x82u:
              if ( (dword_1C0321804 & 1) == 0 )
                goto LABEL_54;
              v22 = 1;
              goto LABEL_49;
            case 0x83u:
              LODWORD(v11) = 1;
              v71 = 18;
              goto LABEL_121;
            case 0x84u:
              *(_DWORD *)Src = dword_1C03217F0;
              goto LABEL_15;
            case 0x85u:
              v69 = a;
              if ( (unsigned int)a > *(_DWORD *)(gpDispInfo + 184LL)
                || a > (unsigned int)dword_1C03217F4
                || a < (unsigned int)gWinArrGlobal )
              {
                goto LABEL_15;
              }
              pData = 2;
              v70 = 19LL;
              goto LABEL_118;
            case 0x86u:
              *(_DWORD *)Src = dword_1C03217F4;
              goto LABEL_15;
            case 0x87u:
              v69 = a;
              if ( (unsigned int)a > *(_DWORD *)(gpDispInfo + 184LL)
                || a < (unsigned int)dword_1C03217F0
                || a < (unsigned int)dword_1C03217EC )
              {
                goto LABEL_15;
              }
              pData = 3;
              v70 = 20LL;
              goto LABEL_118;
            case 0x88u:
              *(_DWORD *)Src = dword_1C03217F8;
              goto LABEL_15;
            case 0x89u:
              v69 = a;
              if ( (unsigned int)a > *(_DWORD *)(gpDispInfo + 184LL)
                || a > (unsigned int)dword_1C03217FC
                || a < (unsigned int)gWinArrGlobal )
              {
                goto LABEL_15;
              }
              pData = 4;
              v70 = 21LL;
              goto LABEL_118;
            case 0x8Au:
              *(_DWORD *)Src = dword_1C03217FC;
              goto LABEL_15;
            case 0x8Bu:
              v69 = a;
              if ( (unsigned int)a > *(_DWORD *)(gpDispInfo + 184LL)
                || a < (unsigned int)dword_1C03217F8
                || a < (unsigned int)dword_1C03217EC )
              {
                goto LABEL_15;
              }
              pData = 5;
              v70 = 22LL;
LABEL_118:
              UpdateThresholdFromMetric(v7, &updated, &v714, v70, v69, pData);
              goto LABEL_119;
            case 0x8Cu:
              *(_DWORD *)Src = ((unsigned __int8)dword_1C0321804 >> 1) & 1;
              goto LABEL_15;
            case 0x8Du:
              v71 = 624;
              goto LABEL_121;
            case 0x8Eu:
              *(_DWORD *)Src = ((unsigned __int8)dword_1C0321804 >> 2) & 1;
              goto LABEL_15;
            case 0x8Fu:
              LODWORD(v11) = 4;
              v71 = 626;
              goto LABEL_121;
            case 0x90u:
              if ( (dword_1C0321804 & 8) != 0 )
                v22 = 1;
              else
LABEL_54:
                v22 = 0;
LABEL_49:
              *(_DWORD *)Src = v22;
              goto LABEL_15;
            case 0x91u:
              LODWORD(v11) = 8;
              v71 = 625;
LABEL_121:
              if ( (unsigned int)CheckDesktopPolicy(0LL, v71) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, v71, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              if ( PointerDeviceSettings )
              {
                v72 = dword_1C0321804;
                if ( a )
                  v73 = v11 | dword_1C0321804;
                else
                  v73 = ~(_DWORD)v11 & dword_1C0321804;
                dword_1C0321804 = v73;
                PostWindowArrangementCheck(v72);
              }
              goto LABEL_15;
            case 0x92u:
            case 0x94u:
            case 0x96u:
            case 0x98u:
            case 0x9Au:
            case 0x9Cu:
              PointerDeviceSettings = ReadPointerDeviceSettings(v719, Src);
              goto LABEL_15;
            case 0x93u:
            case 0x95u:
            case 0x97u:
            case 0x99u:
            case 0x9Bu:
            case 0x9Du:
              updated = WritePointerDeviceSettings(v719, Src, v6);
              goto LABEL_15;
            case 0x9Eu:
            case 0xA5u:
            case 0xA7u:
              if ( (int)DrvDisplayConfigGetScaleFactorOverrides(v733, 1LL) < 0 )
                return 0LL;
              if ( a == 158 )
              {
                *(_DWORD *)Src = HIDWORD(v734);
              }
              else
              {
                v643 = Src;
                *(_QWORD *)Src = v734;
                v643[2] = v735;
              }
              goto LABEL_15;
            case 0x9Fu:
            case 0xA6u:
              if ( (unsigned int)(a + 11) > 0x16 )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
              {
                v7 = 0;
                PointerDeviceSettings = 0;
              }
              if ( !v7 )
                goto LABEL_15;
              v737 = a;
              v717 = a != 159;
              v644 = DrvDisplayConfigSetScaleFactorOverride(v736, &v717);
              if ( v644 < 0 )
              {
                return 0;
              }
              else
              {
                if ( a == 159 )
                  TraceLoggingSPISetModernDPIOverrideEvent(v645, 159);
                else
                  TraceLoggingSPISetDesktopDPIOverrideEvent(v645, a);
                return 1;
              }
            case 0xA0u:
              *(_DWORD *)Src = 6;
              goto LABEL_15;
            case 0xA1u:
              updated = 0;
              PointerDeviceSettings = 1;
              goto LABEL_15;
            case 0xA2u:
              DispInfo = GetDispInfo();
              if ( IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(DispInfo + 88) + 512LL)) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v545, v544, v546) & 0xF) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v547, v549, v550) + 408) )
                  {
                    v552 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v547,
                                                     v549,
                                                     v551)
                                                 + 408)
                                     + 8LL);
                    v548 = *(_DWORD *)(v552 + 244) & 1;
                    if ( (*(_DWORD *)(v552 + 244) & 1) != 0 )
                    {
                      v553 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 44LL);
                      PointerDeviceSettings = v714;
                      goto LABEL_862;
                    }
                  }
                  PointerDeviceSettings = v714;
                }
                if ( (W32GetCurrentThreadDpiAwarenessContext(v548, v547, v549) & 0xF) == 1 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v554, v555, v556) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v557,
                                                              v558,
                                                              v559)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v553 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 60LL);
                    PointerDeviceSettings = v714;
                    goto LABEL_862;
                  }
                  PointerDeviceSettings = v714;
                }
                v553 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 28LL);
              }
              else
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v545, v544, v546) & 0xF) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v560, v562, v563) + 408) )
                  {
                    v565 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v560,
                                                     v562,
                                                     v564)
                                                 + 408)
                                     + 8LL);
                    v561 = *(_DWORD *)(v565 + 244) & 1;
                    if ( (*(_DWORD *)(v565 + 244) & 1) != 0 )
                    {
                      v553 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 528LL);
                      PointerDeviceSettings = v714;
                      goto LABEL_862;
                    }
                  }
                  PointerDeviceSettings = v714;
                }
                if ( (W32GetCurrentThreadDpiAwarenessContext(v561, v560, v562) & 0xF) == 1 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v566, v567, v568) + 408)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v569,
                                                              v570,
                                                              v571)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1) != 0 )
                  {
                    v553 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 544LL);
                    PointerDeviceSettings = v714;
                    goto LABEL_862;
                  }
                  PointerDeviceSettings = v714;
                }
                v553 = (_OWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 512LL);
              }
LABEL_862:
              *(_OWORD *)Src = *v553;
              goto LABEL_15;
            case 0xA3u:
              v43 = (int *)Src;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v721 = (int *)MonitorFromRect(Src, 1LL);
              }
              else
              {
                v721 = *(int **)(GetDispInfo() + 88);
                if ( (W32GetCurrentThreadDpiAwarenessContext(v721, v572, v573) & 0xF) == 0 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v46, v574) + 408) )
                  {
                    v576 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v44,
                                                     v46,
                                                     v575)
                                                 + 408)
                                     + 8LL);
                    v45 = *(_DWORD *)(v576 + 244) & 1;
                    if ( (*(_DWORD *)(v576 + 244) & 1) != 0 )
                    {
                      v43 = v721 + 11;
                      PointerDeviceSettings = v714;
                      goto LABEL_92;
                    }
                  }
                  PointerDeviceSettings = v714;
                }
                if ( (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46) & 0xF) == 1 )
                {
                  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v46, v577) + 408) )
                  {
                    v579 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v44,
                                                     v46,
                                                     v578)
                                                 + 408)
                                     + 8LL);
                    v45 = *(_DWORD *)(v579 + 244) & 1;
                    if ( (*(_DWORD *)(v579 + 244) & 1) != 0 )
                    {
                      v43 = v721 + 15;
                      PointerDeviceSettings = v714;
                      goto LABEL_92;
                    }
                  }
                  PointerDeviceSettings = v714;
                }
                v43 = v721 + 7;
              }
LABEL_92:
              if ( (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46) & 0xF) != 0 )
                goto LABEL_93;
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v49, v50) + 408) )
              {
                v581 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v49, v580)
                                             + 408)
                                 + 8LL);
                v48 = *(_DWORD *)(v581 + 244) & 1;
                if ( (*(_DWORD *)(v581 + 244) & 1) != 0 )
                {
                  v54 = v721 + 11;
                  PointerDeviceSettings = v714;
LABEL_95:
                  if ( !(unsigned int)IntersectRect(&v732, v43, v54) )
                    goto LABEL_289;
                  v57 = v732 - *(_QWORD *)v43;
                  if ( (_QWORD)v732 == *(_QWORD *)v43 )
                    v57 = *((_QWORD *)&v732 + 1) - *((_QWORD *)v43 + 1);
                  if ( v57 )
                  {
LABEL_289:
                    UserSetLastError(87LL);
                    return 0LL;
                  }
                  if ( (W32GetCurrentThreadDpiAwarenessContext(0LL, v55, v56) & 0xF) == 0 )
                  {
                    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v60, v61) + 408) )
                    {
                      v586 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v58,
                                                       v60,
                                                       v585)
                                                   + 408)
                                       + 8LL);
                      v59 = *(_DWORD *)(v586 + 244) & 1;
                      if ( (*(_DWORD *)(v586 + 244) & 1) != 0 )
                      {
                        *((_OWORD *)v721 + 33) = v732;
                        LogicalToPhysicalDPIRect(v721 + 128, &v732, 64LL, &v721);
                        PhysicalToLogicalDPIRect(v721 + 136, v721 + 128, 128LL, &v721);
                        goto LABEL_119;
                      }
                    }
                    PointerDeviceSettings = v714;
                  }
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v59, v58, v60) & 0xF) != 1 )
                  {
LABEL_101:
                    *((_OWORD *)v721 + 32) = v732;
                    PhysicalToLogicalDPIRect(v721 + 132, v721 + 128, 64LL, &v721);
                    PhysicalToLogicalDPIRect(v721 + 136, v721 + 128, 128LL, &v721);
                    goto LABEL_15;
                  }
                  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 408)
                    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v587,
                                                              v588,
                                                              v589)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1) == 0 )
                  {
                    PointerDeviceSettings = v714;
                    goto LABEL_101;
                  }
                  *((_OWORD *)v721 + 34) = v732;
                  LogicalToPhysicalDPIRect(v721 + 128, &v732, 128LL, &v721);
                  PhysicalToLogicalDPIRect(v721 + 132, v721 + 128, 64LL, &v721);
LABEL_119:
                  PointerDeviceSettings = v714;
                  goto LABEL_15;
                }
              }
              PointerDeviceSettings = v714;
LABEL_93:
              if ( (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49) & 0xF) == 1 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 408)
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v582,
                                                            v583,
                                                            v584)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1) != 0 )
                {
                  v54 = v721 + 15;
                  PointerDeviceSettings = v714;
                  goto LABEL_95;
                }
                PointerDeviceSettings = v714;
              }
              v54 = v721 + 7;
              goto LABEL_95;
            case 0xA4u:
              W32GetCurrentThreadDpiAwarenessContext(v10, v9, v17);
              if ( !Src )
                return 0LL;
              v42 = W32SetCurrentThreadDpiAwarenessContext(16LL);
              GetWindowNCMetrics((__int64)Src);
              W32SetCurrentThreadDpiAwarenessContext(v42);
              goto LABEL_15;
            case 0xA8u:
              *(_DWORD *)Src = gbLockScreenAutoLockActive;
              goto LABEL_15;
            case 0xA9u:
              if ( gfSwitchInProgress )
                return 0LL;
              if ( gdwRITdemonLockState && !v722 )
              {
LABEL_540:
                UserSetLastError(329LL);
                return 0LL;
              }
              gbLockScreenAutoLockActive = a != 0;
              if ( v7 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 205LL, (unsigned int)a);
                PointerDeviceSettings = updated;
              }
              goto LABEL_15;
            case 0xAAu:
              *(_DWORD *)Src = gbLockScreenActive;
              goto LABEL_15;
            case 0xABu:
              if ( *(_DWORD *)(CurrentProcessWin32Process + 56) != gpidLogonUI )
                return 0LL;
              v264 = (unsigned int *)gbLockScreenActive;
              gbLockScreenActive = a != 0;
              if ( a )
              {
                if ( !gptiForeground
                  || (v328 = *(_QWORD *)(gptiForeground + 384LL)) == 0
                  || !*(_QWORD *)(v328 + 88)
                  || (unsigned int)IsWindowUnderActiveLockScreen() )
                {
                  xxxSetForegroundWindow2(0LL);
                  v264 = (unsigned int *)gbLockScreenActive;
                }
                ClearKeyboardStates();
              }
              GreLddmProcessLockScreen(*v264);
              goto LABEL_15;
            case 0xACu:
              v646 = InteractiveControlManager::Instance();
              PointerDeviceSettings = (int)InteractiveControlManager::GetExternalParameters(
                                             v646,
                                             (struct tagINTERACTIVECTRL_PARAMETERS *)Src) >= 0;
              goto LABEL_15;
            case 0xADu:
              v647 = InteractiveControlManager::Instance();
              if ( (int)InteractiveControlManager::SetExternalParameters(
                          v647,
                          (struct tagINTERACTIVECTRL_PARAMETERS *)Src,
                          v6) >= 0 )
                goto LABEL_376;
              return PointerDeviceSettings;
            default:
              goto LABEL_28;
          }
        }
        if ( v719 == 4135 )
        {
          if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
          }
          if ( v7 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 112LL, a != 0);
            PointerDeviceSettings = updated;
          }
          if ( PointerDeviceSettings )
            gbBlockSendInputResets = a != 0;
          goto LABEL_15;
        }
LABEL_28:
        if ( v719 < 0xAE )
        {
          UserSetLastError(1439LL);
          return 0LL;
        }
        if ( (v719 & 1) == 0 )
        {
          if ( (v719 & 0x3000) != 0x1000 )
          {
            v20 = *(_DWORD *)UPDWORDPointer(v719);
            *(_DWORD *)Src = v20;
            if ( v719 == 8204 && !v20 )
              *(_DWORD *)Src = gulGamma;
            goto LABEL_15;
          }
          v18 = 0;
          if ( v719 >= 0x103E )
            goto LABEL_32;
          if ( (int)gpdwCPUserPreferencesMask < 0 )
          {
            if ( v719 < 0x101B || v719 >= 0x1024 )
            {
              switch ( v719 )
              {
                case 0x1008u:
                case 0x1012u:
                case 0x1014u:
                case 0x1018u:
                case 0x101Au:
                  if ( gbDisableAlpha )
                    goto LABEL_1150;
                  goto LABEL_32;
                case 0x100Au:
                  if ( (gdwPUDFlags & 0x20000) != 0 )
                    goto LABEL_1149;
                  goto LABEL_32;
                case 0x1024u:
                  if ( gbDisableAlpha || gcOverlays )
                    goto LABEL_1150;
                  goto LABEL_32;
                default:
                  goto LABEL_32;
              }
            }
            goto LABEL_32;
          }
          if ( v719 != 4096 )
          {
            if ( v719 == 4106 )
            {
LABEL_1149:
              v18 = 1;
LABEL_1150:
              *(_DWORD *)Src = v18;
              goto LABEL_15;
            }
            if ( v719 != 4108 && v719 != 4124 && v719 != 4126 )
              goto LABEL_1150;
          }
LABEL_32:
          if ( v719 == 4158 && gProtocolType )
          {
            *(_DWORD *)Src = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) != 0;
          }
          else
          {
            v19 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v719 - 4096) >> 6));
            *(_DWORD *)Src = _bittest(&v19, (unsigned __int8)(((v719 - 4096) >> 1) - (((v719 - 4096) >> 1) & 0xE0)));
          }
          goto LABEL_15;
        }
        v648 = CreateProfileUserName(v723);
        v649 = v648;
        v650 = v719;
        if ( (v719 & 0x3000) == 0x1000 )
        {
          v651 = gpviCPUserPreferences;
          if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4 )
          {
            v652 = CheckDesktopPolicy(v648, *((_QWORD *)&gpviCPUserPreferences + 1));
            v651 = gpviCPUserPreferences;
            v650 = v719;
            if ( v652 )
            {
              v7 = 0;
              PointerDeviceSettings = 0;
            }
          }
          if ( v7 )
          {
            ProfileValue = FastGetProfileValue(
                             v649,
                             *(unsigned int *)(v651 + 4),
                             *(_QWORD *)(v651 + 8),
                             0LL,
                             v724,
                             8,
                             0);
            memmove(&v724[ProfileValue], (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
            v654 = &v724[4 * ((unsigned __int64)(v719 - 4096) >> 6)];
            v655 = 1 << (((v719 - 4096) >> 1) - 32 * ((v719 - 4096) >> 6));
            if ( Src )
              *v654 |= v655;
            else
              *v654 &= ~v655;
            updated = FastWriteProfileValue(
                        v649,
                        *((unsigned int *)&gpviCPUserPreferences + 1),
                        *((_QWORD *)&gpviCPUserPreferences + 1),
                        3LL,
                        v724,
                        8);
            PointerDeviceSettings = updated;
            v650 = v719;
          }
          if ( PointerDeviceSettings )
          {
            v656 = v650 - 4096;
            v657 = (_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v650 - 4096) >> 6);
            v658 = 1 << ((v656 >> 1) - 32 * (v656 >> 6));
            if ( Src )
              *v657 |= v658;
            else
              *v657 &= ~v658;
            switch ( v719 )
            {
              case 0x1005u:
                *(_DWORD *)(gpsi + 8684LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 8684LL)) & 4;
                goto LABEL_1229;
              case 0x1007u:
                *(_DWORD *)(gpsi + 8684LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 8684LL)) & 8;
                goto LABEL_1229;
              case 0x1009u:
                goto LABEL_1166;
              case 0x100Bu:
                *(_DWORD *)(gpsi + 8684LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 8684LL)) & 0x20;
                goto LABEL_1229;
              case 0x101Bu:
                SetPointer(1LL);
                goto LABEL_1229;
              case 0x1023u:
                goto LABEL_1167;
              case 0x1025u:
                v661 = (void *)ReferenceDwmApiPort();
                DwmAsyncNotifyWindowShadowChange(v661);
                goto LABEL_1229;
              case 0x103Fu:
                *(_DWORD *)(gpsi + 8684LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 8684LL)) & 0x80000000;
                SetPointer(1LL);
LABEL_1166:
                CreateBitmapStrip();
LABEL_1167:
                v659 = *(_QWORD *)(gptiCurrent + 408LL);
                if ( v659 )
                  v660 = *(struct tagWND **)(*(_QWORD *)(v659 + 8) + 16LL);
                else
                  v660 = 0LL;
                xxxInternalInvalidate(v660, (HRGN)1, 0x10485u);
                break;
              case 0x104Fu:
              case 0x1051u:
                xxxWindowEvent(-2147483641, 0, v719, Src != 0LL, 0);
                break;
              default:
                goto LABEL_1229;
            }
          }
          goto LABEL_1229;
        }
        if ( *(_DWORD *)(UPDWORDPointer(v719) + 4) == 4 )
        {
          v662 = UPDWORDPointer(v719);
          if ( (unsigned int)CheckDesktopPolicy(v649, *(_QWORD *)(v662 + 8)) )
          {
            v7 = 0;
            PointerDeviceSettings = 0;
            v714 = 0;
          }
        }
        if ( v7 )
        {
          v663 = UPDWORDPointer(v719);
          v664 = UPDWORDPointer(v719);
          updated = FastWriteProfileValue(v649, *(unsigned int *)(v664 + 4), *(_QWORD *)(v663 + 8), 4LL, &Src, 4);
          PointerDeviceSettings = updated;
          v714 = updated;
        }
        v665 = *(_DWORD *)UPDWORDPointer(v719);
        if ( !PointerDeviceSettings )
        {
LABEL_1229:
          v263 = v649;
LABEL_385:
          FreeProfileUserName(v263, v723);
          goto LABEL_15;
        }
        v666 = (int)Src;
        *(_DWORD *)UPDWORDPointer(v719) = v666;
        switch ( v719 )
        {
          case 0x2007u:
            *(_DWORD *)(gpsi + 8688LL) = *(_DWORD *)UPDWORDPointer(v719);
            goto LABEL_1229;
          case 0x200Bu:
            v710 = (_BYTE *)UPDWORDPointer(v719);
            GreSetFontEnumeration(8 * (*v710 & 2 | 4u));
            goto LABEL_1229;
          case 0x200Du:
            gulGamma = *(_DWORD *)UPDWORDPointer(v719);
            goto LABEL_1229;
          case 0x200Fu:
            if ( !*(_DWORD *)UPDWORDPointer(v719) )
              goto LABEL_1229;
            if ( (unsigned int)IsDPIAbsoluteSysMet(83LL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v668, v667, v669) & 0xF) == 0 )
                goto LABEL_1194;
            }
            else if ( (unsigned int)IsDPIDWMSysMet(v668)
                   && (W32GetCurrentThreadDpiAwarenessContext(v671, v670, v672) & 0xF) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v673, v674, v675) + 408)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v676,
                                                          v677,
                                                          v678)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1) != 0 )
              {
                PointerDeviceSettings = v714;
LABEL_1194:
                v679 = (_DWORD *)(gpsi + 2600LL);
                goto LABEL_1203;
              }
              PointerDeviceSettings = v714;
            }
            if ( !(unsigned int)IsDPIDWMSysMet(83LL)
              || (W32GetCurrentThreadDpiAwarenessContext(v681, v680, v682) & 0xF) != 1 )
            {
              goto LABEL_1202;
            }
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v683, v684, v685) + 408)
              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v686,
                                                        v687,
                                                        v688)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1) != 0 )
            {
              v679 = (_DWORD *)(gpsi + 2988LL);
              PointerDeviceSettings = v714;
            }
            else
            {
              PointerDeviceSettings = v714;
LABEL_1202:
              v679 = (_DWORD *)(gpsi + 2212LL);
            }
            goto LABEL_1203;
          case 0x2011u:
            if ( !*(_DWORD *)UPDWORDPointer(v719) )
              goto LABEL_1229;
            if ( (unsigned int)IsDPIAbsoluteSysMet(84LL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v690, v689, v691) & 0xF) == 0 )
                goto LABEL_1213;
            }
            else if ( (unsigned int)IsDPIDWMSysMet(v690)
                   && (W32GetCurrentThreadDpiAwarenessContext(v693, v692, v694) & 0xF) == 0 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v695, v696, v697) + 408)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v698,
                                                          v699,
                                                          v700)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1) != 0 )
              {
                PointerDeviceSettings = v714;
LABEL_1213:
                v679 = (_DWORD *)(gpsi + 2604LL);
                goto LABEL_1203;
              }
              PointerDeviceSettings = v714;
            }
            if ( !(unsigned int)IsDPIDWMSysMet(84LL)
              || (W32GetCurrentThreadDpiAwarenessContext(v702, v701, v703) & 0xF) != 1 )
            {
              goto LABEL_1221;
            }
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v704, v705, v706) + 408)
              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v707,
                                                        v708,
                                                        v709)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1) != 0 )
            {
              v679 = (_DWORD *)(gpsi + 2992LL);
              PointerDeviceSettings = v714;
            }
            else
            {
              PointerDeviceSettings = v714;
LABEL_1221:
              v679 = (_DWORD *)(gpsi + 2216LL);
            }
LABEL_1203:
            *v679 = *(_DWORD *)UPDWORDPointer(v719);
            goto LABEL_1229;
          case 0x2013u:
            v606 = (*(_BYTE *)UPDWORDPointer(v719) & 1) == 0;
            v711 = &dword_1C02E5E40;
            if ( v606 )
              v711 = (int *)&unk_1C02EFB40;
            off_1C0320110 = v711;
            goto LABEL_1229;
          case 0x201Du:
            TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
            goto LABEL_1229;
          case 0x201Fu:
            TraceLoggingSPISetPenVisualizationEvent(v665, (unsigned int)Src);
            goto LABEL_1229;
          default:
            goto LABEL_1229;
        }
      }
LABEL_11:
      PointerDeviceSettings = 1;
      v714 = 1;
      goto LABEL_12;
    }
LABEL_24:
    v12 = 16;
    if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) )
      return 0LL;
    v11 = 2LL;
    goto LABEL_10;
  }
  if ( v719 == 4135 )
    goto LABEL_24;
  switch ( v719 )
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
      goto LABEL_24;
    case 0xDu:
    case 0x18u:
      if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
        goto LABEL_9;
      if ( a )
        goto LABEL_24;
      result = 1LL;
      break;
    default:
      goto LABEL_8;
  }
  return result;
}
