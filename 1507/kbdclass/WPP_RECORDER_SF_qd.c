/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0005774
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0004F30 (KeyboardClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C0005774
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005774
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005774: mov     r11, rsp
 * 00000001C0005777: mov     [r11+8], rbx
 * 00000001C000577B: push    rbp
 * 00000001C000577C: sub     rsp, 50h
 * 00000001C0005780: mov     rbx, rcx
 * 00000001C0005783: mov     ebp, 5Dh ; ']'
 * 00000001C0005788: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000578F: mov     eax, [rcx+2Ch]
 * 00000001C0005792: test    al, 10h
 * 00000001C0005794: jz      short loc_1C00057E0
 * 00000001C0005796: cmp     byte ptr [rcx+29h], 2
 * 00000001C000579A: jb      short loc_1C00057E0
 * 00000001C000579C: and     qword ptr [r11-18h], 0
 * 00000001C00057A1: lea     rdx, [r11+38h]
 * 00000001C00057A5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00057AC: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C00057B3: mov     rcx, [rcx+18h]
 * 00000001C00057B7: mov     qword ptr [r11-20h], 4
 * 00000001C00057BF: mov     [r11-28h], rdx
 * 00000001C00057C3: lea     rdx, [r11+30h]
 * 00000001C00057C7: mov     qword ptr [r11-30h], 8
 * 00000001C00057CF: mov     [r11-38h], rdx
 * 00000001C00057D3: lea     edx, [rbp-32h]
 * 00000001C00057D6: movzx   r9d, bp
 * 00000001C00057DA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00057E0: and     [rsp+58h+var_10], 0
 * 00000001C00057E6: lea     rax, [rsp+58h+arg_30]
 * 00000001C00057EE: mov     [rsp+58h+var_18], 4
 * 00000001C00057F7: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C00057FE: mov     [rsp+58h+var_20], rax
 * 00000001C0005803: mov     edx, 2
 * 00000001C0005808: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005810: mov     [rsp+58h+var_28], 8
 * 00000001C0005819: mov     [rsp+58h+var_30], rax
 * 00000001C000581E: mov     rcx, rbx
 * 00000001C0005821: mov     [rsp+58h+var_38], bp
 * 00000001C0005826: lea     r8d, [rdx+3]
 * 00000001C000582A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005830: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005835: add     rsp, 50h
 * 00000001C0005839: pop     rbp
 * 00000001C000583A: retn
 */
