/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402F669C
 * Callers:
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1401F01A0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDrawScrollBar @ 0x1401F0344 (xxxDrawScrollBar.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x1401F09B0 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402F669C
 * Reason: Hex-Rays returned no pseudocode for 0x1402F669C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402F669C: mov     r11, rsp
 * 00000001402F669F: mov     [r11+8], rbx
 * 00000001402F66A3: mov     [r11+10h], rsi
 * 00000001402F66A7: push    rdi
 * 00000001402F66A8: sub     rsp, 50h
 * 00000001402F66AC: movzx   ebx, [rsp+58h+arg_30]
 * 00000001402F66B4: mov     rsi, r9
 * 00000001402F66B7: mov     dil, r8b
 * 00000001402F66BA: test    dl, dl
 * 00000001402F66BC: jz      short loc_1402F6701
 * 00000001402F66BE: mov     rax, cs:pfnWppTraceMessage
 * 00000001402F66C5: lea     rdx, [r11+50h]
 * 00000001402F66C9: mov     qword ptr [r11-18h], 0
 * 00000001402F66D1: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402F66D8: mov     qword ptr [r11-20h], 4
 * 00000001402F66E0: mov     r9d, ebx
 * 00000001402F66E3: mov     [r11-28h], rdx
 * 00000001402F66E7: lea     rdx, [r11+48h]
 * 00000001402F66EB: mov     qword ptr [r11-30h], 8
 * 00000001402F66F3: mov     [r11-38h], rdx
 * 00000001402F66F7: mov     edx, 2Bh ; '+'
 * 00000001402F66FC: call    _guard_dispatch_icall
 * 00000001402F6701: test    dil, dil
 * 00000001402F6704: jz      short loc_1402F6764
 * 00000001402F6706: movzx   edx, [rsp+58h+arg_20]
 * 00000001402F670E: lea     rax, [rsp+58h+arg_48]
 * 00000001402F6716: mov     [rsp+58h+var_10], 0
 * 00000001402F671F: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402F6726: mov     [rsp+58h+var_18], 4
 * 00000001402F672F: mov     r8d, 9
 * 00000001402F6735: mov     [rsp+58h+var_20], rax
 * 00000001402F673A: mov     rcx, rsi
 * 00000001402F673D: lea     rax, [rsp+58h+arg_40]
 * 00000001402F6745: mov     [rsp+58h+var_28], 8
 * 00000001402F674E: mov     [rsp+58h+var_30], rax
 * 00000001402F6753: mov     [rsp+58h+var_38], bx
 * 00000001402F6758: call    cs:__imp_WppAutoLogTrace
 * 00000001402F675F: nop     dword ptr [rax+rax+00h]
 * 00000001402F6764: mov     rbx, [rsp+58h+arg_0]
 * 00000001402F6769: mov     rsi, [rsp+58h+arg_8]
 * 00000001402F676E: add     rsp, 50h
 * 00000001402F6772: pop     rdi
 * 00000001402F6773: retn
 */
