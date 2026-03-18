/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1401CB418
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1401CB400 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140009C18 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x140009C5C (xxxUpdateSystemIconsFromRegistry.c)
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetMonitorRect @ 0x140030144 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1400307D4 (GetMonitorWorkRect.c)
 *     GetWindowNCMetrics @ 0x140031DA0 (GetWindowNCMetrics.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     SetDesktopPattern @ 0x14008586C (SetDesktopPattern.c)
 *     IsWindowUnderActiveLockScreen @ 0x14008D414 (IsWindowUnderActiveLockScreen.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400CC710 (--1-$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     SetKeyboardRate @ 0x1400CC780 (SetKeyboardRate.c)
 *     SortMonitorsInSpatialOrder @ 0x1400CDC20 (SortMonitorsInSpatialOrder.c)
 *     bSetDevDragWidth @ 0x1400CDE6C (bSetDevDragWidth.c)
 *     CreateBitmapStrip @ 0x1400CE890 (CreateBitmapStrip.c)
 *     SetMouseTrails @ 0x1400F6DA0 (SetMouseTrails.c)
 *     SetPointer @ 0x1400F7230 (SetPointer.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     xxxSetDeskWallpaper @ 0x14013D534 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x14013DA04 (LoadWallpaperFilenameFromRegistry.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x14015C41C (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14015F634 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x14015FD84 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x140163FC8 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     GetMonitorMenuRect @ 0x140176008 (GetMonitorMenuRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A3E8C (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     CheckGrantedAccess @ 0x1401AC1D4 (CheckGrantedAccess.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401BFAEC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     _GetIMEShowStatus @ 0x14020070C (_GetIMEShowStatus.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x140201470 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     UpdateWinIniInt @ 0x140201560 (UpdateWinIniInt.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x14020B038 (-IsWDAGContainer@@YAHXZ.c)
 *     GetEasTimeout @ 0x14021975C (GetEasTimeout.c)
 *     EditionxxxBroadcastSPIChange @ 0x140224440 (EditionxxxBroadcastSPIChange.c)
 *     GreSetFontEnumeration @ 0x140237A2C (GreSetFontEnumeration.c)
 *     GetUserHandedness @ 0x14023BD40 (GetUserHandedness.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14023CE68 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxMetricsRecalc @ 0x14023D32C (xxxMetricsRecalc.c)
 *     _SetDoubleClickTime @ 0x1402461CC (_SetDoubleClickTime.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x140246680 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     GetKbdLangSwitch @ 0x140247C74 (GetKbdLangSwitch.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140249884 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140250050 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1402574E8 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     ?WorkAreaChanged@DesktopRecalc@InputTraceLogging@@SAXPEAXUtagRECT@@11H@Z @ 0x14025A8E0 (-WorkAreaChanged@DesktopRecalc@InputTraceLogging@@SAXPEAXUtagRECT@@11H@Z.c)
 *     GreSetLCDOrientation @ 0x14025BF20 (GreSetLCDOrientation.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ClearKeyboardStates @ 0x1402796E0 (ClearKeyboardStates.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x140290F54 (-_SwapMouseButton@@YAHH@Z.c)
 *     ?DwmNotifyWorkAreaChanged@@YAXXZ @ 0x140291060 (-DwmNotifyWorkAreaChanged@@YAXXZ.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x140292D08 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1402ACAFC (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402ACF70 (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1402AD1A8 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1402AD2B4 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ReadPointerDeviceSettingsFull @ 0x1402CA3AC (ReadPointerDeviceSettingsFull.c)
 *     WritePointerDeviceSettingsFull @ 0x1402CA69C (WritePointerDeviceSettingsFull.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1402D222C (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1402D232C (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1402D23B0 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1402D2434 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z @ 0x1402DEAAC (-ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1402F14CC (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1402F226C (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     GetDpiServerInfoForCurrentProcess @ 0x14030253C (GetDpiServerInfoForCurrentProcess.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x14034724C (DwmAsyncNotifyWindowShadowChange.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // ebx
  int v12; // r15d
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  struct tagPROCESSINFO *v18; // r8
  bool v19; // zf
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // esi
  __int64 v33; // rcx
  unsigned int v34; // esi
  struct _UNICODE_STRING *v35; // rax
  struct _UNICODE_STRING *v36; // r13
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r13
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // al
  int v48; // ebx
  int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // ecx
  int v57; // ecx
  unsigned int v58; // eax
  int v59; // ecx
  int UserHandedness; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // edi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  INT v70; // ebx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r13
  __int64 v81; // rcx
  __int64 v82; // rcx
  struct tagWND *v83; // rcx
  struct _UNICODE_STRING *v84; // rsi
  int v85; // ebx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // esi
  int v103; // eax
  int v104; // ebx
  __int64 v105; // rdx
  __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rax
  int v112; // ecx
  int v113; // edx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  unsigned int v119; // edi
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  INT v123; // ebx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  bool v138; // zf
  struct _UNICODE_STRING *v139; // rax
  int v140; // ebx
  _DWORD *v141; // rdi
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rbx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rbx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rcx
  __int64 v153; // rdx
  int *v154; // rbx
  int v155; // ecx
  struct tagMOUSEKEYS *v156; // rsi
  __int64 v157; // rcx
  int v158; // edx
  unsigned int v159; // ecx
  struct _UNICODE_STRING *v160; // rbx
  _DWORD *v161; // r13
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rbx
  __int64 v167; // rdx
  __int64 v168; // rcx
  unsigned __int64 v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rax
  int v172; // edi
  __int64 v173; // rdx
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // rcx
  int v177; // ebx
  __int64 v178; // rcx
  __int64 v179; // rbx
  __int64 v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // rdx
  __int64 v185; // rax
  _OWORD *MonitorMenuRect; // rax
  __int64 v187; // rax
  __m128i *v188; // rsi
  __int64 v189; // rdx
  __int64 v190; // rcx
  struct CMonitorTopology *Current; // rbx
  __int64 v192; // rcx
  __int64 v193; // rcx
  __int64 v194; // rcx
  __int64 v195; // rcx
  unsigned int v196; // eax
  __int64 v197; // rax
  struct tagRECT v198; // xmm1
  __int64 v199; // rdx
  char v200; // cl
  _DWORD *v201; // rcx
  int v202; // edi
  int v203; // esi
  int v204; // r14d
  int v205; // r15d
  __int64 v206; // rax
  int v207; // r8d
  int v208; // edx
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // rax
  struct CMonitorTopology *v212; // rdx
  char v213; // r14
  bool v214; // r13
  __int64 v215; // rax
  int v216; // r8d
  int v217; // edx
  char v218; // bl
  bool v219; // r14
  __int64 v220; // rax
  int v221; // r8d
  int v222; // edx
  __int64 v223; // rbx
  unsigned int DpiForSystem; // eax
  unsigned int v225; // eax
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // rcx
  __int64 v229; // rdx
  __int64 v230; // r8
  __int64 DpiMetricsForCurrentThread; // rax
  __int64 v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  int v235; // ebx
  __int64 v236; // rdx
  __int64 v237; // rcx
  const wchar_t *v238; // r9
  __int64 v239; // rax
  const wchar_t *v240; // r9
  __int64 v241; // rax
  _OWORD *v242; // rcx
  _OWORD *v243; // rax
  unsigned int v244; // r13d
  struct tagSOUNDSENTRYW *v245; // rdi
  __int64 v246; // rcx
  int v247; // edx
  unsigned int v248; // ecx
  struct _UNICODE_STRING *v249; // rbx
  _DWORD *v250; // rsi
  __int64 v251; // rcx
  __int64 v252; // rax
  __int64 v253; // rbx
  __int64 v254; // rdx
  __int64 v255; // rcx
  int v256; // ecx
  __int64 v257; // rax
  __int64 v258; // rax
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // rdx
  __int64 v262; // rcx
  unsigned int v263; // edi
  unsigned int v264; // edx
  int v265; // edx
  __int64 v266; // rbx
  struct tagTHREADINFO *v267; // rax
  __int64 v268; // rdx
  __int64 v269; // rcx
  __int64 v270; // rbx
  __int64 v271; // rcx
  __int64 v272; // rdx
  __int64 v273; // rcx
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // rdx
  __int64 v277; // rcx
  unsigned int v278; // edi
  __int64 v279; // rdx
  __int64 v280; // rcx
  volatile signed __int32 *v281; // rcx
  unsigned int *v282; // rdi
  __int64 v283; // r14
  const wchar_t *v284; // r13
  const wchar_t *v285; // r9
  int v286; // ebx
  __int64 v287; // rdx
  __int64 v288; // rcx
  __int64 UserSessionState; // rax
  __int64 v290; // rax
  bool v291; // zf
  unsigned int i; // ebx
  unsigned int v293; // eax
  unsigned int v294; // eax
  unsigned int v295; // eax
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // rdx
  __int64 v299; // rcx
  __int64 v300; // rdx
  __int64 v301; // rcx
  bool v302; // zf
  unsigned int v303; // eax
  unsigned int v304; // eax
  unsigned int v305; // eax
  unsigned int PointerDeviceSettingsFull; // eax
  __int64 v307; // rax
  __m128i *v308; // rsi
  __int64 v309; // rcx
  __int64 v310; // rcx
  __int64 v311; // rcx
  __int64 v312; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 DispInfo; // rax
  int v315; // ecx
  InteractiveControlManager *v316; // rax
  InteractiveControlManager *v317; // rax
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 v320; // rdx
  __int64 v321; // rcx
  __int64 v322; // rdx
  __int64 v323; // rcx
  __int64 v324; // rdx
  __int64 v325; // rcx
  __int64 v326; // rdx
  __int64 v327; // rcx
  __int64 v328; // rdx
  __int64 v329; // rcx
  __int64 v330; // rax
  __int64 v331; // rdx
  __int64 v332; // rax
  __int64 v333; // rdx
  __int64 v334; // rcx
  __int64 v335; // rdx
  __int64 v336; // rcx
  __int64 v337; // rcx
  int v338; // ebx
  __int64 v339; // rdx
  __int64 v340; // rcx
  int v341; // ebx
  __int64 v342; // rdx
  __int64 v343; // rcx
  int v344; // edi
  __int64 v345; // rdx
  __int64 v346; // rcx
  int v347; // ebx
  __int64 v348; // rdx
  __int64 v349; // rcx
  int v350; // edi
  __int64 v351; // rdx
  __int64 v352; // rcx
  int v353; // ebx
  __int64 v354; // rdx
  __int64 v355; // rcx
  int v356; // edi
  __int64 v357; // rdx
  __int64 v358; // rcx
  __int64 v359; // rcx
  __int64 v360; // rcx
  __int64 v361; // rax
  int v362; // ecx
  __int64 v363; // rdx
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 v366; // rax
  __int64 v367; // r8
  __int64 v368; // rdi
  unsigned int ProfileValue; // eax
  unsigned __int64 v370; // rdx
  int v371; // eax
  int v372; // ecx
  int v373; // eax
  unsigned __int64 v374; // rdx
  int v375; // eax
  unsigned int v376; // ecx
  __int64 v377; // rcx
  unsigned int v378; // esi
  unsigned int v379; // esi
  unsigned int v380; // esi
  unsigned int v381; // esi
  unsigned int v382; // esi
  __int64 v383; // rcx
  int v384; // ebx
  __int64 v385; // rdx
  __int64 v386; // rdx
  __int64 v387; // rcx
  int v388; // ebx
  __int64 v389; // rcx
  int v390; // ebx
  __int64 v391; // rdx
  __int64 v392; // rcx
  int v393; // ebx
  __int64 v394; // rdx
  __int64 v395; // rax
  void *v396; // rax
  __int64 v397; // rcx
  int v398; // ebx
  __int64 v399; // rdx
  unsigned int v400; // ebx
  __int64 v401; // rdx
  __int64 v402; // rcx
  __int64 v403; // rax
  __int64 v404; // rcx
  struct tagWND *v405; // rcx
  unsigned int v406; // r8d
  __int64 v407; // rax
  __int64 v408; // rbx
  __int64 v409; // rax
  unsigned int v410; // r15d
  int v411; // ebx
  __int64 v412; // rdx
  __int64 v413; // rcx
  int v414; // ebx
  __int64 v415; // rdx
  __int64 v416; // rcx
  int v417; // ebx
  __int64 v418; // rdx
  __int64 v419; // rcx
  __int64 v420; // r8
  _DWORD *v421; // rax
  int v422; // ebx
  __int64 v423; // rdx
  __int64 v424; // rcx
  char v425; // r15
  int v426; // ebx
  int v427; // edi
  __int64 v428; // rdx
  __int64 v429; // rcx
  __int64 v430; // rax
  int v431; // r8d
  int v432; // edx
  int v433; // ebx
  __int64 v434; // rdx
  __int64 v435; // rcx
  __int64 v436; // rax
  unsigned int *v437; // rax
  __int64 v438; // rcx
  int v439; // edi
  BOOL v440; // ebx
  __int64 v441; // rdx
  __int64 v442; // rdx
  __int64 v443; // rcx
  int updated; // [rsp+80h] [rbp-3D8h]
  _DWORD v445[3]; // [rsp+84h] [rbp-3D4h] BYREF
  int v446; // [rsp+90h] [rbp-3C8h] BYREF
  bool v447; // [rsp+94h] [rbp-3C4h]
  char v448; // [rsp+95h] [rbp-3C3h]
  int v449; // [rsp+98h] [rbp-3C0h]
  int v450; // [rsp+9Ch] [rbp-3BCh]
  int v451; // [rsp+A0h] [rbp-3B8h]
  int v452; // [rsp+A4h] [rbp-3B4h]
  __int64 v453; // [rsp+A8h] [rbp-3B0h] BYREF
  unsigned int v454; // [rsp+B0h] [rbp-3A8h]
  int v455[3]; // [rsp+B4h] [rbp-3A4h] BYREF
  struct tagRECT v456; // [rsp+C0h] [rbp-398h] BYREF
  __m128i v457; // [rsp+D0h] [rbp-388h] BYREF
  __int64 v458; // [rsp+E0h] [rbp-378h]
  struct tagPROCESSINFO *v459; // [rsp+E8h] [rbp-370h]
  struct tagRECT v460; // [rsp+F0h] [rbp-368h] BYREF
  int v461; // [rsp+110h] [rbp-348h]
  struct tagRECT v462; // [rsp+120h] [rbp-338h] BYREF
  struct tagRECT Buf1; // [rsp+140h] [rbp-318h] BYREF
  __int128 v464; // [rsp+150h] [rbp-308h]
  unsigned __int16 v465[40]; // [rsp+160h] [rbp-2F8h] BYREF
  _WORD v466[40]; // [rsp+1B0h] [rbp-2A8h] BYREF
  _BYTE v467[528]; // [rsp+200h] [rbp-258h] BYREF

  v450 = a4;
  v6 = a1;
  v445[0] = a1;
  LODWORD(v458) = a1;
  *(_QWORD *)&v445[1] = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v459 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v9 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = (struct tagPROCESSINFO *)(CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL));
    v459 = v8;
  }
  v10 = 0;
  updated = 0;
  v446 = 0;
  v11 = a4 & 1;
  v452 = v11;
  v12 = (a4 >> 1) & 1;
  v461 = v12;
  LODWORD(v453) = v12;
  v13 = !(a4 & 1);
  v455[0] = v13;
  v449 = v450 & 0x8000;
  v454 = 0;
  *(_QWORD *)&v456.left = W32GetUserSessionState(v9, v8);
  *(_QWORD *)&v460.left = *(_QWORD *)&v456.left + 20976LL;
  *(_QWORD *)&v462.left = *(_QWORD *)&v456.left + 20608LL;
  *(_QWORD *)&Buf1.left = *(_QWORD *)&v456.left + 21088LL;
  v457.m128i_i64[0] = W32GetUserSessionState(*(_QWORD *)&v456.left + 21088LL, *(_QWORD *)&v456.left);
  v466[0] = 0;
  if ( v6 > 0x50 )
  {
    switch ( v6 )
    {
      case 'Q':
      case 'R':
        return 1LL;
      case 'S':
      case 'T':
        goto LABEL_14;
      case 'U':
      case 'V':
        return 1LL;
      case '\\':
      case 'a':
        goto LABEL_957;
    }
  }
  else
  {
    switch ( v6 )
    {
      case 0x50u:
LABEL_14:
        **(_DWORD **)&v445[1] = 0;
        return 1LL;
      case 7u:
        goto LABEL_957;
      case 8u:
        goto LABEL_957;
      case 0xCu:
        goto LABEL_957;
      case 0x27u:
        goto LABEL_957;
      case 0x28u:
        goto LABEL_957;
      case 0x31u:
        goto LABEL_957;
      case 0x3Eu:
        goto LABEL_957;
    }
    v15 = v6 - 63;
    if ( v6 == 63 )
      goto LABEL_957;
    if ( v6 == 79 )
      goto LABEL_14;
  }
  v451 = v6 & 1;
  if ( (v6 & 1) != 0 && v6 == 8193 && *((int *)v459 + 3) >= 0 && !CanForceForeground(v459, v14) )
  {
LABEL_957:
    v256 = 87;
    goto LABEL_958;
  }
  v17 = *(_QWORD *)(W32GetUserGdiSessionState(v15) + 40);
  v18 = v459;
  if ( *(_QWORD *)v459 == v17 )
  {
    v22 = 2LL;
LABEL_110:
    v13 = 1;
    v455[0] = 1;
    goto LABEL_111;
  }
  if ( v6 > 0x35 )
  {
    if ( v6 <= 0x77 )
    {
      if ( v6 == 119 )
        goto LABEL_106;
      if ( v6 > 0x4D )
      {
        if ( v6 > 0x63 )
        {
          if ( v6 != 101 && v6 != 103 && v6 != 107 && v6 != 109 )
            goto LABEL_98;
          goto LABEL_106;
        }
        if ( v6 == 99 || v6 == 87 || v6 == 88 || v6 == 90 || v6 == 91 )
          goto LABEL_106;
        v19 = v6 == 96;
      }
      else
      {
        if ( v6 == 77 )
          goto LABEL_106;
        if ( v6 > 0x43 )
        {
          if ( v6 == 69 || v6 == 71 || v6 == 73 || v6 == 75 )
            goto LABEL_106;
          v19 = v6 == 76;
        }
        else
        {
          if ( v6 == 67 || v6 == 55 || v6 == 57 || v6 == 59 || v6 == 61 )
            goto LABEL_106;
          v19 = v6 == 65;
        }
      }
      goto LABEL_41;
    }
    if ( v6 == 161 || v6 == 163 )
      goto LABEL_106;
    v20 = v6 == 4135;
    goto LABEL_97;
  }
  if ( v6 == 53 )
    goto LABEL_106;
  if ( v6 > 0x1C )
  {
    if ( v6 > 0x25 )
    {
      if ( v6 == 42 || v6 == 44 || v6 == 46 || v6 == 47 )
        goto LABEL_106;
      v19 = v6 == 51;
    }
    else
    {
      if ( v6 == 37 || v6 == 29 || v6 == 30 || v6 == 32 || v6 == 33 || v6 == 34 )
        goto LABEL_106;
      v19 = v6 == 36;
    }
    goto LABEL_41;
  }
  if ( v6 == 28 )
    goto LABEL_106;
  if ( v6 > 0x11 )
  {
    if ( v6 == 19 || v6 == 20 || v6 == 21 || v6 == 23 )
      goto LABEL_106;
    if ( v6 == 24 )
      goto LABEL_49;
    v20 = v6 == 26;
LABEL_97:
    if ( !v20 )
      goto LABEL_98;
    goto LABEL_106;
  }
  if ( v6 == 17 || v6 == 2 || v6 == 4 || v6 == 6 || v6 == 11 )
    goto LABEL_106;
  if ( v6 == 13 )
  {
LABEL_49:
    if ( (*(_QWORD *)&v445[1] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v451 = 2;
      goto LABEL_108;
    }
    if ( !a2 )
      return 1LL;
    goto LABEL_106;
  }
  v19 = v6 == 15;
LABEL_41:
  if ( !v19 )
  {
LABEL_98:
    if ( (v6 & 0x3000) != 0 && v451 )
    {
      v451 = 16;
LABEL_101:
      v21 = CheckWinstaAttributeAccess(0x10u);
      goto LABEL_102;
    }
    v23 = 2;
    goto LABEL_107;
  }
LABEL_106:
  v23 = 16;
LABEL_107:
  v451 = v23;
  if ( v23 != 2 )
    goto LABEL_101;
LABEL_108:
  v21 = CheckGrantedAccess(*((_DWORD *)v459 + 168), 2u);
LABEL_102:
  if ( !v21 )
    return 0LL;
  v22 = 2LL;
  if ( v451 == 2 )
    goto LABEL_110;
LABEL_111:
  if ( v6 > 0x1026 )
  {
    if ( v6 == 4135 )
    {
      LOBYTE(v10) = a2 != 0;
      if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
      {
        v11 = 0;
        v13 = 0;
      }
      if ( v11 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 112LL, v10);
        v13 = updated;
      }
      v32 = v12;
      if ( v13 )
        *(_DWORD *)(W32GetUserSessionState(v443, v442) + 19112) = v10;
      goto LABEL_951;
    }
    if ( v6 == 8228 )
    {
      UserHandedness = GetUserHandedness();
      goto LABEL_178;
    }
    if ( v6 != 8229 )
      goto LABEL_815;
    a2 = 0;
    if ( (unsigned int)RIMIsDefaultUILanguageRTL() )
      LOBYTE(a2) = v445[1] == 0;
    else
      LOBYTE(a2) = v445[1] != 0;
LABEL_940:
    if ( v11 )
    {
      updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
      v13 = updated;
    }
    if ( v13 )
    {
      v438 = *(_QWORD *)(W32GetUserSessionState(v17, v22) + 19904);
      v439 = *(_DWORD *)(v438 + 2056);
      v440 = a2 != 0;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v438, v441) + 19904) + 2056LL) = v440;
      TraceLoggingSPISetMenuDropAlignmentEvent(v439, v440);
    }
    goto LABEL_136;
  }
  if ( v6 == 4134 )
  {
    v291 = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 19112) == 0;
    goto LABEL_683;
  }
  if ( v6 > 0x64 )
  {
    if ( v6 <= 0x89 )
    {
      if ( v6 == 137 )
        goto LABEL_702;
      if ( v6 <= 0x78 )
      {
        if ( v6 == 120 )
        {
          LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 69104);
          goto LABEL_138;
        }
        if ( v6 <= 0x6F )
        {
          if ( v6 != 111 )
          {
            switch ( v6 )
            {
              case 'e':
                if ( v11 )
                {
                  updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
                  v13 = updated;
                }
                if ( v13 )
                  *(_DWORD *)(W32GetUserSessionState(v17, v22) + 16272) = a2;
                goto LABEL_136;
              case 'f':
                LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 16276);
                goto LABEL_138;
              case 'g':
                v278 = 10;
                if ( a2 >= 0xA )
                  v278 = a2;
                if ( v278 > 0x7FFFFFFF )
                  v278 = 0x7FFFFFFF;
                if ( v11 )
                {
                  updated = UpdateWinIniInt(0LL, 12LL, 93LL, v278);
                  v13 = updated;
                }
                if ( v13 )
                  *(_DWORD *)(W32GetUserSessionState(v17, v22) + 16276) = v278;
                goto LABEL_136;
              case 'j':
                LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 66024);
                goto LABEL_138;
              case 'k':
                if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
                {
                  v11 = 0;
                  v13 = 0;
                }
                if ( v11 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
                  v13 = updated;
                }
                if ( v13 )
                  *(_DWORD *)(W32GetUserSessionState(v277, v276) + 66024) = a2;
                goto LABEL_136;
            }
            if ( v6 != 108 )
            {
              if ( v6 == 109 )
              {
                if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
                {
                  v11 = 0;
                  v13 = 0;
                }
                if ( v11 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
                  v13 = updated;
                }
                if ( v13 )
                  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v275, v274) + 19904) + 4992LL) = a2;
                goto LABEL_136;
              }
              if ( v6 != 110 )
                goto LABEL_815;
              UserHandedness = GetIMEShowStatus();
LABEL_178:
              **(_DWORD **)&v445[1] = UserHandedness;
              goto LABEL_136;
            }
            v113 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, 2LL) + 19904) + 4992LL);
            goto LABEL_292;
          }
          v13 = xxxSetIMEShowStatus(a2 != 0, v11, &v446);
LABEL_373:
          v85 = v446;
LABEL_377:
          v32 = v12;
          goto LABEL_952;
        }
        if ( v6 == 112 )
        {
          UserHandedness = GetMouseSensitivity(0LL);
          goto LABEL_178;
        }
        if ( v6 == 113 )
        {
          if ( (unsigned __int8)IsValidMouseSensitivity(v445[1]) )
          {
            if ( v11 )
            {
              RtlStringCchPrintfW(v465, 0x28uLL, L"%d", *(_QWORD *)&v445[1]);
              updated = FastUpdateWinIni(0LL, 12LL, 608LL, v465);
              v13 = updated;
            }
            if ( v13 )
            {
              UpdateMouseSensitivity(v445[1]);
              for ( i = 0; i < 2; ++i )
                ResetAccelerationCurves(i);
            }
            goto LABEL_145;
          }
          return 0LL;
        }
        if ( v6 != 114 )
        {
          switch ( v6 )
          {
            case 's':
              if ( *(_QWORD *)(W32GetUserSessionState(v17, 2LL) + 62784) )
              {
                UserSessionState = W32GetUserSessionState(v288, v287);
                RtlStringCchCopyW(*(char **)&v445[1], 260LL, (char *)(*(_QWORD *)(UserSessionState + 62784) + 4LL));
                goto LABEL_136;
              }
              tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
              v290 = CreateProfileUserName(&Buf1);
              LoadWallpaperFilenameFromRegistry(v290, *(unsigned __int16 **)&v445[1], 0x104u);
              goto LABEL_543;
            case 't':
              if ( (!a2 || a2 == 12) && *(_QWORD *)&v445[1] && **(_DWORD **)&v445[1] == 12 )
              {
                *(_QWORD *)(*(_QWORD *)&v445[1] + 4LL) = *(_QWORD *)(*(_QWORD *)&v456.left + 21868LL);
                goto LABEL_136;
              }
              return 0LL;
            case 'u':
              v282 = *(unsigned int **)&v445[1];
              v457.m128i_i64[0] = *(_QWORD *)&v445[1];
              if ( (!a2 || a2 == 12) && *(_QWORD *)&v445[1] && **(_DWORD **)&v445[1] == 12 )
              {
                if ( v11 )
                {
                  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v460);
                  v283 = CreateProfileUserName(&v460);
                  *(_QWORD *)&Buf1.left = v283;
                  v284 = L"1";
                  v285 = L"1";
                  if ( !*(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) )
                    v285 = L"0";
                  v286 = FastWriteProfileStringW(v283, 48LL, L"On", v285);
                  RtlStringCchPrintfW(v465, 0x28uLL, L"%d", *(unsigned int *)(*(_QWORD *)&v445[1] + 8LL));
                  updated = v286 & FastWriteProfileStringW(v283, 48LL, L"Locale", v465);
                  v13 = updated;
                  if ( !updated )
                  {
                    if ( !*(_DWORD *)(*(_QWORD *)&v456.left + 21868LL) )
                      v284 = L"0";
                    FastWriteProfileStringW(*(_QWORD *)&Buf1.left, 48LL, L"On", v284);
                    RtlStringCchPrintfW(v465, 0x28uLL, L"%d", *(unsigned int *)(*(_QWORD *)&v456.left + 21872LL));
                    FastWriteProfileStringW(*(_QWORD *)&Buf1.left, 48LL, L"Locale", v465);
                  }
                  Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v460);
                  v282 = (unsigned int *)v457.m128i_i64[0];
                }
                if ( v13 )
                {
                  memmove((void *)(*(_QWORD *)&v456.left + 21864LL), v282, *v282);
                  *(_DWORD *)(*(_QWORD *)&v456.left + 21864LL) = 12;
                }
                goto LABEL_136;
              }
              return 0LL;
          }
          if ( v6 != 118 )
          {
            if ( !*(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 62696) || v449 )
            {
              if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
              {
                v11 = 0;
                v13 = 0;
              }
              if ( v11 )
              {
                LOBYTE(v10) = a2 != 0;
                updated = UpdateWinIniInt(0LL, 4LL, 618LL, v10);
                v13 = updated;
              }
              if ( v13 )
              {
                v281 = *(volatile signed __int32 **)(W32GetUserSessionState(v280, v279) + 19904);
                if ( a2 )
                  _InterlockedOr(v281, 0x200u);
                else
                  _InterlockedAnd(v281, 0xFFFFFDFF);
              }
              goto LABEL_136;
            }
            goto LABEL_806;
          }
          v265 = **(_DWORD **)(W32GetUserSessionState(v17, 2LL) + 19904) >> 9;
LABEL_565:
          **(_DWORD **)&v445[1] = v265 & 1;
          goto LABEL_145;
        }
        v291 = *(_QWORD *)(W32GetUserSessionState(v17, 2LL) + 62816) == 0LL;
LABEL_683:
        LODWORD(v33) = !v291;
        goto LABEL_138;
      }
      if ( v6 <= 0x81 )
      {
        if ( v6 != 129 )
        {
          switch ( v6 )
          {
            case 'y':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
              {
                v11 = 0;
                v13 = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
                v13 = updated;
              }
              if ( v13 )
                *(_DWORD *)(W32GetUserSessionState(v301, v300) + 69104) = a2;
              goto LABEL_136;
            case 'z':
              LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 36448);
              goto LABEL_138;
            case '{':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
              {
                v11 = 0;
                v13 = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
                v13 = updated;
              }
              if ( v13 )
                *(_DWORD *)(W32GetUserSessionState(v299, v298) + 36448) = a2;
              goto LABEL_136;
            case '|':
              LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 36444);
              goto LABEL_138;
          }
          v293 = v6 - 125;
          if ( v6 == 125 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
            {
              v11 = 0;
              v13 = 0;
            }
            if ( v11 )
            {
              updated = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
              v13 = updated;
            }
            if ( v13 )
              *(_DWORD *)(W32GetUserSessionState(v297, v296) + 36444) = a2;
            goto LABEL_136;
          }
LABEL_700:
          v294 = v293 - 1;
          if ( v294 && v294 - 1 > 1 )
            goto LABEL_815;
        }
LABEL_702:
        v295 = WindowArrangementSPI::ArrangementParameterInfo(v6, a2, *(_DWORD **)&v445[1], v11, v13 != 0);
        updated = v295 & 1;
        v13 = (v295 >> 1) & 1;
        goto LABEL_145;
      }
      v302 = v6 == 130;
      v303 = v6 - 130;
LABEL_724:
      if ( !v302 )
      {
        v304 = v303 - 1;
        if ( v304 )
        {
          v305 = v304 - 1;
          if ( v305 )
          {
            v293 = v305 - 1;
            if ( v293 )
              goto LABEL_700;
          }
        }
      }
      goto LABEL_702;
    }
    if ( v6 <= 0x9C )
    {
      if ( v6 == 156 )
        goto LABEL_741;
      if ( v6 <= 0x94 )
      {
        if ( v6 != 148 )
        {
          if ( v6 == 138 )
            goto LABEL_702;
          v303 = v6 - 139;
          v302 = v6 == 139;
          goto LABEL_724;
        }
        goto LABEL_741;
      }
      if ( v6 != 149 && (v6 == 150 || v6 != 151 && (v6 == 152 || v6 == 154)) )
      {
LABEL_741:
        PointerDeviceSettingsFull = ReadPointerDeviceSettingsFull(v6, *(_QWORD *)&v445[1]);
        goto LABEL_742;
      }
LABEL_740:
      v85 = WritePointerDeviceSettingsFull(v6, *(_QWORD *)&v445[1], v450 & 1);
      goto LABEL_238;
    }
    if ( v6 > 0xA6 )
    {
      if ( v6 != 167 )
      {
        if ( v6 == 168 )
        {
          LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 66088);
          goto LABEL_138;
        }
        if ( v6 != 169 )
        {
          if ( v6 == 170 )
          {
            LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 66084);
            goto LABEL_138;
          }
          if ( v6 != 171 )
          {
            if ( v6 == 172 )
            {
              v317 = InteractiveControlManager::Instance(v17, 2LL);
              v13 = (int)InteractiveControlManager::GetExternalParameters(
                           v317,
                           *(struct tagINTERACTIVECTRL_PARAMETERS **)&v445[1]) >= 0;
              goto LABEL_136;
            }
            if ( v6 != 173 )
              goto LABEL_815;
            v316 = InteractiveControlManager::Instance(v17, 2LL);
            updated = (int)InteractiveControlManager::SetExternalParameters(
                             v316,
                             *(struct tagINTERACTIVECTRL_PARAMETERS **)&v445[1],
                             v450 & 1) >= 0;
            goto LABEL_145;
          }
          v319 = *(_QWORD *)(W32GetUserSessionState(v17, 2LL) + 63544);
          if ( *((_DWORD *)v459 + 14) == v319 )
          {
            *(_DWORD *)(W32GetUserSessionState(v319, v318) + 66084) = a2 != 0;
            if ( *(_DWORD *)(W32GetUserSessionState(v321, v320) + 66084) )
            {
              if ( !*(_QWORD *)(W32GetUserSessionState(v323, v322) + 18944)
                || (v327 = *(_QWORD *)(W32GetUserSessionState(v325, v324) + 18944), !*(_QWORD *)(v327 + 464))
                || (v329 = *(_QWORD *)(W32GetUserSessionState(v327, v326) + 18944),
                    !*(_QWORD *)(*(_QWORD *)(v329 + 464) + 128LL))
                || (v330 = W32GetUserSessionState(v329, v328),
                    (unsigned int)IsWindowUnderActiveLockScreen(
                                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v330 + 18944) + 464LL) + 128LL),
                                    v331)) )
              {
                xxxSetForegroundWindow2(0LL, 0LL, 0LL);
              }
              ClearKeyboardStates();
            }
            v332 = W32GetUserSessionState(v323, v322);
            GreLddmProcessLockScreen(*(unsigned int *)(v332 + 66084));
            goto LABEL_136;
          }
          return 0LL;
        }
        if ( *(_DWORD *)(W32GetUserGdiSessionState(v17) + 36) )
          return 0LL;
        if ( *(_DWORD *)(W32GetUserSessionState(v334, v333) + 62696) && !v449 )
          goto LABEL_806;
        *(_DWORD *)(W32GetUserSessionState(v336, v335) + 66088) = a2 != 0;
        if ( !v452 )
          goto LABEL_136;
        PointerDeviceSettingsFull = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
        updated = PointerDeviceSettingsFull;
LABEL_742:
        v13 = PointerDeviceSettingsFull;
        goto LABEL_136;
      }
    }
    else
    {
      if ( v6 == 166 )
        goto LABEL_773;
      if ( v6 == 157 )
        goto LABEL_740;
      if ( v6 != 158 )
      {
        if ( v6 != 159 )
        {
          switch ( v6 )
          {
            case 0xA0u:
              **(_DWORD **)&v445[1] = 6;
              goto LABEL_136;
            case 0xA1u:
              goto LABEL_144;
            case 0xA2u:
              DispInfo = GetDispInfo(v17, 2LL);
              MonitorMenuRect = GetMonitorMenuRect(&Buf1, *(struct tagMONITOR **)(DispInfo + 96));
              goto LABEL_425;
            case 0xA3u:
              Buf1 = 0LL;
              if ( *(_QWORD *)&v445[1] )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v445[1] + 8LL) < **(_DWORD **)&v445[1]
                  || *(_DWORD *)(*(_QWORD *)&v445[1] + 12LL) < *(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) )
                {
                  return 0LL;
                }
                v307 = MonitorFromRect(*(__int32 **)&v445[1], 1LL, 0);
              }
              else
              {
                v307 = *(_QWORD *)(GetDispInfo(v17, 2LL) + 96);
              }
              *(_QWORD *)&v456.left = v307;
              v457 = *GetMonitorRect(&v457, v307);
              v308 = &v457;
              if ( *(_QWORD *)&v445[1] )
                v308 = *(__m128i **)&v445[1];
              if ( (unsigned int)IntersectRect(&Buf1, v308->m128i_i32, v457.m128i_i32) && !memcmp(&Buf1, v308, 0x10uLL) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v309) & 0xF) != 2
                  && *((_QWORD *)PtiCurrent(v310) + 61)
                  && (v312 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v311) + 61) + 8LL), (*(_DWORD *)(v312 + 64) & 1) != 0) )
                {
                  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v312);
                  LogicalToPhysicalDPIRect(
                    *(_QWORD *)&v456.left + 112LL,
                    &Buf1,
                    CurrentThreadDpiAwarenessContext,
                    &v456);
                }
                else
                {
                  *(struct tagRECT *)(*(_QWORD *)&v456.left + 112LL) = Buf1;
                }
                goto LABEL_145;
              }
              goto LABEL_957;
          }
          if ( v6 != 165 )
            goto LABEL_815;
          goto LABEL_753;
        }
