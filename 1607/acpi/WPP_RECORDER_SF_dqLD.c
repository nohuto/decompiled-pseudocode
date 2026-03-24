/*
 * XREFs of WPP_RECORDER_SF_dqLD @ 0x1C000AD04
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqLD @ 0x1C000AD04
 * Reason: Hex-Rays returned no pseudocode for 0x1C000AD04
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000AD04: mov     [rsp+arg_0], rbx
 * 00000001C000AD09: mov     [rsp+arg_8], rbp
 * 00000001C000AD0E: push    rdi
 * 00000001C000AD0F: sub     rsp, 70h
 * 00000001C000AD13: mov     rbx, rcx
 * 00000001C000AD16: mov     edi, 4
 * 00000001C000AD1B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000AD22: lea     ebp, [rdi+3Bh]
 * 00000001C000AD25: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000AD2C: jnz     loc_1C003251C
 * 00000001C000AD32: and     [rsp+78h+var_10], 0
 * 00000001C000AD38: lea     rax, [rsp+78h+arg_40]
 * 00000001C000AD40: mov     [rsp+78h+var_18], rdi
 * 00000001C000AD45: lea     r9, WPP_b366b17187f636b05bbda43c678c6b68_Traceguids
 * 00000001C000AD4C: mov     [rsp+78h+var_20], rax
 * 00000001C000AD51: mov     r8d, 0Eh
 * 00000001C000AD57: mov     [rsp+78h+var_28], rdi
 * 00000001C000AD5C: lea     rax, [rsp+78h+arg_38]
 * 00000001C000AD64: mov     [rsp+78h+var_30], rax
 * 00000001C000AD69: mov     edx, edi
 * 00000001C000AD6B: mov     [rsp+78h+var_38], 8
 * 00000001C000AD74: lea     rax, [rsp+78h+arg_30]
 * 00000001C000AD7C: mov     [rsp+78h+var_40], rax
 * 00000001C000AD81: mov     rcx, rbx
 * 00000001C000AD84: lea     rax, [rsp+78h+arg_28]
 * 00000001C000AD8C: mov     [rsp+78h+var_48], rdi
 * 00000001C000AD91: mov     [rsp+78h+var_50], rax
 * 00000001C000AD96: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000AD9B: call    cs:__imp_WppAutoLogTrace
 * 00000001C000ADA1: lea     r11, [rsp+78h+var_8]
 * 00000001C000ADA6: mov     rbx, [r11+10h]
 * 00000001C000ADAA: mov     rbp, [r11+18h]
 * 00000001C000ADAE: mov     rsp, r11
 * 00000001C000ADB1: pop     rdi
 * 00000001C000ADB2: retn
 * 00000001C003251C: cmp     [rcx+29h], dil
 * 00000001C0032520: jb      loc_1C000AD32
 * 00000001C0032526: and     [rsp+78h+var_18], 0
 * 00000001C003252C: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0032534: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003253B: lea     r8, WPP_b366b17187f636b05bbda43c678c6b68_Traceguids
 * 00000001C0032542: mov     rcx, [rcx+18h]
 * 00000001C0032546: mov     [rsp+78h+var_20], rdi
 * 00000001C003254B: mov     [rsp+78h+var_28], rdx
 * 00000001C0032550: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0032558: mov     [rsp+78h+var_30], rdi
 * 00000001C003255D: mov     [rsp+78h+var_38], rdx
 * 00000001C0032562: lea     rdx, [rsp+78h+arg_30]
 * 00000001C003256A: mov     [rsp+78h+var_40], 8
 * 00000001C0032573: mov     [rsp+78h+var_48], rdx
 * 00000001C0032578: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0032580: mov     [rsp+78h+var_50], rdi
 * 00000001C0032585: mov     [rsp+78h+var_58], rdx
 * 00000001C003258A: mov     edx, 2Bh ; '+'
 * 00000001C003258F: movzx   r9d, bp
 * 00000001C0032593: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0032599: nop
 * 00000001C003259A: jmp     loc_1C000AD32
 */
