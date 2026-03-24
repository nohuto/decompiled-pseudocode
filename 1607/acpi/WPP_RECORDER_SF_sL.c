/*
 * XREFs of WPP_RECORDER_SF_SL @ 0x1C0055E18
 * Callers:
 *     OSReadAcpiConfigurationData @ 0x1C00A749C (OSReadAcpiConfigurationData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_SL @ 0x1C0055E18
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055E18
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055E18: mov     [rsp+arg_0], rbx
 * 00000001C0055E1D: mov     [rsp+arg_8], rbp
 * 00000001C0055E22: mov     [rsp+arg_10], rsi
 * 00000001C0055E27: push    rdi
 * 00000001C0055E28: push    r13
 * 00000001C0055E2A: push    r14
 * 00000001C0055E2C: sub     rsp, 50h
 * 00000001C0055E30: mov     rdi, [rsp+68h+arg_28]
 * 00000001C0055E38: lea     rsi, aNull; "NULL"
 * 00000001C0055E3F: xor     r14d, r14d
 * 00000001C0055E42: mov     rbp, rcx
 * 00000001C0055E45: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0055E4C: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0055E50: lea     r13d, [r14+11h]
 * 00000001C0055E54: test    dword ptr [rcx+2Ch], 200000h
 * 00000001C0055E5B: jz      short loc_1C0055ED2
 * 00000001C0055E5D: cmp     byte ptr [rcx+29h], 2
 * 00000001C0055E61: jb      short loc_1C0055ED2
 * 00000001C0055E63: test    rdi, rdi
 * 00000001C0055E66: jz      short loc_1C0055E7A
 * 00000001C0055E68: mov     rdx, rbx
 * 00000001C0055E6B: inc     rdx
 * 00000001C0055E6E: cmp     [rdi+rdx*2], r14w
 * 00000001C0055E73: jnz     short loc_1C0055E6B
 * 00000001C0055E75: inc     rdx
 * 00000001C0055E78: jmp     short loc_1C0055E7F
 * 00000001C0055E7A: mov     edx, 5
 * 00000001C0055E7F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0055E86: lea     r9, [rsp+68h+arg_30]
 * 00000001C0055E8E: mov     rcx, [rcx+18h]
 * 00000001C0055E92: test    rdi, rdi
 * 00000001C0055E95: mov     [rsp+68h+var_28], r14
 * 00000001C0055E9A: mov     r8, rsi
 * 00000001C0055E9D: cmovnz  r8, rdi
 * 00000001C0055EA1: mov     [rsp+68h+var_30], 4
 * 00000001C0055EAA: mov     [rsp+68h+var_38], r9
 * 00000001C0055EAF: add     rdx, rdx
 * 00000001C0055EB2: mov     [rsp+68h+var_40], rdx
 * 00000001C0055EB7: mov     edx, 2Bh ; '+'
 * 00000001C0055EBC: mov     [rsp+68h+var_48], r8
 * 00000001C0055EC1: lea     r8, WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids
 * 00000001C0055EC8: movzx   r9d, r13w
 * 00000001C0055ECC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0055ED2: test    rdi, rdi
 * 00000001C0055ED5: jz      short loc_1C0055EE6
 * 00000001C0055ED7: inc     rbx
 * 00000001C0055EDA: cmp     [rdi+rbx*2], r14w
 * 00000001C0055EDF: jnz     short loc_1C0055ED7
 * 00000001C0055EE1: inc     rbx
 * 00000001C0055EE4: jmp     short loc_1C0055EEB
 * 00000001C0055EE6: mov     ebx, 5
 * 00000001C0055EEB: mov     [rsp+68h+var_20], r14
 * 00000001C0055EF0: lea     rcx, [rsp+68h+arg_30]
 * 00000001C0055EF8: mov     [rsp+68h+var_28], 4
 * 00000001C0055F01: lea     rax, [rbx+rbx]
 * 00000001C0055F05: mov     [rsp+68h+var_30], rcx
 * 00000001C0055F0A: lea     r9, WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids
 * 00000001C0055F11: mov     [rsp+68h+var_38], rax
 * 00000001C0055F16: test    rdi, rdi
 * 00000001C0055F19: mov     edx, 2
 * 00000001C0055F1E: mov     rcx, rbp
 * 00000001C0055F21: cmovnz  rsi, rdi
 * 00000001C0055F25: mov     [rsp+68h+var_40], rsi
 * 00000001C0055F2A: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C0055F30: lea     r8d, [rdx+14h]
 * 00000001C0055F34: call    cs:__imp_WppAutoLogTrace
 * 00000001C0055F3A: lea     r11, [rsp+68h+var_18]
 * 00000001C0055F3F: mov     rbx, [r11+20h]
 * 00000001C0055F43: mov     rbp, [r11+28h]
 * 00000001C0055F47: mov     rsi, [r11+30h]
 * 00000001C0055F4B: mov     rsp, r11
 * 00000001C0055F4E: pop     r14
 * 00000001C0055F50: pop     r13
 * 00000001C0055F52: pop     rdi
 * 00000001C0055F53: retn
 */
