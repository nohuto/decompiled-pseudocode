/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sdq @ 0x140222E1C
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140235EA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sdq @ 0x140222E1C
 * Reason: Hex-Rays returned no pseudocode for 0x140222E1C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140222E1C: mov     [rsp+arg_0], rbx
 * 0000000140222E21: mov     [rsp+arg_8], rdi
 * 0000000140222E26: mov     [rsp+arg_10], r12
 * 0000000140222E2B: push    r15
 * 0000000140222E2D: sub     rsp, 60h
 * 0000000140222E31: lea     r12, aNtusersetwindo; "NtUserSetWindowCompositionAttribute"
 * 0000000140222E38: mov     rdi, r9
 * 0000000140222E3B: mov     bl, r8b
 * 0000000140222E3E: mov     r15d, 1Ch
 * 0000000140222E44: test    dl, dl
 * 0000000140222E46: jnz     loc_140222ED0
 * 0000000140222E4C: test    bl, bl
 * 0000000140222E4E: jz      short loc_140222EB8
 * 0000000140222E50: mov     [rsp+68h+var_10], 0
 * 0000000140222E59: lea     rax, [rsp+68h+arg_50]
 * 0000000140222E61: mov     [rsp+68h+var_18], 8
 * 0000000140222E6A: lea     r9, WPP_64b62aa5576434412957a1580be92aa2_Traceguids
 * 0000000140222E71: mov     [rsp+68h+var_20], rax
 * 0000000140222E76: mov     edx, 3
 * 0000000140222E7B: mov     [rsp+68h+var_28], 4
 * 0000000140222E84: lea     rax, [rsp+68h+arg_48]
 * 0000000140222E8C: mov     [rsp+68h+var_30], rax
 * 0000000140222E91: mov     rcx, rdi
 * 0000000140222E94: mov     [rsp+68h+var_38], 24h ; '$'
 * 0000000140222E9D: mov     [rsp+68h+var_40], r12
 * 0000000140222EA2: lea     r8d, [rdx-2]
 * 0000000140222EA6: mov     word ptr [rsp+68h+var_48], r15w
 * 0000000140222EAC: call    cs:__imp_WppAutoLogTrace
 * 0000000140222EB3: nop     dword ptr [rax+rax+00h]
 * 0000000140222EB8: lea     r11, [rsp+68h+var_8]
 * 0000000140222EBD: mov     rbx, [r11+10h]
 * 0000000140222EC1: mov     rdi, [r11+18h]
 * 0000000140222EC5: mov     r12, [r11+20h]
 * 0000000140222EC9: mov     rsp, r11
 * 0000000140222ECC: pop     r15
 * 0000000140222ECE: retn
 * 0000000140222ED0: mov     rax, cs:pfnWppTraceMessage
 * 0000000140222ED7: lea     rdx, [rsp+68h+arg_50]
 * 0000000140222EDF: mov     [rsp+68h+var_18], 0
 * 0000000140222EE8: lea     r8, WPP_64b62aa5576434412957a1580be92aa2_Traceguids
 * 0000000140222EEF: mov     [rsp+68h+var_20], 8
 * 0000000140222EF8: mov     r9d, r15d
 * 0000000140222EFB: mov     [rsp+68h+var_28], rdx
 * 0000000140222F00: lea     rdx, [rsp+68h+arg_48]
 * 0000000140222F08: mov     [rsp+68h+var_30], 4
 * 0000000140222F11: mov     [rsp+68h+var_38], rdx
 * 0000000140222F16: mov     edx, 2Bh ; '+'
 * 0000000140222F1B: mov     [rsp+68h+var_40], 24h ; '$'
 * 0000000140222F24: mov     [rsp+68h+var_48], r12
 * 0000000140222F29: call    _guard_dispatch_icall
 * 0000000140222F2E: jmp     loc_140222E4C
 */
