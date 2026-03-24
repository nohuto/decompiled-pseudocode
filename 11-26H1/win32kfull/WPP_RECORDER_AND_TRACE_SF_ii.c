/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401B9FB8
 * Callers:
 *     ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1401D75EC (-FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401B9FB8
 * Reason: Hex-Rays returned no pseudocode for 0x1401B9FB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B9FB8: mov     r11, rsp
 * 00000001401B9FBB: mov     [r11+8], rbx
 * 00000001401B9FBF: mov     [r11+10h], rbp
 * 00000001401B9FC3: mov     [r11+18h], rsi
 * 00000001401B9FC7: push    rdi
 * 00000001401B9FC8: sub     rsp, 50h
 * 00000001401B9FCC: movzx   ebx, [rsp+58h+arg_30]
 * 00000001401B9FD4: mov     rsi, r9
 * 00000001401B9FD7: mov     dil, r8b
 * 00000001401B9FDA: mov     ebp, 8
 * 00000001401B9FDF: test    dl, dl
 * 00000001401B9FE1: jz      short loc_1401BA01D
 * 00000001401B9FE3: mov     rax, cs:pfnWppTraceMessage
 * 00000001401B9FEA: lea     rdx, [r11+50h]
 * 00000001401B9FEE: mov     r8, [rsp+58h+arg_38]
 * 00000001401B9FF6: mov     r9d, ebx
 * 00000001401B9FF9: mov     qword ptr [r11-18h], 0
 * 00000001401BA001: mov     [r11-20h], rbp
 * 00000001401BA005: mov     [r11-28h], rdx
 * 00000001401BA009: lea     rdx, [r11+48h]
 * 00000001401BA00D: mov     [r11-30h], rbp
 * 00000001401BA011: mov     [r11-38h], rdx
 * 00000001401BA015: lea     edx, [rbp+23h]
 * 00000001401BA018: call    _guard_dispatch_icall
 * 00000001401BA01D: test    dil, dil
 * 00000001401BA020: jz      short loc_1401BA079
 * 00000001401BA022: mov     r9, [rsp+58h+arg_38]
 * 00000001401BA02A: lea     rax, [rsp+58h+arg_48]
 * 00000001401BA032: movzx   edx, [rsp+58h+arg_20]
 * 00000001401BA03A: mov     r8d, 14h
 * 00000001401BA040: mov     [rsp+58h+var_10], 0
 * 00000001401BA049: mov     rcx, rsi
 * 00000001401BA04C: mov     [rsp+58h+var_18], rbp
 * 00000001401BA051: mov     [rsp+58h+var_20], rax
 * 00000001401BA056: lea     rax, [rsp+58h+arg_40]
 * 00000001401BA05E: mov     [rsp+58h+var_28], rbp
 * 00000001401BA063: mov     [rsp+58h+var_30], rax
 * 00000001401BA068: mov     [rsp+58h+var_38], bx
 * 00000001401BA06D: call    cs:__imp_WppAutoLogTrace
 * 00000001401BA074: nop     dword ptr [rax+rax+00h]
 * 00000001401BA079: mov     rbx, [rsp+58h+arg_0]
 * 00000001401BA07E: mov     rbp, [rsp+58h+arg_8]
 * 00000001401BA083: mov     rsi, [rsp+58h+arg_10]
 * 00000001401BA088: add     rsp, 50h
 * 00000001401BA08C: pop     rdi
 * 00000001401BA08D: retn
 */
