/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C0005104
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0001560 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C0005104
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005104
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005104: mov     r11, rsp
 * 00000001C0005107: mov     [r11+8], rbx
 * 00000001C000510B: push    rbp
 * 00000001C000510C: sub     rsp, 50h
 * 00000001C0005110: mov     rbx, rcx
 * 00000001C0005113: mov     ebp, 33h ; '3'
 * 00000001C0005118: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000511F: mov     eax, [rcx+2Ch]
 * 00000001C0005122: test    al, 4
 * 00000001C0005124: jz      short loc_1C0005170
 * 00000001C0005126: cmp     byte ptr [rcx+29h], 5
 * 00000001C000512A: jb      short loc_1C0005170
 * 00000001C000512C: and     qword ptr [r11-18h], 0
 * 00000001C0005131: lea     rdx, [r11+38h]
 * 00000001C0005135: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000513C: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005143: mov     rcx, [rcx+18h]
 * 00000001C0005147: mov     qword ptr [r11-20h], 4
 * 00000001C000514F: mov     [r11-28h], rdx
 * 00000001C0005153: lea     rdx, [r11+30h]
 * 00000001C0005157: mov     qword ptr [r11-30h], 8
 * 00000001C000515F: mov     [r11-38h], rdx
 * 00000001C0005163: lea     edx, [rbp-8]
 * 00000001C0005166: movzx   r9d, bp
 * 00000001C000516A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005170: and     [rsp+58h+var_10], 0
 * 00000001C0005176: lea     rax, [rsp+58h+arg_30]
 * 00000001C000517E: mov     [rsp+58h+var_18], 4
 * 00000001C0005187: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C000518E: mov     [rsp+58h+var_20], rax
 * 00000001C0005193: mov     edx, 5
 * 00000001C0005198: lea     rax, [rsp+58h+arg_28]
 * 00000001C00051A0: mov     [rsp+58h+var_28], 8
 * 00000001C00051A9: mov     [rsp+58h+var_30], rax
 * 00000001C00051AE: mov     rcx, rbx
 * 00000001C00051B1: mov     [rsp+58h+var_38], bp
 * 00000001C00051B6: lea     r8d, [rdx-2]
 * 00000001C00051BA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00051C0: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00051C5: add     rsp, 50h
 * 00000001C00051C9: pop     rbp
 * 00000001C00051CA: retn
 */
