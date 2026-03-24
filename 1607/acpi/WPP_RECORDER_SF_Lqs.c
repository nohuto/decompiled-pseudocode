/*
 * XREFs of WPP_RECORDER_SF_Lqs @ 0x1C004593C
 * Callers:
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0044B80 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lqs @ 0x1C004593C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004593C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004593C: mov     [rsp+arg_0], rbx
 * 00000001C0045941: mov     [rsp+arg_8], rbp
 * 00000001C0045946: mov     [rsp+arg_10], rsi
 * 00000001C004594B: push    rdi
 * 00000001C004594C: push    r14
 * 00000001C004594E: push    r15
 * 00000001C0045950: sub     rsp, 60h
 * 00000001C0045954: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004595B: lea     rsi, aNull_0; "NULL"
 * 00000001C0045962: mov     rdi, [rsp+78h+arg_38]
 * 00000001C004596A: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004596E: movzx   r14d, r9w
 * 00000001C0045972: mov     bpl, dl
 * 00000001C0045975: mov     r15, rcx
 * 00000001C0045978: mov     eax, [r10+2Ch]
 * 00000001C004597C: test    al, 1
 * 00000001C004597E: jz      loc_1C0045A10
 * 00000001C0045984: cmp     [r10+29h], dl
 * 00000001C0045988: jb      loc_1C0045A10
 * 00000001C004598E: test    rdi, rdi
 * 00000001C0045991: jz      short loc_1C00459A4
 * 00000001C0045993: mov     rcx, rbx
 * 00000001C0045996: inc     rcx
 * 00000001C0045999: cmp     byte ptr [rdi+rcx], 0
 * 00000001C004599D: jnz     short loc_1C0045996
 * 00000001C004599F: inc     rcx
 * 00000001C00459A2: jmp     short loc_1C00459A9
 * 00000001C00459A4: mov     ecx, 5
 * 00000001C00459A9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00459B0: lea     r8, WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids
 * 00000001C00459B7: test    rdi, rdi
 * 00000001C00459BA: movzx   r9d, r14w
 * 00000001C00459BE: mov     rdx, rsi
 * 00000001C00459C1: cmovnz  rdx, rdi
 * 00000001C00459C5: and     [rsp+78h+var_28], 0
 * 00000001C00459CB: mov     [rsp+78h+var_30], rcx
 * 00000001C00459D0: lea     rcx, [rsp+78h+arg_30]
 * 00000001C00459D8: mov     [rsp+78h+var_38], rdx
 * 00000001C00459DD: mov     edx, 2Bh ; '+'
 * 00000001C00459E2: mov     [rsp+78h+var_40], 8
 * 00000001C00459EB: mov     [rsp+78h+var_48], rcx
 * 00000001C00459F0: lea     rcx, [rsp+78h+arg_28]
 * 00000001C00459F8: mov     [rsp+78h+var_50], 4
 * 00000001C0045A01: mov     [rsp+78h+var_58], rcx
 * 00000001C0045A06: mov     rcx, [r10+18h]
 * 00000001C0045A0A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045A10: test    rdi, rdi
 * 00000001C0045A13: jz      short loc_1C0045A23
 * 00000001C0045A15: inc     rbx
 * 00000001C0045A18: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0045A1C: jnz     short loc_1C0045A15
 * 00000001C0045A1E: inc     rbx
 * 00000001C0045A21: jmp     short loc_1C0045A28
 * 00000001C0045A23: mov     ebx, 5
 * 00000001C0045A28: test    rdi, rdi
 * 00000001C0045A2B: movzx   edx, bpl
 * 00000001C0045A2F: lea     rax, [rsp+78h+arg_30]
 * 00000001C0045A37: mov     r8d, 1
 * 00000001C0045A3D: cmovnz  rsi, rdi
 * 00000001C0045A41: lea     r9, WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids
 * 00000001C0045A48: and     [rsp+78h+var_20], 0
 * 00000001C0045A4E: mov     rcx, r15
 * 00000001C0045A51: mov     [rsp+78h+var_28], rbx
 * 00000001C0045A56: mov     [rsp+78h+var_30], rsi
 * 00000001C0045A5B: mov     [rsp+78h+var_38], 8
 * 00000001C0045A64: mov     [rsp+78h+var_40], rax
 * 00000001C0045A69: lea     rax, [rsp+78h+arg_28]
 * 00000001C0045A71: mov     [rsp+78h+var_48], 4
 * 00000001C0045A7A: mov     [rsp+78h+var_50], rax
 * 00000001C0045A7F: mov     word ptr [rsp+78h+var_58], r14w
 * 00000001C0045A85: call    cs:__imp_WppAutoLogTrace
 * 00000001C0045A8B: lea     r11, [rsp+78h+var_18]
 * 00000001C0045A90: mov     rbx, [r11+20h]
 * 00000001C0045A94: mov     rbp, [r11+28h]
 * 00000001C0045A98: mov     rsi, [r11+30h]
 * 00000001C0045A9C: mov     rsp, r11
 * 00000001C0045A9F: pop     r15
 * 00000001C0045AA1: pop     r14
 * 00000001C0045AA3: pop     rdi
 * 00000001C0045AA4: retn
 */
