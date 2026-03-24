/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_HL @ 0x1402A9708
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140135360 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_HL @ 0x1402A9708
 * Reason: Hex-Rays returned no pseudocode for 0x1402A9708
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A9708: mov     r11, rsp
 * 00000001402A970B: mov     [r11+8], rbx
 * 00000001402A970F: mov     [r11+10h], rdi
 * 00000001402A9713: push    r14
 * 00000001402A9715: sub     rsp, 50h
 * 00000001402A9719: mov     rdi, r9
 * 00000001402A971C: mov     bl, r8b
 * 00000001402A971F: mov     r14d, 19h
 * 00000001402A9725: test    dl, dl
 * 00000001402A9727: jz      short loc_1402A976B
 * 00000001402A9729: mov     rax, cs:pfnWppTraceMessage
 * 00000001402A9730: lea     rdx, [r11+50h]
 * 00000001402A9734: mov     qword ptr [r11-18h], 0
 * 00000001402A973C: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 00000001402A9743: mov     qword ptr [r11-20h], 4
 * 00000001402A974B: mov     r9d, r14d
 * 00000001402A974E: mov     [r11-28h], rdx
 * 00000001402A9752: lea     rdx, [r11+48h]
 * 00000001402A9756: mov     qword ptr [r11-30h], 2
 * 00000001402A975E: mov     [r11-38h], rdx
 * 00000001402A9762: lea     edx, [r14+12h]
 * 00000001402A9766: call    _guard_dispatch_icall
 * 00000001402A976B: test    bl, bl
 * 00000001402A976D: jz      short loc_1402A97C9
 * 00000001402A976F: mov     [rsp+58h+var_10], 0
 * 00000001402A9778: lea     rax, [rsp+58h+arg_48]
 * 00000001402A9780: mov     [rsp+58h+var_18], 4
 * 00000001402A9789: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 00000001402A9790: mov     [rsp+58h+var_20], rax
 * 00000001402A9795: mov     edx, 4
 * 00000001402A979A: lea     rax, [rsp+58h+arg_40]
 * 00000001402A97A2: mov     [rsp+58h+var_28], 2
 * 00000001402A97AB: mov     [rsp+58h+var_30], rax
 * 00000001402A97B0: mov     rcx, rdi
 * 00000001402A97B3: mov     [rsp+58h+var_38], r14w
 * 00000001402A97B9: lea     r8d, [rdx+6]
 * 00000001402A97BD: call    cs:__imp_WppAutoLogTrace
 * 00000001402A97C4: nop     dword ptr [rax+rax+00h]
 * 00000001402A97C9: mov     rbx, [rsp+58h+arg_0]
 * 00000001402A97CE: mov     rdi, [rsp+58h+arg_8]
 * 00000001402A97D3: add     rsp, 50h
 * 00000001402A97D7: pop     r14
 * 00000001402A97D9: retn
 */
