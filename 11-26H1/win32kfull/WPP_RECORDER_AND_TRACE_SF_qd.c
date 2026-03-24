/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868
 * Callers:
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14001144C (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14004ABFC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D0A0 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14015DA7C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14015F738 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1401608B0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1401624F0 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140164A04 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140164BB4 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z @ 0x1401FE864 (-xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140229AA8 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 *     NtUserConvertToInterceptWindow @ 0x1402B08D0 (NtUserConvertToInterceptWindow.c)
 *     NtUserEnterMoveSizeLoop @ 0x1402B1BD0 (NtUserEnterMoveSizeLoop.c)
 *     NtUserInjectTouchpadAction @ 0x1402B7030 (NtUserInjectTouchpadAction.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402DBB00 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402DBD50 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402DD64C (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402DE340 (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402DEFD8 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402E0514 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402E298C (-PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402E596C (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402F4654 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868
 * Reason: Hex-Rays returned no pseudocode for 0x140162868
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140162868: mov     r11, rsp
 * 000000014016286B: mov     [r11+8], rbx
 * 000000014016286F: mov     [r11+10h], rsi
 * 0000000140162873: push    rdi
 * 0000000140162874: sub     rsp, 50h
 * 0000000140162878: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140162880: mov     rsi, r9
 * 0000000140162883: mov     dil, r8b
 * 0000000140162886: test    dl, dl
 * 0000000140162888: jz      short loc_1401628CE
 * 000000014016288A: mov     rax, cs:pfnWppTraceMessage
 * 0000000140162891: lea     rdx, [r11+50h]
 * 0000000140162895: mov     r8, [rsp+58h+arg_38]
 * 000000014016289D: mov     r9d, ebx
 * 00000001401628A0: mov     qword ptr [r11-18h], 0
 * 00000001401628A8: mov     qword ptr [r11-20h], 4
 * 00000001401628B0: mov     [r11-28h], rdx
 * 00000001401628B4: lea     rdx, [r11+48h]
 * 00000001401628B8: mov     qword ptr [r11-30h], 8
 * 00000001401628C0: mov     [r11-38h], rdx
 * 00000001401628C4: mov     edx, 2Bh ; '+'
 * 00000001401628C9: call    _guard_dispatch_icall
 * 00000001401628CE: test    dil, dil
 * 00000001401628D1: jz      short loc_140162934
 * 00000001401628D3: mov     r9, [rsp+58h+arg_38]
 * 00000001401628DB: lea     rax, [rsp+58h+arg_48]
 * 00000001401628E3: mov     r8d, [rsp+58h+arg_28]
 * 00000001401628EB: mov     rcx, rsi
 * 00000001401628EE: movzx   edx, [rsp+58h+arg_20]
 * 00000001401628F6: mov     [rsp+58h+var_10], 0
 * 00000001401628FF: mov     [rsp+58h+var_18], 4
 * 0000000140162908: mov     [rsp+58h+var_20], rax
 * 000000014016290D: lea     rax, [rsp+58h+arg_40]
 * 0000000140162915: mov     [rsp+58h+var_28], 8
 * 000000014016291E: mov     [rsp+58h+var_30], rax
 * 0000000140162923: mov     [rsp+58h+var_38], bx
 * 0000000140162928: call    cs:__imp_WppAutoLogTrace
 * 000000014016292F: nop     dword ptr [rax+rax+00h]
 * 0000000140162934: mov     rbx, [rsp+58h+arg_0]
 * 0000000140162939: mov     rsi, [rsp+58h+arg_8]
 * 000000014016293E: add     rsp, 50h
 * 0000000140162942: pop     rdi
 * 0000000140162943: retn
 */
