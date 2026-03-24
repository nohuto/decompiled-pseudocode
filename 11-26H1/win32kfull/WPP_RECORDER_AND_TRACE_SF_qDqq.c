/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x1401E9C04
 * Callers:
 *     ?_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1401E9900 (-_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x1401E9C04
 * Reason: Hex-Rays returned no pseudocode for 0x1401E9C04
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401E9C04: mov     r11, rsp
 * 00000001401E9C07: mov     [r11+8], rbx
 * 00000001401E9C0B: mov     [r11+10h], rsi
 * 00000001401E9C0F: mov     [r11+18h], rdi
 * 00000001401E9C13: push    r14
 * 00000001401E9C15: sub     rsp, 70h
 * 00000001401E9C19: mov     esi, 8
 * 00000001401E9C1E: mov     rdi, r9
 * 00000001401E9C21: mov     bl, r8b
 * 00000001401E9C24: lea     r14d, [rsi+9]
 * 00000001401E9C28: test    dl, dl
 * 00000001401E9C2A: jz      short loc_1401E9C81
 * 00000001401E9C2C: mov     rax, cs:pfnWppTraceMessage
 * 00000001401E9C33: lea     rdx, [r11+60h]
 * 00000001401E9C37: mov     qword ptr [r11-18h], 0
 * 00000001401E9C3F: lea     r8, WPP_572cbfa18a19310ead456f8b2e061444_Traceguids
 * 00000001401E9C46: mov     [r11-20h], rsi
 * 00000001401E9C4A: mov     r9d, r14d
 * 00000001401E9C4D: mov     [r11-28h], rdx
 * 00000001401E9C51: lea     rdx, [r11+58h]
 * 00000001401E9C55: mov     [r11-30h], rsi
 * 00000001401E9C59: mov     [r11-38h], rdx
 * 00000001401E9C5D: lea     rdx, [r11+50h]
 * 00000001401E9C61: mov     qword ptr [r11-40h], 4
 * 00000001401E9C69: mov     [r11-48h], rdx
 * 00000001401E9C6D: lea     rdx, [r11+48h]
 * 00000001401E9C71: mov     [r11-50h], rsi
 * 00000001401E9C75: mov     [r11-58h], rdx
 * 00000001401E9C79: lea     edx, [rsi+23h]
 * 00000001401E9C7C: call    _guard_dispatch_icall
 * 00000001401E9C81: test    bl, bl
 * 00000001401E9C83: jz      short loc_1401E9CFF
 * 00000001401E9C85: mov     [rsp+78h+var_10], 0
 * 00000001401E9C8E: lea     rax, [rsp+78h+arg_58]
 * 00000001401E9C96: mov     [rsp+78h+var_18], rsi
 * 00000001401E9C9B: lea     r9, WPP_572cbfa18a19310ead456f8b2e061444_Traceguids
 * 00000001401E9CA2: mov     [rsp+78h+var_20], rax
 * 00000001401E9CA7: mov     edx, 3
 * 00000001401E9CAC: mov     [rsp+78h+var_28], rsi
 * 00000001401E9CB1: lea     rax, [rsp+78h+arg_50]
 * 00000001401E9CB9: mov     [rsp+78h+var_30], rax
 * 00000001401E9CBE: mov     rcx, rdi
 * 00000001401E9CC1: mov     [rsp+78h+var_38], 4
 * 00000001401E9CCA: lea     rax, [rsp+78h+arg_48]
 * 00000001401E9CD2: mov     [rsp+78h+var_40], rax
 * 00000001401E9CD7: lea     r8d, [rdx+0Fh]
 * 00000001401E9CDB: lea     rax, [rsp+78h+arg_40]
 * 00000001401E9CE3: mov     [rsp+78h+var_48], rsi
 * 00000001401E9CE8: mov     [rsp+78h+var_50], rax
 * 00000001401E9CED: mov     [rsp+78h+var_58], r14w
 * 00000001401E9CF3: call    cs:__imp_WppAutoLogTrace
 * 00000001401E9CFA: nop     dword ptr [rax+rax+00h]
 * 00000001401E9CFF: lea     r11, [rsp+78h+var_8]
 * 00000001401E9D04: mov     rbx, [r11+10h]
 * 00000001401E9D08: mov     rsi, [r11+18h]
 * 00000001401E9D0C: mov     rdi, [r11+20h]
 * 00000001401E9D10: mov     rsp, r11
 * 00000001401E9D13: pop     r14
 * 00000001401E9D15: retn
 */
