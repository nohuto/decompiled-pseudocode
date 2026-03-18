/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14000FF0C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x1400197A4 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     _PostTransformableMessage @ 0x140020870 (_PostTransformableMessage.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140038250 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxCallCtfHook @ 0x14003CF78 (xxxCallCtfHook.c)
 *     xxxCallMouseHook @ 0x14003D5A4 (xxxCallMouseHook.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ??1Win32RawLockedW32Thread@@QEAA@XZ @ 0x1400537A0 (--1Win32RawLockedW32Thread@@QEAA@XZ.c)
 *     xxxDefPointerProc @ 0x140053A6C (xxxDefPointerProc.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x140054720 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x140054B50 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     IsMiPEnabledForWindow @ 0x140054BA0 (IsMiPEnabledForWindow.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x140054C28 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     SetMiPPromotion @ 0x140054DB4 (SetMiPPromotion.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x140054E50 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     TransferWakeBit @ 0x1400554A0 (TransferWakeBit.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008A10C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x14008C0D8 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14008D494 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14008D9DC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008E2E8 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x14008FA04 (-IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x14008FCC0 (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x14008FEC8 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x140090DEC (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z @ 0x140093BBC (-RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z.c)
 *     ?DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z @ 0x1400942DC (-DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140096B60 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     PtiMouseFromQ @ 0x1400980BC (PtiMouseFromQ.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x140099110 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x140140934 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     xxxRetrievePointerInputMessage @ 0x140140B4C (xxxRetrievePointerInputMessage.c)
 *     CheckPwndFilter @ 0x140141920 (CheckPwndFilter.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140149244 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401492EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140153F80 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x140158B00 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     IsHiddenByInputService @ 0x14016ED70 (IsHiddenByInputService.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0CManageInScanSysQueueBit@@QEAA@XZ @ 0x14018A118 (--0CManageInScanSysQueueBit@@QEAA@XZ.c)
 *     xxxFindNCHitEx @ 0x14018DE2C (xxxFindNCHitEx.c)
 *     FindNCHitEx @ 0x14018DEF8 (FindNCHitEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1401948F0 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x14019AE58 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ??1CManageInScanSysQueueBit@@QEAA@XZ @ 0x14019C584 (--1CManageInScanSysQueueBit@@QEAA@XZ.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A3738 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     IsMiPActive @ 0x1401AB6D0 (IsMiPActive.c)
 *     ?SSQResult@RawInput@InputTraceLogging@@SAXPEAXW4SsqResult@12@@Z @ 0x1401BA804 (-SSQResult@RawInput@InputTraceLogging@@SAXPEAXW4SsqResult@12@@Z.c)
 *     ?Exchange@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401C35B4 (-Exchange@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1401C47FC (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     IsInsideMenuLoop @ 0x1401CB018 (IsInsideMenuLoop.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1401D0068 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1401DE21C (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@QEAAXPEAUtagQMSG@@P6AXPEAX@Z@Z @ 0x1401ED2FC (--$ManualLock@X@-$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@QEAAXPEAUtagQMSG@@P6AXPEAX@Z@Z.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401F16F8 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     IsMenuStarted @ 0x1401F5FD0 (IsMenuStarted.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140208030 (-UnlockWorker@-$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     GetAppImeCompatFlags @ 0x1402081C0 (GetAppImeCompatFlags.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402089BC (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x14020A2DC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x14023EF80 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     HotKeyToWindow @ 0x140246178 (HotKeyToWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     xxxClientCallLocalMouseHooks @ 0x14026495C (xxxClientCallLocalMouseHooks.c)
 *     xxxCallHandleMenuMessages @ 0x140269B80 (xxxCallHandleMenuMessages.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1402728F8 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x140277BB4 (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x140287D00 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetPenDoubleClickTime @ 0x14028F5F4 (GetPenDoubleClickTime.c)
 *     ?IgnoreModalLoop@RawInput@InputTraceLogging@@SAXPEAXPEAUHWND__@@@Z @ 0x1402947EC (-IgnoreModalLoop@RawInput@InputTraceLogging@@SAXPEAXPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxScanSysQueue(
        __int64 a1,
        struct tagMSG *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int16 v12; // r9
  __int64 v13; // r15
  char v14; // bl
  bool v15; // di
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  char v19; // r15
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // rdx
  char v26; // r12
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  struct tagQMSG **i; // rcx
  int v33; // r13d
  __int64 v34; // rdx
  __int64 v35; // rdx
  struct tagQMSG *NextSysMsg; // rdi
  char v37; // r12
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  int v43; // eax
  int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  char v48; // r12
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rdx
  char v55; // r12
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  int v61; // r8d
  char *v62; // rax
  int v63; // eax
  int v64; // ebx
  struct tagWND *v65; // rdi
  __int64 v66; // rax
  bool v67; // zf
  BOOL v68; // ebx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  char v73; // r8
  unsigned int v74; // ecx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rcx
  struct tagWND *v80; // rdx
  __int64 v81; // rax
  struct tagWND *v82; // rcx
  __int64 v83; // rcx
  struct tagWND *v84; // rcx
  __int64 v85; // rcx
  int v86; // eax
  int v87; // eax
  unsigned __int64 v88; // r8
  __int64 v89; // rbx
  ULONG_PTR v90; // r12
  __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned __int64 v93; // rbx
  unsigned int v94; // eax
  int v95; // ebx
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // r13d
  __int64 v99; // rcx
  __int64 v100; // rdi
  unsigned int v101; // ebx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  char v105; // r12
  __int64 v106; // rdi
  __int64 v107; // rbx
  __int64 v108; // rax
  ULONG_PTR v109; // rbx
  int v110; // r8d
  int v111; // edx
  unsigned int v112; // ebx
  void *v113; // r8
  unsigned __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rcx
  int v120; // edx
  HWND *v121; // rdx
  __int64 v122; // rdx
  int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // r13
  int v126; // r13d
  unsigned int v127; // r12d
  int v128; // eax
  __int64 v129; // rdx
  struct tagWND *v130; // rcx
  unsigned __int8 v131; // bl
  HWND v132; // rbx
  struct tagWND *v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rdx
  int v136; // eax
  struct tagWND *v137; // rbx
  int v138; // eax
  int v139; // r9d
  _DWORD *v140; // rax
  _DWORD *v141; // rax
  unsigned int MouseKeyFlags; // eax
  __int64 v143; // rcx
  __int64 v144; // rcx
  bool v145; // zf
  __int32 v146; // eax
  __int32 v147; // eax
  __int32 v148; // eax
  int v149; // r9d
  bool v150; // al
  int v151; // r13d
  __int64 v152; // rax
  HWND *v153; // rdx
  __int64 v154; // rdx
  __int64 v155; // rcx
  struct tagWND *v156; // rbx
  unsigned int v157; // r8d
  unsigned int v158; // r9d
  __int64 v159; // rbx
  struct tagWND *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  int v163; // ebx
  __int64 v164; // rcx
  struct tagWND *v165; // rax
  __int64 v166; // r8
  __int64 v167; // rdx
  __int64 v168; // rax
  struct tagWND *v169; // r9
  char v170; // di
  char v171; // bl
  __int64 v172; // rax
  __int64 v173; // rcx
  const struct tagUIPI_INFO *v174; // r8
  __int64 v175; // rdx
  __int64 v176; // rax
  unsigned __int64 v177; // rbx
  __int64 v178; // rcx
  int v179; // edx
  struct tagWND *v180; // rdx
  __int64 v181; // rcx
  LONG v182; // eax
  __int64 v183; // rcx
  LONG v184; // eax
  BOOL v185; // edi
  __int64 v186; // rdx
  Scrollbar::NonClient *v187; // rcx
  unsigned int NCHit; // eax
  __int64 v189; // r8
  int v190; // eax
  __int64 v191; // rdx
  int v192; // r13d
  __int64 v193; // rax
  char v194; // cl
  int v195; // eax
  unsigned int v196; // eax
  __int64 v197; // rcx
  __int64 v198; // rdx
  __int64 v199; // rax
  __int64 v200; // rcx
  __int64 v201; // kr20_8
  __int64 v202; // kr28_8
  __int64 v203; // rax
  __int64 v204; // rcx
  __int64 v205; // kr30_8
  __int64 v206; // rcx
  int v207; // eax
  int v208; // ecx
  int TouchTimeFromCPLValue; // eax
  int v210; // eax
  __int64 v211; // rcx
  __int64 v212; // rcx
  struct tagTHREADINFO **CompositeAppFrameWindowOrSelf; // rbx
  const struct tagWND *CompositionInputWindowUIOwner; // rcx
  const struct tagWND *TopLevelWindow; // rax
  __int64 v216; // rdx
  struct tagTHREADINFO *v217; // r8
  unsigned __int64 v218; // r8
  __int64 v219; // rdx
  __int128 v220; // xmm12
  __int128 v221; // xmm13
  __int128 v222; // xmm14
  __int128 v223; // xmm15
  int v224; // r12d
  __int128 *v225; // rcx
  __int64 v226; // rcx
  int v227; // r9d
  unsigned int *v228; // rax
  _DWORD *v229; // rax
  __int64 v230; // r15
  __int64 v231; // rax
  __int64 v232; // rax
  struct tagWND *v233; // rbx
  __int64 v234; // rdx
  struct tagQ **v235; // rcx
  __int64 v236; // rax
  __int128 v237; // xmm6
  __int128 v238; // xmm7
  __int128 v239; // xmm8
  __int128 v240; // xmm9
  __int128 v241; // xmm10
  __int128 v242; // xmm11
  unsigned __int64 v243; // rdi
  struct tagTHREADINFO **v244; // rcx
  __int64 v245; // rax
  __int64 v246; // rdx
  __int64 v247; // rax
  int v248; // r13d
  unsigned __int64 v249; // rcx
  __int64 v250; // rax
  __int64 v251; // rcx
  const struct tagQMSG *v252; // r8
  __int64 v253; // rbx
  struct tagTHREADINFO *v254; // rcx
  __int64 v255; // rcx
  int v256; // ebx
  int v257; // r9d
  struct tagWND *v258; // rcx
  int v259; // ebx
  int v260; // ebx
  int v261; // ebx
  __int64 v262; // r8
  __int64 v263; // rdx
  __int64 MiPWindowFlags; // rax
  int v265; // edx
  int v266; // eax
  int InteractiveControlInputMessage; // eax
  __int64 v268; // rdx
  char v269; // bl
  struct tagMSG *v270; // r13
  _QWORD *v271; // rax
  __int64 v272; // r9
  unsigned int v273; // ecx
  _DWORD *v274; // rax
  __int64 v275; // rdx
  unsigned __int64 v276; // rax
  char v277; // r15
  bool v278; // r12
  __int64 v279; // rdi
  __int64 v280; // rbx
  __int64 v281; // rax
  int v282; // r8d
  int v283; // edx
  __int64 v284; // r15
  struct _W32THREAD *v285; // rdi
  struct _W32THREAD *v286; // rbx
  int v287; // edx
  int v288; // r8d
  __int64 v289; // [rsp+40h] [rbp-678h]
  __int64 v290; // [rsp+48h] [rbp-670h]
  char v291; // [rsp+48h] [rbp-670h]
  __int64 v292; // [rsp+50h] [rbp-668h]
  char v293; // [rsp+50h] [rbp-668h]
  __int64 v294; // [rsp+58h] [rbp-660h]
  unsigned int v295[2]; // [rsp+70h] [rbp-648h] BYREF
  struct tagWND *ThreadDesktopWindow; // [rsp+78h] [rbp-640h] BYREF
  int v297; // [rsp+80h] [rbp-638h]
  BOOL v298; // [rsp+84h] [rbp-634h]
  bool v299; // [rsp+88h] [rbp-630h]
  struct tagPOINT v300; // [rsp+90h] [rbp-628h] BYREF
  void *v301; // [rsp+98h] [rbp-620h] BYREF
  unsigned __int64 v302; // [rsp+A0h] [rbp-618h] BYREF
  int v303; // [rsp+A8h] [rbp-610h] BYREF
  int v304; // [rsp+ACh] [rbp-60Ch] BYREF
  unsigned int v305; // [rsp+B0h] [rbp-608h]
  int v306; // [rsp+B4h] [rbp-604h]
  __int64 v307; // [rsp+B8h] [rbp-600h]
  bool v308; // [rsp+C0h] [rbp-5F8h]
  bool v309; // [rsp+C1h] [rbp-5F7h]
  _BYTE v310[2]; // [rsp+C2h] [rbp-5F6h] BYREF
  unsigned int v311; // [rsp+C4h] [rbp-5F4h]
  int v312; // [rsp+C8h] [rbp-5F0h]
  int v313; // [rsp+CCh] [rbp-5ECh]
  int v314; // [rsp+D0h] [rbp-5E8h]
  ULONG_PTR v315; // [rsp+D8h] [rbp-5E0h]
  struct tagQMSG *v316; // [rsp+E0h] [rbp-5D8h]
  struct tagQMSG **v317; // [rsp+E8h] [rbp-5D0h]
  struct _W32THREAD *v318; // [rsp+F0h] [rbp-5C8h]
  int v319[2]; // [rsp+F8h] [rbp-5C0h]
  int v320; // [rsp+100h] [rbp-5B8h]
  int v321; // [rsp+104h] [rbp-5B4h]
  __int64 v322; // [rsp+108h] [rbp-5B0h]
  __int128 v323; // [rsp+110h] [rbp-5A8h]
  struct _W32THREAD *v324; // [rsp+120h] [rbp-598h]
  int v325; // [rsp+128h] [rbp-590h]
  int v326; // [rsp+12Ch] [rbp-58Ch]
  int v327; // [rsp+130h] [rbp-588h]
  struct tagTHREADINFO *v328; // [rsp+138h] [rbp-580h]
  struct _W32THREAD *v329; // [rsp+140h] [rbp-578h]
  ULONG_PTR v330[3]; // [rsp+148h] [rbp-570h] BYREF
  __int64 v331; // [rsp+160h] [rbp-558h]
  __int64 v332; // [rsp+168h] [rbp-550h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+170h] [rbp-548h] BYREF
  struct tagMSG *v334; // [rsp+198h] [rbp-520h]
  __int64 v335; // [rsp+1B0h] [rbp-508h]
  __int64 v336; // [rsp+1B8h] [rbp-500h]
  __int64 v337; // [rsp+1C0h] [rbp-4F8h]
  char v338[8]; // [rsp+1C8h] [rbp-4F0h] BYREF
  unsigned int v339; // [rsp+1D0h] [rbp-4E8h] BYREF
  unsigned int v340; // [rsp+1D4h] [rbp-4E4h]
  int v341; // [rsp+1D8h] [rbp-4E0h]
  int v342; // [rsp+1DCh] [rbp-4DCh]
  struct tagMSG *v343; // [rsp+1E0h] [rbp-4D8h]
  ULONG_PTR v344[2]; // [rsp+1E8h] [rbp-4D0h] BYREF
  int v345; // [rsp+1F8h] [rbp-4C0h]
  __int64 v346; // [rsp+200h] [rbp-4B8h]
  void (*v347[3])(void); // [rsp+208h] [rbp-4B0h] BYREF
  void (*v348[3])(void); // [rsp+220h] [rbp-498h] BYREF
  void (*v349[3])(void); // [rsp+238h] [rbp-480h] BYREF
  void (*v350[3])(void); // [rsp+250h] [rbp-468h] BYREF
  void (*v351[6])(void); // [rsp+268h] [rbp-450h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+298h] [rbp-420h] BYREF
  ULONG_PTR v353[2]; // [rsp+2A8h] [rbp-410h] BYREF
  ULONG_PTR v354[3]; // [rsp+2B8h] [rbp-400h] BYREF
  ULONG_PTR v355[2]; // [rsp+2D0h] [rbp-3E8h] BYREF
  __int128 v356; // [rsp+2E0h] [rbp-3D8h] BYREF
  __m256i v357; // [rsp+2F0h] [rbp-3C8h]
  __int128 v358; // [rsp+310h] [rbp-3A8h]
  __int128 v359; // [rsp+320h] [rbp-398h]
  __int128 v360; // [rsp+330h] [rbp-388h] BYREF
  __int128 v361; // [rsp+340h] [rbp-378h]
  __int128 v362; // [rsp+350h] [rbp-368h] BYREF
  __int128 v363; // [rsp+360h] [rbp-358h] BYREF
  __int128 v364; // [rsp+370h] [rbp-348h]
  __int64 v365; // [rsp+380h] [rbp-338h]
  __int64 v366[2]; // [rsp+390h] [rbp-328h] BYREF
  __int128 v367; // [rsp+3A0h] [rbp-318h]
  __int64 v368; // [rsp+3B0h] [rbp-308h]
  _BYTE v369[48]; // [rsp+3C0h] [rbp-2F8h] BYREF
  __int128 v370; // [rsp+3F0h] [rbp-2C8h]
  __int128 v371; // [rsp+400h] [rbp-2B8h]
  __int128 v372; // [rsp+410h] [rbp-2A8h]
  __int128 v373; // [rsp+420h] [rbp-298h]
  __int128 v374; // [rsp+430h] [rbp-288h]
  __int128 v375; // [rsp+440h] [rbp-278h]
  __int128 v376; // [rsp+450h] [rbp-268h]
  __int64 v377; // [rsp+460h] [rbp-258h]
  __int128 v378; // [rsp+470h] [rbp-248h] BYREF
  __m256i v379; // [rsp+480h] [rbp-238h]
  __int128 v380; // [rsp+4A0h] [rbp-218h]
  __int128 v381; // [rsp+4B0h] [rbp-208h]
  __int128 v382; // [rsp+4C0h] [rbp-1F8h]
  __int128 v383; // [rsp+4D0h] [rbp-1E8h]
  __int128 v384; // [rsp+4E0h] [rbp-1D8h]
  _OWORD v385[2]; // [rsp+4F0h] [rbp-1C8h] BYREF
  __int64 v386; // [rsp+510h] [rbp-1A8h]
  _OWORD v387[10]; // [rsp+520h] [rbp-198h] BYREF
  __int64 v388; // [rsp+5C0h] [rbp-F8h]

  v306 = a4;
  *(_QWORD *)v319 = a3;
  v334 = a2;
  v331 = a1;
  v336 = a1;
  v343 = a2;
  v328 = (struct tagTHREADINFO *)a1;
  v335 = a1;
  v346 = a1;
  v9 = a1;
  v332 = a1;
  v330[2] = (ULONG_PTR)a2;
  v337 = a3;
  v327 = a4;
  v317 = a8;
  memset_0(&v356, 0, 0xA8uLL);
  v295[0] = 0;
  v302 = 0LL;
  v301 = 0LL;
  v300 = 0LL;
  v303 = 0;
  v304 = 0;
  *(_OWORD *)v366 = 0LL;
  v367 = 0LL;
  v368 = 0LL;
  v325 = 0;
  v10 = a6 & 1;
  v295[1] = a6 & 1;
  v321 = 0;
  v305 = 0;
  v298 = 0;
  v299 = 0;
  v315 = 0LL;
  *a8 = 0LL;
  v11 = v9 + 464;
  v12 = a7;
  if ( a7 == 0x2000 && *(_QWORD *)(*(_QWORD *)v11 + 88LL) )
  {
    EtwTraceInputQueueLockedPeekRecursion();
    return 0LL;
  }
  v320 = 0;
  v312 = 0;
  v297 = 0;
  v13 = *(_QWORD *)v11;
  if ( *(_QWORD *)(*(_QWORD *)v11 + 72LL) )
  {
    v19 = 1;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v14 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v10);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        18,
        29,
        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
        v13,
        a1,
        a1);
      v12 = a7;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 464) + 72LL) = a1;
    v19 = 1;
    **(_DWORD **)(a1 + 480) |= 1u;
    v10 = v295[1];
    v9 = a1;
  }
  if ( (v12 & 0x1C07) != 0 )
  {
    v20 = *(_QWORD *)(v9 + 464);
    v21 = *(_DWORD *)(v20 + 436);
    if ( (_DWORD)v10 )
      v22 = v21 & 0xFFFFFBFF;
    else
      v22 = v21 | 0x400;
    *(_DWORD *)(v20 + 436) = v22;
  }
  v23 = *(_QWORD *)(a1 + 464);
  if ( *(_QWORD *)(v23 + 72) != a1 )
  {
    EtwTraceInputQueueLocked(v23, v10);
    return 2LL;
  }
  v307 = 0LL;
  v329 = 0LL;
  v322 = 0LL;
  v324 = 0LL;
  v318 = 0LL;
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v348, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v347, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v349, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v351, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v350, 0LL);
  ThreadDesktopWindow = 0LL;
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v330, a1, 0LL);
  CManageInScanSysQueueBit::CManageInScanSysQueueBit((CManageInScanSysQueueBit *)v310);
LABEL_22:
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
    || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v26 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v19 = 0;
  if ( v26 || v19 )
  {
    v27 = *(_QWORD *)(a1 + 464);
    v28 = *(_QWORD *)(v27 + 88);
    v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
    LOBYTE(v30) = v19;
    LOBYTE(v31) = v26;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v30,
      *(_QWORD *)(v29 + 69152),
      5,
      18,
      30,
      (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
      v27,
      v28);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL) = 0LL;
LABEL_33:
  v19 = 1;
LABEL_34:
  while ( 2 )
  {
    LOBYTE(i) = v298;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v33 = (**(_DWORD **)(a1 + 512) >> 9) & 1;
                    v345 = v33;
                    v34 = *(_QWORD *)(a1 + 464);
                    if ( *(_QWORD *)(v34 + 88) )
                    {
                      if ( !(_BYTE)i )
                      {
                        v298 = ((v305 - 1) & 0xFFFFFFFD) == 0;
                        v299 = ((v305 - 1) & 0xFFFFFFFD) == 0;
                      }
                    }
                    else
                    {
                      v305 = 0;
                      v298 = 0;
                      v299 = 0;
                    }
                    v311 = 0;
                    v302 = 0LL;
                    v313 = 0;
                    v314 = 0;
                    NextSysMsg = xxxGetNextSysMsg(
                                   (struct tagTHREADINFO *)a1,
                                   *(struct tagQMSG **)(v34 + 88),
                                   (struct tagQMSG *)&v356);
                    v316 = NextSysMsg;
                    LODWORD(i) = (_DWORD)WPP_GLOBAL_Control;
                    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
                      || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                    {
                      v37 = 0;
                    }
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
                    {
                      v19 = 0;
                    }
                    if ( v37 || v19 )
                    {
                      v38 = *(_QWORD *)(a1 + 464);
                      v39 = *(_QWORD *)(v38 + 88);
                      v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
                      v291 = v38;
                      NextSysMsg = v316;
                      LOBYTE(v41) = v19;
                      LOBYTE(v42) = v37;
                      WPP_RECORDER_AND_TRACE_SF_qqq(
                        *((_QWORD *)WPP_GLOBAL_Control + 3),
                        v42,
                        v41,
                        *(_QWORD *)(v40 + 69152),
                        5,
                        18,
                        31,
                        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                        (char)v316,
                        v291,
                        v39);
                    }
                    *(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL) = NextSysMsg;
                    if ( !NextSysMsg )
                      goto LABEL_68;
                    v43 = DWORD1(v361);
                    if ( (BYTE4(v361) & 0x20) != 0 )
                    {
                      i = v317;
                      *v317 = NextSysMsg;
                      *((_DWORD *)NextSysMsg + 25) |= 0x100u;
                      v295[1] = 0;
                      v43 = DWORD1(v361);
                      if ( (DWORD1(v361) & 0x8000000) != 0 )
                      {
                        *((_DWORD *)*i + 25) |= 0x8000000u;
                        v43 = DWORD1(v361);
                      }
                    }
                    if ( (v43 & 0x2000) == 0 )
                      break;
                    v44 = v305;
                    v19 = 1;
                    if ( *((_QWORD *)&v361 + 1) == a1 )
                      v44 = 1;
                    v305 = v44;
                    LOBYTE(i) = 1;
                    v298 = (int)i;
                    v299 = 1;
                  }
                  LOBYTE(i) = v298;
                  if ( (v43 & 0x10000) == 0 )
                    break;
                  v19 = 1;
                  if ( *((_QWORD *)&v361 + 1) == a1 )
                  {
                    v305 = 3;
                    goto LABEL_34;
                  }
                }
                if ( (_DWORD)v361 == 4 && v298 )
                {
                  DeferSysPeekMsg(a1, 3LL);
                  goto LABEL_33;
                }
                if ( (v43 & 0x4000) == 0 )
                  break;
                v19 = 1;
                if ( *((_QWORD *)&v361 + 1) == a1 )
                  v305 = 2;
              }
              if ( (unsigned int)ShouldDeferMessage(v305, &v356) )
              {
                DeferSysPeekMsg(a1, 3LL);
                v305 = 3;
                goto LABEL_33;
              }
LABEL_68:
              if ( !*(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL) )
              {
                if ( a7 == 0x2000 )
                  ClearWakeBit((struct tagTHREADINFO *)a1, 0x2000, 0);
                goto LABEL_814;
              }
              Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v330);
              v19 = 1;
              ThreadDesktopWindow = (struct tagWND *)HMValidateHandleNoSecure(v357.m256i_i64[0], 1);
              Win32HM_LockIntoThread<1>(a1, (__int64)ThreadDesktopWindow, (__int64 *)v330);
              v45 = (unsigned int)v361;
              if ( !(_DWORD)v361 )
                break;
              if ( (_DWORD)v361 == 4 )
              {
                LOBYTE(i) = v298;
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL) != *(_QWORD *)(*(_QWORD *)(a1 + 464) + 24LL) )
                  continue;
              }
              if ( (_DWORD)v361 != 9 || v357.m256i_i32[2] != 96 )
                goto LABEL_82;
              for ( i = (struct tagQMSG **)*((_QWORD *)&v356 + 1);
                    i && IsHiddenByInputService((__int64)i);
                    i = (struct tagQMSG **)i[1] )
              {
                ;
              }
              v67 = i == 0LL;
              LOBYTE(i) = v298;
              if ( v67 )
              {
LABEL_82:
                if ( *((_QWORD *)&v361 + 1) && *((_QWORD *)&v361 + 1) != a1 )
                {
                  v46 = *(_QWORD *)(a1 + 464);
                  if ( *(_QWORD *)(*((_QWORD *)&v361 + 1) + 464LL) != v46 )
                  {
                    CleanEventMessage(*(struct tagQMSG **)(v46 + 88), *((struct tagQMSG **)&v361 + 1));
                    DelQEntry(*(_QWORD *)(a1 + 464) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL), 1);
                    goto LABEL_22;
                  }
                  v322 = *((_QWORD *)&v361 + 1);
                  Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v349, *((struct _W32THREAD **)&v361 + 1));
                  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
                    || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                  {
                    v48 = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || !*((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    v19 = 0;
                  }
                  if ( v48 || v19 )
                  {
                    v49 = *(_QWORD *)(a1 + 464);
                    v50 = *(_QWORD *)(v49 + 88);
                    v51 = W32GetUserSessionState(WPP_GLOBAL_Control, v47);
                    LOBYTE(v52) = v19;
                    LOBYTE(v53) = v48;
                    WPP_RECORDER_AND_TRACE_SF_qq(
                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                      v53,
                      v52,
                      *(_QWORD *)(v51 + 69152),
                      5,
                      18,
                      32,
                      (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                      v49,
                      v50);
                  }
                  *(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL) = 0LL;
LABEL_814:
                  v125 = v307;
LABEL_815:
                  *(_QWORD *)(*(_QWORD *)(a1 + 464) + 80LL) = 0LL;
                  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
                    || (v277 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
                  {
                    v277 = 0;
                  }
                  v278 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v277 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v279 = *(_QWORD *)(a1 + 464);
                    v280 = *(_QWORD *)(v279 + 72);
                    v281 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                    LOBYTE(v282) = v278;
                    LOBYTE(v283) = v277;
                    WPP_RECORDER_AND_TRACE_SF_qqq(
                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                      v283,
                      v282,
                      *(_QWORD *)(v281 + 69152),
                      4,
                      18,
                      36,
                      (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                      v279,
                      a1,
                      v280);
                  }
                  *(_QWORD *)(*(_QWORD *)(a1 + 464) + 72LL) = 0LL;
                  **(_DWORD **)(a1 + 480) &= ~1u;
                  v284 = v322;
                  v285 = v324;
                  v286 = v318;
                  if ( v329 )
                  {
                    SetWakeBit((__int64)v329, 16385LL);
                    ClearWakeBit((struct tagTHREADINFO *)a1, 16385, 0);
                  }
                  else if ( !v125 && !v322 && !v324 && !v318 )
                  {
                    v287 = 31751;
                    v288 = (_DWORD)v329 + 1;
                    goto LABEL_838;
                  }
                  if ( v125 )
                  {
                    SetWakeBit(v125, 16390LL);
                    ClearWakeBit((struct tagTHREADINFO *)a1, 16390, 0);
                  }
                  if ( v285 )
                  {
                    SetWakeBit((__int64)v285, 17408LL);
                    ClearWakeBit((struct tagTHREADINFO *)a1, 17408, 0);
                  }
                  if ( v286 )
                  {
                    SetWakeBit((__int64)v286, 20480LL);
                    ClearWakeBit((struct tagTHREADINFO *)a1, 20480, 0);
                  }
                  if ( !v284 )
                    goto LABEL_839;
                  SetWakeBit(v284, 8256LL);
                  v288 = 0;
                  v287 = 0x2000;
LABEL_838:
                  ClearWakeBit((struct tagTHREADINFO *)a1, v287, v288);
LABEL_839:
                  CManageInScanSysQueueBit::~CManageInScanSysQueueBit((CManageInScanSysQueueBit *)v310);
                  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v330);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v350);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v351);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v349);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v347);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v348);
                  return 0LL;
                }
                EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL));
                DelQEntry(*(_QWORD *)(a1 + 464) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL), 1);
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
                  || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                {
                  v55 = 0;
                }
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || !*((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  v19 = 0;
                }
                if ( v55 || v19 )
                {
                  v56 = *(_QWORD *)(a1 + 464);
                  v57 = *(_QWORD *)(v56 + 88);
                  v58 = W32GetUserSessionState(WPP_GLOBAL_Control, v54);
                  LOBYTE(v59) = v19;
                  LOBYTE(v60) = v55;
                  WPP_RECORDER_AND_TRACE_SF_qq(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v60,
                    v59,
                    *(_QWORD *)(v58 + 69152),
                    5,
                    18,
                    33,
                    (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                    v56,
                    v57);
                }
                *(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL) = 0LL;
                xxxProcessEventMessage(a1, (__int64)&v356);
                v19 = 1;
                goto LABEL_22;
              }
            }
            LOBYTE(i) = v298;
          }
          while ( a7 == 0x2000 );
          v61 = v357.m256i_i32[2];
          v295[0] = v357.m256i_u32[2];
          if ( v357.m256i_i32[2] > 0x24Au )
          {
            if ( v357.m256i_i32[2] > 0x2EDu )
            {
              if ( v357.m256i_i32[2] == 750 || v357.m256i_i32[2] == 751 || v357.m256i_i32[2] == 752 )
              {
LABEL_772:
                if ( v306 || a5 != -1 )
                {
                  if ( v306 <= a5 )
                  {
                    if ( v357.m256i_i32[2] < (unsigned int)v306 || v357.m256i_i32[2] > a5 )
                    {
                      v266 = 0;
                      goto LABEL_781;
                    }
                  }
                  else
                  {
                    if ( v357.m256i_i32[2] >= a5 && v357.m256i_i32[2] <= (unsigned int)v306 )
                      goto LABEL_814;
                    v266 = 1;
LABEL_781:
                    if ( !v266 )
                      goto LABEL_814;
                  }
                }
                if ( !(unsigned int)IsInsideMenuLoop(a1) )
                {
                  if ( v295[1] )
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
                  if ( !ThreadDesktopWindow )
                    ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(a1 + 464) + 120LL);
                  v301 = (void *)v357.m256i_i64[3];
                  v302 = v357.m256i_u64[2];
                  InteractiveControlInputMessage = xxxRetrieveInteractiveControlInputMessage(
                                                     v357.m256i_u16[8],
                                                     v357.m256i_u16[9]);
                  if ( InteractiveControlInputMessage == 1 )
                    goto LABEL_342;
                  if ( InteractiveControlInputMessage == 2 )
                    goto LABEL_814;
                }
                goto LABEL_274;
              }
              v146 = v357.m256i_i32[2] - 753;
              v145 = v357.m256i_i32[2] == 753;
            }
            else
            {
              if ( v357.m256i_i32[2] == 749 )
                goto LABEL_772;
              if ( v357.m256i_i32[2] == 593 || v357.m256i_i32[2] == 594 || v357.m256i_i32[2] == 595 )
              {
LABEL_408:
                v126 = v311;
                v127 = v306;
LABEL_737:
                if ( ((HIDWORD(v362) - 2) & 0xFFFFFFCF) == 0 && HIDWORD(v362) != 50 )
                {
                  v295[0] = v61;
                  v301 = (void *)v357.m256i_i64[3];
                  v302 = v357.m256i_u64[2];
LABEL_740:
                  if ( v295[1] )
                  {
                    if ( (unsigned int)IsMiPActive(a1, 0LL) && v126 )
                    {
                      if ( ThreadDesktopWindow )
                        v255 = *(_QWORD *)ThreadDesktopWindow;
                      else
                        v255 = 0LL;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 48LL) = v255;
                      v262 = *(_QWORD *)(a1 + 1512);
                      v263 = *(unsigned int *)(v262 + 36);
                      if ( (v263 & 0x400000) != 0 && (*((_DWORD *)ThreadDesktopWindow + 95) & 0x40000000) == 0 )
                      {
                        LODWORD(v263) = v263 & 0xFFBFFFFF;
                        *(_DWORD *)(v262 + 36) = v263;
                      }
                      MiPWindowFlags = GetMiPWindowFlags(ThreadDesktopWindow, v263);
                      SetMiPWindowFlags(ThreadDesktopWindow, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
                      if ( ((v357.m256i_i32[2] - 578) & 0xFFFFFFFB) != 0 )
                      {
                        if ( ((v357.m256i_i32[2] - 579) & 0xFFFFFFFB) == 0 )
                          **(_DWORD **)(a1 + 1512) &= ~8u;
                      }
                      else
                      {
                        v265 = 0;
                        if ( v357.m256i_i32[2] == 578 )
                          v265 = 8;
                        **(_DWORD **)(a1 + 1512) = v265 | **(_DWORD **)(a1 + 1512) & 0xFFFFFFF7;
                      }
                    }
                    else
                    {
                      xxxSkipSysMsgEx(v254, (struct tagQMSG *)&v356, 1);
                    }
                  }
                  if ( IsPointerMessageTouchpad((struct tagTHREADINFO *)a1, v357.m256i_u64[3], v126) )
                  {
                    if ( !v295[1] && !ShouldReceiveTouchpadMessages((const struct tagTHREADINFO *)a1, v357.m256i_i64[0]) )
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
                    if ( v295[0] == 595 )
                      v301 = (void *)-1LL;
                  }
                  goto LABEL_342;
                }
                EtwTraceBeginPointerMessageRetrieve(NextSysMsg, v357.m256i_u16[8]);
                v387[0] = *(_OWORD *)NextSysMsg;
                v387[1] = *((_OWORD *)NextSysMsg + 1);
                v387[2] = *((_OWORD *)NextSysMsg + 2);
                v387[3] = *((_OWORD *)NextSysMsg + 3);
                v387[4] = *((_OWORD *)NextSysMsg + 4);
                v387[5] = *((_OWORD *)NextSysMsg + 5);
                v387[6] = *((_OWORD *)NextSysMsg + 6);
                v387[7] = *((_OWORD *)NextSysMsg + 7);
                v387[8] = *((_OWORD *)NextSysMsg + 8);
                v387[9] = *((_OWORD *)NextSysMsg + 9);
                v388 = *((_QWORD *)NextSysMsg + 20);
                v256 = xxxRetrievePointerInputMessage(
                         a1,
                         *(__int64 *)v319,
                         v127,
                         a5,
                         1,
                         0,
                         (int *)&v295[1],
                         NextSysMsg,
                         (__int64 *)&ThreadDesktopWindow,
                         v295,
                         &v302,
                         (unsigned __int64 *)&v301,
                         &v303,
                         v317);
                InputTraceLogging::Pointer::RetrieveMessage((__int64)v387, 0, v256, v257);
                EtwTraceEndPointerMessageRetrieve(v387, v357.m256i_u16[8], v357.m256i_u32[2]);
                v258 = ThreadDesktopWindow;
                if ( ThreadDesktopWindow )
                  Win32HM_ExchangeThreadLock<1>((__int64)ThreadDesktopWindow, (__int64)v330);
                v259 = v256 - 1;
                if ( !v259 )
                  goto LABEL_740;
                v260 = v259 - 1;
                if ( !v260 )
                {
                  if ( v303 )
                  {
                    v318 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
                    Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v350, v318);
                  }
                  goto LABEL_814;
                }
                v261 = v260 - 1;
                if ( v261 )
                {
                  *v317 = 0LL;
                  if ( v261 == 1 )
                    goto LABEL_34;
                }
                else
                {
                  xxxDefPointerProc((__int64)v258, v357.m256i_u32[2], v357.m256i_u16[8], v357.m256i_u64[3]);
                  *v317 = 0LL;
                }
                goto LABEL_274;
              }
              v146 = v357.m256i_i32[2] - 744;
              v145 = v357.m256i_i32[2] == 744;
            }
            if ( v145 )
              goto LABEL_772;
            v147 = v146 - 1;
            if ( !v147 )
              goto LABEL_772;
            v148 = v147 - 1;
            if ( !v148 || (unsigned int)(v148 - 1) < 2 )
              goto LABEL_772;
            goto LABEL_482;
          }
          if ( v357.m256i_i32[2] == 586 )
            goto LABEL_408;
          if ( v357.m256i_i32[2] <= 0x11Bu )
            break;
          switch ( v357.m256i_i32[2] )
          {
            case 0x20A:
            case 0x20E:
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0x400) != 0
                && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
              {
                goto LABEL_814;
              }
              if ( (unsigned int)IsInsideMenuLoop(a1) )
                goto LABEL_274;
              if ( (DWORD1(v361) & 0x100000) != 0 )
              {
                v130 = *(struct tagWND **)(*(_QWORD *)(a1 + 464) + 120LL);
                ThreadDesktopWindow = v130;
              }
              else
              {
                if ( !ThreadDesktopWindow || (v131 = 1, !IsCompositionInputWindowForHitTest(ThreadDesktopWindow, v129)) )
                  v131 = 0;
                if ( v131 )
                {
                  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(ThreadDesktopWindow, v129) )
                    goto LABEL_274;
                }
                else
                {
                  ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL);
                }
                Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
                  v353,
                  (__int64)ThreadDesktopWindow);
                v132 = xxxDCEWindowHitTest(
                         ThreadDesktopWindow,
                         512,
                         v357.m256i_i64[2],
                         v357.m256i_i64[3],
                         (struct tagPOINT)v360,
                         (__int64)&v304,
                         4 * (unsigned int)v131 + 9);
                ThreadDesktopWindow = (struct tagWND *)HMValidateHandleNoSecure((__int64)v132, 1);
                v133 = (struct tagWND *)HMValidateHandleNoSecure((__int64)v132, 1);
                InputTraceLogging::Mouse::SecondaryHitTest(
                  (const struct tagQMSG *)&v356,
                  (const struct tagPOINT *)&v360,
                  v133);
                Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v353);
                v130 = ThreadDesktopWindow;
              }
              if ( !v130 )
                goto LABEL_274;
              Win32HM_ExchangeThreadLock<1>((__int64)v130, (__int64)v330);
              v134 = *((_QWORD *)ThreadDesktopWindow + 2);
              v303 = v134 != v335;
              if ( v134 != v331 )
              {
                v135 = *((_QWORD *)ThreadDesktopWindow + 2);
                if ( *(_QWORD *)(v135 + 464) != *(_QWORD *)(a1 + 464) )
                  goto LABEL_274;
                if ( !v329 )
                {
                  v329 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
                  Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v348, (struct _W32THREAD *)v135);
                }
              }
              v127 = v306;
              v136 = MiPCheckMsgFilter(NextSysMsg, v295[0], (unsigned int)v306, a5);
              LOBYTE(i) = v298;
              if ( v136 )
              {
                v137 = ThreadDesktopWindow;
                v138 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v319);
                LOBYTE(i) = v298;
                if ( v138 )
                {
                  if ( v303 )
                    goto LABEL_814;
                  if ( NextSysMsg && (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg) )
                  {
                    if ( (*((_DWORD *)NextSysMsg + 25) & 0x400) != 0 )
                    {
                      memset_0(v369, 0, 0xA8uLL);
                      if ( ShouldGenerateMipMessage((struct tagTHREADINFO *)a1, NextSysMsg, v137)
                        && (unsigned int)GeneratePointerMessageFromMouse(
                                           (struct tagQMSG *)v369,
                                           v295[0],
                                           NextSysMsg,
                                           v137,
                                           v139) )
                      {
                        v356 = *(_OWORD *)v369;
                        v357 = *(__m256i *)&v369[16];
                        v358 = v370;
                        v359 = v371;
                        v360 = v372;
                        v361 = v373;
                        v362 = v374;
                        v363 = v375;
                        v364 = v376;
                        v365 = v377;
                        v126 = 1;
                        v311 = 1;
                        if ( v295[1] )
                          *((_DWORD *)NextSysMsg + 25) &= ~0x400u;
                        goto LABEL_736;
                      }
                      if ( v295[1] )
                      {
                        *((_DWORD *)NextSysMsg + 25) &= ~0x400u;
                        goto LABEL_452;
                      }
LABEL_454:
                      MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(a1 + 464));
                      v302 = v357.m256i_i64[2] | MouseKeyFlags;
                      v301 = (void *)v357.m256i_i64[3];
                      v300.x = v357.m256i_i16[12];
                      v300.y = v357.m256i_i16[13];
                      PhysicalToLogicalDPIPointWithHitTest(&v300, &v300, 0LL, ThreadDesktopWindow);
                      v301 = (void *)((LOWORD(v300.y) << 16) | LOWORD(v300.x));
                      *(struct tagPOINT *)((char *)&v358 + 4) = v300;
                      v366[0] = (__int64)v300;
                      if ( ThreadDesktopWindow )
                        v366[1] = *(_QWORD *)ThreadDesktopWindow;
                      else
                        v366[1] = 0LL;
                      LODWORD(v367) = 0;
                      *((_QWORD *)&v367 + 1) = *((_QWORD *)&v359 + 1);
                      LODWORD(v368) = v357.m256i_i32[4];
                      if ( !v295[1] || (v312 = 1, !(unsigned int)xxxCallCtfHook(7LL, 0LL, v295[0], (__int128 *)v366)) )
                      {
                        if ( ((*(_DWORD *)(a1 + 712) | *(_DWORD *)(**(_QWORD **)(a1 + 496) + 16LL)) & 0x100) == 0
                          || (v312 = 1, !xxxCallMouseHook(v295[0], (__int64)v366, v295[1])) )
                        {
                          if ( (unsigned int)PsGetWin32KFilterSet() != 5
                            || (v144 = *((_QWORD *)PtiCurrent(v143) + 64),
                                v308 = 0,
                                !(v308 = *(_QWORD *)(v144 + 248) != 0LL))
                            || !xxxClientCallLocalMouseHooks(v295[0], (__int64)v366, v295[1]) )
                          {
                            if ( !v312
                              || !v295[1]
                              || ((*(_BYTE *)(a1 + 712) | *(_BYTE *)(**(_QWORD **)(a1 + 496) + 16LL)) & 0x40) == 0 )
                            {
                              goto LABEL_342;
                            }
                            v114 = v295[0];
                            v113 = v366;
                            v115 = 6LL;
                            goto LABEL_341;
                          }
                        }
                      }
LABEL_274:
                      v95 = v297;
                      goto LABEL_275;
                    }
                    if ( !v295[1] )
                      goto LABEL_454;
                    if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)NextSysMsg + 6)) )
                    {
                      if ( (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124) )
                      {
                        v140 = *(_DWORD **)(a1 + 1512);
                        if ( v140 )
                        {
                          if ( (*v140 & 2) == 0 && (*v140 & 4) == 0 )
                            goto LABEL_671;
                        }
                      }
                      v141 = *(_DWORD **)(a1 + 1512);
                      if ( v141 )
                        *v141 &= ~2u;
                    }
                  }
