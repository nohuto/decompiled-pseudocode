/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C00054B4
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C00049F0 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C00054B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00054B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00054B4: mov     r11, rsp
 * 00000001C00054B7: mov     [r11+8], rbx
 * 00000001C00054BB: push    rbp
 * 00000001C00054BC: sub     rsp, 50h
 * 00000001C00054C0: mov     rbx, rcx
 * 00000001C00054C3: mov     ebp, 33h ; '3'
 * 00000001C00054C8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00054CF: mov     eax, [rcx+2Ch]
 * 00000001C00054D2: test    al, 4
 * 00000001C00054D4: jz      short loc_1C0005520
 * 00000001C00054D6: cmp     byte ptr [rcx+29h], 5
 * 00000001C00054DA: jb      short loc_1C0005520
 * 00000001C00054DC: and     qword ptr [r11-18h], 0
 * 00000001C00054E1: lea     rdx, [r11+38h]
 * 00000001C00054E5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00054EC: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C00054F3: mov     rcx, [rcx+18h]
 * 00000001C00054F7: mov     qword ptr [r11-20h], 4
 * 00000001C00054FF: mov     [r11-28h], rdx
 * 00000001C0005503: lea     rdx, [r11+30h]
 * 00000001C0005507: mov     qword ptr [r11-30h], 8
 * 00000001C000550F: mov     [r11-38h], rdx
 * 00000001C0005513: lea     edx, [rbp-8]
 * 00000001C0005516: movzx   r9d, bp
 * 00000001C000551A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005520: and     [rsp+58h+var_10], 0
 * 00000001C0005526: lea     rax, [rsp+58h+arg_30]
 * 00000001C000552E: mov     [rsp+58h+var_18], 4
 * 00000001C0005537: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C000553E: mov     [rsp+58h+var_20], rax
 * 00000001C0005543: mov     edx, 5
 * 00000001C0005548: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005550: mov     [rsp+58h+var_28], 8
 * 00000001C0005559: mov     [rsp+58h+var_30], rax
 * 00000001C000555E: mov     rcx, rbx
 * 00000001C0005561: mov     [rsp+58h+var_38], bp
 * 00000001C0005566: lea     r8d, [rdx-2]
 * 00000001C000556A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005570: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005575: add     rsp, 50h
 * 00000001C0005579: pop     rbp
 * 00000001C000557A: retn
 */
