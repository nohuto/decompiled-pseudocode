/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC
 * Callers:
 *     xxxProcessHidInput @ 0x14001EB20 (xxxProcessHidInput.c)
 *     FreeHook @ 0x1400267F0 (FreeHook.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x14005DB04 (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x140089BA0 (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140154578 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14016111C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     _anonymous_namespace_::SetMonitorDockThresholds @ 0x1401644D4 (_anonymous_namespace_--SetMonitorDockThresholds.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140192D18 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1401A2F28 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1401A3834 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1401A4808 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1401A5930 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?ComputeShowCommandSource@@YA?AW4ShowCommandSource@@H@Z @ 0x1401DD598 (-ComputeShowCommandSource@@YA-AW4ShowCommandSource@@H@Z.c)
 *     NtUserSetCursorPos @ 0x1401DD8F0 (NtUserSetCursorPos.c)
 *     ?OnTimer@CRapidHpdInfo@@SAXXZ @ 0x1401E6268 (-OnTimer@CRapidHpdInfo@@SAXXZ.c)
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x140212314 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14022CAD4 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x140239A38 (-xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x14024B6D0 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402613D0 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14026A3E8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14026BC80 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x140289CEC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 *     WindowMargins::CWindowMarginProp::GetOverrideMargins @ 0x14029006C (WindowMargins--CWindowMarginProp--GetOverrideMargins.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 *     ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1402A68E4 (-xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     NtUserEnterMoveSizeLoop @ 0x1402B1BD0 (NtUserEnterMoveSizeLoop.c)
 *     NtUserRegisterCoreMessagingEndPoint @ 0x1402B9F20 (NtUserRegisterCoreMessagingEndPoint.c)
 *     NtUserSendInput @ 0x1402BB4D0 (NtUserSendInput.c)
 *     ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402E1FFC (-GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z.c)
 *     ?RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@4@@Z @ 0x1402E3454 (-RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@Adva.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402E3844 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E9174 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402E9F0C (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402EC9BC (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC
 * Reason: Hex-Rays returned no pseudocode for 0x1401A3DAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401A3DAC: mov     r11, rsp
 * 00000001401A3DAF: mov     [r11+8], rbx
 * 00000001401A3DB3: mov     [r11+10h], rbp
 * 00000001401A3DB7: mov     [r11+18h], rsi
 * 00000001401A3DBB: push    rdi
 * 00000001401A3DBC: sub     rsp, 50h
 * 00000001401A3DC0: movzx   ebx, [rsp+58h+arg_30]
 * 00000001401A3DC8: mov     rsi, r9
 * 00000001401A3DCB: mov     dil, r8b
 * 00000001401A3DCE: mov     ebp, 4
 * 00000001401A3DD3: test    dl, dl
 * 00000001401A3DD5: jz      short loc_1401A3E11
 * 00000001401A3DD7: mov     rax, cs:pfnWppTraceMessage
 * 00000001401A3DDE: lea     rdx, [r11+50h]
 * 00000001401A3DE2: mov     r8, [rsp+58h+arg_38]
 * 00000001401A3DEA: mov     r9d, ebx
 * 00000001401A3DED: mov     qword ptr [r11-18h], 0
 * 00000001401A3DF5: mov     [r11-20h], rbp
 * 00000001401A3DF9: mov     [r11-28h], rdx
 * 00000001401A3DFD: lea     rdx, [r11+48h]
 * 00000001401A3E01: mov     [r11-30h], rbp
 * 00000001401A3E05: mov     [r11-38h], rdx
 * 00000001401A3E09: lea     edx, [rbp+27h]
 * 00000001401A3E0C: call    _guard_dispatch_icall
 * 00000001401A3E11: test    dil, dil
 * 00000001401A3E14: jz      short loc_1401A3E6F
 * 00000001401A3E16: mov     r9, [rsp+58h+arg_38]
 * 00000001401A3E1E: lea     rax, [rsp+58h+arg_48]
 * 00000001401A3E26: mov     r8d, [rsp+58h+arg_28]
 * 00000001401A3E2E: mov     rcx, rsi
 * 00000001401A3E31: movzx   edx, [rsp+58h+arg_20]
 * 00000001401A3E39: mov     [rsp+58h+var_10], 0
 * 00000001401A3E42: mov     [rsp+58h+var_18], rbp
 * 00000001401A3E47: mov     [rsp+58h+var_20], rax
 * 00000001401A3E4C: lea     rax, [rsp+58h+arg_40]
 * 00000001401A3E54: mov     [rsp+58h+var_28], rbp
 * 00000001401A3E59: mov     [rsp+58h+var_30], rax
 * 00000001401A3E5E: mov     [rsp+58h+var_38], bx
 * 00000001401A3E63: call    cs:__imp_WppAutoLogTrace
 * 00000001401A3E6A: nop     dword ptr [rax+rax+00h]
 * 00000001401A3E6F: mov     rbx, [rsp+58h+arg_0]
 * 00000001401A3E74: mov     rbp, [rsp+58h+arg_8]
 * 00000001401A3E79: mov     rsi, [rsp+58h+arg_10]
 * 00000001401A3E7E: add     rsp, 50h
 * 00000001401A3E82: pop     rdi
 * 00000001401A3E83: retn
 */
