/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00021D0
 * Callers:
 *     MouseClassCreate @ 0x1C0001110 (MouseClassCreate.c)
 *     MouseClassRead @ 0x1C00013C0 (MouseClassRead.c)
 *     MouseClassPower @ 0x1C0001E50 (MouseClassPower.c)
 *     MouseClassReadCopyData @ 0x1C0004670 (MouseClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00021D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00021D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00021D0: mov     [rsp+arg_0], rbx
 * 00000001C00021D5: mov     [rsp+arg_8], rbp
 * 00000001C00021DA: mov     [rsp+arg_10], rsi
 * 00000001C00021DF: mov     [rsp+arg_18], rdi
 * 00000001C00021E4: push    r14
 * 00000001C00021E6: sub     rsp, 50h
 * 00000001C00021EA: mov     ebx, r8d
 * 00000001C00021ED: mov     r14, rcx
 * 00000001C00021F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00021F7: movzx   ebp, r9w
 * 00000001C00021FB: mov     edi, r8d
 * 00000001C00021FE: movzx   esi, dl
 * 00000001C0002201: shr     rdi, 10h
 * 00000001C0002205: lea     r11d, [rbx-1]
 * 00000001C0002209: mov     r8d, r11d
 * 00000001C000220C: and     r11d, 1Fh
 * 00000001C0002210: shr     r8, 5
 * 00000001C0002214: and     r8d, 7FFh
 * 00000001C000221B: lea     rax, [rdi+rdi*4]
 * 00000001C000221F: lea     r10, [r8+rax*4]
 * 00000001C0002223: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0002228: bt      eax, r11d
 * 00000001C000222C: jb      loc_1C0003860
 * 00000001C0002232: mov     [rsp+58h+var_10], 0
 * 00000001C000223B: lea     rax, [rsp+58h+arg_30]
 * 00000001C0002243: mov     [rsp+58h+var_18], 8
 * 00000001C000224C: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0002253: mov     [rsp+58h+var_20], rax
 * 00000001C0002258: mov     r8d, ebx
 * 00000001C000225B: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002263: mov     [rsp+58h+var_28], 8
 * 00000001C000226C: mov     [rsp+58h+var_30], rax
 * 00000001C0002271: mov     rcx, r14
 * 00000001C0002274: movzx   edx, sil
 * 00000001C0002278: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000227D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002283: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002288: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000228D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0002292: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0002297: add     rsp, 50h
 * 00000001C000229B: pop     r14
 * 00000001C000229D: retn
 * 00000001C0003860: lea     rax, [rdi+rdi*4]
 * 00000001C0003864: shl     rax, 4
 * 00000001C0003868: add     rcx, rax
 * 00000001C000386B: cmp     [rcx+29h], sil
 * 00000001C000386F: jb      loc_1C0002232
 * 00000001C0003875: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000387C: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0003884: mov     rcx, [rcx+18h]
 * 00000001C0003888: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C000388F: mov     [rsp+58h+var_18], 0
 * 00000001C0003898: mov     [rsp+58h+var_20], 8
 * 00000001C00038A1: mov     [rsp+58h+var_28], rdx
 * 00000001C00038A6: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00038AE: mov     [rsp+58h+var_30], 8
 * 00000001C00038B7: mov     [rsp+58h+var_38], rdx
 * 00000001C00038BC: mov     edx, 2Bh ; '+'
 * 00000001C00038C1: movzx   r9d, bp
 * 00000001C00038C5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00038CB: nop
 * 00000001C00038CC: jmp     loc_1C0002232
 */
