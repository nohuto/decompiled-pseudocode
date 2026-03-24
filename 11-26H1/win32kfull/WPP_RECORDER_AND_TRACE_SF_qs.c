/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qS @ 0x140205F48
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1401D2F9C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402EC54C (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qS @ 0x140205F48
 * Reason: Hex-Rays returned no pseudocode for 0x140205F48
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140205F48: mov     rax, rsp
 * 0000000140205F4B: mov     [rax+8], rbx
 * 0000000140205F4F: mov     [rax+10h], rbp
 * 0000000140205F53: mov     [rax+18h], rsi
 * 0000000140205F57: mov     [rax+20h], rdi
 * 0000000140205F5B: push    r12
 * 0000000140205F5D: push    r14
 * 0000000140205F5F: push    r15
 * 0000000140205F61: sub     rsp, 50h
 * 0000000140205F65: mov     rbx, [rsp+68h+arg_48]
 * 0000000140205F6D: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140205F71: movzx   r14d, [rsp+68h+arg_30]
 * 0000000140205F7A: xor     r12d, r12d
 * 0000000140205F7D: mov     bpl, r8b
 * 0000000140205F80: mov     r15, r9
 * 0000000140205F83: lea     r8, aNull_0; "NULL"
 * 0000000140205F8A: mov     r11, rcx
 * 0000000140205F8D: lea     esi, [rdi+0Bh]
 * 0000000140205F90: test    dl, dl
 * 0000000140205F92: jnz     loc_14020602D
 * 0000000140205F98: test    bpl, bpl
 * 0000000140205F9B: jz      short loc_14020600D
 * 0000000140205F9D: test    rbx, rbx
 * 0000000140205FA0: jz      short loc_140205FB7
 * 0000000140205FA2: inc     rdi
 * 0000000140205FA5: cmp     [rbx+rdi*2], r12w
 * 0000000140205FAA: jnz     short loc_140205FA2
 * 0000000140205FAC: lea     rsi, ds:2[rdi*2]
 * 0000000140205FB4: test    rbx, rbx
 * 0000000140205FB7: mov     r9, [rsp+68h+arg_38]
 * 0000000140205FBF: lea     rax, [rsp+68h+arg_40]
 * 0000000140205FC7: movzx   edx, [rsp+68h+arg_20]
 * 0000000140205FCF: cmovz   rbx, r8
 * 0000000140205FD3: mov     r8d, [rsp+68h+arg_28]
 * 0000000140205FDB: mov     rcx, r15
 * 0000000140205FDE: mov     [rsp+68h+var_20], r12
 * 0000000140205FE3: mov     [rsp+68h+var_28], rsi
 * 0000000140205FE8: mov     [rsp+68h+var_30], rbx
 * 0000000140205FED: mov     [rsp+68h+var_38], 8
 * 0000000140205FF6: mov     [rsp+68h+var_40], rax
 * 0000000140205FFB: mov     word ptr [rsp+68h+var_48], r14w
 * 0000000140206001: call    cs:__imp_WppAutoLogTrace
 * 0000000140206008: nop     dword ptr [rax+rax+00h]
 * 000000014020600D: lea     r11, [rsp+68h+var_18]
 * 0000000140206012: mov     rbx, [r11+20h]
 * 0000000140206016: mov     rbp, [r11+28h]
 * 000000014020601A: mov     rsi, [r11+30h]
 * 000000014020601E: mov     rdi, [r11+38h]
 * 0000000140206022: mov     rsp, r11
 * 0000000140206025: pop     r15
 * 0000000140206027: pop     r14
 * 0000000140206029: pop     r12
 * 000000014020602B: retn
 * 000000014020602D: mov     r10, cs:pfnWppTraceMessage
 * 0000000140206034: test    rbx, rbx
 * 0000000140206037: jz      short loc_140206050
 * 0000000140206039: mov     rax, rdi
 * 000000014020603C: inc     rax
 * 000000014020603F: cmp     [rbx+rax*2], r12w
 * 0000000140206044: jnz     short loc_14020603C
 * 0000000140206046: lea     rax, ds:2[rax*2]
 * 000000014020604E: jmp     short loc_140206053
 * 0000000140206050: mov     rax, rsi
 * 0000000140206053: mov     [rsp+68h+var_28], r12
 * 0000000140206058: test    rbx, rbx
 * 000000014020605B: mov     [rsp+68h+var_30], rax
 * 0000000140206060: mov     rcx, rbx
 * 0000000140206063: cmovz   rcx, r8
 * 0000000140206067: lea     rax, [rsp+68h+arg_40]
 * 000000014020606F: mov     r8, [rsp+68h+arg_38]
 * 0000000140206077: mov     r9d, r14d
 * 000000014020607A: mov     [rsp+68h+var_38], rcx
 * 000000014020607F: mov     edx, 2Bh ; '+'
 * 0000000140206084: mov     [rsp+68h+var_40], 8
 * 000000014020608D: mov     rcx, r11
 * 0000000140206090: mov     [rsp+68h+var_48], rax
 * 0000000140206095: mov     rax, r10
 * 0000000140206098: call    _guard_dispatch_icall
 * 000000014020609D: lea     r8, aNull_0; "NULL"
 * 00000001402060A4: jmp     loc_140205F98
 */
