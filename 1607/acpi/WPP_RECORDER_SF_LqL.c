/*
 * XREFs of WPP_RECORDER_SF_LqL @ 0x1C000D928
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C0086BCC (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LqL @ 0x1C000D928
 * Reason: Hex-Rays returned no pseudocode for 0x1C000D928
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000D928: mov     [rsp+arg_0], rbx
 * 00000001C000D92D: mov     [rsp+arg_8], rbp
 * 00000001C000D932: push    rdi
 * 00000001C000D933: sub     rsp, 60h
 * 00000001C000D937: mov     rbx, rcx
 * 00000001C000D93A: mov     edi, 4
 * 00000001C000D93F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000D946: lea     ebp, [rdi+6]
 * 00000001C000D949: mov     eax, [rcx+2Ch]
 * 00000001C000D94C: test    al, 20h
 * 00000001C000D94E: jnz     loc_1C0033B06
 * 00000001C000D954: and     [rsp+68h+var_10], 0
 * 00000001C000D95A: lea     rax, [rsp+68h+arg_38]
 * 00000001C000D962: mov     [rsp+68h+var_18], rdi
 * 00000001C000D967: lea     r9, WPP_e479c42625e5324ff0b798dec9fc716d_Traceguids
 * 00000001C000D96E: mov     [rsp+68h+var_20], rax
 * 00000001C000D973: mov     r8d, 6
 * 00000001C000D979: mov     [rsp+68h+var_28], 8
 * 00000001C000D982: lea     rax, [rsp+68h+arg_30]
 * 00000001C000D98A: mov     [rsp+68h+var_30], rax
 * 00000001C000D98F: mov     edx, edi
 * 00000001C000D991: lea     rax, [rsp+68h+arg_28]
 * 00000001C000D999: mov     [rsp+68h+var_38], rdi
 * 00000001C000D99E: mov     [rsp+68h+var_40], rax
 * 00000001C000D9A3: mov     rcx, rbx
 * 00000001C000D9A6: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C000D9AB: call    cs:__imp_WppAutoLogTrace
 * 00000001C000D9B1: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000D9B6: mov     rbp, [rsp+68h+arg_8]
 * 00000001C000D9BB: add     rsp, 60h
 * 00000001C000D9BF: pop     rdi
 * 00000001C000D9C0: retn
 * 00000001C0033B06: cmp     [rcx+29h], dil
 * 00000001C0033B0A: jb      loc_1C000D954
 * 00000001C0033B10: and     [rsp+68h+var_18], 0
 * 00000001C0033B16: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0033B1E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0033B25: lea     r8, WPP_e479c42625e5324ff0b798dec9fc716d_Traceguids
 * 00000001C0033B2C: mov     rcx, [rcx+18h]
 * 00000001C0033B30: mov     [rsp+68h+var_20], rdi
 * 00000001C0033B35: mov     [rsp+68h+var_28], rdx
 * 00000001C0033B3A: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0033B42: mov     [rsp+68h+var_30], 8
 * 00000001C0033B4B: mov     [rsp+68h+var_38], rdx
 * 00000001C0033B50: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0033B58: mov     [rsp+68h+var_40], rdi
 * 00000001C0033B5D: mov     [rsp+68h+var_48], rdx
 * 00000001C0033B62: mov     edx, 2Bh ; '+'
 * 00000001C0033B67: movzx   r9d, bp
 * 00000001C0033B6B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0033B71: nop
 * 00000001C0033B72: jmp     loc_1C000D954
 */