LABEL_452:
                  if ( v295[1] )
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
                  goto LABEL_454;
                }
              }
              break;
            case 0x238:
              goto LABEL_125;
            case 0x240:
LABEL_121:
              if ( !ThreadDesktopWindow )
                goto LABEL_274;
              v62 = (char *)*((_QWORD *)ThreadDesktopWindow + 5);
              if ( v62[20] < 0 || v62[19] < 0 || (v62[31] & 0x18) != 0x10 )
                goto LABEL_274;
              goto LABEL_125;
            case 0x245:
            case 0x246:
            case 0x247:
            case 0x249:
              goto LABEL_408;
            default:
LABEL_482:
              v300.x = v357.m256i_i16[12];
              v300.y = v357.m256i_i16[13];
              v304 = 1;
              if ( (BYTE4(v361) & 0x20) == 0 && (DWORD1(v361) & 0x8000000) == 0
                || !ThreadDesktopWindow
                || (v45 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 456LL) + 268LL) >> 8,
                    LOWORD(v45) = (*(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 288LL) >> 8) ^ v45,
                    (v45 & 0x1FF) != 0) )
              {
                v149 = (int)ThreadDesktopWindow;
                if ( !ThreadDesktopWindow
                  || (v150 = IsCompositionInputWindowForHitTest(ThreadDesktopWindow, v45),
                      v61 = v357.m256i_i32[2],
                      v151 = 1,
                      !v150) )
                {
                  v151 = 0;
                }
                v321 = v151;
                v152 = *(_QWORD *)(a1 + 464);
                v153 = *(HWND **)(v152 + 112);
                if ( v153 )
                {
                  ThreadDesktopWindow = *(struct tagWND **)(v152 + 112);
                  InputTraceLogging::Mouse::RedirectForCapture((const struct tagQMSG *)&v356, *v153, v61, v149);
                }
                else
                {
                  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(v344);
                  if ( v151 )
                  {
                    v156 = ThreadDesktopWindow;
                  }
                  else
                  {
                    v156 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v155, v154)
                                                                                 + 18696)
                                                                     + 488LL)
                                                         + 8LL)
                                             + 24LL);
                    Win32HM_LockIntoThread<1>(a1, (__int64)v156, (__int64 *)v344);
                  }
                  if ( (unsigned int)IsThreadDesktopComposed((const struct tagTHREADINFO *)a1) )
                  {
                    *(_QWORD *)v369 = v157;
                    *(_OWORD *)&v369[8] = *(_OWORD *)&v357.m256i_u64[2];
                    *(_QWORD *)&v369[24] = &v304;
                    *(_DWORD *)&v369[32] = v158;
                    v369[36] = 0;
                    *(_WORD *)&v369[37] = 0;
                    v369[39] = 0;
                    *(_QWORD *)&v369[40] = (char *)&v360 + 8;
                    v370 = 0uLL;
                    v159 = (__int64)xxxDCEWindowHitTestIndirect(
                                      v156,
                                      (struct tagPOINT)v360,
                                      0,
                                      (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v369);
                    if ( v159 && (_BYTE)v370 )
                    {
                      v357.m256i_i64[3] = *(_QWORD *)&v369[16];
                      DWORD1(v358) = *(__int16 *)&v369[16];
                      DWORD2(v358) = *(__int16 *)&v369[18];
                      v300 = *(struct tagPOINT *)((char *)&v358 + 4);
                    }
                  }
                  else
                  {
                    v159 = xxxWindowHitTest((__int64)v156, *(_QWORD *)&v300, (__int64)&v304, v158);
                  }
                  v160 = (struct tagWND *)HMValidateHandleNoSecure(v159, 1);
                  InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)&v356, &v300, v160);
                  if ( !v151 )
                    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v344);
                  ThreadDesktopWindow = (struct tagWND *)HMValidateHandleNoSecure(v159, 1);
                  if ( !ThreadDesktopWindow )
                  {
                    v162 = *(_QWORD *)(*(_QWORD *)(a1 + 488) + 8LL);
                    ThreadDesktopWindow = *(struct tagWND **)(v162 + 24);
                    if ( !ThreadDesktopWindow )
                      ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v162, v161)
                                                                                                  + 18696)
                                                                                      + 488LL)
                                                                          + 8LL)
                                                              + 24LL);
                  }
                  v163 = 0;
                  if ( (unsigned int)IsMiPActive(a1, 0LL) )
                  {
                    v164 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 488LL);
                    if ( v164 )
                    {
                      v165 = (struct tagWND *)ValidateHwnd(v164);
                      if ( v165 )
                      {
                        v166 = *(_QWORD *)(a1 + 464);
                        v167 = *((_QWORD *)v165 + 2);
                        if ( *(_QWORD *)(v167 + 464) == v166 || *(_QWORD *)(v167 + 456) == *(_QWORD *)(a1 + 456) )
                        {
                          ThreadDesktopWindow = v165;
                          v304 = 1;
                          *(_DWORD *)(v166 + 156) = 0;
                          v163 = 1;
                        }
                      }
                    }
                  }
                  if ( !v163 )
                    *(_DWORD *)(*(_QWORD *)(v332 + 464) + 156LL) = v304 != 1;
                  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v344);
                }
                if ( ThreadDesktopWindow == *(struct tagWND **)(*(_QWORD *)(a1 + 464) + 112LL) )
                {
                  v168 = PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 464LL));
                  if ( (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)v169 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v168 + 456) + 268LL) >> 8)) & 0x1FF) != 0
                    || (unsigned int)IsOleDragDropCaptureWindow(v169) )
                  {
                    v300 = (struct tagPOINT)v360;
                    PhysicalToLogicalInPlacePointWithParent(ThreadDesktopWindow, (int *)&v300, (int *)&v360 + 2);
                    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
                      || (v170 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                    {
                      v170 = 0;
                    }
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                      || (v171 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                    {
                      v171 = 0;
                    }
                    if ( v170 || v171 )
                    {
                      v172 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                      LODWORD(v294) = v300.y;
                      LODWORD(v292) = v300.x;
                      LODWORD(v290) = DWORD1(v360);
                      LODWORD(v289) = v360;
                      WPP_RECORDER_AND_TRACE_SF_dddd(
                        *((_QWORD *)WPP_GLOBAL_Control + 3),
                        v170,
                        v171,
                        *(_QWORD *)(v172 + 69152),
                        5u,
                        0x14u,
                        0x22u,
                        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                        v289,
                        v290,
                        v292,
                        v294);
                    }
                    v301 = (void *)((LOWORD(v300.y) << 16) | LOWORD(v300.x));
                    *(struct tagPOINT *)((char *)&v358 + 4) = v300;
                    NextSysMsg = v316;
                  }
                }
              }
              Win32HM_ExchangeThreadLock<1>((__int64)ThreadDesktopWindow, (__int64)v330);
              if ( (unsigned int)CheckCrossThreadInput(
                                   (struct tagTHREADINFO **)ThreadDesktopWindow,
                                   NextSysMsg,
                                   &v303,
                                   (int *)&v295[1],
                                   v317) )
                goto LABEL_814;
              if ( v303 )
              {
                v175 = *((_QWORD *)ThreadDesktopWindow + 2);
                if ( *(_QWORD *)(v175 + 464) != *(_QWORD *)(a1 + 464) )
                  goto LABEL_530;
                if ( !v307 )
                {
                  v307 = *((_QWORD *)ThreadDesktopWindow + 2);
                  Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v347, (struct _W32THREAD *)v175);
                }
              }
              else if ( (WORD2(v361) & 0x800) != 0
                     && !UIPrivilegeIsolation::CheckAccess(
                           (UIPrivilegeIsolation *)&v362,
                           (const struct tagUIPI_INFO *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 456LL)
                                                       + 864LL),
                           v174) )
              {
                EtwTraceUIPIMsgError(
                  0LL,
                  *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 456LL),
                  v295[0],
                  v357.m256i_i64[2],
                  v357.m256i_i64[3]);
