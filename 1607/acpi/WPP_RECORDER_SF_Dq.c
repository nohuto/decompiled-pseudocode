/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x1C00222EC
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0089870 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A2190 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dq @ 0x1C00222EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00222EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00222EC: mov     [rsp+arg_0], rbx
 * 00000001C00222F1: push    rdi
 * 00000001C00222F2: sub     rsp, 50h
 * 00000001C00222F6: mov     rdi, rcx
 * 00000001C00222F9: movzx   ebx, r9w
 * 00000001C00222FD: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0022304: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C002230B: jnz     loc_1C003D0C6
 * 00000001C0022311: and     [rsp+58h+var_10], 0
 * 00000001C0022317: lea     rax, [rsp+58h+arg_30]
 * 00000001C002231F: mov     [rsp+58h+var_18], 8
 * 00000001C0022328: lea     r9, WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids
 * 00000001C002232F: mov     [rsp+58h+var_20], rax
 * 00000001C0022334: mov     edx, 4
 * 00000001C0022339: lea     rax, [rsp+58h+arg_28]
 * 00000001C0022341: mov     [rsp+58h+var_28], 4
 * 00000001C002234A: mov     [rsp+58h+var_30], rax
 * 00000001C002234F: mov     rcx, rdi
 * 00000001C0022352: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C0022357: lea     r8d, [rdx+10h]
 * 00000001C002235B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0022361: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0022366: add     rsp, 50h
 * 00000001C002236A: pop     rdi
 * 00000001C002236B: retn
 * 00000001C003D0C6: cmp     byte ptr [rcx+29h], 4
 * 00000001C003D0CA: jb      loc_1C0022311
 * 00000001C003D0D0: and     [rsp+58h+var_18], 0
 * 00000001C003D0D6: lea     rdx, [rsp+58h+arg_30]
 * 00000001C003D0DE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003D0E5: lea     r8, WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids
 * 00000001C003D0EC: mov     rcx, [rcx+18h]
 * 00000001C003D0F0: mov     [rsp+58h+var_20], 8
 * 00000001C003D0F9: mov     [rsp+58h+var_28], rdx
 * 00000001C003D0FE: lea     rdx, [rsp+58h+arg_28]
 * 00000001C003D106: mov     [rsp+58h+var_30], 4
 * 00000001C003D10F: mov     [rsp+58h+var_38], rdx
 * 00000001C003D114: mov     edx, 2Bh ; '+'
 * 00000001C003D119: movzx   r9d, bx
 * 00000001C003D11D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003D123: nop
 * 00000001C003D124: jmp     loc_1C0022311
 */
