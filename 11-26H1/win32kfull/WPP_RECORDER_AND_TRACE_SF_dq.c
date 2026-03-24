/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dq @ 0x140192A44
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x14019328C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     UserJobCallout @ 0x1402D00F0 (UserJobCallout.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1402DCC64 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_Dq @ 0x140192A44
 * Reason: Hex-Rays returned no pseudocode for 0x140192A44
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140192A44: mov     [rsp+arg_0], rbx
 * 0000000140192A49: mov     [rsp+arg_8], rsi
 * 0000000140192A4E: push    rdi
 * 0000000140192A4F: sub     rsp, 50h
 * 0000000140192A53: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140192A5B: mov     rsi, r9
 * 0000000140192A5E: mov     dil, r8b
 * 0000000140192A61: test    dl, dl
 * 0000000140192A63: jnz     short loc_140192AD9
 * 0000000140192A65: test    dil, dil
 * 0000000140192A68: jz      short loc_140192AC8
 * 0000000140192A6A: mov     r9, [rsp+58h+arg_38]
 * 0000000140192A72: lea     rax, [rsp+58h+arg_48]
 * 0000000140192A7A: mov     r8d, [rsp+58h+arg_28]
 * 0000000140192A82: mov     edx, 4
 * 0000000140192A87: mov     [rsp+58h+var_10], 0
 * 0000000140192A90: mov     rcx, rsi
 * 0000000140192A93: mov     [rsp+58h+var_18], 8
 * 0000000140192A9C: mov     [rsp+58h+var_20], rax
 * 0000000140192AA1: lea     rax, [rsp+58h+arg_40]
 * 0000000140192AA9: mov     [rsp+58h+var_28], 4
 * 0000000140192AB2: mov     [rsp+58h+var_30], rax
 * 0000000140192AB7: mov     word ptr [rsp+58h+var_38], bx
 * 0000000140192ABC: call    cs:__imp_WppAutoLogTrace
 * 0000000140192AC3: nop     dword ptr [rax+rax+00h]
 * 0000000140192AC8: mov     rbx, [rsp+58h+arg_0]
 * 0000000140192ACD: mov     rsi, [rsp+58h+arg_8]
 * 0000000140192AD2: add     rsp, 50h
 * 0000000140192AD6: pop     rdi
 * 0000000140192AD7: retn
 * 0000000140192AD9: mov     rax, cs:pfnWppTraceMessage
 * 0000000140192AE0: lea     rdx, [rsp+58h+arg_48]
 * 0000000140192AE8: mov     r8, [rsp+58h+arg_38]
 * 0000000140192AF0: mov     r9d, ebx
 * 0000000140192AF3: mov     [rsp+58h+var_18], 0
 * 0000000140192AFC: mov     [rsp+58h+var_20], 8
 * 0000000140192B05: mov     [rsp+58h+var_28], rdx
 * 0000000140192B0A: lea     rdx, [rsp+58h+arg_40]
 * 0000000140192B12: mov     [rsp+58h+var_30], 4
 * 0000000140192B1B: mov     [rsp+58h+var_38], rdx
 * 0000000140192B20: mov     edx, 2Bh ; '+'
 * 0000000140192B25: call    _guard_dispatch_icall
 * 0000000140192B2A: jmp     loc_140192A65
 */
