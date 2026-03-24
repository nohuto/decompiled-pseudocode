/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0001F00
 * Callers:
 *     KbdConfiguration @ 0x1C000F420 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0001F00
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001F00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001F00: mov     [rsp+arg_0], rbx
 * 00000001C0001F05: push    rdi
 * 00000001C0001F06: sub     rsp, 40h
 * 00000001C0001F0A: mov     rdi, rcx
 * 00000001C0001F0D: movzx   ebx, r9w
 * 00000001C0001F11: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001F18: mov     eax, [rcx+2Ch]
 * 00000001C0001F1B: test    al, 1
 * 00000001C0001F1D: jnz     loc_1C0003890
 * 00000001C0001F23: mov     [rsp+48h+var_10], 0
 * 00000001C0001F2C: lea     rax, [rsp+48h+arg_28]
 * 00000001C0001F31: mov     edx, 4
 * 00000001C0001F36: mov     [rsp+48h+var_18], 4
 * 00000001C0001F3F: mov     [rsp+48h+var_20], rax
 * 00000001C0001F44: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0001F4B: mov     rcx, rdi
 * 00000001C0001F4E: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0001F53: lea     r8d, [rdx-3]
 * 00000001C0001F57: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001F5D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0001F62: add     rsp, 40h
 * 00000001C0001F66: pop     rdi
 * 00000001C0001F67: retn
 * 00000001C0003890: cmp     byte ptr [rcx+29h], 4
 * 00000001C0003894: jb      loc_1C0001F23
 * 00000001C000389A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00038A1: lea     rdx, [rsp+48h+arg_28]
 * 00000001C00038A6: mov     rcx, [rcx+18h]
 * 00000001C00038AA: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C00038B1: mov     [rsp+48h+var_18], 0
 * 00000001C00038BA: mov     [rsp+48h+var_20], 4
 * 00000001C00038C3: mov     [rsp+48h+var_28], rdx
 * 00000001C00038C8: mov     edx, 2Bh ; '+'
 * 00000001C00038CD: movzx   r9d, bx
 * 00000001C00038D1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00038D7: nop
 * 00000001C00038D8: jmp     loc_1C0001F23
 */