LABEL_530:
                v176 = W32GetUserSessionState(v173, v175);
                zzzSetCursor(*(struct tagCURSOR **)(v176 + 21912));
                goto LABEL_274;
              }
              v177 = (unsigned __int64)v300;
              v178 = *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 464LL);
              v179 = *(_DWORD *)(v178 + 156);
              if ( v179 && (v180 = (struct tagWND *)(unsigned int)(v179 - 2), (_DWORD)v180) )
              {
                if ( (_DWORD)v180 != 1 )
                  goto LABEL_548;
                v181 = *((_QWORD *)ThreadDesktopWindow + 5);
                if ( (*(_BYTE *)(v181 + 26) & 0x40) != 0 )
                  v182 = *(_DWORD *)(v181 + 96) - v300.x;
                else
                  v182 = v300.x - *(_DWORD *)(v181 + 88);
                v300.x = v182;
                v178 = (unsigned int)(v300.y - *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 92LL));
              }
              else
              {
                v180 = ThreadDesktopWindow;
                v183 = *((_QWORD *)ThreadDesktopWindow + 5);
                if ( (*(_BYTE *)(v183 + 26) & 0x40) != 0 )
                  v184 = *(_DWORD *)(v183 + 112) - v300.x;
                else
                  v184 = v300.x - *(_DWORD *)(v183 + 104);
                v300.x = v184;
                v178 = (unsigned int)(v300.y - *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 108LL));
              }
              v300.y = v178;