LABEL_773:
        if ( a2 + 11 <= 0x16 )
        {
          if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
          {
            v11 = 0;
            v13 = 0;
          }
          if ( v11 )
          {
            Buf1 = 0LL;
            LODWORD(v464) = 0;
            DWORD1(v464) = a2;
            LODWORD(v453) = a2 != 159;
            if ( PreAllocateForPrimaryMonitorChange() && (int)DrvDisplayConfigSetScaleFactorOverride(&Buf1, &v453) >= 0 )
            {
              if ( a2 == 159 )
                TraceLoggingSPISetModernDPIOverrideEvent(v315, 159);
              else
                TraceLoggingSPISetDesktopDPIOverrideEvent(v315, a2);
              v13 = 1;
            }
            else
            {
              v13 = 0;
            }
          }
          goto LABEL_136;
        }
        return 0LL;
      }
    }
LABEL_753:
    Buf1 = 0LL;
    v464 = 0LL;
    if ( (int)DrvDisplayConfigGetScaleFactorOverrides(&Buf1, 1LL) >= 0 )
    {
      if ( a2 != 158 )
      {
        v337 = *(_QWORD *)&v445[1];
        **(_QWORD **)&v445[1] = *(_QWORD *)((char *)&v464 + 4);
        *(_DWORD *)(v337 + 8) = HIDWORD(v464);
        goto LABEL_145;
      }
      v57 = DWORD2(v464);
      goto LABEL_174;
    }
    return 0LL;
  }
  if ( v6 == 100 )
  {
    LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 16272);
    goto LABEL_138;
  }
  if ( v6 > 0x2B )
  {
    if ( v6 <= 0x48 )
    {
      if ( v6 == 72 )
      {
        v253 = *(_QWORD *)&v445[1];
        if ( !*(_QWORD *)&v445[1] || a2 != 8 )
          return 0LL;
        **(_DWORD **)&v445[1] = 8;
        *(_DWORD *)(v253 + 4) = *(_WORD *)(W32GetUserSessionState(v17, 2LL) + 66794) & 1;
        goto LABEL_145;
      }
      if ( v6 > 0x39 )
      {
        switch ( v6 )
        {
          case '@':
            if ( !a2 || a2 == 56 )
            {
              v251 = *(_QWORD *)&v445[1];
              if ( *(_QWORD *)&v445[1] )
              {
                if ( **(_DWORD **)&v445[1] == 56 )
                {
                  v252 = *(_QWORD *)&v460.left;
                  *(_OWORD *)(*(_QWORD *)&v445[1] + 4LL) = *(_OWORD *)(*(_QWORD *)&v460.left + 4LL);
                  *(_OWORD *)(v251 + 20) = *(_OWORD *)(v252 + 20);
                  *(_OWORD *)(v251 + 36) = *(_OWORD *)(v252 + 36);
                  *(_DWORD *)(v251 + 52) = *(_DWORD *)(v252 + 52);
                  goto LABEL_136;
                }
              }
            }
            return 0LL;
          case 'A':
            v245 = *(struct tagSOUNDSENTRYW **)&v445[1];
            if ( !a2 || a2 == 56 )
            {
              if ( *(_QWORD *)&v445[1] )
              {
                if ( **(_DWORD **)&v445[1] == 56 )
                {
                  v246 = *(unsigned int *)(*(_QWORD *)&v445[1] + 4LL);
                  if ( (*(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) & 7) == (_DWORD)v246
                    && *(_DWORD *)(*(_QWORD *)&v445[1] + 32LL) <= 3u
                    && !*(_DWORD *)(*(_QWORD *)&v445[1] + 8LL)
                    && !*(_DWORD *)(*(_QWORD *)&v445[1] + 20LL) )
                  {
                    v247 = *(_DWORD *)(W32GetUserSessionState(v246, 2LL) + 20980);
                    v248 = *(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) | 2;
                    if ( (v247 & 2) == 0 )
                      v248 = *(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) & 0xFFFFFFFD;
                    *(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) = v248;
                    if ( v11 )
                    {
                      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
                      v249 = (struct _UNICODE_STRING *)CreateProfileUserName(&Buf1);
                      updated = SetSoundSentry(v249, v245);
                      v13 = updated;
                      v250 = *(_DWORD **)&v460.left;
                      if ( !updated )
                        SetSoundSentry(v249, *(struct tagSOUNDSENTRYW **)&v460.left);
                      Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&Buf1);
                    }
                    else
                    {
                      v250 = *(_DWORD **)&v460.left;
                    }
                    if ( v13 )
                    {
                      memmove(v250, v245, *(unsigned int *)v245);
                      *v250 = 56;
                      SetAccessEnabledFlag();
                    }
                    goto LABEL_136;
                  }
                }
              }
            }
            return 0LL;
          case 'B':
            *(_QWORD *)&v460.left = *(_QWORD *)&v445[1];
            *(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) = *(_DWORD *)(*(_QWORD *)&v456.left + 21076LL);
            v242 = *(_OWORD **)(*(_QWORD *)&v460.left + 8LL);
            v243 = *(_OWORD **)&Buf1.left;
            do
            {
              *v242 = *v243;
              v242[1] = v243[1];
              v242[2] = v243[2];
              v242[3] = v243[3];
              v242[4] = v243[4];
              v242[5] = v243[5];
              v242[6] = v243[6];
              v242 += 8;
              *(v242 - 1) = v243[7];
              v243 += 8;
              --v22;
            }
            while ( v22 );
            v85 = 0;
            v244 = v445[0];
            v32 = v12;
            goto LABEL_953;
          case 'C':
            v85 = SetHighContrastWorker(*(struct tagINTERNALSETHIGHCONTRAST *volatile *)&v445[1], v11, v455);
            v13 = v455[0];
            goto LABEL_377;
          case 'D':
            v154 = *(int **)&v445[1];
            v155 = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 66792) >> 17;
            break;
          case 'E':
            if ( v11 )
            {
              v240 = L"1";
              if ( !a2 )
                v240 = L"0";
              updated = FastWriteProfileStringW(0LL, 27LL, L"On", v240);
              v13 = updated;
            }
            if ( v13 )
            {
              v241 = W32GetUserSessionState(v17, v22);
              if ( a2 )
                *(_DWORD *)(v241 + 66792) |= 0x20000u;
              else
                *(_DWORD *)(v241 + 66792) &= ~0x20000u;
            }
            goto LABEL_136;
          case 'F':
            v154 = *(int **)&v445[1];
            v155 = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 66792) >> 18;
            break;
          case 'G':
            if ( v11 )
            {
              v238 = L"1";
              if ( !a2 )
                v238 = L"0";
              updated = FastWriteProfileStringW(0LL, 28LL, L"On", v238);
              v13 = updated;
            }
            if ( v13 )
            {
              v239 = W32GetUserSessionState(v17, v22);
              if ( a2 )
                *(_DWORD *)(v239 + 66792) |= 0x40000u;
              else
                *(_DWORD *)(v239 + 66792) &= ~0x40000u;
            }
            goto LABEL_136;
          default:
            goto LABEL_815;
        }
