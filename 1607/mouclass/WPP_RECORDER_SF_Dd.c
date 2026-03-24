/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C00024F0
 * Callers:
 *     MouConfiguration @ 0x1C000E020 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C00024F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00024F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00024F0: mov     [rsp+arg_0], rbx
 * 00000001C00024F5: push    rsi
 * 00000001C00024F6: sub     rsp, 50h
 * 00000001C00024FA: mov     rbx, rcx
 * 00000001C00024FD: mov     esi, 41h ; 'A'
 * 00000001C0002502: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002509: mov     eax, [rcx+2Ch]
 * 00000001C000250C: test    al, 1
 * 00000001C000250E: jnz     loc_1C00040E8
 * 00000001C0002514: mov     [rsp+58h+var_10], 0
 * 00000001C000251D: lea     rax, [rsp+58h+arg_30]
 * 00000001C0002525: mov     [rsp+58h+var_18], 4
 * 00000001C000252E: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0002535: mov     [rsp+58h+var_20], rax
 * 00000001C000253A: mov     edx, 4
 * 00000001C000253F: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002547: mov     [rsp+58h+var_28], 4
 * 00000001C0002550: mov     [rsp+58h+var_30], rax
 * 00000001C0002555: mov     rcx, rbx
 * 00000001C0002558: mov     word ptr [rsp+58h+var_38], si
 * 00000001C000255D: lea     r8d, [rdx-3]
 * 00000001C0002561: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002567: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000256C: add     rsp, 50h
 * 00000001C0002570: pop     rsi
 * 00000001C0002571: retn
 * 00000001C00040E8: cmp     byte ptr [rcx+29h], 4
 * 00000001C00040EC: jb      loc_1C0002514
 * 00000001C00040F2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00040F9: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0004101: mov     rcx, [rcx+18h]
 * 00000001C0004105: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C000410C: mov     [rsp+58h+var_18], 0
 * 00000001C0004115: mov     [rsp+58h+var_20], 4
 * 00000001C000411E: mov     [rsp+58h+var_28], rdx
 * 00000001C0004123: lea     rdx, [rsp+58h+arg_28]
 * 00000001C000412B: mov     [rsp+58h+var_30], 4
 * 00000001C0004134: mov     [rsp+58h+var_38], rdx
 * 00000001C0004139: mov     edx, 2Bh ; '+'
 * 00000001C000413E: movzx   r9d, si
 * 00000001C0004142: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0004148: nop
 * 00000001C0004149: jmp     loc_1C0002514
 */