LABEL_548:
              if ( !v303 && *(_QWORD *)(a1 + 464) == *(_QWORD *)(W32GetUserSessionState(v178, v180) + 19208) )
              {
                v185 = *(_QWORD *)(*(_QWORD *)(a1 + 488) + 192LL) != (_QWORD)ThreadDesktopWindow;
                if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
                  && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v187, v186) )
                {
                  NCHit = xxxFindNCHitEx((__int64 *)ThreadDesktopWindow, v304, v300);
                }
                else
                {
                  NCHit = FindNCHitEx(ThreadDesktopWindow, v304, v300);
                }
                if ( v295[0] != 512 || v185 || *(_DWORD *)(*(_QWORD *)(a1 + 488) + 200LL) != NCHit )
                  xxxTrackMouseMove(ThreadDesktopWindow, (struct tagWND *)NCHit);
                if ( !v185 )
                {
                  v189 = *(_QWORD *)(a1 + 488);
                  if ( (*(_DWORD *)(v189 + 48) & 0x40) != 0
                    && (v295[0] != 512 || !PtInRect((_DWORD *)(v189 + 204), v177)) )
                  {
                    ResetMouseHover((struct tagDESKTOP *)v189, (struct tagPOINT)v177);
                  }
                }
                NextSysMsg = v316;
              }
              v190 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v319);
              LOBYTE(i) = v298;
              if ( v190 )
              {
                v192 = 0;
                LODWORD(v323) = 0;
                if ( v295[0] == 513 )
                {
                  v67 = (unsigned __int8)IsMessageInputSourceTouch(&v356) == 0;
                  v193 = *(_QWORD *)(a1 + 464);
                  if ( v67 )
                    *(_DWORD *)(v193 + 436) &= ~0x800000u;
                  else
                    *(_DWORD *)(v193 + 436) |= 0x800000u;
                  v194 = IsMessageInputSourcePen(&v356);
                  v191 = *(_QWORD *)(v332 + 464);
                  v195 = *(_DWORD *)(v191 + 436);
                  if ( v194 )
                    v196 = v195 | 0x1000000;
                  else
                    v196 = v195 & 0xFEFFFFFF;
                  *(_DWORD *)(v191 + 436) = v196;
LABEL_581:
                  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 17) + 8LL) + 8LL) & 8) != 0
                    || *(_DWORD *)(*(_QWORD *)(a1 + 464) + 156LL) == 1
                    || (unsigned int)IsMenuStarted(a1) )
                  {
                    v192 = 1;
                    LODWORD(v323) = 1;
                    v197 = *(_QWORD *)(a1 + 464);
                    if ( (unsigned int)v358 <= *(_DWORD *)(v197 + 168)
                      && !*(_DWORD *)(W32GetUserSessionState(v197, v191) + 16264) )
                    {
                      v199 = ThreadDesktopWindow ? *(_QWORD *)ThreadDesktopWindow : 0LL;
                      v200 = *(_QWORD *)(a1 + 464);
                      if ( v199 == *(_QWORD *)(v200 + 176)
                        && v295[0] == *(_DWORD *)(v200 + 160)
                        && (v295[0] != 523 || v357.m256i_i16[9] == *(_WORD *)(v200 + 164)) )
                      {
                        v201 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v200, v198) + 19904) + 2040LL);
                        v339 = *(_DWORD *)(*(_QWORD *)(a1 + 464) + 184LL) - (((int)v201 - HIDWORD(v201)) >> 1);
                        v202 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v339, HIDWORD(v201)) + 19904) + 2044LL);
                        v340 = *(_DWORD *)(*(_QWORD *)(a1 + 464) + 188LL) - (((int)v202 - HIDWORD(v202)) >> 1);
                        v203 = W32GetUserSessionState(v340, HIDWORD(v202));
                        v204 = *(_QWORD *)(a1 + 464);
                        v205 = *(int *)(*(_QWORD *)(v203 + 19904) + 2040LL);
                        v341 = *(_DWORD *)(v204 + 184) + (((int)v205 - HIDWORD(v205)) >> 1);
                        v342 = *(_DWORD *)(*(_QWORD *)(a1 + 464) + 188LL)
                             + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v204, HIDWORD(v205)) + 19904) + 2044LL)
                             / 2;
                        if ( PtInRect(&v339, *(unsigned __int64 *)((char *)&v358 + 4)) )
                        {
                          v295[0] += 2;
                          v192 = 2;
                          LODWORD(v323) = 2;
                        }
                      }
                    }
                  }
                  goto LABEL_595;
                }
                if ( v295[0] != 514 )
                {
                  if ( v295[0] == 516 )
                    goto LABEL_581;
                  if ( v295[0] != 517 )
                  {
                    if ( v295[0] == 519 )
                      goto LABEL_581;
                    if ( v295[0] != 520 )
                    {
                      if ( v295[0] != 523 )
                      {
                        if ( v295[0] != 524 )
                          goto LABEL_605;
                        goto LABEL_595;
                      }
                      goto LABEL_581;
                    }
                  }
                }
