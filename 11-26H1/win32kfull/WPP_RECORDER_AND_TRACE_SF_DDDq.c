/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDDq @ 0x1401C8098
 * Callers:
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401C7EE4 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DDDq @ 0x1401C8098
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8098
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8098: mov     [rsp+arg_0], rbx
 * 00000001401C809D: mov     [rsp+arg_8], rsi
 * 00000001401C80A2: mov     [rsp+arg_10], rdi
 * 00000001401C80A7: push    r14
 * 00000001401C80A9: sub     rsp, 70h
 * 00000001401C80AD: mov     esi, 4
 * 00000001401C80B2: mov     rdi, r9
 * 00000001401C80B5: mov     bl, r8b
 * 00000001401C80B8: lea     r14d, [rsi+0Bh]
 * 00000001401C80BC: test    dl, dl
 * 00000001401C80BE: jnz     loc_1401C8159
 * 00000001401C80C4: test    bl, bl
 * 00000001401C80C6: jz      short loc_1401C8141
 * 00000001401C80C8: mov     [rsp+78h+var_10], 0
 * 00000001401C80D1: lea     rax, [rsp+78h+arg_58]
 * 00000001401C80D9: mov     [rsp+78h+var_18], 8
 * 00000001401C80E2: lea     r9, WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids
 * 00000001401C80E9: mov     [rsp+78h+var_20], rax
 * 00000001401C80EE: mov     r8d, 0Bh
 * 00000001401C80F4: mov     [rsp+78h+var_28], rsi
 * 00000001401C80F9: lea     rax, [rsp+78h+arg_50]
 * 00000001401C8101: mov     [rsp+78h+var_30], rax
 * 00000001401C8106: mov     edx, esi
 * 00000001401C8108: mov     [rsp+78h+var_38], rsi
 * 00000001401C810D: lea     rax, [rsp+78h+arg_48]
 * 00000001401C8115: mov     [rsp+78h+var_40], rax
 * 00000001401C811A: mov     rcx, rdi
 * 00000001401C811D: lea     rax, [rsp+78h+arg_40]
 * 00000001401C8125: mov     [rsp+78h+var_48], rsi
 * 00000001401C812A: mov     [rsp+78h+var_50], rax
 * 00000001401C812F: mov     word ptr [rsp+78h+var_58], r14w
 * 00000001401C8135: call    cs:__imp_WppAutoLogTrace
 * 00000001401C813C: nop     dword ptr [rax+rax+00h]
 * 00000001401C8141: lea     r11, [rsp+78h+var_8]
 * 00000001401C8146: mov     rbx, [r11+10h]
 * 00000001401C814A: mov     rsi, [r11+18h]
 * 00000001401C814E: mov     rdi, [r11+20h]
 * 00000001401C8152: mov     rsp, r11
 * 00000001401C8155: pop     r14
 * 00000001401C8157: retn
 * 00000001401C8159: mov     rax, cs:pfnWppTraceMessage
 * 00000001401C8160: lea     rdx, [rsp+78h+arg_58]
 * 00000001401C8168: mov     [rsp+78h+var_18], 0
 * 00000001401C8171: lea     r8, WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids
 * 00000001401C8178: mov     [rsp+78h+var_20], 8
 * 00000001401C8181: mov     r9d, r14d
 * 00000001401C8184: mov     [rsp+78h+var_28], rdx
 * 00000001401C8189: lea     rdx, [rsp+78h+arg_50]
 * 00000001401C8191: mov     [rsp+78h+var_30], rsi
 * 00000001401C8196: mov     [rsp+78h+var_38], rdx
 * 00000001401C819B: lea     rdx, [rsp+78h+arg_48]
 * 00000001401C81A3: mov     [rsp+78h+var_40], rsi
 * 00000001401C81A8: mov     [rsp+78h+var_48], rdx
 * 00000001401C81AD: lea     rdx, [rsp+78h+arg_40]
 * 00000001401C81B5: mov     [rsp+78h+var_50], rsi
 * 00000001401C81BA: mov     [rsp+78h+var_58], rdx
 * 00000001401C81BF: mov     edx, 2Bh ; '+'
 * 00000001401C81C4: call    _guard_dispatch_icall
 * 00000001401C81C9: jmp     loc_1401C80C4
 */
