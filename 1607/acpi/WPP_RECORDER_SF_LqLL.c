/*
 * XREFs of WPP_RECORDER_SF_LqLL @ 0x1C000D878
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C0086BCC (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LqLL @ 0x1C000D878
 * Reason: Hex-Rays returned no pseudocode for 0x1C000D878
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000D878: mov     [rsp+arg_0], rbx
 * 00000001C000D87D: mov     [rsp+arg_8], rbp
 * 00000001C000D882: push    rdi
 * 00000001C000D883: sub     rsp, 70h
 * 00000001C000D887: mov     rbx, rcx
 * 00000001C000D88A: mov     edi, 4
 * 00000001C000D88F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000D896: lea     ebp, [rdi+7]
 * 00000001C000D899: mov     eax, [rcx+2Ch]
 * 00000001C000D89C: test    al, 20h
 * 00000001C000D89E: jnz     loc_1C0033A82
 * 00000001C000D8A4: and     [rsp+78h+var_10], 0
 * 00000001C000D8AA: lea     rax, [rsp+78h+arg_40]
 * 00000001C000D8B2: mov     [rsp+78h+var_18], rdi
 * 00000001C000D8B7: lea     r9, WPP_e479c42625e5324ff0b798dec9fc716d_Traceguids
 * 00000001C000D8BE: mov     [rsp+78h+var_20], rax
 * 00000001C000D8C3: mov     r8d, 6
 * 00000001C000D8C9: mov     [rsp+78h+var_28], rdi
 * 00000001C000D8CE: lea     rax, [rsp+78h+arg_38]
 * 00000001C000D8D6: mov     [rsp+78h+var_30], rax
 * 00000001C000D8DB: mov     edx, edi
 * 00000001C000D8DD: mov     [rsp+78h+var_38], 8
 * 00000001C000D8E6: lea     rax, [rsp+78h+arg_30]
 * 00000001C000D8EE: mov     [rsp+78h+var_40], rax
 * 00000001C000D8F3: mov     rcx, rbx
 * 00000001C000D8F6: lea     rax, [rsp+78h+arg_28]
 * 00000001C000D8FE: mov     [rsp+78h+var_48], rdi
 * 00000001C000D903: mov     [rsp+78h+var_50], rax
 * 00000001C000D908: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000D90D: call    cs:__imp_WppAutoLogTrace
 * 00000001C000D913: lea     r11, [rsp+78h+var_8]
 * 00000001C000D918: mov     rbx, [r11+10h]
 * 00000001C000D91C: mov     rbp, [r11+18h]
 * 00000001C000D920: mov     rsp, r11
 * 00000001C000D923: pop     rdi
 * 00000001C000D924: retn
 * 00000001C0033A82: cmp     [rcx+29h], dil
 * 00000001C0033A86: jb      loc_1C000D8A4
 * 00000001C0033A8C: and     [rsp+78h+var_18], 0
 * 00000001C0033A92: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0033A9A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0033AA1: lea     r8, WPP_e479c42625e5324ff0b798dec9fc716d_Traceguids
 * 00000001C0033AA8: mov     rcx, [rcx+18h]
 * 00000001C0033AAC: mov     [rsp+78h+var_20], rdi
 * 00000001C0033AB1: mov     [rsp+78h+var_28], rdx
 * 00000001C0033AB6: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0033ABE: mov     [rsp+78h+var_30], rdi
 * 00000001C0033AC3: mov     [rsp+78h+var_38], rdx
 * 00000001C0033AC8: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0033AD0: mov     [rsp+78h+var_40], 8
 * 00000001C0033AD9: mov     [rsp+78h+var_48], rdx
 * 00000001C0033ADE: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0033AE6: mov     [rsp+78h+var_50], rdi
 * 00000001C0033AEB: mov     [rsp+78h+var_58], rdx
 * 00000001C0033AF0: mov     edx, 2Bh ; '+'
 * 00000001C0033AF5: movzx   r9d, bp
 * 00000001C0033AF9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0033AFF: nop
 * 00000001C0033B00: jmp     loc_1C000D8A4
 */