LABEL_595:
                v206 = *(_QWORD *)(a1 + 464);
                v207 = *(_DWORD *)(v206 + 436);
                if ( (v207 & 8) != 0 )
                  *(_DWORD *)(v206 + 436) = v207 | 4;
                if ( v295[0] - 514 <= 0xA )
                {
                  v208 = 1097;
                  if ( _bittest(&v208, v295[0] - 514) )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(a1 + 464) + 168LL) && ((HIDWORD(v362) - 4) & 0xFFFFFFFB) == 0 )
                    {
                      if ( HIDWORD(v362) == 4 )
                        TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(300LL, 180LL, 5LL, 1LL);
                      else
                        TouchTimeFromCPLValue = GetPenDoubleClickTime();
                      *(_DWORD *)(*(_QWORD *)(a1 + 464) + 168LL) = v365 + TouchTimeFromCPLValue;
                    }
                  }
                }
LABEL_605:
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 464LL) + 156LL) == 1 )
                {
                  v295[0] -= 352;
                  v302 = (unsigned int)v304;
                }
                v210 = MiPCheckMsgFilter(NextSysMsg, v295[0], (unsigned int)v306, a5);
                LOBYTE(i) = v298;
                if ( v210 )
                {
                  if ( v303 )
                    goto LABEL_814;
                  if ( v295[0] - 512 > 0xE
                    || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0x8000) == 0 )
                  {
                    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0x100000) != 0 )
                    {
                      _InterlockedAnd((volatile signed __int32 *)(a1 + 520), 0xFFEFFFFF);
                      xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
                    }
                    v366[0] = *(_QWORD *)((char *)&v358 + 4);
                    if ( ThreadDesktopWindow )
                      v366[1] = *(_QWORD *)ThreadDesktopWindow;
                    else
                      v366[1] = 0LL;
                    LODWORD(v367) = v304;
                    *((_QWORD *)&v367 + 1) = *((_QWORD *)&v359 + 1);
                    LODWORD(v368) = v357.m256i_i32[4];
                    if ( v295[1] )
                    {
                      if ( v295[0] != 512 && v295[0] != 160 )
                      {
                        v312 = 1;
                        if ( (unsigned int)xxxCallCtfHook(7LL, 0LL, v295[0], (__int128 *)v366) )
                          goto LABEL_274;
                      }
                    }
                    if ( ((*(_DWORD *)(a1 + 712) | *(_DWORD *)(**(_QWORD **)(a1 + 496) + 16LL)) & 0x100) != 0 )
                    {
                      v312 = 1;
                      if ( xxxCallMouseHook(v295[0], (__int64)v366, v295[1]) )
                        goto LABEL_274;
                    }
                    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
                    {
                      v212 = *((_QWORD *)PtiCurrent(v211) + 64);
                      v309 = 0;
                      v309 = *(_QWORD *)(v212 + 248) != 0LL;
                      if ( v309 )
                      {
                        if ( xxxClientCallLocalMouseHooks(v295[0], (__int64)v366, v295[1]) )
                          goto LABEL_274;
                      }
                    }
                    if ( (*(_DWORD *)(a1 + 1360) & 0x2000LL) == 0 && ((v304 + 2) & 0xFFFFFFFD) == 0 )
                    {
                      CompositeAppFrameWindowOrSelf = 0LL;
                      if ( v321 )
                      {
                        if ( (unsigned int)IsIndependentInputWindow(ThreadDesktopWindow) )
                          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
                        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                        CompositeAppFrameWindowOrSelf = (struct tagTHREADINFO **)TopLevelWindow;
                        if ( TopLevelWindow )
                        {
                          CompositeAppFrameWindowOrSelf = (struct tagTHREADINFO **)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(
                                                                                     TopLevelWindow,
                                                                                     v216);
                          Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(
                            v354,
                            a1,
                            (__int64)CompositeAppFrameWindowOrSelf);
                          v217 = 0LL;
                          if ( CompositeAppFrameWindowOrSelf )
                            v217 = *CompositeAppFrameWindowOrSelf;
                          xxxSendTransformableMessageTimeout(
                            CompositeAppFrameWindowOrSelf,
                            32LL,
                            (unsigned __int64)v217,
                            (unsigned __int16)v304 | (v357.m256i_u16[4] << 16),
                            0,
                            0,
                            0LL,
                            1u,
                            1);
                          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v354);
                        }
                      }
                      if ( !CompositeAppFrameWindowOrSelf )
                      {
                        if ( ThreadDesktopWindow )
                          v218 = *(_QWORD *)ThreadDesktopWindow;
                        else
                          v218 = 0LL;
                        xxxSendTransformableMessageTimeout(
                          (struct tagTHREADINFO **)ThreadDesktopWindow,
                          32LL,
                          v218,
                          (unsigned __int16)v304 | (v357.m256i_u16[4] << 16),
                          0,
                          0,
                          0LL,
                          1u,
                          1);
                      }
                      if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 464) + 88LL) == NextSysMsg
                        && NextSysMsg
                        && (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg)
                        && (*((_DWORD *)NextSysMsg + 25) & 0x400) != 0
                        && (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124)
                        && (unsigned int)IsMiPMouseMessage(*((unsigned int *)NextSysMsg + 6)) )
                      {
                        memset_0(v369, 0, 0xA8uLL);
                        GeneratePointerMessageFromMouse(
                          (struct tagQMSG *)v369,
                          v295[0],
                          NextSysMsg,
                          ThreadDesktopWindow,
                          v295[1]);
                        SetMiPPromotion(*((struct tagTHREADINFO **)ThreadDesktopWindow + 2), *(int *)&v369[24]);
                      }
                      goto LABEL_274;
                    }
                    if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 464) + 88LL) != NextSysMsg )
                      goto LABEL_814;
                    memset_0(v369, 0, 0x60uLL);
                    v220 = *(_OWORD *)v369;
                    v221 = *(_OWORD *)&v369[16];
                    v222 = *(_OWORD *)&v369[32];
                    v223 = v370;
                    v323 = v371;
                    *(_OWORD *)BugCheckParameter2 = v372;
                    v224 = 0;
                    v378 = v356;
                    v379 = v357;
                    v380 = v358;
                    v381 = v359;
                    v382 = v360;
                    v383 = v361;
                    v225 = v385;
                    v384 = v362;
                    v385[0] = v363;
                    v385[1] = v364;
                    v386 = v365;
                    if ( NextSysMsg && (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg) )
                    {
                      v379.m256i_i32[2] = v295[0];
                      v379.m256i_i64[2] = v302;
                      if ( (*((_DWORD *)NextSysMsg + 25) & 0x400) != 0 )
                      {
                        memset_0(v369, 0, 0xA8uLL);
                        if ( ShouldGenerateMipMessage((struct tagTHREADINFO *)a1, NextSysMsg, ThreadDesktopWindow) )
                        {
                          v226 = *(_QWORD *)(a1 + 1512);
                          if ( v226 && (*(_DWORD *)v226 & 1) != 0 )
                          {
                            v220 = *(_OWORD *)(v226 + 24);
                            v221 = *(_OWORD *)(v226 + 40);
                            v222 = *(_OWORD *)(v226 + 56);
                            v223 = *(_OWORD *)(v226 + 72);
                            v323 = *(_OWORD *)(v226 + 88);
                            *(_OWORD *)BugCheckParameter2 = *(_OWORD *)(v226 + 104);
                            v224 = 1;
                          }
                          if ( (unsigned int)GeneratePointerMessageFromMouse(
                                               (struct tagQMSG *)v369,
                                               v295[0],
                                               NextSysMsg,
                                               ThreadDesktopWindow,
                                               v295[1]) )
                          {
                            v356 = *(_OWORD *)v369;
                            v357 = *(__m256i *)&v369[16];
                            v358 = v370;
                            v359 = v371;
                            v360 = v372;
                            v361 = v373;
                            v225 = &v363;
                            v362 = v374;
                            v363 = v375;
                            v364 = v376;
                            v365 = v377;
                            v311 = 1;
                            v227 = *(_DWORD *)&v369[24];
                            if ( *(_DWORD *)&v369[24] == 582 && IsMiPEnabledForWindow((__int64)ThreadDesktopWindow) )
                            {
                              if ( v225 )
                                v225 = *(__int128 **)ThreadDesktopWindow;
                              else
                                v225 = 0LL;
                              *(_QWORD *)(*(_QWORD *)(a1 + 464) + 488LL) = v225;
                            }
                            else if ( ((v227 - 579) & 0xFFFFFFFB) == 0 )
                            {
                              *(_QWORD *)(*(_QWORD *)(a1 + 464) + 488LL) = 0LL;
                            }
                          }
                        }
                        if ( v295[1] )
                        {
                          *((_DWORD *)NextSysMsg + 25) &= ~0x400u;
                          goto LABEL_674;
                        }
LABEL_713:
                        v126 = v311;
                        goto LABEL_714;
                      }
                      if ( !v295[1] )
                        goto LABEL_713;
                      if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)NextSysMsg + 6)) )
                      {
                        if ( (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124) )
                        {
                          v228 = *(unsigned int **)(a1 + 1512);
                          if ( v228 )
                          {
                            v225 = (__int128 *)*v228;
                            if ( ((unsigned __int8)v225 & 2) == 0 && ((unsigned __int8)v225 & 4) == 0 )
                              goto LABEL_671;
                          }
                        }
                        v229 = *(_DWORD **)(a1 + 1512);
                        if ( v229 )
                          *v229 &= ~2u;
                      }
                    }
