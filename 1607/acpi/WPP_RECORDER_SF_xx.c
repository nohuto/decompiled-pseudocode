/*
 * XREFs of WPP_RECORDER_SF_xx @ 0x1C0022550
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C008BE50 (IrqArbGetNextAllocationRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_xx @ 0x1C0022550
 * Reason: Hex-Rays returned no pseudocode for 0x1C0022550
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0022550: mov     [rsp+arg_0], rbx
 * 00000001C0022555: mov     [rsp+arg_8], rsi
 * 00000001C002255A: push    rdi
 * 00000001C002255B: sub     rsp, 50h
 * 00000001C002255F: mov     rbx, rcx
 * 00000001C0022562: mov     esi, 0Ch
 * 00000001C0022567: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002256E: lea     edi, [rsi-4]
 * 00000001C0022571: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C0022578: jnz     loc_1C003D2D6
 * 00000001C002257E: and     [rsp+58h+var_10], 0
 * 00000001C0022584: lea     rax, [rsp+58h+arg_30]
 * 00000001C002258C: mov     [rsp+58h+var_18], rdi
 * 00000001C0022591: lea     r9, WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids
 * 00000001C0022598: mov     [rsp+58h+var_20], rax
 * 00000001C002259D: mov     edx, 4
 * 00000001C00225A2: lea     rax, [rsp+58h+arg_28]
 * 00000001C00225AA: mov     [rsp+58h+var_28], rdi
 * 00000001C00225AF: mov     [rsp+58h+var_30], rax
 * 00000001C00225B4: mov     rcx, rbx
 * 00000001C00225B7: mov     word ptr [rsp+58h+var_38], si
 * 00000001C00225BC: lea     r8d, [rdx+10h]
 * 00000001C00225C0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00225C6: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00225CB: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00225D0: add     rsp, 50h
 * 00000001C00225D4: pop     rdi
 * 00000001C00225D5: retn
 * 00000001C003D2D6: cmp     byte ptr [rcx+29h], 4
 * 00000001C003D2DA: jb      loc_1C002257E
 * 00000001C003D2E0: and     [rsp+58h+var_18], 0
 * 00000001C003D2E6: lea     rdx, [rsp+58h+arg_30]
 * 00000001C003D2EE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003D2F5: lea     r8, WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids
 * 00000001C003D2FC: mov     rcx, [rcx+18h]
 * 00000001C003D300: mov     [rsp+58h+var_20], rdi
 * 00000001C003D305: mov     [rsp+58h+var_28], rdx
 * 00000001C003D30A: lea     rdx, [rsp+58h+arg_28]
 * 00000001C003D312: mov     [rsp+58h+var_30], rdi
 * 00000001C003D317: mov     [rsp+58h+var_38], rdx
 * 00000001C003D31C: mov     edx, 2Bh ; '+'
 * 00000001C003D321: movzx   r9d, si
 * 00000001C003D325: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003D32B: nop
 * 00000001C003D32C: jmp     loc_1C002257E
 */
