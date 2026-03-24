/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_SL @ 0x14021D9B8
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_SL @ 0x14021D9B8
 * Reason: Hex-Rays returned no pseudocode for 0x14021D9B8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014021D9B8: mov     rax, rsp
 * 000000014021D9BB: mov     [rax+8], rbx
 * 000000014021D9BF: mov     [rax+10h], rbp
 * 000000014021D9C3: mov     [rax+18h], rsi
 * 000000014021D9C7: mov     [rax+20h], rdi
 * 000000014021D9CB: push    r13
 * 000000014021D9CD: push    r14
 * 000000014021D9CF: push    r15
 * 000000014021D9D1: sub     rsp, 50h
 * 000000014021D9D5: mov     rbx, [rsp+68h+arg_40]
 * 000000014021D9DD: lea     r13, aNull_0; "NULL"
 * 000000014021D9E4: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014021D9E8: xor     r15d, r15d
 * 000000014021D9EB: mov     bpl, r8b
 * 000000014021D9EE: mov     r14, r9
 * 000000014021D9F1: mov     r11, rcx
 * 000000014021D9F4: lea     esi, [rdi+0Bh]
 * 000000014021D9F7: lea     r8d, [rdi+1Ah]
 * 000000014021D9FB: test    dl, dl
 * 000000014021D9FD: jnz     loc_14021DA90
 * 000000014021DA03: test    bpl, bpl
 * 000000014021DA06: jz      short loc_14021DA70
 * 000000014021DA08: test    rbx, rbx
 * 000000014021DA0B: jz      short loc_14021DA22
 * 000000014021DA0D: inc     rdi
 * 000000014021DA10: cmp     [rbx+rdi*2], r15w
 * 000000014021DA15: jnz     short loc_14021DA0D
 * 000000014021DA17: lea     rsi, ds:2[rdi*2]
 * 000000014021DA1F: test    rbx, rbx
 * 000000014021DA22: mov     [rsp+68h+var_20], r15
 * 000000014021DA27: lea     rax, [rsp+68h+arg_48]
 * 000000014021DA2F: mov     [rsp+68h+var_28], 4
 * 000000014021DA38: lea     r9, WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids
 * 000000014021DA3F: mov     [rsp+68h+var_30], rax
 * 000000014021DA44: mov     edx, 4
 * 000000014021DA49: cmovz   rbx, r13
 * 000000014021DA4D: mov     [rsp+68h+var_38], rsi
 * 000000014021DA52: mov     [rsp+68h+var_40], rbx
 * 000000014021DA57: mov     rcx, r14
 * 000000014021DA5A: mov     word ptr [rsp+68h+var_48], r8w
 * 000000014021DA60: lea     r8d, [rdx-1]
 * 000000014021DA64: call    cs:__imp_WppAutoLogTrace
 * 000000014021DA6B: nop     dword ptr [rax+rax+00h]
 * 000000014021DA70: lea     r11, [rsp+68h+var_18]
 * 000000014021DA75: mov     rbx, [r11+20h]
 * 000000014021DA79: mov     rbp, [r11+28h]
 * 000000014021DA7D: mov     rsi, [r11+30h]
 * 000000014021DA81: mov     rdi, [r11+38h]
 * 000000014021DA85: mov     rsp, r11
 * 000000014021DA88: pop     r15
 * 000000014021DA8A: pop     r14
 * 000000014021DA8C: pop     r13
 * 000000014021DA8E: retn
 * 000000014021DA90: mov     r10, cs:pfnWppTraceMessage
 * 000000014021DA97: test    rbx, rbx
 * 000000014021DA9A: jz      short loc_14021DAB3
 * 000000014021DA9C: mov     rax, rdi
 * 000000014021DA9F: inc     rax
 * 000000014021DAA2: cmp     [rbx+rax*2], r15w
 * 000000014021DAA7: jnz     short loc_14021DA9F
 * 000000014021DAA9: lea     rax, ds:2[rax*2]
 * 000000014021DAB1: jmp     short loc_14021DAB6
 * 000000014021DAB3: mov     rax, rsi
 * 000000014021DAB6: mov     [rsp+68h+var_28], r15
 * 000000014021DABB: lea     rdx, [rsp+68h+arg_48]
 * 000000014021DAC3: mov     [rsp+68h+var_30], 4
 * 000000014021DACC: test    rbx, rbx
 * 000000014021DACF: mov     [rsp+68h+var_38], rdx
 * 000000014021DAD4: mov     r9d, r8d
 * 000000014021DAD7: mov     [rsp+68h+var_40], rax
 * 000000014021DADC: lea     r8, WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids
 * 000000014021DAE3: mov     rcx, rbx
 * 000000014021DAE6: mov     edx, 2Bh ; '+'
 * 000000014021DAEB: cmovz   rcx, r13
 * 000000014021DAEF: mov     rax, r10
 * 000000014021DAF2: mov     [rsp+68h+var_48], rcx
 * 000000014021DAF7: mov     rcx, r11
 * 000000014021DAFA: call    _guard_dispatch_icall
 * 000000014021DAFF: mov     r8d, 19h
 * 000000014021DB05: jmp     loc_14021DA03
 */
