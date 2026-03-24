/*
 * XREFs of WPP_RECORDER_SF_qsL @ 0x1C000C9CC
 * Callers:
 *     OSNotifyCreate @ 0x1C000C8D0 (OSNotifyCreate.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0027690 (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsL @ 0x1C000C9CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C9CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C9CC: mov     rax, rsp
 * 00000001C000C9CF: mov     [rax+8], rbx
 * 00000001C000C9D3: mov     [rax+10h], rbp
 * 00000001C000C9D7: mov     [rax+18h], rsi
 * 00000001C000C9DB: mov     [rax+20h], rdi
 * 00000001C000C9DF: push    r12
 * 00000001C000C9E1: push    r14
 * 00000001C000C9E3: push    r15
 * 00000001C000C9E5: sub     rsp, 60h
 * 00000001C000C9E9: mov     rdi, [rsp+78h+arg_30]
 * 00000001C000C9F1: lea     rbp, aNull_0; "NULL"
 * 00000001C000C9F8: mov     r15d, r8d
 * 00000001C000C9FB: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C000C9FF: mov     esi, r8d
 * 00000001C000CA02: movzx   r14d, r9w
 * 00000001C000CA06: shr     rsi, 10h
 * 00000001C000CA0A: mov     r12, rcx
 * 00000001C000CA0D: lea     r11d, [r15-1]
 * 00000001C000CA11: mov     edx, r11d
 * 00000001C000CA14: and     r11d, 1Fh
 * 00000001C000CA18: shr     rdx, 5
 * 00000001C000CA1C: lea     rax, [rsi+rsi*4]
 * 00000001C000CA20: and     edx, 7FFh
 * 00000001C000CA26: lea     r10, [rdx+rax*4]
 * 00000001C000CA2A: mov     edx, r11d
 * 00000001C000CA2D: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C000CA34: mov     eax, [r11+r10*4+2Ch]
 * 00000001C000CA39: bt      eax, edx
 * 00000001C000CA3C: jb      loc_1C00333F6
 * 00000001C000CA42: test    rdi, rdi
 * 00000001C000CA45: jz      loc_1C0033493
 * 00000001C000CA4B: inc     rbx
 * 00000001C000CA4E: cmp     byte ptr [rdi+rbx], 0
 * 00000001C000CA52: jnz     short loc_1C000CA4B
 * 00000001C000CA54: inc     rbx
 * 00000001C000CA57: mov     r9, [rsp+78h+arg_20]
 * 00000001C000CA5F: lea     rax, [rsp+78h+arg_38]
 * 00000001C000CA67: test    rdi, rdi
 * 00000001C000CA6A: mov     r8d, r15d
 * 00000001C000CA6D: mov     edx, 4
 * 00000001C000CA72: mov     rcx, r12
 * 00000001C000CA75: cmovnz  rbp, rdi
 * 00000001C000CA79: and     [rsp+78h+var_20], 0
 * 00000001C000CA7F: mov     [rsp+78h+var_28], 4
 * 00000001C000CA88: mov     [rsp+78h+var_30], rax
 * 00000001C000CA8D: lea     rax, [rsp+78h+arg_28]
 * 00000001C000CA95: mov     [rsp+78h+var_38], rbx
 * 00000001C000CA9A: mov     [rsp+78h+var_40], rbp
 * 00000001C000CA9F: mov     [rsp+78h+var_48], 8
 * 00000001C000CAA8: mov     [rsp+78h+var_50], rax
 * 00000001C000CAAD: mov     word ptr [rsp+78h+var_58], r14w
 * 00000001C000CAB3: call    cs:__imp_WppAutoLogTrace
 * 00000001C000CAB9: lea     r11, [rsp+78h+var_18]
 * 00000001C000CABE: mov     rbx, [r11+20h]
 * 00000001C000CAC2: mov     rbp, [r11+28h]
 * 00000001C000CAC6: mov     rsi, [r11+30h]
 * 00000001C000CACA: mov     rdi, [r11+38h]
 * 00000001C000CACE: mov     rsp, r11
 * 00000001C000CAD1: pop     r15
 * 00000001C000CAD3: pop     r14
 * 00000001C000CAD5: pop     r12
 * 00000001C000CAD7: retn
 * 00000001C00333F6: lea     r10, [rsi+rsi*4]
 * 00000001C00333FA: add     r10, r10
 * 00000001C00333FD: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C0033403: jb      loc_1C000CA42
 * 00000001C0033409: test    rdi, rdi
 * 00000001C003340C: jz      short loc_1C003341F
 * 00000001C003340E: mov     rdx, rbx
 * 00000001C0033411: inc     rdx
 * 00000001C0033414: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0033418: jnz     short loc_1C0033411
 * 00000001C003341A: inc     rdx
 * 00000001C003341D: jmp     short loc_1C0033424
 * 00000001C003341F: mov     edx, 5
 * 00000001C0033424: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003342B: lea     r8, [rsp+78h+arg_38]
 * 00000001C0033433: test    rdi, rdi
 * 00000001C0033436: movzx   r9d, r14w
 * 00000001C003343A: mov     rcx, rbp
 * 00000001C003343D: cmovnz  rcx, rdi
 * 00000001C0033441: and     [rsp+78h+var_28], 0
 * 00000001C0033447: mov     [rsp+78h+var_30], 4
 * 00000001C0033450: mov     [rsp+78h+var_38], r8
 * 00000001C0033455: mov     r8, [rsp+78h+arg_20]
 * 00000001C003345D: mov     [rsp+78h+var_40], rdx
 * 00000001C0033462: mov     edx, 2Bh ; '+'
 * 00000001C0033467: mov     [rsp+78h+var_48], rcx
 * 00000001C003346C: lea     rcx, [rsp+78h+arg_28]
 * 00000001C0033474: mov     [rsp+78h+var_50], 8
 * 00000001C003347D: mov     [rsp+78h+var_58], rcx
 * 00000001C0033482: mov     rcx, [r11+r10*8+18h]
 * 00000001C0033487: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003348D: nop
 * 00000001C003348E: jmp     loc_1C000CA42
 * 00000001C0033493: mov     ebx, 5
 * 00000001C0033498: jmp     loc_1C000CA57
 */
