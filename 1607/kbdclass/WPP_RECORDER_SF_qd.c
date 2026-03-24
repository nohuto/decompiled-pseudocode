/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0005764
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0004F20 (KeyboardClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C0005764
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005764
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005764: mov     r11, rsp
 * 00000001C0005767: mov     [r11+8], rbx
 * 00000001C000576B: push    rbp
 * 00000001C000576C: sub     rsp, 50h
 * 00000001C0005770: mov     rbx, rcx
 * 00000001C0005773: mov     ebp, 5Dh ; ']'
 * 00000001C0005778: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000577F: mov     eax, [rcx+2Ch]
 * 00000001C0005782: test    al, 10h
 * 00000001C0005784: jz      short loc_1C00057D0
 * 00000001C0005786: cmp     byte ptr [rcx+29h], 2
 * 00000001C000578A: jb      short loc_1C00057D0
 * 00000001C000578C: and     qword ptr [r11-18h], 0
 * 00000001C0005791: lea     rdx, [r11+38h]
 * 00000001C0005795: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000579C: lea     r8, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C00057A3: mov     rcx, [rcx+18h]
 * 00000001C00057A7: mov     qword ptr [r11-20h], 4
 * 00000001C00057AF: mov     [r11-28h], rdx
 * 00000001C00057B3: lea     rdx, [r11+30h]
 * 00000001C00057B7: mov     qword ptr [r11-30h], 8
 * 00000001C00057BF: mov     [r11-38h], rdx
 * 00000001C00057C3: lea     edx, [rbp-32h]
 * 00000001C00057C6: movzx   r9d, bp
 * 00000001C00057CA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00057D0: and     [rsp+58h+var_10], 0
 * 00000001C00057D6: lea     rax, [rsp+58h+arg_30]
 * 00000001C00057DE: mov     [rsp+58h+var_18], 4
 * 00000001C00057E7: lea     r9, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C00057EE: mov     [rsp+58h+var_20], rax
 * 00000001C00057F3: mov     edx, 2
 * 00000001C00057F8: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005800: mov     [rsp+58h+var_28], 8
 * 00000001C0005809: mov     [rsp+58h+var_30], rax
 * 00000001C000580E: mov     rcx, rbx
 * 00000001C0005811: mov     [rsp+58h+var_38], bp
 * 00000001C0005816: lea     r8d, [rdx+3]
 * 00000001C000581A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005820: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005825: add     rsp, 50h
 * 00000001C0005829: pop     rbp
 * 00000001C000582A: retn
 */
