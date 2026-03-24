/*
 * XREFs of WPP_RECORDER_SF_SqLL @ 0x1C0027B98
 * Callers:
 *     ACPIMatchHardwareId @ 0x1C008F6BC (ACPIMatchHardwareId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_SqLL @ 0x1C0027B98
 * Reason: Hex-Rays returned no pseudocode for 0x1C0027B98
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0027B98: mov     [rsp+arg_0], rbx
 * 00000001C0027B9D: mov     [rsp+arg_8], rbp
 * 00000001C0027BA2: mov     [rsp+arg_10], rsi
 * 00000001C0027BA7: push    rdi
 * 00000001C0027BA8: push    r14
 * 00000001C0027BAA: push    r15
 * 00000001C0027BAC: sub     rsp, 70h
 * 00000001C0027BB0: mov     rdi, [rsp+88h+arg_28]
 * 00000001C0027BB8: lea     rsi, aNull; "NULL"
 * 00000001C0027BBF: mov     rbp, rcx
 * 00000001C0027BC2: mov     r15d, 4
 * 00000001C0027BC8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0027BCF: xor     r14d, r14d
 * 00000001C0027BD2: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0027BD6: lea     r10d, [r15+8]
 * 00000001C0027BDA: mov     eax, [rcx+2Ch]
 * 00000001C0027BDD: test    al, 20h
 * 00000001C0027BDF: jnz     loc_1C003FC5A
 * 00000001C0027BE5: test    rdi, rdi
 * 00000001C0027BE8: jz      loc_1C003FD02
 * 00000001C0027BEE: inc     rbx
 * 00000001C0027BF1: cmp     [rdi+rbx*2], r14w
 * 00000001C0027BF6: jnz     short loc_1C0027BEE
 * 00000001C0027BF8: inc     rbx
 * 00000001C0027BFB: mov     [rsp+88h+var_20], r14
 * 00000001C0027C00: lea     rcx, [rsp+88h+arg_40]
 * 00000001C0027C08: mov     [rsp+88h+var_28], r15
 * 00000001C0027C0D: lea     rax, [rbx+rbx]
 * 00000001C0027C11: mov     [rsp+88h+var_30], rcx
 * 00000001C0027C16: lea     r9, WPP_e479c42625e5324ff0b798dec9fc716d_Traceguids
 * 00000001C0027C1D: mov     [rsp+88h+var_38], r15
 * 00000001C0027C22: lea     rcx, [rsp+88h+arg_38]
 * 00000001C0027C2A: mov     [rsp+88h+var_40], rcx
 * 00000001C0027C2F: test    rdi, rdi
 * 00000001C0027C32: mov     [rsp+88h+var_48], 8
 * 00000001C0027C3B: lea     rcx, [rsp+88h+arg_30]
 * 00000001C0027C43: mov     [rsp+88h+var_50], rcx
 * 00000001C0027C48: cmovnz  rsi, rdi
 * 00000001C0027C4C: mov     [rsp+88h+var_58], rax
 * 00000001C0027C51: mov     r8d, 6
 * 00000001C0027C57: mov     [rsp+88h+var_60], rsi
 * 00000001C0027C5C: mov     edx, r15d
 * 00000001C0027C5F: mov     rcx, rbp
 * 00000001C0027C62: mov     word ptr [rsp+88h+var_68], r10w
 * 00000001C0027C68: call    cs:__imp_WppAutoLogTrace
 * 00000001C0027C6E: lea     r11, [rsp+88h+var_18]
 * 00000001C0027C73: mov     rbx, [r11+20h]
 * 00000001C0027C77: mov     rbp, [r11+28h]
 * 00000001C0027C7B: mov     rsi, [r11+30h]
 * 00000001C0027C7F: mov     rsp, r11
 * 00000001C0027C82: pop     r15
 * 00000001C0027C84: pop     r14
 * 00000001C0027C86: pop     rdi
 * 00000001C0027C87: retn
 * 00000001C003FC5A: cmp     [rcx+29h], r15b
 * 00000001C003FC5E: jb      loc_1C0027BE5
 * 00000001C003FC64: test    rdi, rdi
 * 00000001C003FC67: jz      short loc_1C003FC7B
 * 00000001C003FC69: mov     rdx, rbx
 * 00000001C003FC6C: inc     rdx
 * 00000001C003FC6F: cmp     [rdi+rdx*2], r14w
 * 00000001C003FC74: jnz     short loc_1C003FC6C
 * 00000001C003FC76: inc     rdx
 * 00000001C003FC79: jmp     short loc_1C003FC80
 * 00000001C003FC7B: mov     edx, 5
 * 00000001C003FC80: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003FC87: lea     r9, [rsp+88h+arg_40]
 * 00000001C003FC8F: mov     rcx, [rcx+18h]
 * 00000001C003FC93: test    rdi, rdi
 * 00000001C003FC96: mov     [rsp+88h+var_28], r14
 * 00000001C003FC9B: mov     r8, rsi
 * 00000001C003FC9E: mov     [rsp+88h+var_30], r15
 * 00000001C003FCA3: cmovnz  r8, rdi
 * 00000001C003FCA7: mov     [rsp+88h+var_38], r9
 * 00000001C003FCAC: add     rdx, rdx
 * 00000001C003FCAF: mov     [rsp+88h+var_40], r15
 * 00000001C003FCB4: lea     r9, [rsp+88h+arg_38]
 * 00000001C003FCBC: mov     [rsp+88h+var_48], r9
 * 00000001C003FCC1: lea     r9, [rsp+88h+arg_30]
 * 00000001C003FCC9: mov     [rsp+88h+var_50], 8
 * 00000001C003FCD2: mov     [rsp+88h+var_58], r9
 * 00000001C003FCD7: mov     [rsp+88h+var_60], rdx
 * 00000001C003FCDC: mov     edx, 2Bh ; '+'
 * 00000001C003FCE1: mov     [rsp+88h+var_68], r8
 * 00000001C003FCE6: lea     r8, WPP_e479c42625e5324ff0b798dec9fc716d_Traceguids
 * 00000001C003FCED: movzx   r9d, r10w
 * 00000001C003FCF1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003FCF7: mov     r10d, 0Ch
 * 00000001C003FCFD: jmp     loc_1C0027BE5
 * 00000001C003FD02: mov     ebx, 5
 * 00000001C003FD07: jmp     loc_1C0027BFB
 */
