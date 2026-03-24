/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C004FEB0
 * Callers:
 *     UsbhExceptionTrace @ 0x1C004F688 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C004FEB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C004FEB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004FEB0: mov     rax, rsp
 * 00000001C004FEB3: mov     [rax+8], rbx
 * 00000001C004FEB7: mov     [rax+10h], rbp
 * 00000001C004FEBB: mov     [rax+18h], rsi
 * 00000001C004FEBF: mov     [rax+20h], rdi
 * 00000001C004FEC3: push    r13
 * 00000001C004FEC5: sub     rsp, 50h
 * 00000001C004FEC9: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004FED0: lea     rsi, aNull_0; "NULL"
 * 00000001C004FED7: mov     rdi, [rsp+58h+arg_30]
 * 00000001C004FEDF: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004FEE3: mov     rbp, rcx
 * 00000001C004FEE6: mov     eax, [r10+2Ch]
 * 00000001C004FEEA: lea     r13d, [rbx+0Dh]
 * 00000001C004FEEE: test    al, 1
 * 00000001C004FEF0: jz      short loc_1C004FF5E
 * 00000001C004FEF2: test    rdi, rdi
 * 00000001C004FEF5: jz      short loc_1C004FF08
 * 00000001C004FEF7: mov     rcx, rbx
 * 00000001C004FEFA: inc     rcx
 * 00000001C004FEFD: cmp     byte ptr [rdi+rcx], 0
 * 00000001C004FF01: jnz     short loc_1C004FEFA
 * 00000001C004FF03: inc     rcx
 * 00000001C004FF06: jmp     short loc_1C004FF0D
 * 00000001C004FF08: mov     ecx, 5
 * 00000001C004FF0D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004FF14: lea     r8, WPP_caf772459f30358e042199e29acd7158_Traceguids
 * 00000001C004FF1B: test    rdi, rdi
 * 00000001C004FF1E: movzx   r9d, r13w
 * 00000001C004FF22: mov     rdx, rsi
 * 00000001C004FF25: cmovnz  rdx, rdi
 * 00000001C004FF29: and     [rsp+58h+var_18], 0
 * 00000001C004FF2F: mov     [rsp+58h+var_20], rcx
 * 00000001C004FF34: lea     rcx, [rsp+58h+arg_28]
 * 00000001C004FF3C: mov     [rsp+58h+var_28], rdx
 * 00000001C004FF41: mov     edx, 2Bh ; '+'
 * 00000001C004FF46: mov     [rsp+58h+var_30], 4
 * 00000001C004FF4F: mov     [rsp+58h+var_38], rcx
 * 00000001C004FF54: mov     rcx, [r10+18h]
 * 00000001C004FF58: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004FF5E: test    rdi, rdi
 * 00000001C004FF61: jz      short loc_1C004FF71
 * 00000001C004FF63: inc     rbx
 * 00000001C004FF66: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004FF6A: jnz     short loc_1C004FF63
 * 00000001C004FF6C: inc     rbx
 * 00000001C004FF6F: jmp     short loc_1C004FF76
 * 00000001C004FF71: mov     ebx, 5
 * 00000001C004FF76: test    rdi, rdi
 * 00000001C004FF79: lea     rax, [rsp+58h+arg_28]
 * 00000001C004FF81: lea     r9, WPP_caf772459f30358e042199e29acd7158_Traceguids
 * 00000001C004FF88: mov     rcx, rbp
 * 00000001C004FF8B: cmovnz  rsi, rdi
 * 00000001C004FF8F: and     [rsp+58h+var_10], 0
 * 00000001C004FF95: mov     [rsp+58h+var_18], rbx
 * 00000001C004FF9A: xor     edx, edx
 * 00000001C004FF9C: mov     [rsp+58h+var_20], rsi
 * 00000001C004FFA1: mov     [rsp+58h+var_28], 4
 * 00000001C004FFAA: mov     [rsp+58h+var_30], rax
 * 00000001C004FFAF: lea     r8d, [rdx+1]
 * 00000001C004FFB3: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C004FFB9: call    cs:__imp_WppAutoLogTrace
 * 00000001C004FFBF: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004FFC4: mov     rbp, [rsp+58h+arg_8]
 * 00000001C004FFC9: mov     rsi, [rsp+58h+arg_10]
 * 00000001C004FFCE: mov     rdi, [rsp+58h+arg_18]
 * 00000001C004FFD3: add     rsp, 50h
 * 00000001C004FFD7: pop     r13
 * 00000001C004FFD9: retn
 */
