/*
 * XREFs of WPP_RECORDER_SF_dDDq @ 0x1C00220A8
 * Callers:
 *     IrqTranslateResources @ 0x1C0089600 (IrqTranslateResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDDq @ 0x1C00220A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00220A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00220A8: mov     [rsp+arg_0], rbx
 * 00000001C00220AD: mov     [rsp+arg_8], rbp
 * 00000001C00220B2: push    rdi
 * 00000001C00220B3: sub     rsp, 70h
 * 00000001C00220B7: mov     rbx, rcx
 * 00000001C00220BA: mov     edi, 4
 * 00000001C00220BF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00220C6: lea     ebp, [rdi+6]
 * 00000001C00220C9: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C00220D0: jnz     loc_1C003CEF8
 * 00000001C00220D6: and     [rsp+78h+var_10], 0
 * 00000001C00220DC: lea     rax, [rsp+78h+arg_40]
 * 00000001C00220E4: mov     [rsp+78h+var_18], 8
 * 00000001C00220ED: lea     r9, WPP_8700a3296ebe363fa94abfaf01dd4555_Traceguids
 * 00000001C00220F4: mov     [rsp+78h+var_20], rax
 * 00000001C00220F9: mov     r8d, 14h
 * 00000001C00220FF: mov     [rsp+78h+var_28], rdi
 * 00000001C0022104: lea     rax, [rsp+78h+arg_38]
 * 00000001C002210C: mov     [rsp+78h+var_30], rax
 * 00000001C0022111: mov     edx, edi
 * 00000001C0022113: mov     [rsp+78h+var_38], rdi
 * 00000001C0022118: lea     rax, [rsp+78h+arg_30]
 * 00000001C0022120: mov     [rsp+78h+var_40], rax
 * 00000001C0022125: mov     rcx, rbx
 * 00000001C0022128: lea     rax, [rsp+78h+arg_28]
 * 00000001C0022130: mov     [rsp+78h+var_48], rdi
 * 00000001C0022135: mov     [rsp+78h+var_50], rax
 * 00000001C002213A: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C002213F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0022145: lea     r11, [rsp+78h+var_8]
 * 00000001C002214A: mov     rbx, [r11+10h]
 * 00000001C002214E: mov     rbp, [r11+18h]
 * 00000001C0022152: mov     rsp, r11
 * 00000001C0022155: pop     rdi
 * 00000001C0022156: retn
 * 00000001C003CEF8: cmp     [rcx+29h], dil
 * 00000001C003CEFC: jb      loc_1C00220D6
 * 00000001C003CF02: and     [rsp+78h+var_18], 0
 * 00000001C003CF08: lea     rdx, [rsp+78h+arg_40]
 * 00000001C003CF10: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003CF17: lea     r8, WPP_8700a3296ebe363fa94abfaf01dd4555_Traceguids
 * 00000001C003CF1E: mov     rcx, [rcx+18h]
 * 00000001C003CF22: mov     [rsp+78h+var_20], 8
 * 00000001C003CF2B: mov     [rsp+78h+var_28], rdx
 * 00000001C003CF30: lea     rdx, [rsp+78h+arg_38]
 * 00000001C003CF38: mov     [rsp+78h+var_30], rdi
 * 00000001C003CF3D: mov     [rsp+78h+var_38], rdx
 * 00000001C003CF42: lea     rdx, [rsp+78h+arg_30]
 * 00000001C003CF4A: mov     [rsp+78h+var_40], rdi
 * 00000001C003CF4F: mov     [rsp+78h+var_48], rdx
 * 00000001C003CF54: lea     rdx, [rsp+78h+arg_28]
 * 00000001C003CF5C: mov     [rsp+78h+var_50], rdi
 * 00000001C003CF61: mov     [rsp+78h+var_58], rdx
 * 00000001C003CF66: mov     edx, 2Bh ; '+'
 * 00000001C003CF6B: movzx   r9d, bp
 * 00000001C003CF6F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003CF75: nop
 * 00000001C003CF76: jmp     loc_1C00220D6
 */
