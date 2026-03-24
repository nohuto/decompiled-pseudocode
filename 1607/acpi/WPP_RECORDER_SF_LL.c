/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C000C27C
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C00841D8 (PnpCmResourcesToBiosResources.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 *     OSReadRegValue @ 0x1C008D4A4 (OSReadRegValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C000C27C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C27C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C27C: mov     [rsp+arg_0], rbx
 * 00000001C000C281: mov     [rsp+arg_8], rbp
 * 00000001C000C286: mov     [rsp+arg_10], rsi
 * 00000001C000C28B: push    rdi
 * 00000001C000C28C: push    r14
 * 00000001C000C28E: push    r15
 * 00000001C000C290: sub     rsp, 50h
 * 00000001C000C294: mov     r14d, r8d
 * 00000001C000C297: mov     sil, dl
 * 00000001C000C29A: mov     edi, r8d
 * 00000001C000C29D: movzx   ebp, r9w
 * 00000001C000C2A1: shr     rdi, 10h
 * 00000001C000C2A5: mov     r15, rcx
 * 00000001C000C2A8: lea     ebx, [r14-1]
 * 00000001C000C2AC: mov     r10d, ebx
 * 00000001C000C2AF: and     ebx, 1Fh
 * 00000001C000C2B2: shr     r10, 5
 * 00000001C000C2B6: lea     rax, [rdi+rdi*4]
 * 00000001C000C2BA: and     r10d, 7FFh
 * 00000001C000C2C1: mov     edx, ebx
 * 00000001C000C2C3: mov     ebx, 4
 * 00000001C000C2C8: lea     r11, [r10+rax*4]
 * 00000001C000C2CC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000C2D3: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000C2D8: bt      eax, edx
 * 00000001C000C2DB: jb      loc_1C00332A2
 * 00000001C000C2E1: and     [rsp+68h+var_20], 0
 * 00000001C000C2E7: lea     rax, [rsp+68h+arg_30]
 * 00000001C000C2EF: mov     r9, [rsp+68h+arg_20]
 * 00000001C000C2F7: mov     r8d, r14d
 * 00000001C000C2FA: mov     [rsp+68h+var_28], rbx
 * 00000001C000C2FF: mov     rcx, r15
 * 00000001C000C302: mov     [rsp+68h+var_30], rax
 * 00000001C000C307: lea     rax, [rsp+68h+arg_28]
 * 00000001C000C30F: mov     [rsp+68h+var_38], rbx
 * 00000001C000C314: mov     [rsp+68h+var_40], rax
 * 00000001C000C319: movzx   edx, sil
 * 00000001C000C31D: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C000C322: call    cs:__imp_WppAutoLogTrace
 * 00000001C000C328: lea     r11, [rsp+68h+var_18]
 * 00000001C000C32D: mov     rbx, [r11+20h]
 * 00000001C000C331: mov     rbp, [r11+28h]
 * 00000001C000C335: mov     rsi, [r11+30h]
 * 00000001C000C339: mov     rsp, r11
 * 00000001C000C33C: pop     r15
 * 00000001C000C33E: pop     r14
 * 00000001C000C340: pop     rdi
 * 00000001C000C341: retn
 * 00000001C00332A2: lea     rcx, [rdi+rdi*4]
 * 00000001C00332A6: add     rcx, rcx
 * 00000001C00332A9: cmp     [r10+rcx*8+29h], sil
 * 00000001C00332AE: jb      loc_1C000C2E1
 * 00000001C00332B4: and     [rsp+68h+var_28], 0
 * 00000001C00332BA: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00332C2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00332C9: mov     r8, [rsp+68h+arg_20]
 * 00000001C00332D1: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00332D6: mov     [rsp+68h+var_30], rbx
 * 00000001C00332DB: mov     [rsp+68h+var_38], rdx
 * 00000001C00332E0: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00332E8: mov     [rsp+68h+var_40], rbx
 * 00000001C00332ED: mov     [rsp+68h+var_48], rdx
 * 00000001C00332F2: mov     edx, 2Bh ; '+'
 * 00000001C00332F7: movzx   r9d, bp
 * 00000001C00332FB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0033301: nop
 * 00000001C0033302: jmp     loc_1C000C2E1
 */