LABEL_674:
                    if ( !v295[1] )
                      goto LABEL_713;
                    v230 = W32GetUserSessionState(v225, v219);
                    if ( (v379.m256i_i32[2] == 512 || v379.m256i_i32[2] == 160)
                      && (ThreadDesktopWindow ? (v231 = *(_QWORD *)ThreadDesktopWindow) : (v231 = 0LL),
                          v231 != *(_QWORD *)(v230 + 16336)
                       && (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124)) )
                    {
                      v232 = HMValidateHandleNoSecure(*(_QWORD *)(v230 + 16336), 1);
                      v233 = (struct tagWND *)v232;
                      if ( v232
                        && (unsigned int)IsMiPActive(*(_QWORD *)(v232 + 16), 0LL)
                        && (GetMiPWindowFlags(v233, v234) & 1) == 0 )
                      {
                        v235 = (struct tagQ **)*((_QWORD *)v233 + 2);
                        if ( v235 == (struct tagQ **)a1 )
                        {
                          v236 = *(_QWORD *)(a1 + 1512);
                          v237 = *(_OWORD *)(v236 + 24);
                          v238 = *(_OWORD *)(v236 + 40);
                          v239 = *(_OWORD *)(v236 + 56);
                          v240 = *(_OWORD *)(v236 + 72);
                          v241 = *(_OWORD *)(v236 + 88);
                          v242 = *(_OWORD *)(v236 + 104);
                          if ( v224 )
                          {
                            *(_OWORD *)(v236 + 24) = v220;
                            *(_OWORD *)(v236 + 40) = v221;
                            *(_OWORD *)(v236 + 56) = v222;
                            *(_OWORD *)(v236 + 72) = v223;
                            *(_OWORD *)(v236 + 88) = v323;
                            *(_OWORD *)(v236 + 104) = *(_OWORD *)BugCheckParameter2;
                          }
                          v243 = ((*(_DWORD *)(*(_QWORD *)(a1 + 1512) + 36LL) & 0xFFFFE1F7) << 16) | 1LL;
                          memset(&v369[24], 0, 24);
                          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v355, (__int64)v233);
                          FindTimer((__int64)v233, 65523LL, 2u, 1, 0LL);
                          if ( IsMiPEnabledForWindow((__int64)v233) )
                            xxxSendTransformableMessageTimeout(v244, 586LL, v243, 0LL, 0, 0, 0LL, 1u, 0);
                          if ( v224 )
                          {
                            v245 = *(_QWORD *)(a1 + 1512);
                            *(_OWORD *)(v245 + 24) = v237;
                            *(_OWORD *)(v245 + 40) = v238;
                            *(_OWORD *)(v245 + 56) = v239;
                            *(_OWORD *)(v245 + 72) = v240;
                            *(_OWORD *)(v245 + 88) = v241;
                            *(_OWORD *)(v245 + 104) = v242;
                          }
                          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v355);
                          NextSysMsg = v316;
                        }
                        else
                        {
                          PostEventMessageEx((struct tagTHREADINFO *)v235, v235[58], 0x15u, v233, 0, 0LL, 0LL, 0LL);
                        }
                      }
                      v246 = v311;
                      if ( v311 )
                      {
                        if ( ThreadDesktopWindow )
                          v247 = *(_QWORD *)ThreadDesktopWindow;
                        else
                          v247 = 0LL;
                        *(_QWORD *)(v230 + 16336) = v247;
                      }
                      else
                      {
                        *(_QWORD *)(v230 + 16336) = 0LL;
                      }
                    }
                    else
                    {
                      v246 = v311;
                    }
                    if ( !(_DWORD)v246 )
                    {
                      v248 = v192 - 1;
                      if ( v248 )
                      {
                        if ( v248 == 1 )
                          *(_DWORD *)(*(_QWORD *)(a1 + 464) + 168LL) = 0;
                      }
                      else
                      {
                        *(_DWORD *)(*(_QWORD *)(a1 + 464) + 160LL) = v357.m256i_i32[2];
                        v249 = (unsigned __int64)v357.m256i_i64[2] >> 16;
                        *(_WORD *)(*(_QWORD *)(a1 + 464) + 164LL) = v357.m256i_i16[9];
                        v250 = W32GetUserSessionState(v249, v246);
                        *(_DWORD *)(*(_QWORD *)(a1 + 464) + 168LL) = v358 + *(_DWORD *)(v250 + 14712);
                        if ( ThreadDesktopWindow )
                          v251 = *(_QWORD *)ThreadDesktopWindow;
                        else
                          v251 = 0LL;
                        *(_QWORD *)(*(_QWORD *)(a1 + 464) + 176LL) = v251;
                        *(_QWORD *)(*(_QWORD *)(a1 + 464) + 184LL) = *(_QWORD *)((char *)&v358 + 4);
                      }
                    }
                    v252 = (const struct tagQMSG *)&v378;
                    v126 = v311;
                    if ( !v311 )
                      v252 = (const struct tagQMSG *)&v356;
                    if ( (unsigned int)xxxMouseActivate(
                                         (struct tagTHREADINFO *)a1,
                                         (__int64)ThreadDesktopWindow,
                                         v252,
                                         v304) == 1 )
                    {
                      v19 = 1;
                      goto LABEL_274;
                    }
LABEL_714:
                    v19 = 1;
                    if ( v295[1] )
                    {
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
                      if ( v295[1] )
                      {
                        if ( v312 && ((*(_BYTE *)(a1 + 712) | *(_BYTE *)(**(_QWORD **)(a1 + 496) + 16LL)) & 0x40) != 0 )
                          xxxCallHook(6LL, v295[0], (__int64)v366, 5);
                      }
                    }
                    v312 = 0;
                    v301 = (void *)((LOWORD(v300.y) << 16) | LOWORD(v300.x));
                    if ( v295[0] >= 0x200 )
                      v302 = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 464));
                    if ( (v295[0] - 171 <= 2 || v295[0] - 523 <= 2) && !v126 )
                      v302 |= v357.m256i_u64[2];
                    v253 = *(_QWORD *)(a1 + 640);
                    if ( v304 == 5
                      && v295[1]
                      && v253
                      && (*(_DWORD *)(v253 + 8) & 0x100) != 0
                      && *(_QWORD *)v253
                      && (**(_DWORD **)v253 & 1) != 0 )
                    {
                      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                        (MenuStateOwnerLockxxxUnlock *)v338,
                        *(struct tagTHREADINFO ***)(a1 + 640));
                      if ( (unsigned int)xxxCallHandleMenuMessages(
                                           (_QWORD *)v253,
                                           (__int64 *)ThreadDesktopWindow,
                                           v295[0],
                                           v302,
                                           (unsigned __int64)v301) )
                      {
                        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v338);
                        goto LABEL_22;
                      }
                      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v338);
                    }
                    if ( !v126 )
                      goto LABEL_342;
                    v127 = v306;
LABEL_736:
                    v61 = v357.m256i_i32[2];
                    goto LABEL_737;
                  }
                }
              }
              break;
          }
        }
        if ( v357.m256i_i32[2] == 283 )
          goto LABEL_121;
        if ( v357.m256i_i32[2] == 35 )
        {
          v302 = 0LL;
          v301 = (void *)v357.m256i_i64[3];
          if ( !ThreadDesktopWindow || (v124 = *((_QWORD *)ThreadDesktopWindow + 2), v124 == a1) )
          {
            if ( !(unsigned int)MiPCheckMsgFilter(NextSysMsg, v295[0], (unsigned int)v306, a5) )
              goto LABEL_814;
LABEL_398:
            if ( v295[1] )
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
            goto LABEL_342;
          }
          if ( *(_QWORD *)(v124 + 464) == *(_QWORD *)(a1 + 464) )
          {
            v125 = v307;
            if ( !v307 )
            {
              v125 = *((_QWORD *)ThreadDesktopWindow + 2);
              Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v347, (struct _W32THREAD *)v124);
            }
            goto LABEL_815;
          }
          goto LABEL_274;
        }
        if ( v357.m256i_i32[2] != 254 )
          break;
LABEL_125:
        v301 = (void *)v357.m256i_i64[3];
        v302 = v357.m256i_u64[2];
        if ( !ThreadDesktopWindow )
          goto LABEL_274;
        if ( (unsigned int)CheckCrossThreadInput(
                             (struct tagTHREADINFO **)ThreadDesktopWindow,
                             NextSysMsg,
                             &v303,
                             (int *)&v295[1],
                             v317) )
          goto LABEL_814;
        if ( v303 )
          goto LABEL_274;
        if ( !v306 && a5 == -1 )
          goto LABEL_413;
        if ( v306 <= a5 )
        {
          if ( v295[0] >= v306 && v295[0] <= a5 )
            goto LABEL_413;
          v63 = 0;
          goto LABEL_412;
        }
        if ( v295[0] >= a5 )
        {
          LOBYTE(i) = v298;
          if ( v295[0] <= v306 )
            continue;
        }
        v63 = 1;
