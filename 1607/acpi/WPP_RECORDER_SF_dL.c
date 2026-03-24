/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C000C10C
 * Callers:
 *     PnpiGrowResourceList @ 0x1C0085C9C (PnpiGrowResourceList.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C000C10C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C10C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C10C: mov     [rsp+arg_0], rbx
 * 00000001C000C111: mov     [rsp+arg_8], rbp
 * 00000001C000C116: mov     [rsp+arg_10], rsi
 * 00000001C000C11B: push    rdi
 * 00000001C000C11C: push    r14
 * 00000001C000C11E: push    r15
 * 00000001C000C120: sub     rsp, 50h
 * 00000001C000C124: mov     r14d, r8d
 * 00000001C000C127: mov     sil, dl
 * 00000001C000C12A: mov     edi, r8d
 * 00000001C000C12D: movzx   ebp, r9w
 * 00000001C000C131: shr     rdi, 10h
 * 00000001C000C135: mov     r15, rcx
 * 00000001C000C138: lea     ebx, [r14-1]
 * 00000001C000C13C: mov     r10d, ebx
 * 00000001C000C13F: and     ebx, 1Fh
 * 00000001C000C142: shr     r10, 5
 * 00000001C000C146: lea     rax, [rdi+rdi*4]
 * 00000001C000C14A: and     r10d, 7FFh
 * 00000001C000C151: mov     edx, ebx
 * 00000001C000C153: mov     ebx, 4
 * 00000001C000C158: lea     r11, [r10+rax*4]
 * 00000001C000C15C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000C163: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000C168: bt      eax, edx
 * 00000001C000C16B: jb      loc_1C00331D2
 * 00000001C000C171: and     [rsp+68h+var_20], 0
 * 00000001C000C177: lea     rax, [rsp+68h+arg_30]
 * 00000001C000C17F: mov     [rsp+68h+var_28], rbx
 * 00000001C000C184: lea     r9, WPP_b366b17187f636b05bbda43c678c6b68_Traceguids
 * 00000001C000C18B: mov     [rsp+68h+var_30], rax
 * 00000001C000C190: mov     r8d, r14d
 * 00000001C000C193: lea     rax, [rsp+68h+arg_28]
 * 00000001C000C19B: mov     [rsp+68h+var_38], rbx
 * 00000001C000C1A0: mov     [rsp+68h+var_40], rax
 * 00000001C000C1A5: mov     rcx, r15
 * 00000001C000C1A8: movzx   edx, sil
 * 00000001C000C1AC: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C000C1B1: call    cs:__imp_WppAutoLogTrace
 * 00000001C000C1B7: lea     r11, [rsp+68h+var_18]
 * 00000001C000C1BC: mov     rbx, [r11+20h]
 * 00000001C000C1C0: mov     rbp, [r11+28h]
 * 00000001C000C1C4: mov     rsi, [r11+30h]
 * 00000001C000C1C8: mov     rsp, r11
 * 00000001C000C1CB: pop     r15
 * 00000001C000C1CD: pop     r14
 * 00000001C000C1CF: pop     rdi
 * 00000001C000C1D0: retn
 * 00000001C00331D2: lea     rcx, [rdi+rdi*4]
 * 00000001C00331D6: add     rcx, rcx
 * 00000001C00331D9: cmp     [r10+rcx*8+29h], sil
 * 00000001C00331DE: jb      loc_1C000C171
 * 00000001C00331E4: and     [rsp+68h+var_28], 0
 * 00000001C00331EA: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00331F2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00331F9: lea     r8, WPP_b366b17187f636b05bbda43c678c6b68_Traceguids
 * 00000001C0033200: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0033205: mov     [rsp+68h+var_30], rbx
 * 00000001C003320A: mov     [rsp+68h+var_38], rdx
 * 00000001C003320F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0033217: mov     [rsp+68h+var_40], rbx
 * 00000001C003321C: mov     [rsp+68h+var_48], rdx
 * 00000001C0033221: mov     edx, 2Bh ; '+'
 * 00000001C0033226: movzx   r9d, bp
 * 00000001C003322A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0033230: nop
 * 00000001C0033231: jmp     loc_1C000C171
 */