LABEL_392:
        *v154 = v155 & 1;
        goto LABEL_145;
      }
      switch ( v6 )
      {
        case '9':
          if ( v11 )
          {
            RtlStringCchPrintfW(v465, 0x28uLL, L"%d", a2 == 1);
            updated = FastWriteProfileStringW(0LL, 20LL, L"On", v465);
            v13 = updated;
          }
          if ( v13 )
          {
            v232 = W32GetUserSessionState(v17, v22);
            if ( a2 == 1 )
              *(_DWORD *)(v232 + 66792) |= 0x8000u;
            else
              *(_DWORD *)(v232 + 66792) &= ~0x8000u;
            SetAccessEnabledFlag();
            v235 = (*(_DWORD *)(W32GetUserSessionState(v234, v233) + 66792) >> 15) & 1;
            *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v237, v236) + 19904) + 2176LL) = v235;
          }
          goto LABEL_145;
        case ',':
          goto LABEL_352;
        case '-':
          v223 = *(_QWORD *)&v445[1];
          **(_DWORD **)&v445[1] = 108;
          DpiForSystem = GetDpiForSystem();
          *(_DWORD *)(v223 + 4) = GetDpiDependentMetric(18, DpiForSystem);
          v225 = GetDpiForSystem();
          *(_DWORD *)(v223 + 8) = GetDpiDependentMetric(19, v225);
          v228 = (*(_DWORD *)(W32GetUserSessionState(v227, v226) + 66792) >> 21) & 1;
          *(_DWORD *)(v223 + 12) = v228;
          DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v228, v229, v230);
          GreExtGetObjectW(*(Gre::Base **)(DpiMetricsForCurrentThread + 64), 92, (_WORD *)(v223 + 16));
          goto LABEL_145;
        case '.':
          goto LABEL_352;
        case '/':
          Buf1 = 0LL;
          if ( *(_QWORD *)&v445[1] )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v445[1] + 8LL) < **(_DWORD **)&v445[1]
              || *(_DWORD *)(*(_QWORD *)&v445[1] + 12LL) < *(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) )
            {
              return 0LL;
            }
            v187 = MonitorFromRect(*(__int32 **)&v445[1], 1LL, 0);
          }
          else
          {
            v187 = *(_QWORD *)(GetDispInfo(v17, 2LL) + 96);
          }
          v453 = v187;
          v457 = *GetMonitorRect(&v457, v187);
          v188 = &v457;
          if ( *(_QWORD *)&v445[1] )
            v188 = *(__m128i **)&v445[1];
          if ( (unsigned int)IntersectRect(&Buf1, v188->m128i_i32, v457.m128i_i32) && !memcmp(&Buf1, v188, 0x10uLL) )
          {
            v457 = *(__m128i *)GetMonitorWorkRect((__int64)&v457, v453);
            if ( memcmp(&v457, &Buf1, 0x10uLL) )
            {
              Current = CTopologyManager::GetCurrent(v190, v189);
              v457.m128i_i64[0] = (__int64)Current;
              updated = 1;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v192) & 0xF) != 2 )
              {
                if ( *((_QWORD *)PtiCurrent(v193) + 61) )
                {
                  v195 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v194) + 61) + 8LL);
                  if ( (*(_DWORD *)(v195 + 64) & 1) != 0 )
                  {
                    v196 = W32GetCurrentThreadDpiAwarenessContext(v195);
                    LogicalToPhysicalDPIRect(&Buf1, &Buf1, v196, &v453);
                  }
                }
              }
              v197 = *(_QWORD *)(v453 + 40);
              v198 = *(struct tagRECT *)(v197 + 44);
              v456 = Buf1;
              v460 = v198;
              v462 = *(struct tagRECT *)(v197 + 28);
              InputTraceLogging::DesktopRecalc::WorkAreaChanged(*(void **)v453, &v462, &v460, &v456, a2 != 0);
              v199 = v453;
              *(struct tagRECT *)(*(_QWORD *)(v453 + 40) + 44LL) = Buf1;
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
                || (v200 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v200 = 0;
              }
              v448 = v200;
              v447 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v200 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v201 = *(_DWORD **)(v453 + 40);
                v202 = v201[14];
                v203 = v201[13];
                v204 = v201[12];
                v205 = v201[11];
                v206 = W32GetUserSessionState(v201, v199);
                LOBYTE(v207) = v447;
                LOBYTE(v208) = v448;
                WPP_RECORDER_AND_TRACE_SF_dddddddd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v208,
                  v207,
                  *(_QWORD *)(v206 + 69152),
                  4,
                  7,
                  10,
                  (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids,
                  v205,
                  v204,
                  v203,
                  v202,
                  Buf1.left,
                  Buf1.top,
                  Buf1.right,
                  Buf1.bottom);
                v12 = v461;
              }
              CTopologyManager::UpdateCurrent();
              v211 = GetDispInfo(v210, v209);
              if ( v453 == *(_QWORD *)(v211 + 96) )
                SortMonitorsInSpatialOrder(v453, (__int64)v212);
              if ( a2 )
              {
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
                  || (v213 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
                {
                  v213 = 0;
                }
                v214 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v213 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v215 = W32GetUserSessionState(WPP_GLOBAL_Control, v212);
                  LOBYTE(v216) = v214;
                  LOBYTE(v217) = v213;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v217,
                    v216,
                    *(_QWORD *)(v215 + 69152),
                    4,
                    7,
                    11,
                    (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids);
                }
                DesktopRecalc::OnWorkAreaChanged(Current, v212);
              }
              else
              {
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
                  || (v218 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
                {
                  v218 = 0;
                }
                v219 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v218 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v220 = W32GetUserSessionState(WPP_GLOBAL_Control, v212);
                  LOBYTE(v221) = v219;
                  LOBYTE(v222) = v218;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v222,
                    v221,
                    *(_QWORD *)(v220 + 69152),
                    3,
                    7,
                    12,
                    (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids);
                }
              }
              DwmNotifyWorkAreaChanged();
              CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr((CMonitorTopology **)&v457);
            }
            goto LABEL_144;
          }
          goto LABEL_957;
      }
      if ( v6 != 48 )
      {
        if ( v6 == 54 )
        {
          v179 = *(_QWORD *)&v445[1];
          if ( (!a2 || a2 == 28) && *(_QWORD *)&v445[1] && **(_DWORD **)&v445[1] == 28 )
          {
            v180 = *(_QWORD *)&v462.left;
            *(_OWORD *)(*(_QWORD *)&v445[1] + 4LL) = *(_OWORD *)(*(_QWORD *)&v462.left + 4LL);
            *(_QWORD *)(v179 + 20) = *(_QWORD *)(v180 + 20);
            *(_DWORD *)(v179 + 4) &= 0x4CFFFFFFu;
            if ( *(_BYTE *)(W32GetUserSessionState(v17, 2LL) + 20919) )
              *(_DWORD *)(v179 + 4) |= 0x80000000;
            v183 = (*(unsigned __int16 *)(W32GetUserSessionState(v182, v181) + 20636) & 3u) << 24;
            *(_DWORD *)(v179 + 4) |= v183;
            *(_DWORD *)(v179 + 4) |= (*(_WORD *)(W32GetUserSessionState(v183, v184) + 20638) & 3) << 28;
            goto LABEL_136;
          }
          return 0LL;
        }
        if ( v6 == 55 )
        {
          v156 = *(struct tagMOUSEKEYS **)&v445[1];
          if ( !a2 || a2 == 28 )
          {
            if ( *(_QWORD *)&v445[1] )
            {
              if ( **(_DWORD **)&v445[1] == 28 )
              {
                *(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) &= 0x4CFFFFFFu;
                v157 = *((unsigned int *)v156 + 1);
                if ( (unsigned __int8)v157 == (_DWORD)v157 )
                {
                  v158 = *(_DWORD *)(W32GetUserSessionState(v157, 2LL) + 20612);
                  v159 = *((_DWORD *)v156 + 1) | 2;
                  if ( (v158 & 2) == 0 )
                    v159 = *((_DWORD *)v156 + 1) & 0xFFFFFFFD;
                  *((_DWORD *)v156 + 1) = v159;
                  if ( (unsigned int)(*((_DWORD *)v156 + 2) - 10) <= 0x15E
                    && (unsigned int)(*((_DWORD *)v156 + 3) - 1000) <= 0xFA0 )
                  {
                    if ( v11 )
                    {
                      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
                      v160 = (struct _UNICODE_STRING *)CreateProfileUserName(&Buf1);
                      updated = SetMouseKeys(v160, v156);
                      v13 = updated;
                      v161 = *(_DWORD **)&v462.left;
                      if ( !updated )
                        SetMouseKeys(v160, *(struct tagMOUSEKEYS **)&v462.left);
                      Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&Buf1);
                    }
                    else
                    {
                      v161 = *(_DWORD **)&v462.left;
                    }
                    if ( v13 )
                    {
                      memmove(v161, v156, *(unsigned int *)v156);
                      *v161 = 28;
                      CalculateMouseTable();
                      v165 = *(unsigned int *)(W32GetUserSessionState(v163, v162) + 20612);
                      if ( (v165 & 1) != 0 )
                      {
                        v166 = W32GetUserSessionState(v165, v164);
                        v169 = (unsigned __int64)*(unsigned __int8 *)(W32GetUserSessionState(v168, v167) + 13976) >> 2;
                        LODWORD(v166) = *(unsigned __int8 *)(v169 + v166 + 14328);
                        v171 = W32GetUserSessionState(v169, v170);
                        v172 = 1 << (2 * (*(_BYTE *)(v171 + 13976) & 3) + 1);
                        v175 = (*(_DWORD *)(W32GetUserSessionState(2 * (*(_BYTE *)(v171 + 13976) & 3u) + 1, v173) + 20612) >> 7) & 1;
                        *(_BYTE *)(W32GetUserSessionState(v175, v174) + 20919) = (_DWORD)v175 != ((v172 & (unsigned int)v166) != 0);
                        MKShowMouseCursor();
                      }
                      else
                      {
                        MKHideMouseCursor();
                      }
                      SetAccessEnabledFlag();
                      v177 = *((_DWORD *)PtiCurrent(v176) + 178);
                      if ( ((*(_DWORD *)(**((_QWORD **)PtiCurrent(v178) + 62) + 16LL) | v177) & 0x800) != 0 )
                        xxxCallHook(11LL, 3LL, 0LL, 10);
                      PostShellHookMessagesEx((LastWokenThread *)0xB, 3LL);
                    }
                    goto LABEL_136;
                  }
                }
              }
            }
          }
          return 0LL;
        }
        if ( v6 != 56 )
          goto LABEL_815;
        v154 = *(int **)&v445[1];
        v155 = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 66792) >> 15;
        goto LABEL_392;
      }
      v185 = GetDispInfo(v17, 2LL);
      MonitorMenuRect = (_OWORD *)GetMonitorWorkRect((__int64)&Buf1, *(_QWORD *)(v185 + 96));
