/*
 * XREFs of xxxCreateWindowEx @ 0x14017B3B8
 * Callers:
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     xxxCsDdeInitialize @ 0x140083F78 (xxxCsDdeInitialize.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14017AF60 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     xxxClientLoadMenu @ 0x14000A328 (xxxClientLoadMenu.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x14002C6E0 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetMonitorRect @ 0x140030144 (GetMonitorRect.c)
 *     SetTiledRect @ 0x1400320E0 (SetTiledRect.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140044D14 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x14004643C (SetWindowSubtreeCoreWindowStatus.c)
 *     IsImmersiveAppIORestricted @ 0x140046978 (IsImmersiveAppIORestricted.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x1400469A0 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     GetMessageWindow @ 0x140046B50 (GetMessageWindow.c)
 *     PWInsertAfter @ 0x140048268 (PWInsertAfter.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     CalcForegroundInsertAfter @ 0x140049328 (CalcForegroundInsertAfter.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x14004A540 (UpdateTopLevelWindowDPITransform.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14004ABFC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B390 (--$-0VSmartObjStackRef@@@-$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagMENU@@@.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B768 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x14004DA2C (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     DwmChildRectChange @ 0x14004E990 (DwmChildRectChange.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x1400A6E6C (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 *     GetInheritedMonitor @ 0x14011EDF0 (GetInheritedMonitor.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1401203C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     ValidateParentDepth @ 0x14012DAD4 (ValidateParentDepth.c)
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     UnlinkWindow @ 0x14012E600 (UnlinkWindow.c)
 *     ValidateNewParent @ 0x14012E85C (ValidateNewParent.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     IsTopLevelParent @ 0x14012EA18 (IsTopLevelParent.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     DereferenceClass @ 0x14014EE40 (DereferenceClass.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x14014F7F0 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x14014FAC4 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     MapClientNeuterToClientPfn @ 0x1401506CC (MapClientNeuterToClientPfn.c)
 *     GetClassPtr @ 0x140150850 (GetClassPtr.c)
 *     ClassLock @ 0x140150FE0 (ClassLock.c)
 *     ReferenceClass @ 0x140151720 (ReferenceClass.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x140151A04 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ClassUnlock @ 0x140151B6C (ClassUnlock.c)
 *     xxxCreateClassSmIcon @ 0x1401528C0 (xxxCreateClassSmIcon.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x140164CE0 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x140178BD0 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x14017A228 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A2E8 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x14017A4CC (DwmAsyncOwnerChange.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14017AF60 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A3738 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     CheckGrantedAccess @ 0x1401AC1D4 (CheckGrantedAccess.c)
 *     UserGetLastError @ 0x1401B0B24 (UserGetLastError.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1401BEFD8 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     xxxAdjustSize @ 0x1401C5D84 (xxxAdjustSize.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 *     NeedsWindowEdge @ 0x1401D281C (NeedsWindowEdge.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1401D822C (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxSendSizeMessage @ 0x1401D8A40 (xxxSendSizeMessage.c)
 *     ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1401D9058 (-GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1401D90DC (-UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ.c)
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     RECTFromSIZERECT @ 0x1401DA308 (RECTFromSIZERECT.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401DE278 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ??1CDwmWindowNotifyBatch@@QEAA@XZ @ 0x1401DEB6C (--1CDwmWindowNotifyBatch@@QEAA@XZ.c)
 *     ConstrainWindowSIZERECT @ 0x1401E1F30 (ConstrainWindowSIZERECT.c)
 *     RtlInitLargeAnsiString @ 0x1401E7948 (RtlInitLargeAnsiString.c)
 *     GetAppCompatFlags @ 0x1401E7A80 (GetAppCompatFlags.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401EC228 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401F1D14 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401F2064 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401F4B6C (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x140208238 (--$-0VSharedUserObjPointerFieldspwndParent@tagWND@@@-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PE.c)
 *     IsValidBand @ 0x140208510 (IsValidBand.c)
 *     ?IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z @ 0x140209288 (-IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x140218948 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x140218E4C (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x140220FB4 (RtlInitUnicodeStringOrId.c)
 *     ValidateOwnerDepth @ 0x140224504 (ValidateOwnerDepth.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140235DB8 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x14023EF80 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1402455CC (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     GETCLIENTWNDINFO @ 0x140263574 (GETCLIENTWNDINFO.c)
 *     HasMessageRootWindow @ 0x140269CBC (HasMessageRootWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetTopMostInsertAfter @ 0x140292758 (GetTopMostInsertAfter.c)
 *     xxxLoadUserApiHook @ 0x140292FB4 (xxxLoadUserApiHook.c)
 *     RegisterDefaultClass @ 0x1402A2BB4 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1402A2E30 (RegisterIconTitleClass.c)
 *     Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline @ 0x1402D0D60 (Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1402D1EA0 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int128 *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        struct tagWND *a10,
        __int64 **a11,
        void *a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        char a16,
        __int64 a17)
{
  unsigned int v18; // edi
  struct tagWND *v19; // r13
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // r12
  int v22; // r14d
  int v23; // eax
  ULONG_PTR v24; // rbx
  char v25; // al
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  int v29; // ecx
  int v30; // ecx
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // rcx
  struct tagTHREADINFO *v37; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 UserSessionState; // rax
  __int64 v44; // rdx
  __int64 v45; // r10
  unsigned __int16 v46; // r9
  __int64 *ClassPtr; // rax
  __int64 v48; // r8
  int v49; // r10d
  unsigned int v50; // r10d
  __int64 v51; // rax
  __int64 v52; // r14
  tagObjLock *v53; // rax
  unsigned int CurrentThreadDpiHostingBehavior; // eax
  __int64 v55; // rcx
  struct tagWND *v56; // rbx
  struct tagTHREADINFO *v57; // rax
  struct tagWND *v58; // rdx
  __int64 v59; // rcx
  int v60; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  int v65; // ecx
  wchar_t *v66; // rcx
  __int64 v67; // rdx
  __int16 v68; // bx
  __int64 *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // eax
  int v73; // r8d
  int v74; // r9d
  int v75; // r11d
  struct _HEAD *v76; // rax
  struct tagWND *v77; // r12
  int v78; // edx
  bool v79; // al
  int v80; // eax
  int v81; // ecx
  int v82; // edx
  int v83; // eax
  struct tagMONITOR *InheritedMonitor; // rbx
  __int16 v85; // di
  _DWORD *v86; // rax
  const struct tagWND *ThreadDesktopWindow; // rdx
  int v88; // r9d
  struct tagWND *v89; // rdx
  int v90; // ecx
  unsigned __int16 v91; // r8
  __int64 v92; // rcx
  char v93; // r12
  __int64 v94; // rax
  int v95; // r13d
  Scrollbar::NonClient *v96; // rcx
  Scrollbar::NonClient *v97; // rcx
  bool v98; // al
  __int64 v99; // rdx
  int v100; // r8d
  unsigned int v101; // ecx
  unsigned int ClientExtraBytesTotalSize; // eax
  __int64 v103; // rdi
  __int64 v104; // rax
  _QWORD *v105; // rdx
  __int64 v106; // rcx
  int v107; // ebx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int16 v127; // bx
  int v128; // ebx
  char v129; // di
  int v130; // eax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rcx
  int v134; // edx
  int v135; // edi
  int v136; // eax
  int v137; // r8d
  int v138; // r9d
  __int64 v139; // rdx
  __int64 v140; // rcx
  struct tagMONITOR *v141; // rax
  __int64 v142; // rbx
  int v143; // edx
  __int16 v144; // ax
  int v145; // eax
  __m128i *MonitorRect; // rax
  __int64 v147; // rdx
  int v148; // r8d
  int v149; // ecx
  __int64 v150; // rcx
  int v151; // eax
  __int64 v152; // rcx
  char v153; // cl
  __int64 v154; // r8
  ULONG_PTR v155; // rcx
  unsigned __int8 *Menu; // rax
  __int64 v157; // rcx
  struct _HEAD *v158; // rcx
  struct _HEAD *v159; // rcx
  char v160; // bl
  int v161; // eax
  __int64 v162; // rcx
  const struct tagWND *NonChildAncestor; // rbx
  __int64 v164; // rdx
  __int64 v165; // rdi
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v170; // rdx
  __int64 v171; // rdx
  int v172; // ecx
  __int64 KernelEvent; // rax
  int v174; // eax
  unsigned int v175; // edx
  __int64 v176; // rdx
  __int64 v177; // rbx
  unsigned int v178; // eax
  NTSTATUS v179; // eax
  ULONG v180; // eax
  __int64 v181; // rdx
  __int64 v182; // rcx
  struct tagWND *v183; // rax
  __int64 MessageWindow; // rax
  struct tagWND *v185; // r9
  __int64 v186; // rcx
  int v187; // eax
  int v188; // eax
  __int64 v189; // rdx
  __int64 v190; // rax
  struct tagMONITOR *v191; // rbx
  __int64 v192; // rcx
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // rcx
  int v197; // ebx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // rcx
  __int64 v202; // rdx
  int v203; // ebx
  ULONG_PTR v204; // rcx
  __int64 v205; // rdx
  unsigned __int128 v206; // rax
  unsigned int v207; // ecx
  __int64 v208; // rcx
  struct _HEAD *SystemMenu; // rax
  __int64 *v210; // rbx
  struct tagWND *DefaultImeWindow; // rax
  int v212; // ecx
  __int64 v213; // rdx
  __int64 v214; // rax
  unsigned __int64 CompositeAppFrameWindowOrSelf; // rbx
  __int64 v216; // rax
  int v217; // ebx
  __int64 v218; // rdx
  __int64 v219; // rcx
  int v220; // eax
  const struct tagWND *v221; // rax
  __int64 TopMostInsertAfter; // rax
  __int64 v223; // r9
  int v224; // edx
  int v225; // r8d
  __int64 v226; // rdx
  __int64 v227; // rcx
  int v228; // ebx
  __int64 v229; // rdi
  void *v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 *v233; // rdi
  __int64 v234; // rdi
  __int64 v235; // rbx
  void *v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // rdx
  unsigned int v240; // ebx
  char v241; // cl
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rbx
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // rax
  __int64 v248; // rcx
  unsigned int v249; // ecx
  __int64 v250; // rax
  __int64 v251; // rbx
  unsigned int v252; // [rsp+50h] [rbp-2D8h]
  __int16 Atom; // [rsp+54h] [rbp-2D4h]
  int v254; // [rsp+58h] [rbp-2D0h]
  int v255; // [rsp+58h] [rbp-2D0h]
  int v256; // [rsp+5Ch] [rbp-2CCh]
  int v257; // [rsp+60h] [rbp-2C8h]
  __int16 v258; // [rsp+64h] [rbp-2C4h]
  int v259; // [rsp+64h] [rbp-2C4h]
  __int64 v260; // [rsp+70h] [rbp-2B8h]
  int v261; // [rsp+7Ch] [rbp-2ACh]
  int v262; // [rsp+7Ch] [rbp-2ACh]
  __int64 v263[2]; // [rsp+80h] [rbp-2A8h] BYREF
  int v264; // [rsp+90h] [rbp-298h]
  int v265; // [rsp+94h] [rbp-294h]
  int v266; // [rsp+98h] [rbp-290h]
  ULONG_PTR v267[2]; // [rsp+A0h] [rbp-288h] BYREF
  wchar_t *Str1; // [rsp+B0h] [rbp-278h]
  int WindowCloakStateComponentUIAware; // [rsp+B8h] [rbp-270h]
  int v270; // [rsp+BCh] [rbp-26Ch]
  int v271; // [rsp+C0h] [rbp-268h]
  int v272; // [rsp+C4h] [rbp-264h]
  unsigned int v273; // [rsp+C8h] [rbp-260h]
  __int64 *v274[2]; // [rsp+D0h] [rbp-258h] BYREF
  struct _HEAD *v275; // [rsp+E0h] [rbp-248h]
  ULONG_PTR v276[2]; // [rsp+F0h] [rbp-238h] BYREF
  int v277; // [rsp+100h] [rbp-228h]
  int v278; // [rsp+104h] [rbp-224h]
  int v279; // [rsp+108h] [rbp-220h]
  __int64 v280; // [rsp+110h] [rbp-218h]
  void *v281; // [rsp+118h] [rbp-210h]
  ULONG_PTR v282[2]; // [rsp+120h] [rbp-208h] BYREF
  struct tagWND *v283; // [rsp+130h] [rbp-1F8h]
  __int64 ProcessPeb; // [rsp+138h] [rbp-1F0h]
  int v285; // [rsp+140h] [rbp-1E8h]
  __int64 v286; // [rsp+148h] [rbp-1E0h] BYREF
  __int64 v287; // [rsp+150h] [rbp-1D8h]
  int v288; // [rsp+15Ch] [rbp-1CCh]
  __int64 *v289; // [rsp+160h] [rbp-1C8h]
  struct tagWND *v290; // [rsp+168h] [rbp-1C0h]
  __int128 v291; // [rsp+170h] [rbp-1B8h] BYREF
  __int128 *v292; // [rsp+188h] [rbp-1A0h]
  int v293; // [rsp+1A0h] [rbp-188h]
  int v294; // [rsp+1A4h] [rbp-184h]
  int v295; // [rsp+1B8h] [rbp-170h]
  wchar_t *v296; // [rsp+1C0h] [rbp-168h]
  __int128 *v297; // [rsp+1C8h] [rbp-160h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+1D8h] [rbp-150h] BYREF
  _QWORD v299[2]; // [rsp+1F0h] [rbp-138h] BYREF
  struct _HEAD *v300; // [rsp+200h] [rbp-128h]
  __int64 v301; // [rsp+208h] [rbp-120h]
  int v302; // [rsp+210h] [rbp-118h]
  int v303; // [rsp+214h] [rbp-114h]
  int v304; // [rsp+218h] [rbp-110h]
  int v305; // [rsp+21Ch] [rbp-10Ch]
  unsigned int v306; // [rsp+220h] [rbp-108h]
  __int64 v307; // [rsp+228h] [rbp-100h]
  wchar_t *v308; // [rsp+230h] [rbp-F8h]
  unsigned int v309; // [rsp+238h] [rbp-F0h]
  __int128 v310; // [rsp+240h] [rbp-E8h]
  __int128 v311; // [rsp+250h] [rbp-D8h] BYREF
  int v312; // [rsp+260h] [rbp-C8h]
  __int128 v313; // [rsp+268h] [rbp-C0h] BYREF
  __int64 v314; // [rsp+278h] [rbp-B0h]
  ULONG_PTR v315[3]; // [rsp+280h] [rbp-A8h] BYREF
  _BYTE v316[40]; // [rsp+298h] [rbp-90h] BYREF
  __int128 v317; // [rsp+2C0h] [rbp-68h] BYREF
  __int128 v318; // [rsp+2D0h] [rbp-58h] BYREF

  v297 = a4;
  v296 = a2;
  v271 = a1;
  v18 = a14;
  v252 = a1;
  v266 = a1;
  Str1 = a2;
  v292 = a4;
  v19 = a10;
  v280 = (__int64)a10;
  v281 = a12;
  ProcessPeb = a13;
  v278 = 0;
  v285 = 0;
  v277 = 0;
  v272 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v263);
  v318 = 0LL;
  v317 = 0LL;
  v273 = 5;
  v288 = 5;
  v289 = 0LL;
  memset_0(v299, 0, 0x70uLL);
  v21 = PtiCurrent(v20);
  v260 = (__int64)v21;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(v282);
  v313 = 0LL;
  v314 = 0LL;
  v279 = 0;
  v261 = *(_DWORD *)(*((_QWORD *)v21 + 57) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v22 = 0;
  v254 = 0;
  v291 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v274, a11);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v286);
  if ( (*(_DWORD *)(*((_QWORD *)v21 + 57) + 12LL) & 0x10000000) == 0 && !(unsigned int)RegisterIconTitleClass() )
    goto LABEL_30;
  if ( a1 < 0 )
  {
    v252 = a1 & 0x7FFFFFFF;
    v266 = a1 & 0x7FFFFFFF;
  }
  v23 = 800;
  if ( a1 >= 0 )
    LOWORD(v23) = 0;
  v270 = v23;
  v24 = *((_QWORD *)v21 + 61);
  v315[0] = v24;
  v267[0] = v24;
  if ( a10 )
  {
    if ( *((_QWORD *)a10 + 3) != v24 )
      goto LABEL_30;
  }
  v25 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*((_QWORD *)v21 + 57)) )
    {
LABEL_42:
      v30 = 5;
      goto LABEL_31;
    }
    v22 = 1;
    v254 = 1;
    v25 = a16;
  }
  if ( (v25 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*((_QWORD *)v21 + 57)) )
    goto LABEL_42;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14) )
      goto LABEL_30;
    if ( a14 == 15 )
      goto LABEL_30;
    v26 = *(_QWORD *)(*((_QWORD *)v21 + 57) + 808LL);
    if ( (v26 & 0x30) == 0x10 && (v26 & 0x200) == 0 && a14 == 1 && !v22 && !(unsigned int)HasMessageRootWindow(a10) )
      goto LABEL_30;
  }
  v258 = HIWORD(a5) & 0xC000;
  v295 = (HIWORD(a5) & 0xC000) == 0x4000;
  if ( (HIWORD(a5) & 0xC000) != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*((_QWORD *)v21 + 57), a10) )
      v19 = 0LL;
    v280 = (__int64)v19;
  }
  v283 = v19;
  if ( v19 )
  {
    LOBYTE(v27) = IsDesktopWindow((__int64)v19);
    if ( !v27 )
    {
      v28 = *((_QWORD *)v19 + 5);
      v254 = *(_BYTE *)(v28 + 232) & 0x40;
      v29 = *(_DWORD *)(v28 + 236);
      if ( a14 )
      {
        if ( a14 != v29 )
        {
LABEL_30:
          v30 = 87;
          goto LABEL_31;
        }
        goto LABEL_41;
      }
LABEL_39:
      v18 = v29;
      goto LABEL_41;
    }
  }
  if ( !a14 )
  {
    if ( !IsImmersiveAppIORestricted(*((_QWORD *)v21 + 57)) )
    {
      v33 = *(_BYTE *)(v32 + 808);
      v29 = 2;
      if ( (v33 & 2) == 0 || (v252 & 8) == 0 )
      {
        v18 = 1;
        goto LABEL_41;
      }
      goto LABEL_39;
    }
    v254 = 1;
    v18 = 15;
  }
LABEL_41:
  v293 = v254;
  if ( !(unsigned __int8)IsValidBandForProcess(*((_QWORD *)v21 + 57), v18, v19) )
    goto LABEL_42;
  v35 = v252;
  if ( (v252 & 0x400000) == 0 )
  {
    if ( v19 )
    {
      if ( (HIWORD(a5) & 0xC000) == 0x4000 && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x50) == 0x40 )
      {
        v35 = v252 | 0x400000;
        v252 = v35;
        v266 = v35;
      }
    }
    else if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 || (v34 = 32770LL, (_WORD)Str1 != 0x8002) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
      v39 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v39 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v40 = *(_DWORD *)(v39 + 816);
      v35 = v252;
      if ( (v40 & 1) != 0 )
      {
        v35 = v252 | 0x400000;
        v252 = v35;
        v266 = v35;
      }
    }
  }
  v36 = 35651584LL;
  if ( (v35 & 0x2200000) == 0x2200000 )
    goto LABEL_30;
  v37 = v21;
  if ( *((_QWORD *)v21 + 78) && !(unsigned int)CheckGrantedAccess(*((unsigned int *)v21 + 232), 2LL) )
    goto LABEL_32;
  if ( v258 != 0x4000 )
    goto LABEL_61;
  if ( !v19 )
  {
    v30 = 1406;
LABEL_31:
    UserSetLastError(v30);
LABEL_32:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v286);
LABEL_33:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v274);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v282);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v263);
    return 0LL;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, (__int64)v19) )
    goto LABEL_30;
  while ( 1 )
  {
LABEL_61:
    if ( (a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v276);
      UserSessionState = W32GetUserSessionState(v42, v41);
      if ( (int)RtlStringCchCopyW((char *)(UserSessionState + 41756), 256LL, *(char **)(a3 + 8)) < 0 )
      {
        Atom = 0;
        v261 = 1;
        v294 = 1;
      }
      else
      {
        Atom = UserFindAtom(v45, v44);
      }
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v276);
    }
    else
    {
      v46 = a3;
      Atom = a3;
    }
    if ( v46 )
    {
      ClassPtr = GetClassPtr((_QWORD *)v46, *((_QWORD **)v37 + 57), (__int64)v281);
      if ( ClassPtr )
        break;
    }
LABEL_106:
    if ( v261
      || (*(_DWORD *)(*((_QWORD *)PtiCurrent(v36) + 57) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v66 = Str1)
        : (v66 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v66)) )
    {
      v30 = 1407;
      goto LABEL_31;
    }
    v261 = 1;
    v24 = v315[0];
    v37 = v21;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v263, *ClassPtr);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_32;
  if ( (unsigned int)NeedsWindowEdge(a5, v252, a15 >= 0x400u) )
    v50 = v49 | 0x100;
  else
    v50 = v49 & 0xFFFFFEFF;
  v266 = v50;
  v252 = v50;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v37 + 130, 0, 0) & 1) != 0 )
  {
    v264 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 866LL);
  }
  LOBYTE(v48) = 1;
  v51 = HMAllocObject(v37, v24, v48, 416LL);
  v52 = v51;
  v290 = (struct tagWND *)v51;
  if ( !v51 )
  {
    if ( (unsigned int)UserGetLastError() == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_32;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v51 + 56));
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 328LL) = (unsigned int)PsGetThreadId(*(PETHREAD *)v21);
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 332LL) = *(_DWORD *)(*((_QWORD *)v21 + 57) + 56LL);
  *(_QWORD *)(v52 + 328) = v52 + 320;
  *(_QWORD *)(v52 + 320) = v52 + 320;
  *(_QWORD *)(v52 + 344) = v52 + 336;
  *(_QWORD *)(v52 + 336) = v52 + 336;
  *(_QWORD *)(v52 + 360) = v52 + 352;
  *(_QWORD *)(v52 + 352) = v52 + 352;
  *(_QWORD *)(v52 + 408) = v52 + 400;
  *(_QWORD *)(v52 + 400) = v52 + 400;
  *(_DWORD *)(v52 + 396) = 5;
  *(_DWORD *)(v52 + 392) = 1;
  v53 = (tagObjLock *)Win32AllocPoolZInit(32LL, 1752200021LL);
  *(_QWORD *)(v52 + 144) = v53;
  if ( !v53 )
  {
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v52 + 56));
    HMFreeObject(v52);
    goto LABEL_32;
  }
  tagObjLock::LockInitialize(v53);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 456LL) + 808LL) & 0x1000000) != 0 )
    *(_DWORD *)(v52 + 384) |= 1u;
  *(_QWORD *)(*(_QWORD *)(v52 + 40) + 296LL) = 0LL;
  *(_QWORD *)(v52 + 280) = 0LL;
  *(_DWORD *)(v52 + 180) = -1;
  *(_QWORD *)(*(_QWORD *)(v52 + 40) + 168LL) = 0LL;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v55 = CurrentThreadDpiHostingBehavior;
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 292LL) = CurrentThreadDpiHostingBehavior;
  if ( v258 != 0x4000 || !v19 || v19 == (struct tagWND *)GetThreadDesktopWindow(0LL) )
    goto LABEL_94;
  v56 = 0LL;
  v57 = PtiCurrent(v55);
  if ( v57 )
  {
    v55 = *((_QWORD *)v57 + 61);
    if ( v55 )
      v56 = *(struct tagWND **)(v55 + 112);
  }
  if ( v19 == v56
    || (v55 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 456LL), *((_QWORD *)v21 + 57) != v55)
    || IsChildWindowDpiIsolationEnabled(0LL, v19) )
  {
LABEL_94:
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v55);
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 288LL) = CurrentThreadDpiAwarenessContext;
    if ( (*(_DWORD *)(*(_QWORD *)(v52 + 40) + 288LL) & 0x4000000F) == 0 )
    {
      v62 = PsGetCurrentProcessWin32Process(CurrentThreadDpiAwarenessContext);
      v63 = v62;
      if ( v62 )
        v63 = -(__int64)(*(_QWORD *)v62 != 0LL) & v62;
      if ( (*(_DWORD *)(v63 + 12) & 0x20000000) != 0 )
        *(_DWORD *)(*(_QWORD *)(v52 + 40) + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    v58 = v283;
    v59 = *(_QWORD *)(v52 + 40);
    *(_DWORD *)(v59 + 288) = *(_DWORD *)(*((_QWORD *)v283 + 5) + 288LL);
    v60 = *(_DWORD *)(*((_QWORD *)v58 + 5) + 288LL);
    if ( (((unsigned __int8)v60 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v59)) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry(v52, v19, 0LL);
  }
  v64 = *(_QWORD *)(v52 + 40);
  v65 = *(_DWORD *)(v64 + 288);
  if ( (v65 & 0xF) == 2 && (v65 & 0xF0) == 0x20 )
    *(_DWORD *)(v52 + 380) |= 0x180000u;
  if ( (*(_BYTE *)(v64 + 288) & 0xF) == 3 )
    *(_DWORD *)(v52 + 380) |= 0x80000u;
  tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((_QWORD *)(v52 + 136), *(_QWORD *)v263[0]);
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 24LL) = v252 & 0xFDF7FFFF;
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 80LL);
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 248LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v263[0], v52) )
  {
LABEL_105:
    tagObjLock::LockUnInitializeThreadCreator(*(tagObjLock **)(v52 + 144));
    Win32FreePool(*(void **)(v52 + 144));
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v52 + 56));
    HMFreeObject(v52);
    goto LABEL_106;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v263, *(_QWORD *)(v52 + 136));
  if ( !(unsigned int)ClassLock(*(_QWORD *)v263[0], &v313) )
  {
    DereferenceClass(*((_QWORD *)v21 + 57), v52);
    goto LABEL_105;
  }
  *(_QWORD *)(*(_QWORD *)(v52 + 40) + 224LL) = a17;
  v68 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 2LL);
  if ( v68 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v263[0], v67) + 19904) + 868LL) )
  {
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 208LL) = 0LL;
  }
  else
  {
    v69 = (__int64 *)*((_QWORD *)v21 + 103);
    if ( v69 )
      v70 = *v69;
    else
      v70 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 208LL) = v70;
  }
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) = v18;
  v71 = *(_QWORD *)(v52 + 40);
  if ( *(_DWORD *)(v71 + 236) == 1 )
    v72 = 0;
  else
    LOBYTE(v72) = IsTopLevelParent((__int64)v19);
  if ( v72 )
    *(_DWORD *)(v71 + 24) |= 8u;
  if ( v254 )
    SetOrClrWF(1, (struct tagWND *)v52, 0xD840u, 0);
  ++*((_DWORD *)v21 + 233);
  memset_0(v299, 0, 0x70uLL);
  v309 = v252;
  v299[1] = v281;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v271 >= 0 )
    {
      v308 = (wchar_t *)*((_QWORD *)Str1 + 1);
      v311 = *(_OWORD *)v296;
    }
    else
    {
      v308 = *(wchar_t **)(*(_QWORD *)v263[0] + 104LL);
      if ( ((unsigned __int64)v308 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v311);
    }
  }
  else
  {
    v308 = Str1;
  }
  if ( v292 )
  {
    v307 = *((_QWORD *)v292 + 1);
    v310 = *v297;
  }
  v306 = a5;
  v73 = a6;
  v257 = a6;
  v305 = a6;
  v256 = a7;
  v304 = a7;
  v74 = a8;
  v255 = a8;
  v303 = a8;
  v75 = a9;
  v264 = a9;
  v302 = a9;
  if ( v19 )
    v301 = *(_QWORD *)v19;
  else
    v301 = 0LL;
  if ( v258 == 0x4000 )
  {
    v76 = v275;
    if ( !v275 )
      v76 = (struct _HEAD *)*v274[0];
    v300 = v76;
    v77 = v283;
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 24LL) |= *(_DWORD *)(*((_QWORD *)v283 + 5) + 24LL) & 0xC4000000;
    v78 = a7;
  }
  else
  {
    v79 = SmartObjStackRef<tagMENU>::operator==((__int64)v274);
    v77 = v283;
    if ( v79 )
      v300 = 0LL;
    else
      v300 = **(struct _HEAD ***)v274[0];
  }
  v299[0] = ProcessPeb;
  v267[0] = 0LL;
  if ( v73 == 0x80000000 || (v80 = v73, v73 == 0x8000) )
    v80 = 0;
  LODWORD(v267[0]) = v80;
  if ( v78 == 0x80000000 || v78 == 0x8000 )
  {
    v81 = 0;
    HIDWORD(v267[0]) = 0;
  }
  else
  {
    v81 = v78;
    HIDWORD(v267[0]) = v78;
  }
  if ( v74 == 0x80000000 || (v82 = v74, v74 == 0x8000) )
    v82 = 0;
  LODWORD(v267[1]) = v82 + v80;
  if ( v75 == 0x80000000 || (v83 = v75, v75 == 0x8000) )
    v83 = 0;
  HIDWORD(v267[1]) = v81 + v83;
  InheritedMonitor = (struct tagMONITOR *)GetInheritedMonitor((struct tagWND *)v52);
  if ( InheritedMonitor )
  {
    v262 = 1;
  }
  else
  {
    v262 = 0;
    if ( v19 )
      InheritedMonitor = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v77 + 5) + 256LL));
  }
  if ( !InheritedMonitor )
    InheritedMonitor = (struct tagMONITOR *)MonitorFromRect((__int32 *)v267, 2LL, 0);
  UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)v52, InheritedMonitor);
  *(_WORD *)(*(_QWORD *)(v52 + 40) + 286LL) = 0;
  *(_QWORD *)(v52 + 296) = 0LL;
  v85 = HIWORD(a5) & 0xC000;
  if ( v258 != 0x4000 || IsDpiBoundaryBetweenWindows((const struct tagWND *)v52, v19) )
    UpdateTopLevelWindowDPITransform((const struct tagWND *)v52, (__int64)InheritedMonitor);
  Str1 = 0LL;
  if ( v258 == 0x4000 )
  {
    if ( v19 )
    {
      *(_WORD *)(*(_QWORD *)(v52 + 40) + 286LL) = *(_WORD *)(*((_QWORD *)v77 + 5) + 286LL);
      v86 = (_DWORD *)*((_QWORD *)v19 + 37);
      if ( v86 )
      {
        *(_QWORD *)(v52 + 296) = v86;
        ++*v86;
      }
    }
  }
  if ( *(_QWORD *)(v52 + 24) )
  {
    GetMessageWindow(v52);
    *(_OWORD *)v276 = *(_OWORD *)LockPointer(v315, v52 + 104);
    HMAssignmentLock(v276, 0LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v52) )
  {
    ThreadDesktopWindow = v19;
    if ( v258 != 0x4000 && (!v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 112LL)) )
      ThreadDesktopWindow = (const struct tagWND *)GetThreadDesktopWindow(0LL);
    DwmWindowCreate((struct tagWND *)v52, ThreadDesktopWindow, (const struct tagRECT *)v267);
  }
  *(_QWORD *)(*(_QWORD *)(v52 + 40) + 32LL) = v281;
  *(_QWORD *)(*(_QWORD *)(v52 + 40) + 120LL) = MapClientNeuterToClientPfn(
                                                 *(_QWORD *)v263[0],
                                                 0LL,
                                                 (unsigned __int16)v270);
  v88 = 1;
  v89 = (struct tagWND *)v52;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 6LL) & 1) != 0 )
  {
    SetOrClrWF(1, (struct tagWND *)v52, 0x204u, 1);
    v90 = 1;
    v89 = (struct tagWND *)v52;
    v91 = -9724;
    v88 = 0;
  }
  else
  {
    v90 = 0;
    v91 = 516;
  }
  SetOrClrWF(v90, v89, v91, v88);
  v92 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v92 + 30) & 0x30) != 0 && (*(_BYTE *)(v92 + 234) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1219LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v286);
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v260, v52);
  v93 = *(_BYTE *)(*(_QWORD *)(v52 + 40) + 18LL) & 4;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 84LL) )
  {
    v94 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 84LL), 1937208149LL);
    *(_QWORD *)(v52 + 280) = v94;
    if ( !v94 )
    {
      v95 = 5;
      goto LABEL_186;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
LABEL_190:
    if ( v93 )
      goto LABEL_199;
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      *(_DWORD *)(*(_QWORD *)(v52 + 40) + 200LL) = (*(_DWORD *)(*(_QWORD *)(v52 + 40) + 200LL) + 7) & 0xFFFFFFF8;
    }
    else
    {
      if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
        || !Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v96) )
      {
        goto LABEL_199;
      }
      v98 = Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(v97);
      v99 = *(_QWORD *)(v52 + 40);
      v100 = *(_DWORD *)(v99 + 200);
      v101 = (v100 + 7) & 0xFFFFFFF8;
      if ( v98 )
      {
        *(_DWORD *)(v99 + 336) = v101 - v100;
        *(_DWORD *)(*(_QWORD *)(v52 + 40) + 336LL) += 48;
        goto LABEL_199;
      }
      *(_DWORD *)(v99 + 200) = v101;
    }
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 200LL) += 48;
    goto LABEL_199;
  }
  if ( !v93 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1258LL);
    goto LABEL_190;
  }
LABEL_199:
  ClientExtraBytesTotalSize = GetClientExtraBytesTotalSize((const struct tagWND *)v52);
  if ( ClientExtraBytesTotalSize )
  {
    v103 = xxxClientAllocWindowClassExtraBytes(ClientExtraBytesTotalSize);
    if ( !v103 )
    {
      v95 = 2;
LABEL_186:
      *(_QWORD *)(*(_QWORD *)(v52 + 40) + 120LL) = 0LL;
      SetOrClrWF(1, (struct tagWND *)v52, 0x204u, 1);
LABEL_471:
      v203 = *(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0x10;
      if ( v279 )
        Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v282);
      SetOrClrWF(1, (struct tagWND *)v52, 0x480u, 1);
      SetOrClrWF(1, (struct tagWND *)v52, 0x380u, 1);
      if ( v203 )
        SetVisible(v52, 0);
      v204 = *(_QWORD *)(v52 + 104);
      if ( v204 )
      {
        if ( v203 )
          zzzLockDisplayAreaAndInvalidateDCCache(v204, 16, 0LL);
        if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0) == 0x40 && !IsTopLevelWindow(v52) )
        {
          v205 = *(_QWORD *)(*(_QWORD *)(v52 + 104) + 16LL);
          if ( v260 != v205 )
            zzzAttachThreadInput(*(_QWORD *)(v52 + 16), v205, 0LL);
        }
        UnlinkWindow((struct tagWND *)v52, *(__int64 **)(v52 + 104));
      }
      ClassUnlock(*(struct tagCLS **)v263[0], &v313);
      xxxFreeWindow((struct tagTHREADINFO *)v260, (struct tagWND *)v52);
      if ( v95 )
      {
        v206 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        v207 = v95;
        goto LABEL_539;
      }
      goto LABEL_540;
    }
    if ( !(unsigned int)IsWindowBeingDestroyed(v52) && (*(_BYTE *)(_HMPheFromObject(v52) + 25) & 1) == 0 )
    {
      v104 = *(_QWORD *)(v52 + 40);
      if ( !*(_QWORD *)(v104 + 296) )
      {
        *(_QWORD *)(v104 + 296) = v103;
        v85 = HIWORD(a5) & 0xC000;
        goto LABEL_206;
      }
    }
    UserSetLastError(87);
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 120LL) = 0LL;
    SetOrClrWF(1, (struct tagWND *)v52, 0x204u, 1);
LABEL_470:
    v95 = 0;
    goto LABEL_471;
  }
LABEL_206:
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || v93 )
  {
    v107 = v271;
  }
  else
  {
    v105 = (_QWORD *)GETCLIENTWNDINFO(v52);
    v106 = *(_QWORD *)(*(_QWORD *)(v52 + 40) + 120LL);
    *v105 = v106;
    v107 = v271;
    v108 = *(_QWORD *)(W32GetUserSessionState(v106, v105) + 19904);
    if ( v107 >= 0 )
      v109 = *(_QWORD *)(v108 + 768);
    else
      v109 = *(_QWORD *)(v108 + 576);
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 120LL) = v109;
  }
  if ( *(_QWORD *)(*(_QWORD *)v263[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v263[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
    xxxCreateClassSmIcon(v263);
  }
  SetOrClrWF(1, (struct tagWND *)v52, v270, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 6LL) & 2) != 0 )
    goto LABEL_230;
  if ( v107 < 0 )
  {
    v112 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v263[0], v110) + 19904);
    if ( Atom == *(_WORD *)(v112 + 868)
      || (v114 = *(_QWORD *)(W32GetUserSessionState(v112, v111) + 19904), Atom == *(_WORD *)(v114 + 878))
      || (v116 = *(_QWORD *)(W32GetUserSessionState(v114, v113) + 19904), Atom == *(_WORD *)(v116 + 882))
      || (v118 = *(_QWORD *)(W32GetUserSessionState(v116, v115) + 19904), Atom == *(_WORD *)(v118 + 904))
      || (v120 = *(_QWORD *)(W32GetUserSessionState(v118, v117) + 19904), Atom == *(_WORD *)(v120 + 870))
      || (v122 = *(_QWORD *)(W32GetUserSessionState(v120, v119) + 19904), Atom == *(_WORD *)(v122 + 874))
      || (v124 = *(_QWORD *)(W32GetUserSessionState(v122, v121) + 19904), Atom == *(_WORD *)(v124 + 880))
      || (v126 = *(_QWORD *)(W32GetUserSessionState(v124, v123) + 19904), Atom == *(_WORD *)(v126 + 898))
      || Atom == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v126, v125) + 19904) + 872LL) )
    {
LABEL_230:
      SetOrClrWF(1, (struct tagWND *)v52, 0x208u, 1);
    }
  }
  if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 6LL) & 2) != 0 || v107 < 0)
    && v85 != 0x4000
    && (ProcessPeb = PsGetProcessPeb(**(_QWORD **)(*(_QWORD *)(v52 + 16) + 456LL))) != 0 )
  {
    v127 = *(_WORD *)(ProcessPeb + 844);
    if ( v127 == -535 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1417LL);
    if ( v127 == -10600 )
    {
      v270 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1418LL);
    }
    v128 = a6;
    v129 = v252;
  }
  else
  {
    v128 = a6;
    v129 = v252;
  }
  if ( (GetAppCompatFlags(v260) & 0x8000000) != 0 )
  {
    SetOrClrWF(1, (struct tagWND *)v52, 0x408u, 1);
    v252 = v129 & 0x3F;
    v309 &= 0x3Fu;
  }
  SetOrClrWF(1, (struct tagWND *)v52, 0x501u, 1);
  SetOrClrWF(1, (struct tagWND *)v52, 0x502u, 1);
  SetOrClrWF(1, (struct tagWND *)v52, 0x504u, 1);
  v130 = a15;
  if ( a15 <= *(_WORD *)(v260 + 668) )
    v130 = *(_DWORD *)(v260 + 668);
  *(_DWORD *)(v52 + 256) = v130;
  if ( (GetAppCompatFlags2(39168LL) & 0x10000000) != 0 )
    SetOrClrWF(1, (struct tagWND *)v52, 0xA80u, 1);
  if ( IsInsideUserApiHook(v132, v131) )
    xxxLoadUserApiHook();
  if ( (unsigned int)WantImeWindow(v19, (struct tagWND *)v52) )
  {
    v133 = *(_QWORD *)(v260 + 816);
    if ( v133
      && ((*(_BYTE *)(_HMPheFromObject(v133) + 25) & 1) != 0
       || (unsigned int)IsWindowBeingDestroyed(*(_QWORD *)(v260 + 816))) )
    {
      v265 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1502LL);
    }
    *(_DWORD *)(v52 + 380) |= 0x10000000u;
    ++*(_DWORD *)(v260 + 940);
  }
  if ( ((*(_BYTE *)(v260 + 712) | *(_BYTE *)(**(_QWORD **)(v260 + 496) + 16LL)) & 0x40) != 0 )
  {
    v286 = (__int64)v299;
    v287 = 0LL;
    if ( (unsigned int)xxxCallHook(3LL, *(_QWORD *)v52, (__int64)&v286, 5) )
    {
      v95 = 6;
      goto LABEL_471;
    }
    v128 = v305;
    v257 = v305;
    v256 = v304;
    v255 = v303;
    v264 = v302;
    v280 = v287;
  }
  else
  {
    v280 = 0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    v134 = 1;
    v259 = 1;
    if ( !v19 )
      goto LABEL_470;
  }
  else
  {
    v134 = 0;
    v259 = 0;
  }
  if ( v134 != v295 )
  {
    v275 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v274, 0LL);
    v134 = v259;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0) != 0 )
  {
    v135 = 0;
    if ( v128 == 0x80000000 || v128 == 0x8000 )
    {
      v128 = 0;
      v257 = 0;
      v256 = 0;
    }
    v136 = v255;
    if ( v255 == 0x80000000 || v255 == 0x8000 )
    {
      v136 = 0;
      v255 = 0;
      v264 = 0;
    }
  }
  else
  {
    v135 = 1;
    v136 = v255;
  }
  *(_QWORD *)&v317 = __PAIR64__(v256, v128);
  *((_QWORD *)&v317 + 1) = __PAIR64__(v264, v136);
  if ( v134 )
  {
    v291 = *(_OWORD *)(*((_QWORD *)v283 + 5) + 104LL);
    if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v52, v19) )
    {
      *(_DWORD *)(v52 + 224) = 0;
      *(_DWORD *)(v52 + 228) = 0;
      LogicalToPhysicalInPlaceRectWithSubpixel(v19, (int *)&v291, (float *)(v52 + 224));
      PhysicalToLogicalInPlaceRectWithSubpixel((const struct tagWND *)v52, (int *)&v291, (float *)(v52 + 224));
      v128 = v257;
    }
    if ( v19 != (struct tagWND *)GetDesktopWindow(v52) )
    {
      LODWORD(v317) = v291 + v137;
      DWORD1(v317) = DWORD1(v291) + v138;
    }
    v280 = 1LL;
  }
  if ( v135 )
  {
    SetOrClrWF(1, (struct tagWND *)v52, 0xF04u, 1);
    v278 = 192;
    SetOrClrWF(1, (struct tagWND *)v52, 0x901u, 1);
    SetOrClrWF(1, (struct tagWND *)v52, 0x10u, 1);
    if ( (v128 == 0x80000000 || v128 == 0x8000) && DWORD1(v317) != 0x80000000 )
    {
      v139 = v273;
      if ( DWORD1(v317) != 0x8000 )
        v139 = DWORD1(v317);
      v273 = v139;
    }
    if ( !v262 && (v128 == 0x80000000 || v128 == 0x8000 || v255 == 0x80000000 || v255 == 0x8000) )
    {
      v140 = *(_QWORD *)(*(_QWORD *)(v260 + 456) + 680LL);
      if ( v140 )
      {
        v141 = (struct tagMONITOR *)ValidateHmonitor(v140);
        goto LABEL_294;
      }
      if ( v19 )
      {
        v141 = _MonitorFromWindowInternal(v19, 2u, 0);
LABEL_294:
        v142 = (__int64)v141;
      }
      else
      {
        v142 = (__int64)Str1;
      }
      if ( !v142 )
      {
        v142 = *(_QWORD *)(GetDispInfo(v140, v139) + 96);
        goto LABEL_301;
      }
    }
    else
    {
      v142 = (__int64)Str1;
LABEL_301:
      if ( !v142 )
      {
        v142 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(v52 + 40) + 256LL));
        if ( !v142 )
        {
          if ( v262 )
            v142 = GetInheritedMonitor((struct tagWND *)v52);
          else
            v142 = 0LL;
          if ( !v142 )
            v142 = MonitorFromRect((__int32 *)(*(_QWORD *)(v52 + 40) + 88LL), 2LL, 0);
          UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)v52, (struct tagMONITOR *)v142);
          UpdateTopLevelWindowDPITransform((const struct tagWND *)v52, v142);
        }
      }
    }
    SetTiledRect(v52, &v318, v142);
    v143 = v257;
    if ( v257 == 0x80000000 || v257 == 0x8000 )
    {
      v150 = *(_QWORD *)(v260 + 456);
      if ( (*(_DWORD *)(v150 + 792) & 4) != 0 )
      {
        v272 = 1;
        v143 = *(_DWORD *)(v150 + 776);
        LODWORD(v317) = v143;
        v151 = *(_DWORD *)(*(_QWORD *)(v260 + 456) + 780LL);
      }
      else
      {
        v143 = v318;
        LODWORD(v317) = v318;
        v151 = DWORD1(v318);
      }
      DWORD1(v317) = v151;
      v256 = v151;
      v257 = v143;
      v145 = 1;
    }
    else
    {
      v144 = *(_WORD *)(v142 + 74);
      if ( v144 )
        *(_WORD *)(v142 + 74) = v144 - 1;
      v145 = v277;
    }
    if ( DWORD2(v317) == 0x80000000 || DWORD2(v317) == 0x8000 )
    {
      v152 = *(_QWORD *)(v260 + 456);
      if ( (*(_DWORD *)(v152 + 792) & 2) != 0 )
      {
        v272 = 1;
        DWORD2(v317) = *(_DWORD *)(v152 + 784);
        HIDWORD(v317) = *(_DWORD *)(*(_QWORD *)(v260 + 456) + 788LL);
      }
      else
      {
        DWORD2(v317) = DWORD2(v318) - v143;
        HIDWORD(v317) = HIDWORD(v318) - v256;
      }
    }
    else if ( v145 )
    {
      MonitorRect = GetMonitorRect((__m128i *)v276, v142);
      *(__m128i *)v267 = *MonitorRect;
      v147 = MonitorRect->m128i_i64[1];
      v148 = v317 + DWORD2(v317) - v147;
      v149 = DWORD1(v317) + HIDWORD(v317) - HIDWORD(v147);
      if ( v148 > 0 )
      {
        v257 -= v148;
        LODWORD(v317) = v257;
        if ( v257 < SLODWORD(v267[0]) )
        {
          v257 = v267[0];
          LODWORD(v317) = v267[0];
        }
      }
      if ( v149 > 0 )
      {
        v256 -= v149;
        DWORD1(v317) = v256;
        if ( v256 < SHIDWORD(v267[0]) )
        {
          v256 = HIDWORD(v267[0]);
          DWORD1(v317) = HIDWORD(v267[0]);
        }
      }
    }
  }
  if ( v272 )
    *(_DWORD *)(*(_QWORD *)(v260 + 456) + 792LL) &= 0xFFFFFFF9;
  v153 = *(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0;
  if ( v153 == (char)0x80 || v153 == -64 )
    SetOrClrWF(1, (struct tagWND *)v52, 0xF04u, 1);
  *(_WORD *)(*(_QWORD *)(v52 + 40) + 30LL) |= v278;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v274) && !v259 && *(_QWORD *)(*(_QWORD *)v263[0] + 96LL) )
  {
    *(_OWORD *)v267 = 0LL;
    v155 = v52;
    if ( *(_QWORD *)(v52 + 104) )
      v155 = *(_QWORD *)(v52 + 104);
    zzzLockDisplayAreaAndInvalidateDCCache(v155, 16, 0LL);
    RtlInitUnicodeStringOrId(v267);
    Menu = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 64LL), (char **)v267);
    v275 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v274, (__int64)Menu);
    if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0) == 0x40 || (unsigned int)IsWindowBeingDestroyed(v52) )
    {
      v159 = v275;
      if ( !v275 )
        v159 = (struct _HEAD *)*v274[0];
      DestroyMenu(v159);
      v275 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v274, 0LL);
      goto LABEL_470;
    }
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v274) )
      v300 = 0LL;
    else
      v300 = **(struct _HEAD ***)v274[0];
  }
  v157 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v157 + 31) & 0xC0) == 0x40 )
  {
    v158 = v275;
    if ( !v275 )
      v158 = (struct _HEAD *)*v274[0];
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 320LL) = v158;
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 152LL) = 0LL;
    *(_QWORD *)(v52 + 168) = 0LL;
  }
  else
  {
    *(_QWORD *)(v157 + 320) = 0LL;
    LockWndMenuWorker((_QWORD *)v52, 0, v274);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0) != 0x40 )
  {
    v160 = a16;
    if ( (a16 & 4) != 0 )
    {
      LOBYTE(v154) = 1;
      CoreWindowProp::ChangeRole(v52, 1LL, v154);
    }
    *(_OWORD *)v276 = *(_OWORD *)LockPointer(v267, v52 + 200, v52);
    HMAssignmentLock(v276, 0LL);
    LOBYTE(v161) = IsTopLevelParent((__int64)v19);
    if ( v161 )
    {
      *(_QWORD *)(*(_QWORD *)(v52 + 40) + 64LL) = 0LL;
      v267[0] = v52 + 120;
      v267[1] = 0LL;
      HMAssignmentLock(v267, 0LL);
    }
    else
    {
      NonChildAncestor = (const struct tagWND *)GetNonChildAncestor(v162);
      if ( !(unsigned int)ValidateOwnerDepth(v52, NonChildAncestor) )
        goto LABEL_356;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) = *(_DWORD *)(*((_QWORD *)NonChildAncestor + 5) + 236LL);
        SetOrClrWF(*(_BYTE *)(*((_QWORD *)NonChildAncestor + 5) + 232LL) & 0x40, (struct tagWND *)v52, 0xD840u, 1);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(NonChildAncestor, v164);
      }
      v165 = v52 + 120;
      *(_OWORD *)v276 = *(_OWORD *)LockPointer(v267, v52 + 120, NonChildAncestor);
      HMAssignmentLock(v276, 1LL);
      if ( *(_QWORD *)(v52 + 120)
        && ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v52 + 120) + 40LL) + 24LL) & 8) != 0
         || *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) != 1) )
      {
        SetOrClrWF(1, (struct tagWND *)v52, 0x808u, 1);
      }
      if ( Atom != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v167, v166) + 19904) + 898LL) )
      {
        if ( *(_QWORD *)v165 )
        {
          v168 = *(_QWORD *)(*(_QWORD *)v165 + 16LL);
          if ( v168 != v260 )
            zzzAttachThreadInput(v260, v168, 1LL);
        }
      }
      v160 = a16;
    }
    IsEnabledDeviceUsageNoInline = Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline();
    if ( !*(_QWORD *)(v52 + 120) )
    {
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v52, v170) )
          goto LABEL_386;
        v171 = *(_QWORD *)(v52 + 40);
        v172 = *(_DWORD *)(v171 + 236);
        if ( v172 == 8 || (unsigned int)(v172 - 9) <= 2 )
          goto LABEL_379;
      }
      else
      {
        if ( (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v52, v170) )
          goto LABEL_386;
        v171 = *(_QWORD *)(v52 + 40);
        v172 = *(_DWORD *)(v171 + 236);
        if ( v172 == 8 || (unsigned int)(v172 - 9) <= 2 || v172 == 13 )
          goto LABEL_379;
      }
      if ( v172 == 15 || (*(_BYTE *)(v171 + 232) & 0x40) != 0 )
LABEL_379:
        WindowCloakStateComponentUIAware = 2;
    }
LABEL_386:
    if ( !v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 112LL) )
    {
      v19 = (struct tagWND *)GetThreadDesktopWindow(0LL);
      Win32HM_LockIntoThread<1>(v260, (__int64)v19, (__int64 *)v282);
      v279 = 1;
    }
    if ( (v160 & 2) == 0 )
      goto LABEL_395;
    if ( !*(_QWORD *)(v260 + 1584) )
    {
      SetOrClrWF(1, (struct tagWND *)v52, 0xD880u, 1);
      *(_QWORD *)(v260 + 1360) |= 0x40000uLL;
      *(_DWORD *)(*(_QWORD *)(v260 + 464) + 436LL) |= 0x2000000u;
      if ( !*(_QWORD *)(v260 + 1576) )
      {
        KernelEvent = CreateKernelEvent(1LL);
        *(_QWORD *)(v260 + 1576) = KernelEvent;
        if ( !KernelEvent )
        {
          v95 = 7;
          goto LABEL_471;
        }
      }
      v267[0] = v260 + 1584;
      v267[1] = v52;
      HMAssignmentLock(v267, 0LL);
      goto LABEL_395;
    }
LABEL_356:
    UserSetLastError(87);
    goto LABEL_470;
  }
  if ( !v19 )
    goto LABEL_470;
  if ( (a16 & 2) != 0 )
    goto LABEL_356;
LABEL_395:
  if ( (*(_DWORD *)(v52 + 380) & 0x1000000) != 0 )
  {
    v289 = *(__int64 **)(v52 + 104);
    UnlinkWindow((struct tagWND *)v52, v289);
  }
  LOBYTE(v174) = IsTopLevelParent((__int64)v19);
  if ( !v174 )
  {
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) = *(_DWORD *)(*((_QWORD *)v19 + 5) + 236LL);
    SetOrClrWF(*(_BYTE *)(*((_QWORD *)v19 + 5) + 232LL) & 0x40, (struct tagWND *)v52, 0xD840u, 1);
  }
  if ( v19 && !(unsigned int)ValidateNewParent((_QWORD *)v52, v19, 1) )
  {
    v95 = 9;
    goto LABEL_471;
  }
  *(_OWORD *)v276 = *(_OWORD *)LockPointer(v267, v52 + 104);
  HMAssignmentLock(v276, 0LL);
  if ( v19 )
    v175 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v19 + 5) + 232LL), 10);
  else
    v175 = 0;
  SetWindowSubtreeCoreWindowStatus(v52, v175);
  v177 = *(_QWORD *)(v52 + 40);
  if ( (*(_DWORD *)(v177 + 288) & 0xF) == 2 )
    *(_DWORD *)(v177 + 232) = *(_DWORD *)(v177 + 232) & 0xFFFFFBFF | ((unsigned __int8)ShouldUseLogPixelsForWindowMetrics(
                                                                                         (struct tagWND *)v52,
                                                                                         v176) << 10);
  v178 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *(_DWORD *)(v52 + 384) |= 4u;
  if ( v178 )
  {
    v179 = zzzSetWindowCompositionCloak(v52, v178);
    if ( v179 < 0 )
    {
      v180 = RtlNtStatusToDosError(v179);
      UserSetLastError(v180);
      v95 = 8;
      goto LABEL_471;
    }
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v276);
  if ( v289 )
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)v289, 16, 0LL);
  if ( v19 )
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)v19, 16, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v276);
  v182 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v182 + 31) & 0xC0) == 0x40 && !IsTopLevelWindow(v52) )
  {
    v183 = *(struct tagWND **)(v52 + 104);
    if ( v183 )
    {
      if ( v260 != *((_QWORD *)v183 + 2) )
      {
        if ( v19 != v183 )
        {
          v265 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2212LL);
        }
        zzzAttachThreadInput(v260, *(_QWORD *)(*(_QWORD *)(v52 + 104) + 16LL), 1LL);
        MessageWindow = GetMessageWindow(v52);
        if ( v185 != (struct tagWND *)MessageWindow )
        {
          v182 = *(unsigned int *)(*(_QWORD *)(v52 + 40) + 288LL);
          if ( (((unsigned __int8)v182 ^ *(_BYTE *)(*((_QWORD *)v185 + 5) + 288LL)) & 0xF) != 0
            && !IsChildWindowDpiIsolationEnabled((struct tagWND *)v52, v185) )
          {
            xxxForceUpdateProcessDpiAwarenessContext(
              (struct tagWND *)v52,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 104) + 40LL) + 288LL));
          }
        }
      }
    }
  }
  if ( a3 != *(unsigned __int16 *)(W32GetUserSessionState(v182, v181) + 41368)
    && a3 != 32769
    && !*(_DWORD *)(v260 + 932) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v260 + 480) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1);
  }
  xxxAdjustSize((struct tagWND *)v52);
  ConstrainWindowSIZERECT(&v317);
  if ( *(_QWORD *)(v52 + 24) )
  {
    v186 = *(_QWORD *)(v52 + 40);
    if ( (*(_BYTE *)(v186 + 31) & 0x40) == 0 && *(char *)(v186 + 24) >= 0 )
      CheckFullScreen((struct tagWND *)v52, (struct tagSIZERECT *)&v317);
  }
  v187 = DWORD2(v317);
  if ( SDWORD2(v317) < 0 )
    v187 = 0;
  DWORD2(v317) = v187;
  v188 = HIDWORD(v317);
  if ( v317 < 0 )
    v188 = 0;
  HIDWORD(v317) = v188;
  RECTFromSIZERECT(*(_QWORD *)(v52 + 40) + 88LL, &v317);
  if ( v259 )
  {
    v190 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
LABEL_443:
    v191 = (struct tagMONITOR *)v190;
  }
  else
  {
    if ( v262 )
    {
      v190 = GetInheritedMonitor((struct tagWND *)v52);
      goto LABEL_443;
    }
    v191 = 0LL;
  }
  if ( v191
    || (v191 = (struct tagMONITOR *)MonitorFromRect((__int32 *)(*(_QWORD *)(v52 + 40) + 88LL), 2LL, 0), v192 = 0LL, v191) )
  {
    v192 = *(_QWORD *)v191;
  }
  if ( v192 != *(_QWORD *)(*(_QWORD *)(v52 + 40) + 256LL) )
  {
    UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)v52, v191);
    if ( !v259 )
      UpdateTopLevelWindowDPITransform((const struct tagWND *)v52, (__int64)v191);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 27LL) & 0x20) != 0 && GetRedirectionBitmap(v52, v189) )
  {
    GreLockVisRgn(v194, v193, v195);
    if ( (int)RecreateRedirectionBitmap((struct tagWND *)v52, 0, 0, 0, 0, 0LL) < 0 )
    {
      GreUnlockVisRgn(v196);
      v95 = 3;
      goto LABEL_471;
    }
    GreUnlockVisRgn(v196);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 8LL) & 0x20) != 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v263[0] + 8LL) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*(_QWORD *)v263[0] + 40LL) )
  {
    v197 = GetStyleWindow(v52, 2848) != 0 ? 0x4000 : 0;
    GreLockVisRgn(v199, v198, v200);
    if ( !CreateCacheDC(v52, (unsigned int)(v197 + 0x8000), 0LL) )
    {
      GreUnlockVisRgn(v201);
      v95 = 10;
      goto LABEL_471;
    }
    GreUnlockVisRgn(v201);
  }
  if ( (v252 & 0x80000) != 0
    && (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 26LL) & 8) == 0
    && (int)xxxSetLayeredWindow((struct tagWND *)v52, 0, 0LL) < 0 )
  {
    v95 = 11;
    goto LABEL_471;
  }
  if ( (v252 & 0x2000000) != 0 && !GetStyleWindow(*(_QWORD *)(v52 + 104), 2818) )
  {
    SetOrClrWF(1, (struct tagWND *)v52, 0xB02u, 1);
    if ( (int)SetRedirectedWindow((struct tagWND *)v52, 2) < 0 )
    {
      SetOrClrWF(0, (struct tagWND *)v52, 0xB02u, 1);
      v95 = 12;
      goto LABEL_471;
    }
  }
  v305 = v257;
  v304 = v256;
  v303 = v255;
  v302 = v264;
  if ( !xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v52, 129LL, 0LL, (__int64)v299, 0, 0, 0LL, 1u, 1) )
    goto LABEL_470;
  v208 = *(_QWORD *)(*(_QWORD *)(v52 + 136) + 8LL);
  if ( (*(_BYTE *)(v208 + 9) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu((struct tagWND *)v52, 0);
    v275 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v274, (__int64)SystemMenu);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v274) )
    {
      Win32HMThreadLock<tagMENU>::Win32HMThreadLock<tagMENU>(v276, v274);
      xxxRemoveDeleteMenuHelper((__int64)v274, 5u, 1024, 1);
      xxxRemoveDeleteMenuHelper((__int64)v274, 5u, 1024, 1);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v276);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 18LL) & 2) != 0
    && (!*((_QWORD *)&v310 + 1) || (_DWORD)v310 || *(_QWORD *)(v52 + 184)) )
  {
    *(_OWORD *)v276 = 0LL;
    v307 = *(_QWORD *)(v52 + 184);
    v310 = *(_OWORD *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v52 + 184),
                        (struct _LARGE_UNICODE_STRING *)v276);
  }
  if ( (**(_DWORD **)(W32GetUserSessionState(v208, v202) + 19904) & 4) != 0 )
  {
    v210 = (__int64 *)(v260 + 816);
    if ( !*(_QWORD *)(v260 + 816) && (*(_DWORD *)(v52 + 380) & 0x10000000) != 0 )
    {
      DefaultImeWindow = xxxCreateDefaultImeWindow((struct tagWND *)v52, Atom, (__int64)v281);
      v267[0] = v260 + 816;
      v267[1] = (ULONG_PTR)DefaultImeWindow;
      HMAssignmentLock(v267, 0LL);
      if ( *v210 )
      {
        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v276, v260, *v210);
        xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)*v210, 647LL, 0x21uLL, 0LL, 0, 0, 0LL, 1u, 1);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v276);
      }
      v212 = (**(_DWORD **)(v260 + 512) >> 6) & 1;
      v312 = v212;
      v213 = *(_QWORD *)(v260 + 816);
      if ( v213 && v212 )
      {
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v267, v213);
        xxxSendTransformableMessageTimeout(
          *(struct tagTHREADINFO ***)(v260 + 816),
          647LL,
          0x19uLL,
          *(_QWORD *)(*(_QWORD *)(v260 + 472) + 40LL),
          0,
          0,
          0LL,
          1u,
          1);
        **(_QWORD **)(v260 + 512) &= ~0x40uLL;
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v267);
      }
    }
  }
  if ( v19 && ((*(_DWORD *)(v52 + 380) & 0x1000000) == 0 || *(struct tagWND **)(v52 + 104) == v19) )
  {
    v214 = PWInsertAfter(v280);
    CompositeAppFrameWindowOrSelf = v214;
    if ( (unsigned __int64)(v214 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v214 + 104) != *(_QWORD *)(v52 + 104) )
      CompositeAppFrameWindowOrSelf = v259 != 0;
    v216 = *(_QWORD *)(v52 + 120);
    if ( v216 )
    {
      *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) = *(_DWORD *)(*(_QWORD *)(v216 + 40) + 236LL);
      SetOrClrWF(
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v52 + 120) + 40LL) + 232LL) & 0x40,
        (struct tagWND *)v52,
        0xD840u,
        1);
    }
    if ( !(unsigned int)ValidateNewParent((_QWORD *)v52, v19, 1) )
    {
      v217 = 9;
      goto LABEL_533;
    }
    UnlinkWindow((struct tagWND *)v52, *(__int64 **)(v52 + 104));
    v219 = *(_QWORD *)(v52 + 40);
    if ( (*(_BYTE *)(v219 + 31) & 0xC0) != 0x40 && v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 112LL) )
    {
      if ( (*(_BYTE *)(v219 + 24) & 8) != 0 )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v219, v218) + 19120) )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v52);
          if ( TopMostInsertAfter )
            CompositeAppFrameWindowOrSelf = TopMostInsertAfter;
        }
      }
      else
      {
        if ( !CompositeAppFrameWindowOrSelf )
          goto LABEL_520;
        v220 = 0;
        if ( CompositeAppFrameWindowOrSelf >= 0xFFFFFFFFFFFFFFFEuLL || CompositeAppFrameWindowOrSelf == 1 )
          v220 = 1;
        if ( !v220 && (*(_BYTE *)(*(_QWORD *)(CompositeAppFrameWindowOrSelf + 40) + 24LL) & 8) != 0 )
        {
LABEL_520:
          v221 = (const struct tagWND *)CalcForegroundInsertAfter(v52);
          CompositeAppFrameWindowOrSelf = (unsigned __int64)v221;
          if ( !*(_QWORD *)(v52 + 120) )
            CompositeAppFrameWindowOrSelf = (unsigned __int64)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v221);
        }
      }
    }
    if ( CompositeAppFrameWindowOrSelf >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v217 = 13;
      goto LABEL_533;
    }
    LinkWindow((struct tagWND *)v52, (struct tagWND **)CompositeAppFrameWindowOrSelf, (__int64)v19);
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)v19, 16, 0LL);
  }
  v223 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v223 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x40) != 0 )
  {
    v224 = *(_DWORD *)(v223 + 96);
    v225 = *(_DWORD *)(v223 + 88);
    *(_DWORD *)(v223 + 96) = DWORD2(v291) + v291 - v225;
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 88LL) = v225 + *(_DWORD *)(*(_QWORD *)(v52 + 40) + 96LL) - v224;
  }
  v318 = *(_OWORD *)(*(_QWORD *)(v52 + 40) + 88LL);
  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v52, 131LL, 0LL, (__int64)&v318, 0, 0, 0LL, 1u, 0);
  *(_OWORD *)(*(_QWORD *)(v52 + 40) + 104LL) = v318;
  if ( xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v52, 1LL, 0LL, (__int64)v299, 0, 0, 0LL, 1u, 1) == -1 )
  {
    v217 = 0;
LABEL_533:
    if ( v279 )
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v282);
    if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3) )
      xxxDestroyWindow((struct tagWND *)v52);
    ClassUnlock(*(struct tagCLS **)v263[0], &v313);
    if ( v217 )
    {
      v206 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      v207 = v217;
LABEL_539:
      TraceLoggingCreateWindowFailed(v207, *((unsigned __int64 *)&v206 + 1));
    }
LABEL_540:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
    goto LABEL_33;
  }
  SetOrClrWF(1, (struct tagWND *)v52, 0x780u, 1);
  xxxConsiderPreferredDpiChange((struct tagWND *)v52);
  if ( (unsigned int)IsWindowDesktopComposed(v52) )
  {
    v228 = *(_DWORD *)(*(_QWORD *)(v52 + 40) + 28LL);
    v229 = *(_QWORD *)v52;
    v230 = (void *)ReferenceDwmApiPort(v227, v226);
    DwmAsyncChildStyleChange(v230, v229, 4294967280LL, v228);
    DwmChildRectChange((struct tagWND *)v52);
    DirtyVisRgnTrackers((struct tagWND *)v52);
    v233 = *(__int64 **)(v52 + 120);
    if ( v233 )
      v234 = *v233;
    else
      v234 = 0LL;
    v235 = *(_QWORD *)v52;
    v236 = (void *)ReferenceDwmApiPort(v232, v231);
    DwmAsyncOwnerChange(v236, v235, v234);
  }
  xxxWindowEvent(0x8000u, (struct tagWND *)v52, 0, 0, 0);
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 16LL) & 0x10) == 0 )
  {
    xxxSendSizeMessage(v52, 0LL);
    if ( v19 && (struct tagWND *)GetDesktopWindow(v52) != v19 )
    {
      LODWORD(v318) = v318 - v291;
      DWORD1(v318) -= DWORD1(v291);
    }
    xxxSendTransformableMessageTimeout(
      (struct tagTHREADINFO **)v52,
      3LL,
      0LL,
      (unsigned __int16)v318 | (WORD2(v318) << 16),
      0,
      0,
      0LL,
      1u,
      0);
  }
  v240 = *(_DWORD *)(W32GetUserSessionState(v238, v237) + 66792) & 0x10000 | 1;
  v241 = *(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL);
  if ( (v241 & 0x20) != 0 )
  {
    SetMinimize(v52, 0LL);
    v242 = 7LL;
    goto LABEL_555;
  }
  if ( (v241 & 1) != 0 )
  {
    SetOrClrWF(0, (struct tagWND *)v52, 0xF01u, 1);
    v240 |= 0x10u;
    v242 = 3LL;
LABEL_555:
    xxxMinMaximize(v52, v242, v240);
  }
  CalcWindowFullScreen((struct tagWND *)v52, v239);
  v243 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v243 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v243 + 24) & 4) != 0 )
  {
    v244 = v260;
  }
  else
  {
    v244 = v260;
    if ( *(_QWORD *)(v52 + 104) )
    {
      Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v276, v260, v52 + 104);
      xxxSendTransformableMessageTimeout(
        *(struct tagTHREADINFO ***)(v52 + 104),
        528LL,
        (*(unsigned __int16 *)(*(_QWORD *)(v52 + 40) + 320LL) << 16) | 1,
        *(_QWORD *)v52,
        0,
        0,
        0LL,
        1u,
        0);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v276);
    }
  }
  xxxInheritWindowMonitor((struct tagWND *)v52, 0LL, 0);
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v316, (struct tagWND *)v52);
  if ( (a5 & 0x10000000) != 0 )
  {
    v247 = W32GetUserSessionState(v246, v245);
    xxxShowWindowEx((const struct tagWND *)v52, v273, v273 & 0x10000 | *(_DWORD *)(v247 + 66792) & 0x10000);
  }
  CDwmWindowNotifyBatch::~CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v316);
  v248 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v248 + 31) & 0xC0) == 0 || (*(_BYTE *)(v248 + 26) & 4) != 0 )
  {
    v249 = *(_DWORD *)(*(_QWORD *)(v244 + 456) + 676LL);
    if ( v249 )
    {
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v52, 50LL, v249, 0LL, 0, 0, 0LL, 1u, 1);
      *(_DWORD *)(*(_QWORD *)(v244 + 456) + 676LL) = 0;
    }
  }
  if ( v279 )
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v282);
  ClassUnlock(*(struct tagCLS **)v263[0], &v313);
  v250 = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
  v251 = v250;
  if ( !v250 || (*(_BYTE *)(_HMPheFromObject(v250) + 25) & 1) != 0 )
    v251 = 0LL;
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v274);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v282);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v263);
  return v251;
}
