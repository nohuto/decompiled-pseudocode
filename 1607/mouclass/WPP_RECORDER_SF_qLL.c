/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C00051CC
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0001560 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C00051CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00051CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00051CC: mov     r11, rsp
 * 00000001C00051CF: mov     [r11+8], rbx
 * 00000001C00051D3: mov     [r11+10h], rsi
 * 00000001C00051D7: push    rdi
 * 00000001C00051D8: sub     rsp, 60h
 * 00000001C00051DC: mov     rdi, rcx
 * 00000001C00051DF: mov     esi, 4
 * 00000001C00051E4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00051EB: movzx   ebx, r9w
 * 00000001C00051EF: mov     eax, [rcx+2Ch]
 * 00000001C00051F2: test    sil, al
 * 00000001C00051F5: jz      short loc_1C0005249
 * 00000001C00051F7: cmp     byte ptr [rcx+29h], 5
 * 00000001C00051FB: jb      short loc_1C0005249
 * 00000001C00051FD: and     qword ptr [r11-18h], 0
 * 00000001C0005202: lea     rdx, [r11+40h]
 * 00000001C0005206: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000520D: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005214: mov     rcx, [rcx+18h]
 * 00000001C0005218: mov     [r11-20h], rsi
 * 00000001C000521C: mov     [r11-28h], rdx
 * 00000001C0005220: lea     rdx, [r11+38h]
 * 00000001C0005224: mov     [r11-30h], rsi
 * 00000001C0005228: mov     [r11-38h], rdx
 * 00000001C000522C: lea     rdx, [r11+30h]
 * 00000001C0005230: mov     qword ptr [r11-40h], 8
 * 00000001C0005238: mov     [r11-48h], rdx
 * 00000001C000523C: lea     edx, [rsi+27h]
 * 00000001C000523F: movzx   r9d, bx
 * 00000001C0005243: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005249: and     [rsp+68h+var_10], 0
 * 00000001C000524F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0005257: mov     [rsp+68h+var_18], rsi
 * 00000001C000525C: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005263: mov     [rsp+68h+var_20], rax
 * 00000001C0005268: mov     edx, 5
 * 00000001C000526D: mov     [rsp+68h+var_28], rsi
 * 00000001C0005272: lea     rax, [rsp+68h+arg_30]
 * 00000001C000527A: mov     [rsp+68h+var_30], rax
 * 00000001C000527F: mov     rcx, rdi
 * 00000001C0005282: lea     rax, [rsp+68h+arg_28]
 * 00000001C000528A: mov     [rsp+68h+var_38], 8
 * 00000001C0005293: mov     [rsp+68h+var_40], rax
 * 00000001C0005298: lea     r8d, [rdx-2]
 * 00000001C000529C: mov     [rsp+68h+var_48], bx
 * 00000001C00052A1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00052A7: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00052AC: mov     rsi, [rsp+68h+arg_8]
 * 00000001C00052B1: add     rsp, 60h
 * 00000001C00052B5: pop     rdi
 * 00000001C00052B6: retn
 */