LABEL_425:
      **(_OWORD **)&v445[1] = *MonitorMenuRect;
      goto LABEL_136;
    }
    if ( v6 > 0x5A )
    {
      switch ( v6 )
      {
        case '[':
          return GetKbdLangSwitch(0LL);
        case ']':
          if ( v11 )
          {
            RtlStringCchPrintfW(v465, 0x28uLL, L"%d", a2);
            updated = FastUpdateWinIni(0LL, 12LL, 613LL, v465);
            v13 = updated;
          }
          if ( v13 )
            SetMouseTrails(a2);
          goto LABEL_136;
        case '^':
          if ( *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 16288) )
            v57 = *(_DWORD *)(W32GetUserSessionState(v273, v272) + 16288) + 1;
          else
            v57 = *(_DWORD *)(W32GetUserSessionState(v273, v272) + 16288);
          goto LABEL_174;
      }
      if ( v6 != 95 )
      {
        if ( v6 == 96 )
        {
          if ( v11 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
            v13 = updated;
          }
          if ( v13 )
          {
            v271 = *(_QWORD *)(W32GetUserSessionState(v17, v22) + 19904);
            if ( a2 )
              *(_DWORD *)(v271 + 7004) |= 2u;
            else
              *(_DWORD *)(v271 + 7004) &= ~2u;
          }
          goto LABEL_136;
        }
        if ( v6 != 98 )
        {
          if ( v11 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
            v13 = updated;
          }
          if ( v13 )
            *(_DWORD *)(W32GetUserSessionState(v17, v22) + 16268) = a2;
          goto LABEL_136;
        }
        LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 16268);
        goto LABEL_138;
      }
      v264 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, 2LL) + 19904) + 7004LL);
    }
    else
    {
      if ( v6 == 90 )
      {
        v266 = **(_QWORD **)&v445[1];
        v267 = PtiCurrent(v17);
        v270 = HKLtoPKL(v267, v266);
        if ( v270 )
        {
          if ( v13 )
          {
            *(_QWORD *)&Buf1.left = W32GetUserSessionState(v269, v268) + 14264;
            *(_QWORD *)&Buf1.right = v270;
            HMAssignmentLock(&Buf1, 0LL);
          }
          goto LABEL_136;
        }
        return 0LL;
      }
      if ( v6 == 73 )
        goto LABEL_352;
      if ( v6 != 74 )
      {
        switch ( v6 )
        {
          case 'K':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
            {
              v11 = 0;
              v13 = 0;
            }
            v263 = a2 != 0 ? 2 : 0;
            if ( v11 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 200LL, v263);
              v13 = updated;
            }
            if ( v13 )
              GreSetFontEnumeration(v263 | 4);
            goto LABEL_136;
          case 'L':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
            {
              v11 = 0;
              v13 = 0;
            }
            if ( v11 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
              v13 = updated;
            }
            if ( v13 )
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v262, v261) + 19904) + 2168LL) = a2;
            goto LABEL_136;
          case 'M':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
            {
              v11 = 0;
              v13 = 0;
            }
            if ( v11 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
              v13 = updated;
            }
            if ( v13 )
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v260, v259) + 19904) + 2172LL) = a2;
            goto LABEL_136;
          case 'W':
            tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
            v258 = CreateProfileUserName(&Buf1);
            xxxUpdateSystemCursorsFromRegistry(v258, 2u);
            break;
          case 'X':
            tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
            v257 = CreateProfileUserName(&Buf1);
            xxxUpdateSystemIconsFromRegistry(v257);
            break;
          case 'Y':
            if ( *(_QWORD *)(W32GetUserSessionState(v17, 2LL) + 14264) )
            {
              **(_QWORD **)&v445[1] = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v255, v254) + 14264) + 40LL);
              goto LABEL_136;
            }
            v256 = 21;
            goto LABEL_958;
          default:
            goto LABEL_815;
        }
