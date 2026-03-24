/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C00054A4
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C0002920 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C00054A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00054A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00054A4: mov     r11, rsp
 * 00000001C00054A7: mov     [r11+8], rbx
 * 00000001C00054AB: push    rbp
 * 00000001C00054AC: sub     rsp, 50h
 * 00000001C00054B0: mov     rbx, rcx
 * 00000001C00054B3: mov     ebp, 33h ; '3'
 * 00000001C00054B8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00054BF: mov     eax, [rcx+2Ch]
 * 00000001C00054C2: test    al, 4
 * 00000001C00054C4: jz      short loc_1C0005510
 * 00000001C00054C6: cmp     byte ptr [rcx+29h], 5
 * 00000001C00054CA: jb      short loc_1C0005510
 * 00000001C00054CC: and     qword ptr [r11-18h], 0
 * 00000001C00054D1: lea     rdx, [r11+38h]
 * 00000001C00054D5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00054DC: lea     r8, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C00054E3: mov     rcx, [rcx+18h]
 * 00000001C00054E7: mov     qword ptr [r11-20h], 4
 * 00000001C00054EF: mov     [r11-28h], rdx
 * 00000001C00054F3: lea     rdx, [r11+30h]
 * 00000001C00054F7: mov     qword ptr [r11-30h], 8
 * 00000001C00054FF: mov     [r11-38h], rdx
 * 00000001C0005503: lea     edx, [rbp-8]
 * 00000001C0005506: movzx   r9d, bp
 * 00000001C000550A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005510: and     [rsp+58h+var_10], 0
 * 00000001C0005516: lea     rax, [rsp+58h+arg_30]
 * 00000001C000551E: mov     [rsp+58h+var_18], 4
 * 00000001C0005527: lea     r9, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C000552E: mov     [rsp+58h+var_20], rax
 * 00000001C0005533: mov     edx, 5
 * 00000001C0005538: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005540: mov     [rsp+58h+var_28], 8
 * 00000001C0005549: mov     [rsp+58h+var_30], rax
 * 00000001C000554E: mov     rcx, rbx
 * 00000001C0005551: mov     [rsp+58h+var_38], bp
 * 00000001C0005556: lea     r8d, [rdx-2]
 * 00000001C000555A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005560: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005565: add     rsp, 50h
 * 00000001C0005569: pop     rbp
 * 00000001C000556A: retn
 */