LABEL_412:
        LOBYTE(i) = v298;
        if ( v63 )
        {
LABEL_413:
          v128 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v319);
          LOBYTE(i) = v298;
          if ( v128 )
            goto LABEL_398;
        }
      }
      if ( v357.m256i_i32[2] == 255 )
        break;
      if ( v357.m256i_i32[2] == 256 )
        goto LABEL_135;
      if ( v357.m256i_i32[2] != 257 )
      {
        if ( v357.m256i_i32[2] == 258 )
          goto LABEL_192;
        if ( v357.m256i_i32[2] != 260 )
        {
          if ( v357.m256i_i32[2] != 261 )
          {
            if ( v357.m256i_i32[2] == 281 )
              goto LABEL_121;
            goto LABEL_482;
          }
          goto LABEL_168;
        }
LABEL_135:
        v320 = 1;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0x400) != 0
          && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
        {
          goto LABEL_814;
        }
        v302 = v357.m256i_u8[16];
        if ( !v295[1] || (WORD2(v361) & 0x8000) == 0 )
        {
          if ( v302 != 18 )
            *(_DWORD *)(*(_QWORD *)(a1 + 464) + 436LL) &= 0xFFFFFFF3;
          v64 = *(_BYTE *)(*(_QWORD *)(a1 + 464) + 284LL) & 0x10;
          if ( v302 == 44 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 464) + 284LL) & 0x10) != 0 )
            {
              if ( (*(_DWORD *)(a1 + 916) & 0x10) == 0 )
                goto LABEL_146;
            }
            else if ( (*(_DWORD *)(a1 + 916) & 0x20) == 0 )
            {
LABEL_146:
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
              if ( !v64 && (v357.m256i_i32[6] & 0xFF0000) != 0x10000LL )
              {
                v65 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 488) + 8LL) + 24LL);
                goto LABEL_151;
              }
              v66 = *(_QWORD *)(a1 + 464);
              v65 = *(struct tagWND **)(v66 + 128);
              v67 = v65 == 0LL;
              if ( v65 )
              {
                v65 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(*(const struct tagWND **)(v66 + 128), v25);
LABEL_151:
                v67 = v65 == 0LL;
              }
              if ( !v67 )
              {
                v68 = v363 != 1;
                Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, a1, (__int64)v65);
                xxxSnapWindow(v65, v68);
                Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
              }
              goto LABEL_22;
            }
          }
          if ( *(_DWORD *)(W32GetUserSessionState(16LL, v45) + 16304)
            && (!*(_DWORD *)(W32GetUserSessionState(v70, v69) + 14700)
             || (*(_BYTE *)(W32GetUserSessionState(v72, v71) + 14696) & 2) == 0) )
          {
            v73 = *(_BYTE *)(*(_QWORD *)(a1 + 464) + 284LL);
            v74 = v302 | 0x400;
            if ( (v73 & 0x10) == 0 )
              v74 = v302;
            v75 = v74;
            LODWORD(v75) = v74 | 0x200;
            if ( (v73 & 4) == 0 )
              v75 = v74;
            v76 = (unsigned int)v75;
            LODWORD(v76) = v75 | 0x100;
            if ( (v73 & 1) == 0 )
              v76 = (unsigned int)v75;
            v77 = (__int64 *)HotKeyToWindow(v76, v75);
            if ( v77 )
            {
              if ( *(_QWORD *)(a1 + 488) == *(_QWORD *)(v77[2] + 488) )
              {
                PostTransformableMessage(*(struct tagWND **)(*(_QWORD *)(a1 + 464) + 128LL), 0x112u, 0xF150uLL, *v77, 0);
LABEL_671:
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
                goto LABEL_22;
              }
            }
          }
        }
        if ( v302 == 231 )
        {
          *(_WORD *)(a1 + 914) = v357.m256i_i16[9];
          v357.m256i_i64[2] = 231LL;
        }
      }
LABEL_168:
      v78 = v357.m256i_i64[2];
      v302 = v357.m256i_u8[16];
      if ( v357.m256i_u8[16] == 231LL )
        v78 = 231LL;
      v357.m256i_i64[2] = v78;
      if ( !v295[1] || (WORD2(v361) & 0x8000) == 0 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v78, 231LL) + 14272) )
        {
          if ( (GetAppImeCompatFlags(0LL) & 0x800000) == 0 && v357.m256i_i8[26] == 41 )
          {
            if ( v295[1] )
            {
              v79 = *(_QWORD *)(a1 + 464);
              if ( (*(_BYTE *)(v79 + 284) & 0x15) == 0
                && (*(_BYTE *)(v79 + 302) & 0x40) == 0
                && (*(_BYTE *)(v79 + 303) & 1) == 0 )
              {
                if ( (ThreadDesktopWindow = *(struct tagWND **)(v79 + 120), (v80 = ThreadDesktopWindow) == 0LL)
                  && (ThreadDesktopWindow = *(struct tagWND **)(v79 + 128), (v80 = ThreadDesktopWindow) == 0LL)
                  || *((_QWORD *)v80 + 2) == a1 )
                {
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
                  if ( !v320 && ThreadDesktopWindow )
                  {
                    *(_QWORD *)v369 = *(_QWORD *)ThreadDesktopWindow;
                    *(_QWORD *)&v369[8] = 80LL;
                    memset(&v369[16], 0, 32);
                    xxxCallCtfHook(3LL, 0LL, 1LL, (__int128 *)v369);
                  }
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
      if ( v302 == 121 )
        v295[0] |= 4u;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 464) + 284LL) & 4) != 0 && v302 == 27 )
        v295[0] |= 4u;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 8) == 0 )
        v357.m256i_i64[3] &= ~0x2000000uLL;
LABEL_192:
      v302 = v357.m256i_u8[16];
      v81 = *(_QWORD *)(a1 + 464);
      v82 = *(struct tagWND **)(v81 + 120);
      ThreadDesktopWindow = v82;
      if ( !*(_QWORD *)(v81 + 120) )
      {
        v82 = *(struct tagWND **)(v81 + 128);
        ThreadDesktopWindow = v82;
        if ( !v82 )
          goto LABEL_274;
        if ( v295[0] - 256 <= 3 )
          v295[0] += 4;
      }
      Win32HM_ExchangeThreadLock<1>((__int64)v82, (__int64)v330);
      v83 = *((_QWORD *)ThreadDesktopWindow + 2);
      v303 = v83 != v335;
      if ( v83 != v331 )
      {
        if ( *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 464LL) != *(_QWORD *)(a1 + 464) )
          goto LABEL_274;
        if ( (unsigned int)IsInsideMenuLoop(a1) )
        {
          v84 = *(struct tagWND **)(**(_QWORD **)(a1 + 640) + 8LL);
        }
        else
        {
          v85 = *(_QWORD *)(a1 + 704);
          if ( v85 )
            v84 = *(struct tagWND **)(v85 + 16);
          else
            v84 = 0LL;
        }
        if ( v84 )
        {
          ThreadDesktopWindow = v84;
          v303 = *((_QWORD *)v84 + 2) != v346;
          Win32HM_ExchangeThreadLock<1>((__int64)v84, (__int64)v330);
        }
        if ( !v329 )
        {
          v329 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
          Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v348, v329);
        }
      }
      if ( !v306 && a5 == -1 )
        goto LABEL_217;
      if ( v306 <= a5 )
      {
        if ( v295[0] >= v306 && v295[0] <= a5 )
          goto LABEL_217;
        v86 = 0;
        goto LABEL_216;
      }
      if ( v295[0] >= a5 )
      {
        LOBYTE(i) = v298;
        if ( v295[0] <= v306 )
          continue;
      }
      v86 = 1;
LABEL_216:
      LOBYTE(i) = v298;
      if ( v86 )
      {
LABEL_217:
        v87 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v319);
        LOBYTE(i) = v298;
        if ( v87 )
        {
          if ( v303 )
            goto LABEL_814;
          if ( v295[1] )
          {
            if ( (WORD2(v361) & 0x8000) != 0 )
              goto LABEL_241;
            if ( !(unsigned int)IsInsideMenuLoop(a1) )
            {
              if ( v302 == 93 && v295[0] == 257 )
              {
                if ( ThreadDesktopWindow )
                  v88 = *(_QWORD *)ThreadDesktopWindow;
                else
                  v88 = 0LL;
                PostTransformableMessage(ThreadDesktopWindow, 0x7Bu, v88, -1LL, 0);
              }
              if ( v302 == 112 && v295[0] == 256 )
                PostMessage((int)ThreadDesktopWindow, 77, 0, 0);
            }
          }
          if ( v302 == 16 )
          {
            v89 = v357.m256i_i32[6] & 0x1000000;
            if ( !v320
              && (*(_BYTE *)(*(_QWORD *)(a1 + 464) + 320LL) & (unsigned __int8)((unsigned int)v89 != 0LL ? 1 : 4)) != 0
              && (unsigned int)IsDesktopApp(*(_QWORD *)(a1 + 456))
              && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 8) == 0 )
            {
              v357.m256i_i64[2] = (v89 != 0) + 160LL;
              goto LABEL_671;
            }
          }
          v325 = (1 << (2 * (v302 & 3))) & *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v302 >> 2)
                                                              + *(_QWORD *)(a1 + 464)
                                                              + 280);
          if ( v325 )
          {
            if ( !v295[1] )
              goto LABEL_247;
            if ( NextSysMsg )
              *((_QWORD *)NextSysMsg + 5) |= 0x40000000uLL;
          }
LABEL_241:
          if ( !v295[1] )
            goto LABEL_247;
          if ( (WORD2(v361) & 0x8000) != 0 || !NextSysMsg || (*(_DWORD *)(a1 + 1360) & 0x10000000) == 0 )
          {
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
LABEL_247:
            v90 = v315;
            goto LABEL_248;
          }
          v90 = (ULONG_PTR)xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 0);
          v315 = v90;
LABEL_248:
          v301 = (void *)v357.m256i_i64[3];
          v302 = v357.m256i_u64[2];
          if ( v325 )
            v301 = (void *)(v357.m256i_i64[3] | 0x40000000);
          if ( v295[0] == 257 || v295[0] == 261 )
            v301 = (void *)((unsigned __int64)v301 | 0x80000000);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 464) + 284LL) & 0x10) != 0 )
            v301 = (void *)((unsigned __int64)v301 | 0x20000000);
          if ( (unsigned int)IsMenuStarted(a1) )
            v301 = (void *)((unsigned __int64)v301 | 0x10000000);
          if ( (*(_DWORD *)(v91 + 436) & 0x4000) != 0 )
            v301 = (void *)((unsigned __int64)v301 | 0x8000000);
          if ( !v33 && !*(_QWORD *)(W32GetUserSessionState(v92, v91) + 12936) || (WORD2(v361) & 0x8000) != 0 )
            goto LABEL_288;
          if ( !v295[1] )
            goto LABEL_293;
          if ( (unsigned int)IsMenuStarted(a1)
            || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0x2000000) != 0
            || !ThreadDesktopWindow )
          {
LABEL_288:
            if ( !v295[1] )
            {
LABEL_293:
              LOBYTE(v93) = v313;
              goto LABEL_294;
            }
            LODWORD(v93) = v313;
            if ( (WORD2(v361) & 0x8000) != 0 )
            {
              if ( (DWORD1(v361) & 0x4000000) != 0 )
                LODWORD(v93) = 2;
              v313 = v93;
              v314 = v93;
            }
          }
          else
          {
            v93 = v302;
            if ( v302 == 231 )
              v93 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 914) << 16) | 0xE7;
            tagTHREADINFO::UpdateInputSource(
              (tagTHREADINFO *)a1,
              (const struct tagINPUT_MESSAGE_SOURCE *)((char *)&v362 + 12));
            tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
            if ( v90 )
              Win32RawLockedItemBase<tagQMSG,0,1,1,1>::ManualLock<void>(BugCheckParameter2, v90);
            v94 = xxxImmProcessKey(*(struct tagQ **)(a1 + 464), ThreadDesktopWindow, v295[0], v93, (__int64)v301);
            LOBYTE(v93) = v94;
            v313 = v94;
            v314 = v94;
            if ( (v94 & 0x11) != 0 )
            {
              if ( v90 )
              {
                Win32RawLockedItemBase<tagQMSG,0,1,1,1>::UnlockWorker(BugCheckParameter2, 0, 1);
                v315 = 0LL;
              }
              Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
              goto LABEL_274;
            }
            if ( v90 )
              Win32RawLockedItemBase<tagQMSG,0,1,1,1>::UnlockWorker(BugCheckParameter2, 0, 0);
            Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
          }
