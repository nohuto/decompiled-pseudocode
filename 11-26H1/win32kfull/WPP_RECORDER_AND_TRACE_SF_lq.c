/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_lq @ 0x1402C2434
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1402B4840 (NtUserGetScrollBarInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_lq @ 0x1402C2434
 * Reason: Hex-Rays returned no pseudocode for 0x1402C2434
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C2434: mov     r11, rsp
 * 00000001402C2437: mov     [r11+8], rbx
 * 00000001402C243B: mov     [r11+10h], rdi
 * 00000001402C243F: push    r14
 * 00000001402C2441: sub     rsp, 50h
 * 00000001402C2445: mov     rdi, r9
 * 00000001402C2448: mov     bl, r8b
 * 00000001402C244B: mov     r14d, 11h
 * 00000001402C2451: test    dl, dl
 * 00000001402C2453: jz      short loc_1402C2497
 * 00000001402C2455: mov     rax, cs:pfnWppTraceMessage
 * 00000001402C245C: lea     rdx, [r11+50h]
 * 00000001402C2460: mov     qword ptr [r11-18h], 0
 * 00000001402C2468: lea     r8, WPP_64b62aa5576434412957a1580be92aa2_Traceguids
 * 00000001402C246F: mov     qword ptr [r11-20h], 8
 * 00000001402C2477: mov     r9d, r14d
 * 00000001402C247A: mov     [r11-28h], rdx
 * 00000001402C247E: lea     rdx, [r11+48h]
 * 00000001402C2482: mov     qword ptr [r11-30h], 4
 * 00000001402C248A: mov     [r11-38h], rdx
 * 00000001402C248E: lea     edx, [r14+1Ah]
 * 00000001402C2492: call    _guard_dispatch_icall
 * 00000001402C2497: test    bl, bl
 * 00000001402C2499: jz      short loc_1402C24F5
 * 00000001402C249B: mov     [rsp+58h+var_10], 0
 * 00000001402C24A4: lea     rax, [rsp+58h+arg_48]
 * 00000001402C24AC: mov     [rsp+58h+var_18], 8
 * 00000001402C24B5: lea     r9, WPP_64b62aa5576434412957a1580be92aa2_Traceguids
 * 00000001402C24BC: mov     [rsp+58h+var_20], rax
 * 00000001402C24C1: mov     edx, 2
 * 00000001402C24C6: lea     rax, [rsp+58h+arg_40]
 * 00000001402C24CE: mov     [rsp+58h+var_28], 4
 * 00000001402C24D7: mov     [rsp+58h+var_30], rax
 * 00000001402C24DC: mov     rcx, rdi
 * 00000001402C24DF: mov     [rsp+58h+var_38], r14w
 * 00000001402C24E5: lea     r8d, [rdx+7]
 * 00000001402C24E9: call    cs:__imp_WppAutoLogTrace
 * 00000001402C24F0: nop     dword ptr [rax+rax+00h]
 * 00000001402C24F5: mov     rbx, [rsp+58h+arg_0]
 * 00000001402C24FA: mov     rdi, [rsp+58h+arg_8]
 * 00000001402C24FF: add     rsp, 50h
 * 00000001402C2503: pop     r14
 * 00000001402C2505: retn
 */
