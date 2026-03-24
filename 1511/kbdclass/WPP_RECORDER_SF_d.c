/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0001F60
 * Callers:
 *     KbdConfiguration @ 0x1C000F420 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0001F60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001F60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001F60: mov     [rsp+arg_0], rbx
 * 00000001C0001F65: push    rdi
 * 00000001C0001F66: sub     rsp, 40h
 * 00000001C0001F6A: mov     rdi, rcx
 * 00000001C0001F6D: movzx   ebx, r9w
 * 00000001C0001F71: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001F78: mov     eax, [rcx+2Ch]
 * 00000001C0001F7B: test    al, 1
 * 00000001C0001F7D: jnz     loc_1C0003D50
 * 00000001C0001F83: mov     [rsp+48h+var_10], 0
 * 00000001C0001F8C: lea     rax, [rsp+48h+arg_28]
 * 00000001C0001F91: mov     edx, 4
 * 00000001C0001F96: mov     [rsp+48h+var_18], 4
 * 00000001C0001F9F: mov     [rsp+48h+var_20], rax
 * 00000001C0001FA4: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0001FAB: mov     rcx, rdi
 * 00000001C0001FAE: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0001FB3: lea     r8d, [rdx-3]
 * 00000001C0001FB7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001FBD: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0001FC2: add     rsp, 40h
 * 00000001C0001FC6: pop     rdi
 * 00000001C0001FC7: retn
 * 00000001C0003D50: cmp     byte ptr [rcx+29h], 4
 * 00000001C0003D54: jb      loc_1C0001F83
 * 00000001C0003D5A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003D61: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0003D66: mov     rcx, [rcx+18h]
 * 00000001C0003D6A: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0003D71: mov     [rsp+48h+var_18], 0
 * 00000001C0003D7A: mov     [rsp+48h+var_20], 4
 * 00000001C0003D83: mov     [rsp+48h+var_28], rdx
 * 00000001C0003D88: mov     edx, 2Bh ; '+'
 * 00000001C0003D8D: movzx   r9d, bx
 * 00000001C0003D91: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003D97: nop
 * 00000001C0003D98: jmp     loc_1C0001F83
 */
