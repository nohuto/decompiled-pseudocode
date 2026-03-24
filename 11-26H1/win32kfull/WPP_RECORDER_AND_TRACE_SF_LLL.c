/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LLL @ 0x140136C24
 * Callers:
 *     ValidateDelegatePointerList @ 0x140136924 (ValidateDelegatePointerList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LLL @ 0x140136C24
 * Reason: Hex-Rays returned no pseudocode for 0x140136C24
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140136C24: mov     [rsp+arg_0], rbx
 * 0000000140136C29: mov     [rsp+arg_8], rbp
 * 0000000140136C2E: mov     [rsp+arg_10], rsi
 * 0000000140136C33: push    rdi
 * 0000000140136C34: sub     rsp, 60h
 * 0000000140136C38: movzx   edi, [rsp+68h+arg_30]
 * 0000000140136C40: mov     rsi, r9
 * 0000000140136C43: mov     bl, r8b
 * 0000000140136C46: mov     ebp, 4
 * 0000000140136C4B: test    dl, dl
 * 0000000140136C4D: jnz     short loc_140136CCC
 * 0000000140136C4F: test    bl, bl
 * 0000000140136C51: jz      short loc_140136CB5
 * 0000000140136C53: mov     [rsp+68h+var_10], 0
 * 0000000140136C5C: lea     rax, [rsp+68h+arg_50]
 * 0000000140136C64: mov     [rsp+68h+var_18], rbp
 * 0000000140136C69: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 0000000140136C70: mov     [rsp+68h+var_20], rax
 * 0000000140136C75: mov     r8d, 0Ah
 * 0000000140136C7B: mov     [rsp+68h+var_28], rbp
 * 0000000140136C80: lea     rax, [rsp+68h+arg_48]
 * 0000000140136C88: mov     [rsp+68h+var_30], rax
 * 0000000140136C8D: mov     edx, ebp
 * 0000000140136C8F: lea     rax, [rsp+68h+arg_40]
 * 0000000140136C97: mov     [rsp+68h+var_38], rbp
 * 0000000140136C9C: mov     [rsp+68h+var_40], rax
 * 0000000140136CA1: mov     rcx, rsi
 * 0000000140136CA4: mov     word ptr [rsp+68h+var_48], di
 * 0000000140136CA9: call    cs:__imp_WppAutoLogTrace
 * 0000000140136CB0: nop     dword ptr [rax+rax+00h]
 * 0000000140136CB5: lea     r11, [rsp+68h+var_8]
 * 0000000140136CBA: mov     rbx, [r11+10h]
 * 0000000140136CBE: mov     rbp, [r11+18h]
 * 0000000140136CC2: mov     rsi, [r11+20h]
 * 0000000140136CC6: mov     rsp, r11
 * 0000000140136CC9: pop     rdi
 * 0000000140136CCA: retn
 * 0000000140136CCC: mov     rax, cs:pfnWppTraceMessage
 * 0000000140136CD3: lea     rdx, [rsp+68h+arg_50]
 * 0000000140136CDB: mov     [rsp+68h+var_18], 0
 * 0000000140136CE4: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 0000000140136CEB: mov     [rsp+68h+var_20], rbp
 * 0000000140136CF0: mov     r9d, edi
 * 0000000140136CF3: mov     [rsp+68h+var_28], rdx
 * 0000000140136CF8: lea     rdx, [rsp+68h+arg_48]
 * 0000000140136D00: mov     [rsp+68h+var_30], rbp
 * 0000000140136D05: mov     [rsp+68h+var_38], rdx
 * 0000000140136D0A: lea     rdx, [rsp+68h+arg_40]
 * 0000000140136D12: mov     [rsp+68h+var_40], rbp
 * 0000000140136D17: mov     [rsp+68h+var_48], rdx
 * 0000000140136D1C: mov     edx, 2Bh ; '+'
 * 0000000140136D21: call    _guard_dispatch_icall
 * 0000000140136D26: jmp     loc_140136C4F
 */
