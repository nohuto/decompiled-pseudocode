/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0002050
 * Callers:
 *     MouseClassCreate @ 0x1C0001110 (MouseClassCreate.c)
 *     MouseClassPower @ 0x1C0001CD0 (MouseClassPower.c)
 *     MouseClassHandleRead @ 0x1C00028E0 (MouseClassHandleRead.c)
 *     MouseClassReadCopyData @ 0x1C00046A0 (MouseClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002AC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0002050
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002050
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002050: mov     [rsp+arg_0], rbx
 * 00000001C0002055: mov     [rsp+arg_8], rbp
 * 00000001C000205A: mov     [rsp+arg_10], rsi
 * 00000001C000205F: mov     [rsp+arg_18], rdi
 * 00000001C0002064: push    r14
 * 00000001C0002066: sub     rsp, 50h
 * 00000001C000206A: mov     ebx, r8d
 * 00000001C000206D: mov     r14, rcx
 * 00000001C0002070: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002077: movzx   ebp, r9w
 * 00000001C000207B: mov     edi, r8d
 * 00000001C000207E: movzx   esi, dl
 * 00000001C0002081: shr     rdi, 10h
 * 00000001C0002085: lea     r11d, [rbx-1]
 * 00000001C0002089: mov     r8d, r11d
 * 00000001C000208C: and     r11d, 1Fh
 * 00000001C0002090: shr     r8, 5
 * 00000001C0002094: and     r8d, 7FFh
 * 00000001C000209B: lea     rax, [rdi+rdi*4]
 * 00000001C000209F: lea     r10, [r8+rax*4]
 * 00000001C00020A3: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C00020A8: bt      eax, r11d
 * 00000001C00020AC: jb      loc_1C00039B2
 * 00000001C00020B2: mov     [rsp+58h+var_10], 0
 * 00000001C00020BB: lea     rax, [rsp+58h+arg_30]
 * 00000001C00020C3: mov     [rsp+58h+var_18], 8
 * 00000001C00020CC: lea     r9, WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids
 * 00000001C00020D3: mov     [rsp+58h+var_20], rax
 * 00000001C00020D8: mov     r8d, ebx
 * 00000001C00020DB: lea     rax, [rsp+58h+arg_28]
 * 00000001C00020E3: mov     [rsp+58h+var_28], 8
 * 00000001C00020EC: mov     [rsp+58h+var_30], rax
 * 00000001C00020F1: mov     rcx, r14
 * 00000001C00020F4: movzx   edx, sil
 * 00000001C00020F8: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00020FD: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002103: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002108: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000210D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0002112: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0002117: add     rsp, 50h
 * 00000001C000211B: pop     r14
 * 00000001C000211D: retn
 * 00000001C00039B2: lea     rax, [rdi+rdi*4]
 * 00000001C00039B6: shl     rax, 4
 * 00000001C00039BA: add     rcx, rax
 * 00000001C00039BD: cmp     [rcx+29h], sil
 * 00000001C00039C1: jb      loc_1C00020B2
 * 00000001C00039C7: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00039CE: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00039D6: mov     rcx, [rcx+18h]
 * 00000001C00039DA: lea     r8, WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids
 * 00000001C00039E1: mov     [rsp+58h+var_18], 0
 * 00000001C00039EA: mov     [rsp+58h+var_20], 8
 * 00000001C00039F3: mov     [rsp+58h+var_28], rdx
 * 00000001C00039F8: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0003A00: mov     [rsp+58h+var_30], 8
 * 00000001C0003A09: mov     [rsp+58h+var_38], rdx
 * 00000001C0003A0E: mov     edx, 2Bh ; '+'
 * 00000001C0003A13: movzx   r9d, bp
 * 00000001C0003A17: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003A1D: nop
 * 00000001C0003A1E: jmp     loc_1C00020B2
 */
