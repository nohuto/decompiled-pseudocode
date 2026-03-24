/*
 * XREFs of WPP_RECORDER_SF_ddL @ 0x1C000C1D4
 * Callers:
 *     PnpiGrowResourceList @ 0x1C0085C9C (PnpiGrowResourceList.c)
 *     PnpiGrowResourceDescriptor @ 0x1C0085E60 (PnpiGrowResourceDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddL @ 0x1C000C1D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C1D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C1D4: mov     [rsp+arg_0], rbx
 * 00000001C000C1D9: mov     [rsp+arg_8], rbp
 * 00000001C000C1DE: mov     [rsp+arg_10], rsi
 * 00000001C000C1E3: push    rdi
 * 00000001C000C1E4: sub     rsp, 60h
 * 00000001C000C1E8: mov     rsi, rcx
 * 00000001C000C1EB: movzx   edi, r9w
 * 00000001C000C1EF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000C1F6: mov     bl, dl
 * 00000001C000C1F8: mov     ebp, 4
 * 00000001C000C1FD: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000C204: jnz     loc_1C0033236
 * 00000001C000C20A: and     [rsp+68h+var_10], 0
 * 00000001C000C210: lea     rax, [rsp+68h+arg_38]
 * 00000001C000C218: mov     [rsp+68h+var_18], rbp
 * 00000001C000C21D: lea     r9, WPP_b366b17187f636b05bbda43c678c6b68_Traceguids
 * 00000001C000C224: mov     [rsp+68h+var_20], rax
 * 00000001C000C229: mov     r8d, 0Eh
 * 00000001C000C22F: mov     [rsp+68h+var_28], rbp
 * 00000001C000C234: lea     rax, [rsp+68h+arg_30]
 * 00000001C000C23C: mov     [rsp+68h+var_30], rax
 * 00000001C000C241: mov     rcx, rsi
 * 00000001C000C244: lea     rax, [rsp+68h+arg_28]
 * 00000001C000C24C: mov     [rsp+68h+var_38], rbp
 * 00000001C000C251: mov     [rsp+68h+var_40], rax
 * 00000001C000C256: movzx   edx, bl
 * 00000001C000C259: mov     word ptr [rsp+68h+var_48], di
 * 00000001C000C25E: call    cs:__imp_WppAutoLogTrace
 * 00000001C000C264: lea     r11, [rsp+68h+var_8]
 * 00000001C000C269: mov     rbx, [r11+10h]
 * 00000001C000C26D: mov     rbp, [r11+18h]
 * 00000001C000C271: mov     rsi, [r11+20h]
 * 00000001C000C275: mov     rsp, r11
 * 00000001C000C278: pop     rdi
 * 00000001C000C279: retn
 * 00000001C0033236: cmp     [rcx+29h], bl
 * 00000001C0033239: jb      loc_1C000C20A
 * 00000001C003323F: and     [rsp+68h+var_18], 0
 * 00000001C0033245: lea     rdx, [rsp+68h+arg_38]
 * 00000001C003324D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0033254: lea     r8, WPP_b366b17187f636b05bbda43c678c6b68_Traceguids
 * 00000001C003325B: mov     rcx, [rcx+18h]
 * 00000001C003325F: mov     [rsp+68h+var_20], rbp
 * 00000001C0033264: mov     [rsp+68h+var_28], rdx
 * 00000001C0033269: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0033271: mov     [rsp+68h+var_30], rbp
 * 00000001C0033276: mov     [rsp+68h+var_38], rdx
 * 00000001C003327B: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0033283: mov     [rsp+68h+var_40], rbp
 * 00000001C0033288: mov     [rsp+68h+var_48], rdx
 * 00000001C003328D: mov     edx, 2Bh ; '+'
 * 00000001C0033292: movzx   r9d, di
 * 00000001C0033296: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003329C: nop
 * 00000001C003329D: jmp     loc_1C000C20A
 */
