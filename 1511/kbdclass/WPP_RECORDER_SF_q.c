/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005454
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C0001250 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0004E60 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005454
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005454
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005454: mov     r11, rsp
 * 00000001C0005457: mov     [r11+8], rbx
 * 00000001C000545B: push    rdi
 * 00000001C000545C: sub     rsp, 40h
 * 00000001C0005460: mov     rdi, rcx
 * 00000001C0005463: movzx   ebx, r9w
 * 00000001C0005467: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000546E: mov     eax, [rcx+2Ch]
 * 00000001C0005471: test    al, 10h
 * 00000001C0005473: jz      short loc_1C00054B1
 * 00000001C0005475: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005479: jb      short loc_1C00054B1
 * 00000001C000547B: and     qword ptr [r11-18h], 0
 * 00000001C0005480: lea     rdx, [r11+30h]
 * 00000001C0005484: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000548B: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0005492: mov     rcx, [rcx+18h]
 * 00000001C0005496: mov     qword ptr [r11-20h], 8
 * 00000001C000549E: mov     [r11-28h], rdx
 * 00000001C00054A2: mov     edx, 2Bh ; '+'
 * 00000001C00054A7: movzx   r9d, bx
 * 00000001C00054AB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00054B1: and     [rsp+48h+var_10], 0
 * 00000001C00054B7: lea     rax, [rsp+48h+arg_28]
 * 00000001C00054BC: mov     edx, 2
 * 00000001C00054C1: mov     [rsp+48h+var_18], 8
 * 00000001C00054CA: mov     [rsp+48h+var_20], rax
 * 00000001C00054CF: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C00054D6: mov     rcx, rdi
 * 00000001C00054D9: mov     [rsp+48h+var_28], bx
 * 00000001C00054DE: lea     r8d, [rdx+3]
 * 00000001C00054E2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00054E8: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00054ED: add     rsp, 40h
 * 00000001C00054F1: pop     rdi
 * 00000001C00054F2: retn
 */
