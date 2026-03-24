/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140096B60
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1400955A0 (FindQMsg.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x140096DC8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1401497E4 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     UserJobCallout @ 0x1402D00F0 (UserJobCallout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140096B60
 * Reason: Hex-Rays returned no pseudocode for 0x140096B60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140096B60: mov     [rsp+arg_0], rbx
 * 0000000140096B65: mov     [rsp+arg_8], rbp
 * 0000000140096B6A: push    rsi
 * 0000000140096B6B: sub     rsp, 60h
 * 0000000140096B6F: movzx   esi, [rsp+68h+arg_30]
 * 0000000140096B77: mov     rbp, r9
 * 0000000140096B7A: movzx   ebx, r8b
 * 0000000140096B7E: test    dl, dl
 * 0000000140096B80: jnz     loc_140096C12
 * 0000000140096B86: test    bl, bl
 * 0000000140096B88: jz      short loc_140096C01
 * 0000000140096B8A: mov     r9, [rsp+68h+arg_38]
 * 0000000140096B92: lea     rax, [rsp+68h+arg_50]
 * 0000000140096B9A: mov     r8d, [rsp+68h+arg_28]
 * 0000000140096BA2: mov     rcx, rbp
 * 0000000140096BA5: movzx   edx, [rsp+68h+arg_20]
 * 0000000140096BAD: mov     [rsp+68h+var_10], 0
 * 0000000140096BB6: mov     [rsp+68h+var_18], 8
 * 0000000140096BBF: mov     [rsp+68h+var_20], rax
 * 0000000140096BC4: lea     rax, [rsp+68h+arg_48]
 * 0000000140096BCC: mov     [rsp+68h+var_28], 8
 * 0000000140096BD5: mov     [rsp+68h+var_30], rax
 * 0000000140096BDA: lea     rax, [rsp+68h+arg_40]
 * 0000000140096BE2: mov     [rsp+68h+var_38], 8
 * 0000000140096BEB: mov     [rsp+68h+var_40], rax
 * 0000000140096BF0: mov     word ptr [rsp+68h+var_48], si
 * 0000000140096BF5: call    cs:__imp_WppAutoLogTrace
 * 0000000140096BFC: nop     dword ptr [rax+rax+00h]
 * 0000000140096C01: mov     rbx, [rsp+68h+arg_0]
 * 0000000140096C06: mov     rbp, [rsp+68h+arg_8]
 * 0000000140096C0B: add     rsp, 60h
 * 0000000140096C0F: pop     rsi
 * 0000000140096C10: retn
 * 0000000140096C12: mov     rax, cs:pfnWppTraceMessage
 * 0000000140096C19: lea     rdx, [rsp+68h+arg_50]
 * 0000000140096C21: mov     r8, [rsp+68h+arg_38]
 * 0000000140096C29: mov     r9d, esi
 * 0000000140096C2C: mov     [rsp+68h+var_18], 0
 * 0000000140096C35: mov     [rsp+68h+var_20], 8
 * 0000000140096C3E: mov     [rsp+68h+var_28], rdx
 * 0000000140096C43: lea     rdx, [rsp+68h+arg_48]
 * 0000000140096C4B: mov     [rsp+68h+var_30], 8
 * 0000000140096C54: mov     [rsp+68h+var_38], rdx
 * 0000000140096C59: lea     rdx, [rsp+68h+arg_40]
 * 0000000140096C61: mov     [rsp+68h+var_40], 8
 * 0000000140096C6A: mov     [rsp+68h+var_48], rdx
 * 0000000140096C6F: mov     edx, 2Bh ; '+'
 * 0000000140096C74: call    _guard_dispatch_icall
 * 0000000140096C79: jmp     loc_140096B86
 */
