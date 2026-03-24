/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005064
 * Callers:
 *     MouseClassPoRequestComplete @ 0x1C0001BF0 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C00049E0 (MouseClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005064
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005064
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005064: mov     r11, rsp
 * 00000001C0005067: mov     [r11+8], rbx
 * 00000001C000506B: push    rdi
 * 00000001C000506C: sub     rsp, 40h
 * 00000001C0005070: mov     rdi, rcx
 * 00000001C0005073: movzx   ebx, r9w
 * 00000001C0005077: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000507E: mov     eax, [rcx+2Ch]
 * 00000001C0005081: test    al, 10h
 * 00000001C0005083: jz      short loc_1C00050C1
 * 00000001C0005085: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005089: jb      short loc_1C00050C1
 * 00000001C000508B: and     qword ptr [r11-18h], 0
 * 00000001C0005090: lea     rdx, [r11+30h]
 * 00000001C0005094: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000509B: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C00050A2: mov     rcx, [rcx+18h]
 * 00000001C00050A6: mov     qword ptr [r11-20h], 8
 * 00000001C00050AE: mov     [r11-28h], rdx
 * 00000001C00050B2: mov     edx, 2Bh ; '+'
 * 00000001C00050B7: movzx   r9d, bx
 * 00000001C00050BB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00050C1: and     [rsp+48h+var_10], 0
 * 00000001C00050C7: lea     rax, [rsp+48h+arg_28]
 * 00000001C00050CC: mov     edx, 2
 * 00000001C00050D1: mov     [rsp+48h+var_18], 8
 * 00000001C00050DA: mov     [rsp+48h+var_20], rax
 * 00000001C00050DF: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C00050E6: mov     rcx, rdi
 * 00000001C00050E9: mov     [rsp+48h+var_28], bx
 * 00000001C00050EE: lea     r8d, [rdx+3]
 * 00000001C00050F2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00050F8: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00050FD: add     rsp, 40h
 * 00000001C0005101: pop     rdi
 * 00000001C0005102: retn
 */
