/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00057B4
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0004F70 (KeyboardClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C00057B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00057B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00057B4: mov     r11, rsp
 * 00000001C00057B7: mov     [r11+8], rbx
 * 00000001C00057BB: push    rbp
 * 00000001C00057BC: sub     rsp, 50h
 * 00000001C00057C0: mov     rbx, rcx
 * 00000001C00057C3: mov     ebp, 5Dh ; ']'
 * 00000001C00057C8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00057CF: mov     eax, [rcx+2Ch]
 * 00000001C00057D2: test    al, 10h
 * 00000001C00057D4: jz      short loc_1C0005820
 * 00000001C00057D6: cmp     byte ptr [rcx+29h], 2
 * 00000001C00057DA: jb      short loc_1C0005820
 * 00000001C00057DC: and     qword ptr [r11-18h], 0
 * 00000001C00057E1: lea     rdx, [r11+38h]
 * 00000001C00057E5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00057EC: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C00057F3: mov     rcx, [rcx+18h]
 * 00000001C00057F7: mov     qword ptr [r11-20h], 4
 * 00000001C00057FF: mov     [r11-28h], rdx
 * 00000001C0005803: lea     rdx, [r11+30h]
 * 00000001C0005807: mov     qword ptr [r11-30h], 8
 * 00000001C000580F: mov     [r11-38h], rdx
 * 00000001C0005813: lea     edx, [rbp-32h]
 * 00000001C0005816: movzx   r9d, bp
 * 00000001C000581A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005820: and     [rsp+58h+var_10], 0
 * 00000001C0005826: lea     rax, [rsp+58h+arg_30]
 * 00000001C000582E: mov     [rsp+58h+var_18], 4
 * 00000001C0005837: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C000583E: mov     [rsp+58h+var_20], rax
 * 00000001C0005843: mov     edx, 2
 * 00000001C0005848: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005850: mov     [rsp+58h+var_28], 8
 * 00000001C0005859: mov     [rsp+58h+var_30], rax
 * 00000001C000585E: mov     rcx, rbx
 * 00000001C0005861: mov     [rsp+58h+var_38], bp
 * 00000001C0005866: lea     r8d, [rdx+3]
 * 00000001C000586A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005870: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005875: add     rsp, 50h
 * 00000001C0005879: pop     rbp
 * 00000001C000587A: retn
 */
