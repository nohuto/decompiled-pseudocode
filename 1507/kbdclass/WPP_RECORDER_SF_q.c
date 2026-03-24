/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005414
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C00011F0 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0004E20 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005414
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005414
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005414: mov     r11, rsp
 * 00000001C0005417: mov     [r11+8], rbx
 * 00000001C000541B: push    rdi
 * 00000001C000541C: sub     rsp, 40h
 * 00000001C0005420: mov     rdi, rcx
 * 00000001C0005423: movzx   ebx, r9w
 * 00000001C0005427: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000542E: mov     eax, [rcx+2Ch]
 * 00000001C0005431: test    al, 10h
 * 00000001C0005433: jz      short loc_1C0005471
 * 00000001C0005435: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005439: jb      short loc_1C0005471
 * 00000001C000543B: and     qword ptr [r11-18h], 0
 * 00000001C0005440: lea     rdx, [r11+30h]
 * 00000001C0005444: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000544B: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0005452: mov     rcx, [rcx+18h]
 * 00000001C0005456: mov     qword ptr [r11-20h], 8
 * 00000001C000545E: mov     [r11-28h], rdx
 * 00000001C0005462: mov     edx, 2Bh ; '+'
 * 00000001C0005467: movzx   r9d, bx
 * 00000001C000546B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005471: and     [rsp+48h+var_10], 0
 * 00000001C0005477: lea     rax, [rsp+48h+arg_28]
 * 00000001C000547C: mov     edx, 2
 * 00000001C0005481: mov     [rsp+48h+var_18], 8
 * 00000001C000548A: mov     [rsp+48h+var_20], rax
 * 00000001C000548F: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0005496: mov     rcx, rdi
 * 00000001C0005499: mov     [rsp+48h+var_28], bx
 * 00000001C000549E: lea     r8d, [rdx+3]
 * 00000001C00054A2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00054A8: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00054AD: add     rsp, 40h
 * 00000001C00054B1: pop     rdi
 * 00000001C00054B2: retn
 */