LABEL_294:
          if ( v295[1] )
          {
            v297 = 1;
            v98 = 0;
            if ( (WORD2(v361) & 0x8000) == 0 )
            {
              v99 = *(_QWORD *)(a1 + 464);
              v100 = *(_QWORD *)(v99 + 448);
              *(_QWORD *)(v99 + 448) = *((_QWORD *)&v359 + 1);
              v101 = v93 & 2;
              tagTHREADINFO::UpdateInputSource(
                (tagTHREADINFO *)a1,
                (const struct tagINPUT_MESSAGE_SOURCE *)((char *)&v362 + 12));
              *(_QWORD *)v369 = 0LL;
              *(_OWORD *)&v369[16] = 0LL;
              *(_QWORD *)&v369[8] = v301;
              *(_QWORD *)&v323 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
              if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) == 0 )
              {
                LODWORD(v323) = Feature_WebThreatDefenseToggle__private_featureState | 1;
                wil_details_FeatureReporting_ReportUsageToService(
                  (__int64)&Feature_WebThreatDefenseToggle__private_descriptor,
                  Feature_WebThreatDefenseToggle__private_featureState | 1,
                  3u,
                  1LL);
                wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                  v323,
                  3,
                  (__int64)&Feature_WebThreatDefenseToggle__private_descriptor);
              }
              v102 = *(_QWORD *)(a1 + 1376);
              v103 = *(_QWORD *)(a1 + 456);
              v104 = *(unsigned int *)(v103 + 276);
              if ( (v104 & 4) != 0
                && (_DWORD)v102 == 1
                && (v102 & 0x500000000LL) != 0
                && *(_QWORD *)(a1 + 488) != *(_QWORD *)(W32GetUserSessionState(v103, v104) + 62968)
                && CheckImEnabled() )
              {
                *(_WORD *)&v369[16] = 1;
              }
              tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
              if ( v315 )
                Win32RawLockedItemBase<tagQMSG,0,1,1,1>::ManualLock<void>(BugCheckParameter2, v315);
              v98 = xxxCallCtfHook(2LL, v101, v302, (__int128 *)v369);
              if ( (v369[18] & 1) != 0 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 456) + 808LL) & 0x30) == 0x10 )
                  *(_WORD *)&v369[18] |= 0x10u;
                ProcessTranslatedChar((struct _CHARHOOKSTRUCT *)v369);
              }
              *(_QWORD *)(*(_QWORD *)(a1 + 464) + 448LL) = v100;
              if ( v315 )
              {
                if ( (unsigned int)(v98 - 2) <= 1
                  && (*(_DWORD *)(a1 + 1360) & 0x20000000) == 0
                  && AllocQEntryEx(*(_QWORD *)(a1 + 464) + 24LL, (_DWORD *)v315, 2) )
                {
                  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
                    || (v105 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                  {
                    v105 = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || !*((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    v19 = 0;
                  }
                  if ( v105 || v19 )
                  {
                    v106 = *(_QWORD *)(a1 + 464);
                    v107 = *(_QWORD *)(v106 + 88);
                    v108 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                    v293 = v107;
                    v109 = v315;
                    LOBYTE(v110) = v19;
                    LOBYTE(v111) = v105;
                    WPP_RECORDER_AND_TRACE_SF_qqq(
                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                      v111,
                      v110,
                      *(_QWORD *)(v108 + 69152),
                      5,
                      18,
                      35,
                      (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                      v315,
                      v106,
                      v293);
                  }
                  else
                  {
                    v109 = v315;
                  }
                  Win32RawLockedItemBase<tagQMSG,0,1,1,1>::UnlockWorker(BugCheckParameter2, 0, 0);
                  *(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL) = v109;
                  v19 = 1;
                  if ( v98 == 2 )
                  {
                    v112 = 1;
                  }
                  else
                  {
                    v112 = v305;
                    if ( v98 == 3 )
                      v112 = 2;
                  }
                  v305 = v112;
                  DeferSysPeekMsg(a1, v112);
                  v315 = 0LL;
                  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
                  goto LABEL_34;
                }
                v315 = 0LL;
              }
              Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
              NextSysMsg = v316;
            }
            if ( v98 )
            {
              v95 = 1;
              goto LABEL_275;
            }
          }
          if ( ((*(_BYTE *)(a1 + 712) | *(_BYTE *)(**(_QWORD **)(a1 + 496) + 16LL)) & 8) == 0 )
          {
            v95 = v297;
LABEL_337:
            if ( !v95 || !v295[1] || ((*(_BYTE *)(a1 + 712) | *(_BYTE *)(**(_QWORD **)(a1 + 496) + 16LL)) & 0x40) == 0 )
              goto LABEL_342;
            v113 = v301;
            v114 = v302;
            v115 = 7LL;
LABEL_341:
            xxxCallHook(v115, v114, (__int64)v113, 5);
            goto LABEL_342;
          }
          v95 = 1;
          v297 = 1;
          if ( !(unsigned int)xxxCallHook(v295[1] == 0 ? 3 : 0, v302, (__int64)v301, 2) )
            goto LABEL_337;
LABEL_275:
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
          if ( v312 )
          {
            v96 = *(_QWORD *)(a1 + 496);
            v25 = (unsigned int)(*(_DWORD *)(a1 + 712) | *(_DWORD *)(*(_QWORD *)v96 + 16LL));
            if ( ((*(_BYTE *)(a1 + 712) | *(_BYTE *)(*(_QWORD *)v96 + 16LL)) & 0x40) != 0 )
              xxxCallHook(6LL, v295[0], (__int64)v366, 5);
            v312 = 0;
          }
          if ( v95 )
          {
            v97 = *(_QWORD *)(a1 + 496);
            v25 = (unsigned int)(*(_DWORD *)(a1 + 712) | *(_DWORD *)(*(_QWORD *)v97 + 16LL));
            if ( ((*(_BYTE *)(a1 + 712) | *(_BYTE *)(*(_QWORD *)v97 + 16LL)) & 0x40) != 0 )
              xxxCallHook(7LL, v302, (__int64)v301, 5);
            v297 = 0;
          }
          LOBYTE(i) = v298;
          if ( v295[1] )
            goto LABEL_22;
        }
      }
    }
    v301 = (void *)v357.m256i_i64[3];
    v302 = v357.m256i_u64[2];
    if ( DeleteHidDataIfAlreadyHandledByGRIB((struct tagTHREADINFO *)a1, v357.m256i_i64[3]) )
      goto LABEL_274;
    ThreadDesktopWindow = 0LL;
    v117 = 0LL;
    if ( v301 )
    {
      v118 = HMValidateHandleNoSecure((__int64)v301, 18);
      v117 = v118;
      if ( v118 )
        ThreadDesktopWindow = *(struct tagWND **)(v118 + 24);
    }
    if ( !ThreadDesktopWindow )
    {
      v119 = *(_QWORD *)(a1 + 464);
      ThreadDesktopWindow = *(struct tagWND **)(v119 + 120);
      if ( !ThreadDesktopWindow )
      {
        ThreadDesktopWindow = *(struct tagWND **)(v119 + 128);
        if ( !ThreadDesktopWindow )
        {
          InputTraceLogging::RawInput::SSQResult((__int64)v301, 0);
          goto LABEL_274;
        }
      }
    }
    if ( v117 && *(_QWORD *)(v117 + 16) != *((_QWORD *)ThreadDesktopWindow + 2) )
    {
      v326 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10319LL);
    }
    Win32HM_ExchangeThreadLock<1>((__int64)ThreadDesktopWindow, (__int64)v330);
    if ( (unsigned int)CheckCrossThreadInput(
                         (struct tagTHREADINFO **)ThreadDesktopWindow,
                         NextSysMsg,
                         &v303,
                         (int *)&v295[1],
                         v317) )
    {
      v120 = 0;
LABEL_363:
      InputTraceLogging::RawInput::SSQResult((__int64)v301, v120);
      goto LABEL_814;
    }
    if ( !v303 )
      goto LABEL_375;
    if ( *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 464LL) != *(_QWORD *)(a1 + 464) )
      goto LABEL_274;
    if ( (unsigned int)IsInsideMenuLoop(a1) )
    {
      v121 = *(HWND **)(**(_QWORD **)(a1 + 640) + 8LL);
    }
    else
    {
      v122 = *(_QWORD *)(a1 + 704);
      if ( v122 )
        v121 = *(HWND **)(v122 + 16);
      else
        v121 = 0LL;
    }
    if ( v121 )
      InputTraceLogging::RawInput::IgnoreModalLoop(v301, *v121);
    if ( !v324 )
    {
      v324 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
      Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v351, v324);
    }
LABEL_375:
    if ( v306 || a5 != -1 )
    {
      if ( v306 > a5 )
      {
        if ( v295[0] < a5 || v295[0] > v306 )
        {
          v123 = 1;
          goto LABEL_384;
        }
        goto LABEL_391;
      }
      if ( v295[0] < v306 || v295[0] > a5 )
      {
        v123 = 0;
LABEL_384:
        if ( !v123 )
        {
LABEL_391:
          InputTraceLogging::RawInput::SSQResult((__int64)v301, 2);
          continue;
        }
      }
    }
    break;
  }
  if ( !(unsigned int)CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v319) )
    goto LABEL_391;
  if ( v303 )
  {
    v120 = 3;
    goto LABEL_363;
  }
  if ( v295[1] )
    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v356, 1);
  InputTraceLogging::RawInput::SSQResult((__int64)v301, 4);
LABEL_342:
  if ( *(_QWORD *)(a1 + 788) != *(_QWORD *)((char *)&v358 + 4) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 520), 0x100000u);
  if ( NextSysMsg && ((BYTE4(v361) & 0x20) != 0 || (DWORD1(v361) & 0x8000000) != 0) )
  {
    if ( *((_DWORD *)NextSysMsg + 6) == 512 )
    {
      if ( ThreadDesktopWindow )
        v116 = *(_QWORD *)ThreadDesktopWindow;
      else
        v116 = 0LL;
      *((_QWORD *)NextSysMsg + 2) = v116;
      *((_DWORD *)NextSysMsg + 25) |= 0x200u;
    }
    *((_QWORD *)NextSysMsg + 8) = v301;
  }
  *(_DWORD *)(a1 + 788) = DWORD1(v358);
  v268 = v332;
  *(_DWORD *)(v332 + 792) = DWORD2(v358);
  *(_DWORD *)(v268 + 796) = *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 288LL);
  *(_QWORD *)(a1 + 800) = v360;
  *(_DWORD *)(a1 + 600) = v358;
  *(_QWORD *)(*(_QWORD *)(a1 + 464) + 448LL) = *((_QWORD *)&v359 + 1);
  if ( v295[0] == 514 || v295[0] == 162 )
    *(_QWORD *)(a1 + 808) = v360;
  *(_QWORD *)(*(_QWORD *)(a1 + 464) + 80LL) = 1LL;
  *(_QWORD *)(a1 + 608) = 1LL;
  tagTHREADINFO::UpdateLastInputData((tagTHREADINFO *)a1, (const struct tagQMSG *)&v356);
  **(_DWORD **)(a1 + 480) &= ~8u;
  **(_QWORD **)(a1 + 512) &= 0x7FFFFFFFuLL;
  v269 = v313;
  v270 = v334;
  if ( v295[1] )
  {
    v271 = *(_QWORD **)(a1 + 512);
    if ( (BYTE4(v361) & 1) != 0 )
      *v271 |= 0x1000uLL;
    else
      *v271 &= ~0x1000uLL;
  }
  TransferWakeBit(a1, v295[0]);
  ClearWakeBit((struct tagTHREADINFO *)a1, 31751, 1);
  v273 = v295[1];
  if ( v295[1] )
  {
    if ( v311 )
    {
      v274 = *(_DWORD **)(a1 + 1512);
      if ( v274 )
      {
        if ( (*v274 & 1) != 0 && (*v274 & 4) != 0 )
        {
          SetMiPWakeBit((struct tagTHREADINFO *)a1);
          v273 = v295[1];
        }
      }
    }
  }
  v275 = 0LL;
  if ( ThreadDesktopWindow )
    v275 = *(_QWORD *)ThreadDesktopWindow;
  *(_QWORD *)v343 = v275;
  *((_DWORD *)v270 + 2) = v295[0];
  v276 = v302;
  if ( (v269 & 2) != 0 )
    v276 = 229LL;
  *((_QWORD *)v270 + 2) = v276;
  *((_QWORD *)v270 + 3) = v301;
  *((_DWORD *)v270 + 8) = v358;
  *(_QWORD *)((char *)v270 + 36) = *(_QWORD *)((char *)&v358 + 4);
  LOBYTE(v272) = v273 != 0;
  InputTraceLogging::Delivery::ScanSysQueue((const struct tagQMSG *)&v356, v270, (const struct tagTHREADINFO *)a1, v272);
  if ( v295[1] )
  {
    EtwTraceInputProcessDelay(a1);
    *(_DWORD *)(*(_QWORD *)(a1 + 464) + 456LL) = (MEMORY[0xFFFFF78000000320]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  EtwTraceRetrieveInputMessage(v270);
  CManageInScanSysQueueBit::~CManageInScanSysQueueBit((CManageInScanSysQueueBit *)v310);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v330);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v350);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v351);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v349);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v347);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v348);
  return 1LL;
}
