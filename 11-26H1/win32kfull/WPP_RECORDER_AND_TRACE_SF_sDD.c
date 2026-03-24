/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sDD @ 0x1401F1B28
 * Callers:
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A5358 (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sDD @ 0x1401F1B28
 * Reason: Hex-Rays returned no pseudocode for 0x1401F1B28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401F1B28: mov     rax, rsp
 * 00000001401F1B2B: mov     [rax+8], rbx
 * 00000001401F1B2F: mov     [rax+10h], rbp
 * 00000001401F1B33: mov     [rax+18h], rsi
 * 00000001401F1B37: mov     [rax+20h], rdi
 * 00000001401F1B3B: push    r12
 * 00000001401F1B3D: push    r13
 * 00000001401F1B3F: push    r14
 * 00000001401F1B41: sub     rsp, 60h
 * 00000001401F1B45: mov     rbx, [rsp+78h+arg_40]
 * 00000001401F1B4D: lea     r13, aNull; "NULL"
 * 00000001401F1B54: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001401F1B58: mov     bpl, r8b
 * 00000001401F1B5B: mov     r14, r9
 * 00000001401F1B5E: mov     r11, rcx
 * 00000001401F1B61: lea     esi, [rdi+6]
 * 00000001401F1B64: lea     r8d, [rdi+25h]
 * 00000001401F1B68: lea     r12d, [rdi+5]
 * 00000001401F1B6C: test    dl, dl
 * 00000001401F1B6E: jnz     loc_1401F1C0E
 * 00000001401F1B74: test    bpl, bpl
 * 00000001401F1B77: jz      short loc_1401F1BEE
 * 00000001401F1B79: test    rbx, rbx
 * 00000001401F1B7C: jz      short loc_1401F1B8E
 * 00000001401F1B7E: inc     rdi
 * 00000001401F1B81: cmp     byte ptr [rbx+rdi], 0
 * 00000001401F1B85: jnz     short loc_1401F1B7E
 * 00000001401F1B87: lea     rsi, [rdi+1]
 * 00000001401F1B8B: test    rbx, rbx
 * 00000001401F1B8E: mov     [rsp+78h+var_20], 0
 * 00000001401F1B97: lea     rax, [rsp+78h+arg_50]
 * 00000001401F1B9F: mov     [rsp+78h+var_28], r12
 * 00000001401F1BA4: lea     r9, WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids
 * 00000001401F1BAB: mov     [rsp+78h+var_30], rax
 * 00000001401F1BB0: cmovz   rbx, r13
 * 00000001401F1BB4: mov     [rsp+78h+var_38], r12
 * 00000001401F1BB9: lea     rax, [rsp+78h+arg_48]
 * 00000001401F1BC1: mov     [rsp+78h+var_40], rax
 * 00000001401F1BC6: mov     edx, r12d
 * 00000001401F1BC9: mov     [rsp+78h+var_48], rsi
 * 00000001401F1BCE: mov     rcx, r14
 * 00000001401F1BD1: mov     [rsp+78h+var_50], rbx
 * 00000001401F1BD6: mov     word ptr [rsp+78h+var_58], r8w
 * 00000001401F1BDC: mov     r8d, 2
 * 00000001401F1BE2: call    cs:__imp_WppAutoLogTrace
 * 00000001401F1BE9: nop     dword ptr [rax+rax+00h]
 * 00000001401F1BEE: lea     r11, [rsp+78h+var_18]
 * 00000001401F1BF3: mov     rbx, [r11+20h]
 * 00000001401F1BF7: mov     rbp, [r11+28h]
 * 00000001401F1BFB: mov     rsi, [r11+30h]
 * 00000001401F1BFF: mov     rdi, [r11+38h]
 * 00000001401F1C03: mov     rsp, r11
 * 00000001401F1C06: pop     r14
 * 00000001401F1C08: pop     r13
 * 00000001401F1C0A: pop     r12
 * 00000001401F1C0C: retn
 * 00000001401F1C0E: mov     r10, cs:pfnWppTraceMessage
 * 00000001401F1C15: test    rbx, rbx
 * 00000001401F1C18: jz      short loc_1401F1C2B
 * 00000001401F1C1A: mov     rax, rdi
 * 00000001401F1C1D: inc     rax
 * 00000001401F1C20: cmp     byte ptr [rbx+rax], 0
 * 00000001401F1C24: jnz     short loc_1401F1C1D
 * 00000001401F1C26: inc     rax
 * 00000001401F1C29: jmp     short loc_1401F1C2E
 * 00000001401F1C2B: mov     rax, rsi
 * 00000001401F1C2E: mov     [rsp+78h+var_28], 0
 * 00000001401F1C37: lea     rdx, [rsp+78h+arg_50]
 * 00000001401F1C3F: mov     [rsp+78h+var_30], r12
 * 00000001401F1C44: test    rbx, rbx
 * 00000001401F1C47: mov     [rsp+78h+var_38], rdx
 * 00000001401F1C4C: mov     r9d, r8d
 * 00000001401F1C4F: lea     rdx, [rsp+78h+arg_48]
 * 00000001401F1C57: mov     [rsp+78h+var_40], r12
 * 00000001401F1C5C: mov     [rsp+78h+var_48], rdx
 * 00000001401F1C61: lea     r8, WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids
 * 00000001401F1C68: mov     [rsp+78h+var_50], rax
 * 00000001401F1C6D: mov     rcx, rbx
 * 00000001401F1C70: cmovz   rcx, r13
 * 00000001401F1C74: mov     edx, 2Bh ; '+'
 * 00000001401F1C79: mov     [rsp+78h+var_58], rcx
 * 00000001401F1C7E: mov     rax, r10
 * 00000001401F1C81: mov     rcx, r11
 * 00000001401F1C84: call    _guard_dispatch_icall
 * 00000001401F1C89: mov     r8d, 24h ; '$'
 * 00000001401F1C8F: jmp     loc_1401F1B74
 */
