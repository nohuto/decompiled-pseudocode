/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00053C4
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C0004AF0 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C00053C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00053C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00053C4: mov     r11, rsp
 * 00000001C00053C7: mov     [r11+8], rbx
 * 00000001C00053CB: push    rbp
 * 00000001C00053CC: sub     rsp, 50h
 * 00000001C00053D0: mov     rbx, rcx
 * 00000001C00053D3: mov     ebp, 58h ; 'X'
 * 00000001C00053D8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00053DF: mov     eax, [rcx+2Ch]
 * 00000001C00053E2: test    al, 10h
 * 00000001C00053E4: jz      short loc_1C0005430
 * 00000001C00053E6: cmp     byte ptr [rcx+29h], 2
 * 00000001C00053EA: jb      short loc_1C0005430
 * 00000001C00053EC: and     qword ptr [r11-18h], 0
 * 00000001C00053F1: lea     rdx, [r11+38h]
 * 00000001C00053F5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00053FC: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005403: mov     rcx, [rcx+18h]
 * 00000001C0005407: mov     qword ptr [r11-20h], 4
 * 00000001C000540F: mov     [r11-28h], rdx
 * 00000001C0005413: lea     rdx, [r11+30h]
 * 00000001C0005417: mov     qword ptr [r11-30h], 8
 * 00000001C000541F: mov     [r11-38h], rdx
 * 00000001C0005423: lea     edx, [rbp-2Dh]
 * 00000001C0005426: movzx   r9d, bp
 * 00000001C000542A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005430: and     [rsp+58h+var_10], 0
 * 00000001C0005436: lea     rax, [rsp+58h+arg_30]
 * 00000001C000543E: mov     [rsp+58h+var_18], 4
 * 00000001C0005447: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C000544E: mov     [rsp+58h+var_20], rax
 * 00000001C0005453: mov     edx, 2
 * 00000001C0005458: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005460: mov     [rsp+58h+var_28], 8
 * 00000001C0005469: mov     [rsp+58h+var_30], rax
 * 00000001C000546E: mov     rcx, rbx
 * 00000001C0005471: mov     [rsp+58h+var_38], bp
 * 00000001C0005476: lea     r8d, [rdx+3]
 * 00000001C000547A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005480: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005485: add     rsp, 50h
 * 00000001C0005489: pop     rbp
 * 00000001C000548A: retn
 */
