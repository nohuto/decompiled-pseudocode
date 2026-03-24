/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C00054F4
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C0002950 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C00054F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00054F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00054F4: mov     r11, rsp
 * 00000001C00054F7: mov     [r11+8], rbx
 * 00000001C00054FB: push    rbp
 * 00000001C00054FC: sub     rsp, 50h
 * 00000001C0005500: mov     rbx, rcx
 * 00000001C0005503: mov     ebp, 33h ; '3'
 * 00000001C0005508: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000550F: mov     eax, [rcx+2Ch]
 * 00000001C0005512: test    al, 4
 * 00000001C0005514: jz      short loc_1C0005560
 * 00000001C0005516: cmp     byte ptr [rcx+29h], 5
 * 00000001C000551A: jb      short loc_1C0005560
 * 00000001C000551C: and     qword ptr [r11-18h], 0
 * 00000001C0005521: lea     rdx, [r11+38h]
 * 00000001C0005525: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000552C: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0005533: mov     rcx, [rcx+18h]
 * 00000001C0005537: mov     qword ptr [r11-20h], 4
 * 00000001C000553F: mov     [r11-28h], rdx
 * 00000001C0005543: lea     rdx, [r11+30h]
 * 00000001C0005547: mov     qword ptr [r11-30h], 8
 * 00000001C000554F: mov     [r11-38h], rdx
 * 00000001C0005553: lea     edx, [rbp-8]
 * 00000001C0005556: movzx   r9d, bp
 * 00000001C000555A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005560: and     [rsp+58h+var_10], 0
 * 00000001C0005566: lea     rax, [rsp+58h+arg_30]
 * 00000001C000556E: mov     [rsp+58h+var_18], 4
 * 00000001C0005577: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C000557E: mov     [rsp+58h+var_20], rax
 * 00000001C0005583: mov     edx, 5
 * 00000001C0005588: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005590: mov     [rsp+58h+var_28], 8
 * 00000001C0005599: mov     [rsp+58h+var_30], rax
 * 00000001C000559E: mov     rcx, rbx
 * 00000001C00055A1: mov     [rsp+58h+var_38], bp
 * 00000001C00055A6: lea     r8d, [rdx-2]
 * 00000001C00055AA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00055B0: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00055B5: add     rsp, 50h
 * 00000001C00055B9: pop     rbp
 * 00000001C00055BA: retn
 */
