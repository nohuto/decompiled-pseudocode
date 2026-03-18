/*
 * XREFs of _GetProp @ 0x14003A810
 * Callers:
 *     FeedbackSetWindowSetting @ 0x14000FAA4 (FeedbackSetWindowSetting.c)
 *     GetOldRedirectionBitmap @ 0x140018A98 (GetOldRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x140018B50 (SetOldRedirectionBitmap.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x14002E2B0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x14003139C (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetRedirectionFlags @ 0x140042B14 (GetRedirectionFlags.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x14004ED4C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x140054720 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1400865E0 (xxxPerformTargetingWithinPwnd.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x140086E74 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     xxxTouchTargetWindow @ 0x14008868C (xxxTouchTargetWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x14008A1B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400A487C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14011E010 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     xxxCompositedPaint @ 0x14011E700 (xxxCompositedPaint.c)
 *     GetInheritedMonitor @ 0x14011EDF0 (GetInheritedMonitor.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x14013DE70 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 *     CreateSprite @ 0x14014D24C (CreateSprite.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1401605BC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14016111C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1401620BC (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z @ 0x1401661C0 (-_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1401D215C (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     ParkIcon @ 0x1401E63DC (ParkIcon.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401F69D0 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     GetDisplayAffinity @ 0x1401FF1C0 (GetDisplayAffinity.c)
 *     FeedbackGetWindowSetting @ 0x1401FFAEC (FeedbackGetWindowSetting.c)
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x140202334 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x140202438 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1402026DC (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     _anonymous_namespace_::GetWindowVisualizationSetting @ 0x14020525C (_anonymous_namespace_--GetWindowVisualizationSetting.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1402066D0 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     _anonymous_namespace_::GetStore @ 0x140206F94 (_anonymous_namespace_--GetStore.c)
 *     NtUserfnDDEINIT @ 0x140210450 (NtUserfnDDEINIT.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x140211B4C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1402249C0 (UserRemoveWindowedSwapChain.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAX@Z @ 0x140236620 (-DDEImpDecRefInitWorker@@YAXPEAX@Z.c)
 *     xxxMetricsRecalc @ 0x14023D32C (xxxMetricsRecalc.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x14024B060 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     NtUserSetBrokeredForeground @ 0x14024E900 (NtUserSetBrokeredForeground.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x14025C7C4 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14025FAE8 (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402627D4 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     NtUserGetProp @ 0x140279740 (NtUserGetProp.c)
 *     NtUserGetProp2 @ 0x140279820 (NtUserGetProp2.c)
 *     NtUserSetWindowBand @ 0x14027A3C0 (NtUserSetWindowBand.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x14027B068 (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x140289418 (--$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z.c)
 *     InvalidateGDIWindows @ 0x140296394 (InvalidateGDIWindows.c)
 *     UserGetHwnd @ 0x1402A496C (UserGetHwnd.c)
 *     NtUserGetAppImeLevel @ 0x1402B2310 (NtUserGetAppImeLevel.c)
 *     NtUserGetWindowMinimizeRect @ 0x1402B55B0 (NtUserGetWindowMinimizeRect.c)
 *     NtUserIsTouchWindow @ 0x1402B78F0 (NtUserIsTouchWindow.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1402C0090 (NtUserShutdownBlockReasonQuery.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1402CC4A8 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402CCB9C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402CD114 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402DEFD8 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402DF660 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402E690C (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402E7150 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1402FAF24 (xxxArrangeIconicWindows.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14001019C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     GetSharedPropForFilteredProcesses @ 0x140294E98 (GetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetProp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // ebx
  __int64 v13; // rcx
  tagObjLock **v14; // rdi
  __int64 v15; // rdx
  __int64 Prop; // rbx
  __int64 v18; // rax
  __int128 v19; // [rsp+30h] [rbp-88h] BYREF
  char v20; // [rsp+40h] [rbp-78h]
  char v21; // [rsp+48h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a1 + 144);
  v20 = 0;
  W32GetUserSessionState(a1, a2);
  v19 = 0LL;
  v21 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v8, v7) == 1 )
  {
    v21 = 1;
    UserSessionState = W32GetUserSessionState(v10, v9);
    v12 = 0;
    v13 = 0LL;
    if ( v3 != UserSessionState + 42480 )
      v13 = v3;
    *(_QWORD *)&v19 = v13;
    v14 = (tagObjLock **)&v19;
    do
    {
      if ( *v14 )
        tagObjLock::LockExclusive(*v14);
      ++v12;
      ++v14;
    }
    while ( !v12 );
    v20 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( !Prop && !a3 && (*(_DWORD *)(a1 + 384) & 1) != 0 )
  {
    if ( (_WORD)a2 == 0xA914 )
    {
      if ( v20 && v21 && (_QWORD)v19 )
        tagObjLock::UnLockExclusive((tagObjLock *)v19);
      return 0LL;
    }
    LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), v15);
    v18 = *(_QWORD *)(a1 + 16);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v18 + 456), &ApcState);
    Prop = GetSharedPropForFilteredProcesses(a1, a2);
    KeUnstackDetachProcess(&ApcState);
  }
  if ( v20 && v21 )
  {
    if ( (_QWORD)v19 )
      tagObjLock::UnLockExclusive((tagObjLock *)v19);
  }
  return Prop;
}