LABEL_543:
        Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&Buf1);
        goto LABEL_136;
      }
      v264 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v17, 2LL, v18) + 96) + 20348LL);
    }
    v265 = v264 >> 1;
    goto LABEL_565;
  }
  if ( v6 == 43 )
  {
    v141 = *(_DWORD **)&v445[1];
    **(_DWORD **)&v445[1] = 20;
    v142 = *(_QWORD *)(W32GetUserSessionState(v17, 2LL) + 19904);
    v141[1] = *(_DWORD *)(v142 + 2124) - 6;
    v144 = *(_QWORD *)(W32GetUserSessionState(v142, v143) + 19904);
    v147 = (unsigned int)(*(_DWORD *)(v144 + 2084)
                        - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v146, v145) + 19904) + 2124LL));
    v141[2] = v147;
    v149 = *(_QWORD *)(W32GetUserSessionState(v147, v148) + 19904);
    v152 = (unsigned int)(*(_DWORD *)(v149 + 2088)
                        - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v151, v150) + 19904) + 2128LL));
    v141[3] = v152;
    v141[4] = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v152, v153) + 19904) + 2120LL);
    goto LABEL_136;
  }
  if ( v6 > 0x18 )
  {
    if ( v6 <= 0x21 )
    {
      switch ( v6 )
      {
        case 0x21u:
          if ( v11 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
            v13 = updated;
          }
          if ( v13 )
            _SwapMouseButton(a2 != 0);
          goto LABEL_136;
        case 0x19u:
          v56 = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 66792) >> 21;
          goto LABEL_173;
        case 0x1Au:
          if ( v11 )
          {
            updated = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
            v13 = updated;
          }
          if ( v13 )
          {
            v134 = W32GetUserSessionState(v17, v22);
            if ( a2 )
              *(_DWORD *)(v134 + 66792) |= 0x200000u;
            else
              *(_DWORD *)(v134 + 66792) &= ~0x200000u;
            xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
          }
          goto LABEL_136;
      }
      if ( v6 != 27 )
      {
        if ( v6 != 28 )
        {
          switch ( v6 )
          {
            case 0x1Du:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
                v13 = updated;
              }
              if ( v13 )
                *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v22) + 19904) + 2040LL) = a2;
              break;
            case 0x1Eu:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
                v13 = updated;
              }
              if ( v13 )
                *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v22) + 19904) + 2044LL) = a2;
              break;
            case 0x1Fu:
              v133 = GetDpiMetricsForCurrentThread(v17, 2LL, v18);
              GreExtGetObjectW(*(Gre::Base **)(v133 + 64), 92, *(_WORD **)&v445[1]);
              break;
            default:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
                v13 = updated;
              }
              if ( v13 )
                SetDoubleClickTime(a2);
              break;
          }
          goto LABEL_136;
        }
        goto LABEL_940;
      }
      v113 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, 2LL) + 19904) + 2056LL);
