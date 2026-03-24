/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0001ED0
 * Callers:
 *     KbdConfiguration @ 0x1C000F420 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0001ED0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001ED0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001ED0: mov     [rsp+arg_0], rbx
 * 00000001C0001ED5: push    rdi
 * 00000001C0001ED6: sub     rsp, 40h
 * 00000001C0001EDA: mov     rdi, rcx
 * 00000001C0001EDD: movzx   ebx, r9w
 * 00000001C0001EE1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001EE8: mov     eax, [rcx+2Ch]
 * 00000001C0001EEB: test    al, 1
 * 00000001C0001EED: jnz     loc_1C0003C64
 * 00000001C0001EF3: mov     [rsp+48h+var_10], 0
 * 00000001C0001EFC: lea     rax, [rsp+48h+arg_28]
 * 00000001C0001F01: mov     edx, 4
 * 00000001C0001F06: mov     [rsp+48h+var_18], 4
 * 00000001C0001F0F: mov     [rsp+48h+var_20], rax
 * 00000001C0001F14: lea     r9, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C0001F1B: mov     rcx, rdi
 * 00000001C0001F1E: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0001F23: lea     r8d, [rdx-3]
 * 00000001C0001F27: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001F2D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0001F32: add     rsp, 40h
 * 00000001C0001F36: pop     rdi
 * 00000001C0001F37: retn
 * 00000001C0003C64: cmp     byte ptr [rcx+29h], 4
 * 00000001C0003C68: jb      loc_1C0001EF3
 * 00000001C0003C6E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003C75: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0003C7A: mov     rcx, [rcx+18h]
 * 00000001C0003C7E: lea     r8, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C0003C85: mov     [rsp+48h+var_18], 0
 * 00000001C0003C8E: mov     [rsp+48h+var_20], 4
 * 00000001C0003C97: mov     [rsp+48h+var_28], rdx
 * 00000001C0003C9C: mov     edx, 2Bh ; '+'
 * 00000001C0003CA1: movzx   r9d, bx
 * 00000001C0003CA5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003CAB: nop
 * 00000001C0003CAC: jmp     loc_1C0001EF3
 */
