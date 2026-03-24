/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140199D38
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402C497C (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402C6F74 (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140199D38
 * Reason: Hex-Rays returned no pseudocode for 0x140199D38
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140199D38: mov     [rsp+arg_0], rbx
 * 0000000140199D3D: mov     [rsp+arg_8], rbp
 * 0000000140199D42: mov     [rsp+arg_10], rsi
 * 0000000140199D47: push    rdi
 * 0000000140199D48: sub     rsp, 70h
 * 0000000140199D4C: movzx   edi, [rsp+78h+arg_30]
 * 0000000140199D54: mov     rsi, r9
 * 0000000140199D57: mov     bl, r8b
 * 0000000140199D5A: mov     ebp, 4
 * 0000000140199D5F: test    dl, dl
 * 0000000140199D61: jnz     loc_140199E07
 * 0000000140199D67: test    bl, bl
 * 0000000140199D69: jz      loc_140199DF0
 * 0000000140199D6F: mov     r9, [rsp+78h+arg_38]
 * 0000000140199D77: lea     rax, [rsp+78h+arg_58]
 * 0000000140199D7F: mov     r8d, [rsp+78h+arg_28]
 * 0000000140199D87: mov     rcx, rsi
 * 0000000140199D8A: movzx   edx, [rsp+78h+arg_20]
 * 0000000140199D92: mov     [rsp+78h+var_10], 0
 * 0000000140199D9B: mov     [rsp+78h+var_18], rbp
 * 0000000140199DA0: mov     [rsp+78h+var_20], rax
 * 0000000140199DA5: lea     rax, [rsp+78h+arg_50]
 * 0000000140199DAD: mov     [rsp+78h+var_28], rbp
 * 0000000140199DB2: mov     [rsp+78h+var_30], rax
 * 0000000140199DB7: lea     rax, [rsp+78h+arg_48]
 * 0000000140199DBF: mov     [rsp+78h+var_38], rbp
 * 0000000140199DC4: mov     [rsp+78h+var_40], rax
 * 0000000140199DC9: lea     rax, [rsp+78h+arg_40]
 * 0000000140199DD1: mov     [rsp+78h+var_48], 8
 * 0000000140199DDA: mov     [rsp+78h+var_50], rax
 * 0000000140199DDF: mov     word ptr [rsp+78h+var_58], di
 * 0000000140199DE4: call    cs:__imp_WppAutoLogTrace
 * 0000000140199DEB: nop     dword ptr [rax+rax+00h]
 * 0000000140199DF0: lea     r11, [rsp+78h+var_8]
 * 0000000140199DF5: mov     rbx, [r11+10h]
 * 0000000140199DF9: mov     rbp, [r11+18h]
 * 0000000140199DFD: mov     rsi, [r11+20h]
 * 0000000140199E01: mov     rsp, r11
 * 0000000140199E04: pop     rdi
 * 0000000140199E05: retn
 * 0000000140199E07: mov     rax, cs:pfnWppTraceMessage
 * 0000000140199E0E: lea     rdx, [rsp+78h+arg_58]
 * 0000000140199E16: mov     r8, [rsp+78h+arg_38]
 * 0000000140199E1E: mov     r9d, edi
 * 0000000140199E21: mov     [rsp+78h+var_18], 0
 * 0000000140199E2A: mov     [rsp+78h+var_20], rbp
 * 0000000140199E2F: mov     [rsp+78h+var_28], rdx
 * 0000000140199E34: lea     rdx, [rsp+78h+arg_50]
 * 0000000140199E3C: mov     [rsp+78h+var_30], rbp
 * 0000000140199E41: mov     [rsp+78h+var_38], rdx
 * 0000000140199E46: lea     rdx, [rsp+78h+arg_48]
 * 0000000140199E4E: mov     [rsp+78h+var_40], rbp
 * 0000000140199E53: mov     [rsp+78h+var_48], rdx
 * 0000000140199E58: lea     rdx, [rsp+78h+arg_40]
 * 0000000140199E60: mov     [rsp+78h+var_50], 8
 * 0000000140199E69: mov     [rsp+78h+var_58], rdx
 * 0000000140199E6E: mov     edx, 2Bh ; '+'
 * 0000000140199E73: call    _guard_dispatch_icall
 * 0000000140199E78: jmp     loc_140199D67
 */