LABEL_292:
      **(_DWORD **)&v445[1] = v113;
      goto LABEL_136;
    }
    if ( v6 != 34 )
    {
      switch ( v6 )
      {
        case '#':
          **(_DWORD **)&v445[1] = 1;
          goto LABEL_145;
        case '$':
          goto LABEL_145;
        case '%':
          if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
          {
            v11 = 0;
            v13 = 0;
          }
          if ( v11 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 107LL, a2 == 1);
            v13 = updated;
          }
          if ( v13 )
          {
            v137 = W32GetUserSessionState(v136, v135);
            if ( a2 == 1 )
              *(_DWORD *)(v137 + 66792) |= 0x100000u;
            else
              *(_DWORD *)(v137 + 66792) &= ~0x100000u;
          }
          goto LABEL_145;
        case '&':
          v56 = *(_DWORD *)(W32GetUserSessionState(v17, 2LL) + 66792) >> 20;
          goto LABEL_173;
        case ')':
          if ( *(_QWORD *)&v445[1] )
          {
            GetWindowNCMetrics(*(__int64 *)&v445[1]);
            goto LABEL_136;
          }
          return 0LL;
      }
LABEL_352:
      v19 = (unsigned int)xxxSetSPIMetrics(0LL, v6, *(void **)&v445[1], v11, &v446) == 0;
      updated = v446;
      if ( v19 )
      {
        v13 = 0;
      }
      else if ( v11 )
      {
        v13 = v446;
      }
      RtlLoadStringOrError(135LL, v466, 40LL);
      goto LABEL_136;
    }
    if ( *(_QWORD *)&v445[1] )
      v138 = a2 == 92;
    else
      v138 = a2 == 0;
    if ( !v138 )
      return 0LL;
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
    v139 = (struct _UNICODE_STRING *)CreateProfileUserName(&Buf1);
    v140 = xxxSetSPIMetrics(v139, 0x22u, *(void **)&v445[1], v11, &v446);
    Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&Buf1);
    if ( v140 )
    {
      if ( v452 )
        v13 = v446;
      v85 = v446;
      goto LABEL_377;
    }
    v13 = 0;
    goto LABEL_373;
  }
  if ( v6 == 24 )
  {
    if ( (*(_QWORD *)&v445[1] & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      if ( a2 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) != 0 )
        {
          v120 = PsGetCurrentProcessWin32Process(v115);
          if ( v120 )
          {
            v122 = -*(_QWORD *)v120;
            v121 = -(__int64)(*(_QWORD *)v120 != 0LL);
            v120 &= v121;
          }
          v123 = *(unsigned __int16 *)(v120 + 272);
          v124 = W32GetUserSessionState(v122, v121);
          v119 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v124 + 19904) + 6998LL), v123);
          v126 = PsGetCurrentProcessWin32Process(v125);
          if ( v126 )
            v126 &= -(__int64)(*(_QWORD *)v126 != 0LL);
          a2 = EngMulDiv(v119, 96, *(unsigned __int16 *)(v126 + 272));
          v11 = v452;
        }
        else
        {
          v116 = W32GetUserSessionState(v115, v114);
          v119 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v116 + 19904) + 6998LL), 96);
        }
        v128 = *(_QWORD *)(W32GetUserSessionState(v118, v117) + 19904);
        if ( v119 <= *(_DWORD *)(v128 + 2308) )
        {
          v128 = *(_QWORD *)(W32GetUserSessionState(v128, v127) + 19904);
          v119 = *(_DWORD *)(v128 + 2308);
        }
        v130 = *(_QWORD *)(W32GetUserSessionState(v128, v127) + 19904);
        if ( a2 <= *(_DWORD *)(v130 + 2428) )
          a2 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v130, v129) + 19904) + 2428LL);
        if ( v11 )
        {
          updated = SetWindowMetricInt(0LL, 0x41u, v119);
          v13 = updated;
        }
        if ( v13 )
        {
          SetDpiDepSysMet(19LL, v119);
          *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v132, v131) + 19904) + 2480LL) = a2;
        }
      }
      goto LABEL_136;
    }
    v58 = GetDpiForSystem();
    v59 = 19;
LABEL_177:
    UserHandedness = GetDpiDependentMetric(v59, v58);
    goto LABEL_178;
  }
  v17 = 13LL;
  if ( v6 > 0xD )
  {
    if ( v6 == 14 )
    {
      v111 = W32GetUserSessionState(13LL, 2LL);
      v112 = -*(_DWORD *)(v111 + 62808);
      if ( *(int *)(v111 + 62808) > 0 )
        v112 = *(_DWORD *)(v111 + 62808);
      v113 = v112 / 1000;
      goto LABEL_292;
    }
    if ( v6 != 15 )
    {
      if ( v6 == 16 )
      {
        LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 62808) > 0;
        goto LABEL_138;
      }
      if ( v6 != 17 )
      {
        if ( v6 != 20 )
        {
          if ( v6 != 21 )
          {
            if ( v6 == 22 )
            {
              LODWORD(v33) = (*(int *)(W32GetUserSessionState(13LL, 2LL) + 12868) >> 5) & 3;
              goto LABEL_138;
            }
            if ( v6 == 23 )
            {
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
                v13 = updated;
              }
              if ( !v13 )
                goto LABEL_136;
              v27 = (32 * a2) | *(_DWORD *)(W32GetUserSessionState(v17, v22) + 12868) & 0xFFFFFF9F;
LABEL_135:
              *(_DWORD *)(W32GetUserSessionState(v26, v25) + 12868) = v27;
              v30 = W32GetUserSessionState(v29, v28);
              SetKeyboardRate(*(unsigned int *)(v30 + 12868), v31);
LABEL_136:
              v32 = v12;
LABEL_951:
              v85 = updated;
              goto LABEL_952;
            }
            goto LABEL_815;
          }
          if ( a2 != -1 || !*(_QWORD *)&v445[1] )
          {
            tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
            v80 = CreateProfileUserName(&Buf1);
            if ( (unsigned int)CheckDesktopPolicy(v80, 2LL) )
            {
              v11 = 0;
              v13 = 0;
            }
            if ( v11 && *(_QWORD *)&v445[1] )
            {
              FastGetProfileStringFromIDW(v80, 4LL, 2LL, &pszFormat, v467, 260, 0);
              updated = FastUpdateWinIni(v80, 4LL, 2LL, *(_QWORD *)&v445[1]);
              v13 = updated;
            }
            if ( v13 )
            {
              if ( !(unsigned int)SetDesktopPattern(v80, *(const wchar_t **)&v445[1]) )
              {
                if ( v11 && *(_QWORD *)&v445[1] )
                  FastUpdateWinIni(v80, 4LL, 2LL, v467);
                Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&Buf1);
                return 0LL;
              }
              xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
              if ( *((_QWORD *)PtiCurrent(v81) + 61) )
                v83 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v82) + 61) + 8LL) + 24LL);
              else
                v83 = 0LL;
              xxxInternalInvalidate(v83, (HRGN)1, 0x10485u);
            }
            goto LABEL_150;
          }
          goto LABEL_957;
        }
        tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
        v84 = (struct _UNICODE_STRING *)CreateProfileUserName(&Buf1);
        if ( (unsigned int)CheckDesktopPolicy(v84, 67LL) )
        {
          v11 = 0;
          v13 = 0;
        }
        if ( v11 )
        {
          if ( a2 == -1 )
          {
            v13 = 1;
          }
          else
          {
            FastGetProfileStringFromIDW(v84, 4LL, 67LL, &pszFormat, v467, 260, 8);
            updated = FastUpdateWinIni(v84, 4LL, 67LL, *(_QWORD *)&v445[1]);
            v13 = updated;
          }
        }
        if ( v13 && !(unsigned int)xxxSetDeskWallpaper(v84, *(__int64 *)&v445[1]) )
        {
          if ( !v11 )
          {
            v85 = 0;
            v13 = 0;
            goto LABEL_237;
          }
          if ( a2 != -1 )
          {
            FastUpdateWinIni(v84, 4LL, 67LL, v467);
            updated = 0;
            v13 = 0;
          }
        }
        v85 = updated;
