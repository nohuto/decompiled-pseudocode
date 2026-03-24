/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C004F7E0
 * Callers:
 *     UsbhExceptionTrace @ 0x1C004EFB8 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C004F7E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C004F7E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004F7E0: mov     rax, rsp
 * 00000001C004F7E3: mov     [rax+8], rbx
 * 00000001C004F7E7: mov     [rax+10h], rbp
 * 00000001C004F7EB: mov     [rax+18h], rsi
 * 00000001C004F7EF: mov     [rax+20h], rdi
 * 00000001C004F7F3: push    r13
 * 00000001C004F7F5: sub     rsp, 50h
 * 00000001C004F7F9: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004F800: lea     rsi, aNull_1; "NULL"
 * 00000001C004F807: mov     rdi, [rsp+58h+arg_30]
 * 00000001C004F80F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004F813: mov     rbp, rcx
 * 00000001C004F816: mov     eax, [r10+2Ch]
 * 00000001C004F81A: lea     r13d, [rbx+0Dh]
 * 00000001C004F81E: test    al, 1
 * 00000001C004F820: jz      short loc_1C004F88E
 * 00000001C004F822: test    rdi, rdi
 * 00000001C004F825: jz      short loc_1C004F838
 * 00000001C004F827: mov     rcx, rbx
 * 00000001C004F82A: inc     rcx
 * 00000001C004F82D: cmp     byte ptr [rdi+rcx], 0
 * 00000001C004F831: jnz     short loc_1C004F82A
 * 00000001C004F833: inc     rcx
 * 00000001C004F836: jmp     short loc_1C004F83D
 * 00000001C004F838: mov     ecx, 5
 * 00000001C004F83D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004F844: lea     r8, WPP_2baaa2b6f718571df222b7043536ba13_Traceguids
 * 00000001C004F84B: test    rdi, rdi
 * 00000001C004F84E: movzx   r9d, r13w
 * 00000001C004F852: mov     rdx, rsi
 * 00000001C004F855: cmovnz  rdx, rdi
 * 00000001C004F859: and     [rsp+58h+var_18], 0
 * 00000001C004F85F: mov     [rsp+58h+var_20], rcx
 * 00000001C004F864: lea     rcx, [rsp+58h+arg_28]
 * 00000001C004F86C: mov     [rsp+58h+var_28], rdx
 * 00000001C004F871: mov     edx, 2Bh ; '+'
 * 00000001C004F876: mov     [rsp+58h+var_30], 4
 * 00000001C004F87F: mov     [rsp+58h+var_38], rcx
 * 00000001C004F884: mov     rcx, [r10+18h]
 * 00000001C004F888: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004F88E: test    rdi, rdi
 * 00000001C004F891: jz      short loc_1C004F8A1
 * 00000001C004F893: inc     rbx
 * 00000001C004F896: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004F89A: jnz     short loc_1C004F893
 * 00000001C004F89C: inc     rbx
 * 00000001C004F89F: jmp     short loc_1C004F8A6
 * 00000001C004F8A1: mov     ebx, 5
 * 00000001C004F8A6: test    rdi, rdi
 * 00000001C004F8A9: lea     rax, [rsp+58h+arg_28]
 * 00000001C004F8B1: lea     r9, WPP_2baaa2b6f718571df222b7043536ba13_Traceguids
 * 00000001C004F8B8: mov     rcx, rbp
 * 00000001C004F8BB: cmovnz  rsi, rdi
 * 00000001C004F8BF: and     [rsp+58h+var_10], 0
 * 00000001C004F8C5: mov     [rsp+58h+var_18], rbx
 * 00000001C004F8CA: xor     edx, edx
 * 00000001C004F8CC: mov     [rsp+58h+var_20], rsi
 * 00000001C004F8D1: mov     [rsp+58h+var_28], 4
 * 00000001C004F8DA: mov     [rsp+58h+var_30], rax
 * 00000001C004F8DF: lea     r8d, [rdx+1]
 * 00000001C004F8E3: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C004F8E9: call    cs:__imp_WppAutoLogTrace
 * 00000001C004F8EF: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004F8F4: mov     rbp, [rsp+58h+arg_8]
 * 00000001C004F8F9: mov     rsi, [rsp+58h+arg_10]
 * 00000001C004F8FE: mov     rdi, [rsp+58h+arg_18]
 * 00000001C004F903: add     rsp, 50h
 * 00000001C004F907: pop     r13
 * 00000001C004F909: retn
 */
