/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LHL @ 0x1401359E0
 * Callers:
 *     _DelegateCapturePointers @ 0x140135024 (_DelegateCapturePointers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LHL @ 0x1401359E0
 * Reason: Hex-Rays returned no pseudocode for 0x1401359E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401359E0: mov     [rsp+arg_0], rbx
 * 00000001401359E5: mov     [rsp+arg_8], rbp
 * 00000001401359EA: mov     [rsp+arg_10], rsi
 * 00000001401359EF: push    rdi
 * 00000001401359F0: sub     rsp, 60h
 * 00000001401359F4: movzx   edi, [rsp+68h+arg_30]
 * 00000001401359FC: mov     rsi, r9
 * 00000001401359FF: mov     bl, r8b
 * 0000000140135A02: mov     ebp, 4
 * 0000000140135A07: test    dl, dl
 * 0000000140135A09: jnz     loc_140135A90
 * 0000000140135A0F: test    bl, bl
 * 0000000140135A11: jz      short loc_140135A79
 * 0000000140135A13: mov     [rsp+68h+var_10], 0
 * 0000000140135A1C: lea     rax, [rsp+68h+arg_50]
 * 0000000140135A24: mov     [rsp+68h+var_18], rbp
 * 0000000140135A29: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 0000000140135A30: mov     [rsp+68h+var_20], rax
 * 0000000140135A35: mov     r8d, 0Ah
 * 0000000140135A3B: mov     [rsp+68h+var_28], 2
 * 0000000140135A44: lea     rax, [rsp+68h+arg_48]
 * 0000000140135A4C: mov     [rsp+68h+var_30], rax
 * 0000000140135A51: mov     edx, ebp
 * 0000000140135A53: lea     rax, [rsp+68h+arg_40]
 * 0000000140135A5B: mov     [rsp+68h+var_38], rbp
 * 0000000140135A60: mov     [rsp+68h+var_40], rax
 * 0000000140135A65: mov     rcx, rsi
 * 0000000140135A68: mov     word ptr [rsp+68h+var_48], di
 * 0000000140135A6D: call    cs:__imp_WppAutoLogTrace
 * 0000000140135A74: nop     dword ptr [rax+rax+00h]
 * 0000000140135A79: lea     r11, [rsp+68h+var_8]
 * 0000000140135A7E: mov     rbx, [r11+10h]
 * 0000000140135A82: mov     rbp, [r11+18h]
 * 0000000140135A86: mov     rsi, [r11+20h]
 * 0000000140135A8A: mov     rsp, r11
 * 0000000140135A8D: pop     rdi
 * 0000000140135A8E: retn
 * 0000000140135A90: mov     rax, cs:pfnWppTraceMessage
 * 0000000140135A97: lea     rdx, [rsp+68h+arg_50]
 * 0000000140135A9F: mov     [rsp+68h+var_18], 0
 * 0000000140135AA8: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 0000000140135AAF: mov     [rsp+68h+var_20], rbp
 * 0000000140135AB4: mov     r9d, edi
 * 0000000140135AB7: mov     [rsp+68h+var_28], rdx
 * 0000000140135ABC: lea     rdx, [rsp+68h+arg_48]
 * 0000000140135AC4: mov     [rsp+68h+var_30], 2
 * 0000000140135ACD: mov     [rsp+68h+var_38], rdx
 * 0000000140135AD2: lea     rdx, [rsp+68h+arg_40]
 * 0000000140135ADA: mov     [rsp+68h+var_40], rbp
 * 0000000140135ADF: mov     [rsp+68h+var_48], rdx
 * 0000000140135AE4: mov     edx, 2Bh ; '+'
 * 0000000140135AE9: call    _guard_dispatch_icall
 * 0000000140135AEE: jmp     loc_140135A0F
 */