LABEL_237:
        Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&Buf1);
LABEL_238:
        v32 = v12;
LABEL_952:
        v244 = v445[0];
        goto LABEL_953;
      }
      if ( a2 - 2 > 0xFFFFFFFC )
      {
        if ( !*(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 62696) || v449 )
        {
          v88 = W32GetUserSessionState(v87, v86);
          v91 = W32GetUserSessionState(v90, v89);
          *(_DWORD *)(v91 + 66092) = a2 == -1;
          if ( *(_DWORD *)(W32GetUserGdiSessionState(v92) + 36) )
            return 0LL;
          if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
          {
            v11 = 0;
            v13 = 0;
          }
          if ( v11 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
            v13 = updated;
          }
          if ( v13 )
          {
            if ( !*(_DWORD *)(W32GetUserSessionState(v94, v93) + 19112) )
            {
              v97 = W32GetUserSessionState(v96, v95);
              CInputGlobals::UpdateLastInputTime(
                *(_QWORD *)(v97 + 3056),
                (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                7LL);
            }
            v98 = *(_DWORD *)(v88 + 62808);
            if ( v98 >= 0 )
            {
              if ( a2 )
                goto LABEL_145;
            }
            else if ( !a2 )
            {
              goto LABEL_145;
            }
            *(_DWORD *)(v88 + 62808) = -v98;
          }
LABEL_145:
          v32 = v12;
          goto LABEL_951;
        }
LABEL_806:
        v256 = 329;
LABEL_958:
        UserSetLastError(v256);
      }
      return 0LL;
    }
    *(_QWORD *)&v456.left = W32GetUserSessionState(13LL, 2LL) + 62808;
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v99) + 36) )
      return 0LL;
    if ( *(_DWORD *)(W32GetUserSessionState(v101, v100) + 62696) && !v449 )
      goto LABEL_806;
    v102 = 1000 * a2;
    v103 = 1000 * GetEasTimeout();
    v450 = v103;
    if ( v103 && ((v454 = 1, **(int **)&v456.left > 0) && v103 < v102 || (v452 = v11, v102 <= 0)) )
    {
      UserSetLastError(1260);
      v104 = 0;
      v13 = 0;
    }
    else
    {
      v104 = v452;
    }
    if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL) )
    {
      if ( v454 )
      {
        v449 = 0;
        if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
          goto LABEL_280;
        v107 = 1000 * v449;
        v449 = v107;
        if ( !v107 || v107 >= v450 || **(int **)&v456.left <= 0 || v107 >= v102 )
          goto LABEL_280;
        UserSetLastError(1260);
      }
      v13 = 0;
      v104 = 0;
    }
LABEL_280:
    if ( v104 )
    {
      updated = UpdateWinIniInt(0LL, 4LL, 99LL, v102 / 0x3E8u);
      v13 = updated;
    }
    if ( v13 )
    {
      if ( !*(_DWORD *)(W32GetUserSessionState(v106, v105) + 19112) )
      {
        v110 = W32GetUserSessionState(v109, v108);
        CInputGlobals::UpdateLastInputTime(
          *(_QWORD *)(v110 + 3056),
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          7LL);
      }
      if ( **(int **)&v456.left < 0 && !v454 )
        v102 = -1000 * a2;
      **(_DWORD **)&v456.left = v102;
    }
    goto LABEL_145;
  }
  switch ( v6 )
  {
    case 0xDu:
      if ( (*(_QWORD *)&v445[1] & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        if ( a2 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(13LL) & 0xF) != 0 )
          {
            v67 = PsGetCurrentProcessWin32Process(v62);
            if ( v67 )
            {
              v69 = -*(_QWORD *)v67;
              v68 = -(__int64)(*(_QWORD *)v67 != 0LL);
              v67 &= v68;
            }
            v70 = *(unsigned __int16 *)(v67 + 272);
            v71 = W32GetUserSessionState(v69, v68);
            v66 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v71 + 19904) + 6998LL), v70);
            v73 = PsGetCurrentProcessWin32Process(v72);
            if ( v73 )
              v73 &= -(__int64)(*(_QWORD *)v73 != 0LL);
            a2 = EngMulDiv(v66, 96, *(unsigned __int16 *)(v73 + 272));
            v11 = v452;
          }
          else
          {
            v63 = W32GetUserSessionState(v62, v61);
            v66 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v63 + 19904) + 6998LL), 96);
          }
          v75 = *(_QWORD *)(W32GetUserSessionState(v65, v64) + 19904);
          if ( v66 <= *(_DWORD *)(v75 + 2304) )
          {
            v75 = *(_QWORD *)(W32GetUserSessionState(v75, v74) + 19904);
            v66 = *(_DWORD *)(v75 + 2304);
          }
          v77 = *(_QWORD *)(W32GetUserSessionState(v75, v74) + 19904);
          if ( a2 <= *(_DWORD *)(v77 + 2424) )
            a2 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v77, v76) + 19904) + 2424LL);
          if ( v11 )
          {
            updated = SetWindowMetricInt(0LL, 0x40u, v66);
            v13 = updated;
          }
          if ( v13 )
          {
            SetDpiDepSysMet(18LL, v66);
            *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v79, v78) + 19904) + 2476LL) = a2;
          }
        }
        goto LABEL_136;
      }
      v58 = GetDpiForSystem();
      v59 = 18;
      goto LABEL_177;
    case 1u:
      v56 = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 66792) >> 19;
LABEL_173:
      v57 = v56 & 1;
LABEL_174:
      **(_DWORD **)&v445[1] = v57;
      goto LABEL_145;
    case 2u:
      if ( v11 )
      {
        RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v465, 10LL);
        updated = FastUpdateWinIni(0LL, 11LL, 9LL, v465);
        v13 = updated;
      }
      if ( v13 )
      {
        v55 = W32GetUserSessionState(v17, v22);
        if ( a2 )
          *(_DWORD *)(v55 + 66792) |= 0x80000u;
        else
          *(_DWORD *)(v55 + 66792) &= ~0x80000u;
      }
      goto LABEL_136;
    case 3u:
      v53 = *(unsigned int *)(W32GetUserSessionState(13LL, 2LL) + 16280);
      **(_DWORD **)&v445[1] = v53;
      *(_DWORD *)(*(_QWORD *)&v445[1] + 4LL) = *(_DWORD *)(W32GetUserSessionState(v53, v54) + 16284);
      *(_DWORD *)(*(_QWORD *)&v445[1] + 8LL) = (unsigned __int8)MouseAccelerationEnabled();
      goto LABEL_136;
    case 4u:
      if ( !v11 )
        goto LABEL_163;
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
      v41 = CreateProfileUserName(&Buf1);
      v454 = UpdateWinIniInt(v41, 12LL, 10LL, (unsigned int)**(_DWORD **)&v445[1]);
      v450 = UpdateWinIniInt(v41, 12LL, 11LL, *(unsigned int *)(*(_QWORD *)&v445[1] + 4LL));
      v42 = UpdateWinIniInt(v41, 12LL, 12LL, *(unsigned int *)(*(_QWORD *)&v445[1] + 8LL));
      v449 = v42;
      v44 = v454;
      if ( v454 )
      {
        if ( v450 && v42 )
        {
          v10 = 1;
          updated = 1;
LABEL_162:
          v13 = v10;
          Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&Buf1);
LABEL_163:
          if ( v13 )
          {
            v48 = **(_DWORD **)&v445[1];
            *(_DWORD *)(W32GetUserSessionState(v17, v22) + 16280) = v48;
            v49 = *(_DWORD *)(*(_QWORD *)&v445[1] + 4LL);
            *(_DWORD *)(W32GetUserSessionState(v51, v50) + 16284) = v49;
            LOBYTE(v52) = *(_DWORD *)(*(_QWORD *)&v445[1] + 8LL) != 0;
            EnableMouseAcceleration(v52);
          }
          goto LABEL_136;
        }
        v45 = W32GetUserSessionState(v454, v43);
        UpdateWinIniInt(v41, 12LL, 10LL, *(unsigned int *)(v45 + 16280));
      }
      if ( v450 )
      {
        v46 = W32GetUserSessionState(v44, v43);
        UpdateWinIniInt(v41, 12LL, 11LL, *(unsigned int *)(v46 + 16284));
      }
      if ( v449 )
      {
        v47 = MouseAccelerationEnabled();
        UpdateWinIniInt(v41, 12LL, 12LL, v47);
      }
      goto LABEL_162;
    case 5u:
      LODWORD(v33) = *(_DWORD *)(GetDpiServerInfoForCurrentThread(13LL, 2LL) + 4);
      goto LABEL_138;
    case 6u:
      v34 = 1;
      if ( (int)a2 > 1 )
        v34 = a2;
      if ( v34 >= 0x32 )
        v34 = 50;
      if ( v34 == (__int64)*(int *)(GetDpiServerInfoForCurrentThread(13LL, 2LL) + 4) )
      {
LABEL_144:
        v13 = 1;
        goto LABEL_145;
      }
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
      v35 = (struct _UNICODE_STRING *)CreateProfileUserName(&Buf1);
      v36 = v35;
      if ( v11 )
      {
        updated = SetWindowMetricInt(v35, 0x88u, v34);
        v13 = updated;
      }
      if ( v13 )
      {
        xxxSetAndDrawNCMetrics(v36, v34, 0LL);
        v37 = *(_DWORD *)(GetDpiServerInfoForCurrentProcess() + 4);
        v40 = W32GetUserSessionState(v39, v38);
        bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v40 + 56968) + 40LL), v37 + 3);
      }
LABEL_150:
      Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&Buf1);
      goto LABEL_145;
    case 0xAu:
      LODWORD(v33) = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 12868) & 0x1F;
      goto LABEL_138;
    case 0xBu:
      v24 = 31;
      if ( a2 <= 0x1F )
        v24 = a2;
      if ( v11 )
      {
        updated = UpdateWinIniInt(0LL, 13LL, 13LL, v24);
        v13 = updated;
      }
      if ( !v13 )
        goto LABEL_136;
      v27 = v24 | *(_DWORD *)(W32GetUserSessionState(v17, v22) + 12868) & 0xFFFFFFE0;
      goto LABEL_135;
  }
