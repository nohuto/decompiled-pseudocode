/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C004F740
 * Callers:
 *     UsbhExceptionTrace @ 0x1C004EF18 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C004F740
 * Reason: Hex-Rays returned no pseudocode for 0x1C004F740
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004F740: mov     rax, rsp
 * 00000001C004F743: mov     [rax+8], rbx
 * 00000001C004F747: mov     [rax+10h], rbp
 * 00000001C004F74B: mov     [rax+18h], rsi
 * 00000001C004F74F: mov     [rax+20h], rdi
 * 00000001C004F753: push    r13
 * 00000001C004F755: sub     rsp, 50h
 * 00000001C004F759: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004F760: lea     rsi, aNull_1; "NULL"
 * 00000001C004F767: mov     rdi, [rsp+58h+arg_30]
 * 00000001C004F76F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004F773: mov     rbp, rcx
 * 00000001C004F776: mov     eax, [r10+2Ch]
 * 00000001C004F77A: lea     r13d, [rbx+0Dh]
 * 00000001C004F77E: test    al, 1
 * 00000001C004F780: jz      short loc_1C004F7EE
 * 00000001C004F782: test    rdi, rdi
 * 00000001C004F785: jz      short loc_1C004F798
 * 00000001C004F787: mov     rcx, rbx
 * 00000001C004F78A: inc     rcx
 * 00000001C004F78D: cmp     byte ptr [rdi+rcx], 0
 * 00000001C004F791: jnz     short loc_1C004F78A
 * 00000001C004F793: inc     rcx
 * 00000001C004F796: jmp     short loc_1C004F79D
 * 00000001C004F798: mov     ecx, 5
 * 00000001C004F79D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004F7A4: lea     r8, WPP_2baaa2b6f718571df222b7043536ba13_Traceguids
 * 00000001C004F7AB: test    rdi, rdi
 * 00000001C004F7AE: movzx   r9d, r13w
 * 00000001C004F7B2: mov     rdx, rsi
 * 00000001C004F7B5: cmovnz  rdx, rdi
 * 00000001C004F7B9: and     [rsp+58h+var_18], 0
 * 00000001C004F7BF: mov     [rsp+58h+var_20], rcx
 * 00000001C004F7C4: lea     rcx, [rsp+58h+arg_28]
 * 00000001C004F7CC: mov     [rsp+58h+var_28], rdx
 * 00000001C004F7D1: mov     edx, 2Bh ; '+'
 * 00000001C004F7D6: mov     [rsp+58h+var_30], 4
 * 00000001C004F7DF: mov     [rsp+58h+var_38], rcx
 * 00000001C004F7E4: mov     rcx, [r10+18h]
 * 00000001C004F7E8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004F7EE: test    rdi, rdi
 * 00000001C004F7F1: jz      short loc_1C004F801
 * 00000001C004F7F3: inc     rbx
 * 00000001C004F7F6: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004F7FA: jnz     short loc_1C004F7F3
 * 00000001C004F7FC: inc     rbx
 * 00000001C004F7FF: jmp     short loc_1C004F806
 * 00000001C004F801: mov     ebx, 5
 * 00000001C004F806: test    rdi, rdi
 * 00000001C004F809: lea     rax, [rsp+58h+arg_28]
 * 00000001C004F811: lea     r9, WPP_2baaa2b6f718571df222b7043536ba13_Traceguids
 * 00000001C004F818: mov     rcx, rbp
 * 00000001C004F81B: cmovnz  rsi, rdi
 * 00000001C004F81F: and     [rsp+58h+var_10], 0
 * 00000001C004F825: mov     [rsp+58h+var_18], rbx
 * 00000001C004F82A: xor     edx, edx
 * 00000001C004F82C: mov     [rsp+58h+var_20], rsi
 * 00000001C004F831: mov     [rsp+58h+var_28], 4
 * 00000001C004F83A: mov     [rsp+58h+var_30], rax
 * 00000001C004F83F: lea     r8d, [rdx+1]
 * 00000001C004F843: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C004F849: call    cs:__imp_WppAutoLogTrace
 * 00000001C004F84F: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004F854: mov     rbp, [rsp+58h+arg_8]
 * 00000001C004F859: mov     rsi, [rsp+58h+arg_10]
 * 00000001C004F85E: mov     rdi, [rsp+58h+arg_18]
 * 00000001C004F863: add     rsp, 50h
 * 00000001C004F867: pop     r13
 * 00000001C004F869: retn
 */
