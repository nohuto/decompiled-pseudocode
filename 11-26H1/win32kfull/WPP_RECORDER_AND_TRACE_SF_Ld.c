/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Ld @ 0x140212FF0
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x140212314 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_Ld @ 0x140212FF0
 * Reason: Hex-Rays returned no pseudocode for 0x140212FF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140212FF0: mov     r11, rsp
 * 0000000140212FF3: mov     [r11+8], rbx
 * 0000000140212FF7: mov     [r11+10h], rbp
 * 0000000140212FFB: mov     [r11+18h], rsi
 * 0000000140212FFF: push    rdi
 * 0000000140213000: sub     rsp, 50h
 * 0000000140213004: mov     ebp, 0Fh
 * 0000000140213009: mov     rdi, r9
 * 000000014021300C: mov     bl, r8b
 * 000000014021300F: lea     esi, [rbp-0Bh]
 * 0000000140213012: test    dl, dl
 * 0000000140213014: jz      short loc_14021304F
 * 0000000140213016: mov     rax, cs:pfnWppTraceMessage
 * 000000014021301D: lea     rdx, [r11+50h]
 * 0000000140213021: mov     qword ptr [r11-18h], 0
 * 0000000140213029: lea     r8, WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids
 * 0000000140213030: mov     [r11-20h], rsi
 * 0000000140213034: mov     r9d, ebp
 * 0000000140213037: mov     [r11-28h], rdx
 * 000000014021303B: lea     rdx, [r11+48h]
 * 000000014021303F: mov     [r11-30h], rsi
 * 0000000140213043: mov     [r11-38h], rdx
 * 0000000140213047: lea     edx, [rbp+1Ch]
 * 000000014021304A: call    _guard_dispatch_icall
 * 000000014021304F: test    bl, bl
 * 0000000140213051: jz      short loc_1402130A3
 * 0000000140213053: mov     [rsp+58h+var_10], 0
 * 000000014021305C: lea     rax, [rsp+58h+arg_48]
 * 0000000140213064: mov     [rsp+58h+var_18], rsi
 * 0000000140213069: lea     r9, WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids
 * 0000000140213070: mov     [rsp+58h+var_20], rax
 * 0000000140213075: mov     r8d, 7
 * 000000014021307B: lea     rax, [rsp+58h+arg_40]
 * 0000000140213083: mov     [rsp+58h+var_28], rsi
 * 0000000140213088: mov     [rsp+58h+var_30], rax
 * 000000014021308D: mov     edx, esi
 * 000000014021308F: mov     rcx, rdi
 * 0000000140213092: mov     [rsp+58h+var_38], bp
 * 0000000140213097: call    cs:__imp_WppAutoLogTrace
 * 000000014021309E: nop     dword ptr [rax+rax+00h]
 * 00000001402130A3: mov     rbx, [rsp+58h+arg_0]
 * 00000001402130A8: mov     rbp, [rsp+58h+arg_8]
 * 00000001402130AD: mov     rsi, [rsp+58h+arg_10]
 * 00000001402130B2: add     rsp, 50h
 * 00000001402130B6: pop     rdi
 * 00000001402130B7: retn
 */
