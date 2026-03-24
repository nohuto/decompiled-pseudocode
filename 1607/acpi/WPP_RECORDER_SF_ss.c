/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C0052C08
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C001CF10 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ss @ 0x1C0052C08
 * Reason: Hex-Rays returned no pseudocode for 0x1C0052C08
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0052C08: mov     rax, rsp
 * 00000001C0052C0B: mov     [rax+8], rbx
 * 00000001C0052C0F: mov     [rax+10h], rbp
 * 00000001C0052C13: mov     [rax+18h], rsi
 * 00000001C0052C17: mov     [rax+20h], rdi
 * 00000001C0052C1B: push    r12
 * 00000001C0052C1D: push    r13
 * 00000001C0052C1F: push    r14
 * 00000001C0052C21: sub     rsp, 50h
 * 00000001C0052C25: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0052C2C: lea     rbp, aNull_0; "NULL"
 * 00000001C0052C33: mov     rdi, [rsp+68h+arg_30]
 * 00000001C0052C3B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0052C3F: mov     rsi, [rsp+68h+arg_28]
 * 00000001C0052C47: mov     r14, rcx
 * 00000001C0052C4A: test    dword ptr [r10+2Ch], 100000h
 * 00000001C0052C52: lea     r12d, [rbx+6]
 * 00000001C0052C56: lea     r13d, [rbx+0Ch]
 * 00000001C0052C5A: jz      loc_1C0052CED
 * 00000001C0052C60: cmp     byte ptr [r10+29h], 2
 * 00000001C0052C65: jb      loc_1C0052CED
 * 00000001C0052C6B: test    rdi, rdi
 * 00000001C0052C6E: jz      short loc_1C0052C81
 * 00000001C0052C70: mov     rcx, rbx
 * 00000001C0052C73: inc     rcx
 * 00000001C0052C76: cmp     byte ptr [rdi+rcx], 0
 * 00000001C0052C7A: jnz     short loc_1C0052C73
 * 00000001C0052C7C: inc     rcx
 * 00000001C0052C7F: jmp     short loc_1C0052C84
 * 00000001C0052C81: mov     rcx, r12
 * 00000001C0052C84: test    rdi, rdi
 * 00000001C0052C87: mov     r9, rbp
 * 00000001C0052C8A: cmovnz  r9, rdi
 * 00000001C0052C8E: test    rsi, rsi
 * 00000001C0052C91: jz      short loc_1C0052CA5
 * 00000001C0052C93: mov     r8, rbx
 * 00000001C0052C96: inc     r8
 * 00000001C0052C99: cmp     byte ptr [rsi+r8], 0
 * 00000001C0052C9E: jnz     short loc_1C0052C96
 * 00000001C0052CA0: inc     r8
 * 00000001C0052CA3: jmp     short loc_1C0052CA8
 * 00000001C0052CA5: mov     r8, r12
 * 00000001C0052CA8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0052CAF: test    rsi, rsi
 * 00000001C0052CB2: mov     rdx, rbp
 * 00000001C0052CB5: cmovnz  rdx, rsi
 * 00000001C0052CB9: and     [rsp+68h+var_28], 0
 * 00000001C0052CBF: mov     [rsp+68h+var_30], rcx
 * 00000001C0052CC4: mov     rcx, [r10+18h]
 * 00000001C0052CC8: mov     [rsp+68h+var_38], r9
 * 00000001C0052CCD: mov     [rsp+68h+var_40], r8
 * 00000001C0052CD2: lea     r8, WPP_9299deb349643418f1501730d242e085_Traceguids
 * 00000001C0052CD9: mov     [rsp+68h+var_48], rdx
 * 00000001C0052CDE: mov     edx, 2Bh ; '+'
 * 00000001C0052CE3: movzx   r9d, r13w
 * 00000001C0052CE7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0052CED: test    rdi, rdi
 * 00000001C0052CF0: jz      short loc_1C0052D03
 * 00000001C0052CF2: mov     rax, rbx
 * 00000001C0052CF5: inc     rax
 * 00000001C0052CF8: cmp     byte ptr [rdi+rax], 0
 * 00000001C0052CFC: jnz     short loc_1C0052CF5
 * 00000001C0052CFE: inc     rax
 * 00000001C0052D01: jmp     short loc_1C0052D06
 * 00000001C0052D03: mov     rax, r12
 * 00000001C0052D06: test    rdi, rdi
 * 00000001C0052D09: mov     rcx, rbp
 * 00000001C0052D0C: cmovnz  rcx, rdi
 * 00000001C0052D10: test    rsi, rsi
 * 00000001C0052D13: jz      short loc_1C0052D23
 * 00000001C0052D15: inc     rbx
 * 00000001C0052D18: cmp     byte ptr [rsi+rbx], 0
 * 00000001C0052D1C: jnz     short loc_1C0052D15
 * 00000001C0052D1E: inc     rbx
 * 00000001C0052D21: jmp     short loc_1C0052D26
 * 00000001C0052D23: mov     rbx, r12
 * 00000001C0052D26: test    rsi, rsi
 * 00000001C0052D29: lea     r9, WPP_9299deb349643418f1501730d242e085_Traceguids
 * 00000001C0052D30: mov     edx, 2
 * 00000001C0052D35: cmovnz  rbp, rsi
 * 00000001C0052D39: and     [rsp+68h+var_20], 0
 * 00000001C0052D3F: mov     [rsp+68h+var_28], rax
 * 00000001C0052D44: mov     [rsp+68h+var_30], rcx
 * 00000001C0052D49: mov     rcx, r14
 * 00000001C0052D4C: mov     [rsp+68h+var_38], rbx
 * 00000001C0052D51: lea     r8d, [rdx+13h]
 * 00000001C0052D55: mov     [rsp+68h+var_40], rbp
 * 00000001C0052D5A: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C0052D60: call    cs:__imp_WppAutoLogTrace
 * 00000001C0052D66: lea     r11, [rsp+68h+var_18]
 * 00000001C0052D6B: mov     rbx, [r11+20h]
 * 00000001C0052D6F: mov     rbp, [r11+28h]
 * 00000001C0052D73: mov     rsi, [r11+30h]
 * 00000001C0052D77: mov     rdi, [r11+38h]
 * 00000001C0052D7B: mov     rsp, r11
 * 00000001C0052D7E: pop     r14
 * 00000001C0052D80: pop     r13
 * 00000001C0052D82: pop     r12
 * 00000001C0052D84: retn
 */
