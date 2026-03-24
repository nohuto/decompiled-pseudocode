/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_L @ 0x1402A97E4
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140135360 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_L @ 0x1402A97E4
 * Reason: Hex-Rays returned no pseudocode for 0x1402A97E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A97E4: mov     r11, rsp
 * 00000001402A97E7: mov     [r11+8], rbx
 * 00000001402A97EB: mov     [r11+10h], rbp
 * 00000001402A97EF: push    rdi
 * 00000001402A97F0: sub     rsp, 40h
 * 00000001402A97F4: mov     rdi, r9
 * 00000001402A97F7: mov     bl, r8b
 * 00000001402A97FA: mov     ebp, 1Bh
 * 00000001402A97FF: test    dl, dl
 * 00000001402A9801: jz      short loc_1402A9834
 * 00000001402A9803: mov     rax, cs:pfnWppTraceMessage
 * 00000001402A980A: lea     rdx, [r11+48h]
 * 00000001402A980E: mov     qword ptr [r11-18h], 0
 * 00000001402A9816: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 00000001402A981D: mov     qword ptr [r11-20h], 4
 * 00000001402A9825: mov     r9d, ebp
 * 00000001402A9828: mov     [r11-28h], rdx
 * 00000001402A982C: lea     edx, [rbp+10h]
 * 00000001402A982F: call    _guard_dispatch_icall
 * 00000001402A9834: test    bl, bl
 * 00000001402A9836: jz      short loc_1402A987B
 * 00000001402A9838: mov     [rsp+48h+var_10], 0
 * 00000001402A9841: lea     rax, [rsp+48h+arg_40]
 * 00000001402A9849: mov     edx, 4
 * 00000001402A984E: mov     [rsp+48h+var_18], 4
 * 00000001402A9857: mov     [rsp+48h+var_20], rax
 * 00000001402A985C: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 00000001402A9863: mov     rcx, rdi
 * 00000001402A9866: mov     [rsp+48h+var_28], bp
 * 00000001402A986B: lea     r8d, [rdx+6]
 * 00000001402A986F: call    cs:__imp_WppAutoLogTrace
 * 00000001402A9876: nop     dword ptr [rax+rax+00h]
 * 00000001402A987B: mov     rbx, [rsp+48h+arg_0]
 * 00000001402A9880: mov     rbp, [rsp+48h+arg_8]
 * 00000001402A9885: add     rsp, 40h
 * 00000001402A9889: pop     rdi
 * 00000001402A988A: retn
 */
