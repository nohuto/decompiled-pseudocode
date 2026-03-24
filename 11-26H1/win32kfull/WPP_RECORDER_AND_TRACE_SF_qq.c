/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0
 * Callers:
 *     xxxProcessHidInput @ 0x14001EB20 (xxxProcessHidInput.c)
 *     DestroyThreadsMessages @ 0x140093F10 (DestroyThreadsMessages.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140094B10 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400951E4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x140096DC8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     EditionUpdateInputTransformFromHitTest @ 0x1400981B0 (EditionUpdateInputTransformFromHitTest.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140135360 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1401497E4 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x14018D7E0 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x14018E550 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     RemoveProcessFromJob @ 0x14018E740 (RemoveProcessFromJob.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1401948F0 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x14019D930 (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x14019EDB0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1401E9238 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1401E94B4 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14025E4B0 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14026BC80 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x14026D3B8 (_anonymous_namespace_--OnForegroundWindowChanged.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14026F0F4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140270360 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserConvertToInterceptWindow @ 0x1402B08D0 (NtUserConvertToInterceptWindow.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1402CFFFC (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     UserJobCallout @ 0x1402D00F0 (UserJobCallout.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402E5838 (-xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0
 * Reason: Hex-Rays returned no pseudocode for 0x14018E9F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018E9F0: mov     r11, rsp
 * 000000014018E9F3: mov     [r11+8], rbx
 * 000000014018E9F7: mov     [r11+10h], rbp
 * 000000014018E9FB: mov     [r11+18h], rsi
 * 000000014018E9FF: push    rdi
 * 000000014018EA00: sub     rsp, 50h
 * 000000014018EA04: movzx   ebx, [rsp+58h+arg_30]
 * 000000014018EA0C: mov     rsi, r9
 * 000000014018EA0F: mov     dil, r8b
 * 000000014018EA12: mov     ebp, 8
 * 000000014018EA17: test    dl, dl
 * 000000014018EA19: jz      short loc_14018EA55
 * 000000014018EA1B: mov     rax, cs:pfnWppTraceMessage
 * 000000014018EA22: lea     rdx, [r11+50h]
 * 000000014018EA26: mov     r8, [rsp+58h+arg_38]
 * 000000014018EA2E: mov     r9d, ebx
 * 000000014018EA31: mov     qword ptr [r11-18h], 0
 * 000000014018EA39: mov     [r11-20h], rbp
 * 000000014018EA3D: mov     [r11-28h], rdx
 * 000000014018EA41: lea     rdx, [r11+48h]
 * 000000014018EA45: mov     [r11-30h], rbp
 * 000000014018EA49: mov     [r11-38h], rdx
 * 000000014018EA4D: lea     edx, [rbp+23h]
 * 000000014018EA50: call    _guard_dispatch_icall
 * 000000014018EA55: test    dil, dil
 * 000000014018EA58: jz      short loc_14018EAB3
 * 000000014018EA5A: mov     r9, [rsp+58h+arg_38]
 * 000000014018EA62: lea     rax, [rsp+58h+arg_48]
 * 000000014018EA6A: mov     r8d, [rsp+58h+arg_28]
 * 000000014018EA72: mov     rcx, rsi
 * 000000014018EA75: movzx   edx, [rsp+58h+arg_20]
 * 000000014018EA7D: mov     [rsp+58h+var_10], 0
 * 000000014018EA86: mov     [rsp+58h+var_18], rbp
 * 000000014018EA8B: mov     [rsp+58h+var_20], rax
 * 000000014018EA90: lea     rax, [rsp+58h+arg_40]
 * 000000014018EA98: mov     [rsp+58h+var_28], rbp
 * 000000014018EA9D: mov     [rsp+58h+var_30], rax
 * 000000014018EAA2: mov     [rsp+58h+var_38], bx
 * 000000014018EAA7: call    cs:__imp_WppAutoLogTrace
 * 000000014018EAAE: nop     dword ptr [rax+rax+00h]
 * 000000014018EAB3: mov     rbx, [rsp+58h+arg_0]
 * 000000014018EAB8: mov     rbp, [rsp+58h+arg_8]
 * 000000014018EABD: mov     rsi, [rsp+58h+arg_10]
 * 000000014018EAC2: add     rsp, 50h
 * 000000014018EAC6: pop     rdi
 * 000000014018EAC7: retn
 */