LABEL_815:
  if ( v6 < 0xB6 )
  {
    v256 = 1439;
    goto LABEL_958;
  }
  LODWORD(v453) = v6 & 0x3000;
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 0x3000) != 0x1000 )
    {
      v364 = *(unsigned int *)UPDWORDPointer(v6);
      **(_DWORD **)&v445[1] = v364;
      if ( v6 != 8204 || (_DWORD)v364 )
        goto LABEL_136;
      v113 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v364, v363, v365) + 96) + 13448LL);
      goto LABEL_292;
    }
    v446 = 0;
    v338 = 0;
    if ( v6 >= 0x103E )
      goto LABEL_826;
    if ( *(int *)(W32GetUserSessionState(v17, 2LL) + 66796) >= 0 )
    {
      switch ( v6 )
      {
        case 0x1000u:
LABEL_826:
          v33 = 0LL;
          goto LABEL_827;
        case 0x100Au:
          v446 = 1;
          break;
        case 0x100Cu:
        case 0x101Cu:
        case 0x101Eu:
          goto LABEL_826;
      }
      v338 = 1;
      v33 = (unsigned int)v446;
LABEL_827:
      if ( !v338 )
      {
        if ( v6 == 4158 && IsRemoteConnection(v33, v22) && !(unsigned int)IsWDAGContainer() )
        {
          v341 = *(_DWORD *)(W32GetUserSessionState(v340, v339) + 66796) & 0x2000;
          v344 = v341 | *(_DWORD *)(W32GetUserSessionState(v343, v342) + 66796) & 2;
          v347 = v344 | *(_DWORD *)(W32GetUserSessionState(v346, v345) + 66796) & 0x200;
          v350 = v347 | *(_DWORD *)(W32GetUserSessionState(v349, v348) + 66796) & 0x800;
          v353 = v350 | *(_DWORD *)(W32GetUserSessionState(v352, v351) + 66796) & 0x1000;
          v356 = v353 | *(_DWORD *)(W32GetUserSessionState(v355, v354) + 66796) & 4;
          v113 = (v356 | *(_DWORD *)(W32GetUserSessionState(v358, v357) + 66796) & 8) != 0;
        }
        else
        {
          v362 = *(_DWORD *)(v457.m128i_i64[0] + 4 * ((unsigned __int64)(v6 - 4096) >> 6) + 66796);
          v113 = _bittest(&v362, (unsigned __int8)(((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6)));
        }
        goto LABEL_292;
      }
LABEL_138:
      **(_DWORD **)&v445[1] = v33;
      goto LABEL_136;
    }
    v359 = v6 - 4104;
    if ( v6 == 4104 )
      goto LABEL_962;
    if ( v6 == 4106 )
    {
      v361 = W32GetUserSessionState(v6 - 4106, v22);
      v33 = (*(_DWORD *)(v361 + 66792) >> 17) & 1;
      v338 = (*(_DWORD *)(v361 + 66792) >> 17) & 1;
      goto LABEL_827;
    }
    v359 = v6 - 4114;
    if ( v6 == 4114
      || (v359 = v6 - 4116, v6 == 4116)
      || (v359 = v6 - 4120, v6 == 4120)
      || (v359 = v6 - 4122, v6 == 4122) )
    {
LABEL_962:
      if ( *(_DWORD *)(W32GetUserSessionState(v359, v22) + 43264) )
        v338 = 1;
    }
    else
    {
      if ( v6 != 4132
        || !*(_DWORD *)(W32GetUserSessionState(v359, v22) + 43264)
        && !*(_DWORD *)(W32GetUserSessionState(v360, v22) + 63400) )
      {
        goto LABEL_826;
      }
      v338 = 1;
    }
    v33 = 0LL;
    goto LABEL_827;
  }
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&Buf1);
  v366 = CreateProfileUserName(&Buf1);
  v458 = v366;
  if ( (_DWORD)v453 != 4096 )
  {
    if ( *(_DWORD *)(UPDWORDPointer(v6) + 4) == 4 )
    {
      v407 = UPDWORDPointer(v6);
      if ( (unsigned int)CheckDesktopPolicy(v458, *(_QWORD *)(v407 + 8)) )
      {
        v11 = 0;
        v13 = 0;
      }
    }
    v32 = v12;
    v244 = v445[0];
    if ( v11 )
    {
      if ( v445[0] == 8235 || v445[0] == 8239 )
      {
        v32 = 0;
        if ( !DesktopRecalcSettings::ValidateDesktopRecalcSetting((DesktopRecalcSettings *)v445[0], v445[1], v406) )
        {
          v13 = 0;
          v11 = 0;
        }
      }
      if ( v11 )
      {
        v408 = *(_QWORD *)(UPDWORDPointer(v445[0]) + 8);
        v409 = UPDWORDPointer(v445[0]);
        updated = FastWriteProfileValue(v458, *(unsigned int *)(v409 + 4), v408, 4LL, &v445[1], 4);
        v13 = updated;
      }
    }
    v410 = *(_DWORD *)UPDWORDPointer(v445[0]);
    if ( v13 )
    {
      v411 = v445[1];
      *(_DWORD *)UPDWORDPointer(v445[0]) = v411;
      if ( v445[0] > 0x2011u )
      {
        switch ( v445[0] )
        {
          case 0x2013:
            v437 = (unsigned int *)UPDWORDPointer(8211LL);
            GreSetLCDOrientation(*v437);
            break;
          case 0x201D:
            TraceLoggingMouseWheelRoutingModeChange(v445[1]);
            break;
          case 0x201F:
            TraceLoggingSPISetPenVisualizationEvent(v410, v445[1]);
            break;
          case 0x2029:
            v436 = W32GetUserSessionState(v413, v412);
            CCursorSizes::zzzRefreshSizes(*(CCursorSizes **)(v436 + 36376));
            break;
        }
      }
      else
      {
        switch ( v445[0] )
        {
          case 0x2011:
            if ( *(_DWORD *)UPDWORDPointer(v445[0]) )
            {
              v433 = *(_DWORD *)UPDWORDPointer(8209LL);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v435, v434) + 19904) + 2232LL) = v433;
            }
            break;
          case 0x2001:
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
              || (v425 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v425 = 0;
            }
            v447 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v425 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v426 = *(_DWORD *)UPDWORDPointer(v445[0]);
              v427 = *((_DWORD *)v459 + 14);
              v430 = W32GetUserSessionState(v429, v428);
              LOBYTE(v431) = v447;
              LOBYTE(v432) = v425;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v432,
                v431,
                *(_QWORD *)(v430 + 69152),
                4,
                2,
                13,
                (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids,
                v427,
                v426);
            }
            break;
          case 0x2007:
            v422 = *(_DWORD *)UPDWORDPointer(8199LL);
            *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v424, v423) + 19904) + 7008LL) = v422;
            break;
          case 0x200B:
            v421 = (_DWORD *)UPDWORDPointer(8203LL);
            GreSetFontEnumeration(8 * (*v421 & 2 | 4u));
            break;
          case 0x200D:
            v417 = *(_DWORD *)UPDWORDPointer(8205LL);
            *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v419, v418, v420) + 96) + 13448LL) = v417;
            break;
          default:
            if ( v445[0] == 8207 && *(_DWORD *)UPDWORDPointer(8207LL) )
            {
              v414 = *(_DWORD *)UPDWORDPointer(v445[0]);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v416, v415) + 19904) + 2228LL) = v414;
            }
            break;
        }
      }
    }
    goto LABEL_936;
  }
  v368 = v457.m128i_i64[0];
  if ( *(_DWORD *)(v457.m128i_i64[0] + 66812) == 4 )
  {
    v19 = (unsigned int)CheckDesktopPolicy(v366, *(_QWORD *)(v457.m128i_i64[0] + 66816)) == 0;
    v366 = v458;
    if ( !v19 )
    {
      v11 = 0;
      v13 = 0;
    }
  }
  if ( v11 )
  {
    ProfileValue = FastGetProfileValue(
                     v366,
                     *(unsigned int *)(v457.m128i_i64[0] + 66812),
                     *(_QWORD *)(v457.m128i_i64[0] + 66816),
                     0LL,
                     &v456,
                     8,
                     0);
    memmove((char *)&v456 + ProfileValue, (const void *)(ProfileValue + v368 + 66796), 8LL - ProfileValue);
    v370 = (unsigned __int64)(v6 - 4096) >> 6;
    v371 = 1 << (((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6));
    v372 = *(&v456.left + v370);
    if ( *(_QWORD *)&v445[1] )
      v373 = v372 | v371;
    else
      v373 = v372 & ~v371;
    *(&v456.left + v370) = v373;
    updated = FastWriteProfileValue(v458, *(unsigned int *)(v368 + 66812), *(_QWORD *)(v368 + 66816), 3LL, &v456, 8);
    v13 = updated;
  }
  if ( !v13 )
    goto LABEL_895;
  v374 = (unsigned __int64)(v6 - 4096) >> 6;
  v375 = 1 << (((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6));
  v376 = *(_DWORD *)(v368 + 4 * v374 + 66796);
  if ( *(_QWORD *)&v445[1] )
    v377 = v375 | v376;
  else
    v377 = ~v375 & v376;
  *(_DWORD *)(v368 + 4 * v374 + 66796) = v377;
  if ( v6 > 0x1025 )
  {
    if ( v6 != 4159 )
    {
      switch ( v6 )
      {
        case 0x104Fu:
        case 0x1051u:
          xxxWindowEvent(0x80000007, 0LL, v6, *(_QWORD *)&v445[1] != 0LL, 0);
          break;
        case 0x1053u:
          NotifyISMPenButtonYieldSettingChange();
          break;
        case 0x1055u:
          *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v6 - 4179, v374, v367) + 96) + 24304LL) = *(_QWORD *)&v445[1] != 0LL;
          break;
      }
      goto LABEL_895;
    }
    v397 = *(_QWORD *)(W32GetUserSessionState(v6 - 4159, v374) + 19904);
    v398 = *(_DWORD *)(v397 + 7004);
    v400 = (*(_DWORD *)(W32GetUserSessionState(v397, v399) + 66796) ^ v398) & 0x80000000;
    v403 = W32GetUserSessionState(v402, v401);
    *(_DWORD *)(*(_QWORD *)(v403 + 19904) + 7004LL) ^= v400;
    SetPointer(1LL);
    goto LABEL_890;
  }
  if ( v6 == 4133 )
  {
    v396 = (void *)ReferenceDwmApiPort(v377, v374);
    DwmAsyncNotifyWindowShadowChange(v396);
    goto LABEL_895;
  }
  v378 = v6 - 4101;
  if ( !v378 )
  {
    v392 = *(_QWORD *)(W32GetUserSessionState(v377, v374) + 19904);
    v393 = *(_DWORD *)(v392 + 7004);
    v388 = (*(_DWORD *)(W32GetUserSessionState(v392, v394) + 66796) ^ v393) & 4;
    goto LABEL_879;
  }
  v379 = v378 - 2;
  if ( !v379 )
  {
    v389 = *(_QWORD *)(W32GetUserSessionState(v377, v374) + 19904);
    v390 = *(_DWORD *)(v389 + 7004);
    v388 = (*(_DWORD *)(W32GetUserSessionState(v389, v391) + 66796) ^ v390) & 8;
    goto LABEL_879;
  }
  v380 = v379 - 2;
  if ( !v380 )
  {
LABEL_890:
    CreateBitmapStrip();
    goto LABEL_891;
  }
  v381 = v380 - 2;
  if ( !v381 )
  {
    v383 = *(_QWORD *)(W32GetUserSessionState(v377, v374) + 19904);
    v384 = *(_DWORD *)(v383 + 7004);
    v388 = (*(_DWORD *)(W32GetUserSessionState(v383, v385) + 66796) ^ v384) & 0x20;
LABEL_879:
    v395 = W32GetUserSessionState(v387, v386);
    *(_DWORD *)(*(_QWORD *)(v395 + 19904) + 7004LL) ^= v388;
    goto LABEL_895;
  }
  v382 = v381 - 16;
  if ( v382 )
  {
    if ( v382 != 8 )
      goto LABEL_895;
LABEL_891:
    if ( *((_QWORD *)PtiCurrent(v377) + 61) )
      v405 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v404) + 61) + 8LL) + 24LL);
    else
      v405 = 0LL;
    xxxInternalInvalidate(v405, (HRGN)1, 0x10485u);
    goto LABEL_895;
  }
  SetPointer(1LL);
LABEL_895:
  v32 = v12;
  v244 = v445[0];
LABEL_936:
  Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&Buf1);
  v85 = updated;
LABEL_953:
  if ( v85 )
  {
    if ( v32 )
      EditionxxxBroadcastSPIChange(v244, v466, 1LL);
  }
  return v13;
}
