/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005404
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C00011F0 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0004E10 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005404
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005404
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005404: mov     r11, rsp
 * 00000001C0005407: mov     [r11+8], rbx
 * 00000001C000540B: push    rdi
 * 00000001C000540C: sub     rsp, 40h
 * 00000001C0005410: mov     rdi, rcx
 * 00000001C0005413: movzx   ebx, r9w
 * 00000001C0005417: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000541E: mov     eax, [rcx+2Ch]
 * 00000001C0005421: test    al, 10h
 * 00000001C0005423: jz      short loc_1C0005461
 * 00000001C0005425: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005429: jb      short loc_1C0005461
 * 00000001C000542B: and     qword ptr [r11-18h], 0
 * 00000001C0005430: lea     rdx, [r11+30h]
 * 00000001C0005434: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000543B: lea     r8, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C0005442: mov     rcx, [rcx+18h]
 * 00000001C0005446: mov     qword ptr [r11-20h], 8
 * 00000001C000544E: mov     [r11-28h], rdx
 * 00000001C0005452: mov     edx, 2Bh ; '+'
 * 00000001C0005457: movzx   r9d, bx
 * 00000001C000545B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005461: and     [rsp+48h+var_10], 0
 * 00000001C0005467: lea     rax, [rsp+48h+arg_28]
 * 00000001C000546C: mov     edx, 2
 * 00000001C0005471: mov     [rsp+48h+var_18], 8
 * 00000001C000547A: mov     [rsp+48h+var_20], rax
 * 00000001C000547F: lea     r9, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C0005486: mov     rcx, rdi
 * 00000001C0005489: mov     [rsp+48h+var_28], bx
 * 00000001C000548E: lea     r8d, [rdx+3]
 * 00000001C0005492: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005498: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000549D: add     rsp, 40h
 * 00000001C00054A1: pop     rdi
 * 00000001C00054A2: retn
 */
