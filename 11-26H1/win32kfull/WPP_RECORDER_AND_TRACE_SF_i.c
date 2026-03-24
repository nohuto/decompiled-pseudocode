/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_i @ 0x14009A844
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x140099894 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_i @ 0x14009A844
 * Reason: Hex-Rays returned no pseudocode for 0x14009A844
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014009A844: mov     [rsp+arg_0], rbx
 * 000000014009A849: mov     [rsp+arg_8], rbp
 * 000000014009A84E: push    rdi
 * 000000014009A84F: sub     rsp, 40h
 * 000000014009A853: mov     rdi, r9
 * 000000014009A856: mov     bl, r8b
 * 000000014009A859: mov     ebp, 0Ch
 * 000000014009A85E: test    dl, dl
 * 000000014009A860: jnz     short loc_14009A8BA
 * 000000014009A862: test    bl, bl
 * 000000014009A864: jz      short loc_14009A8A9
 * 000000014009A866: mov     [rsp+48h+var_10], 0
 * 000000014009A86F: lea     rax, [rsp+48h+arg_40]
 * 000000014009A877: mov     edx, 4
 * 000000014009A87C: mov     [rsp+48h+var_18], 8
 * 000000014009A885: mov     [rsp+48h+var_20], rax
 * 000000014009A88A: lea     r9, WPP_c988c3f99a353e6ffe2381605806c7a5_Traceguids
 * 000000014009A891: mov     rcx, rdi
 * 000000014009A894: mov     word ptr [rsp+48h+var_28], bp
 * 000000014009A899: lea     r8d, [rdx+10h]
 * 000000014009A89D: call    cs:__imp_WppAutoLogTrace
 * 000000014009A8A4: nop     dword ptr [rax+rax+00h]
 * 000000014009A8A9: mov     rbx, [rsp+48h+arg_0]
 * 000000014009A8AE: mov     rbp, [rsp+48h+arg_8]
 * 000000014009A8B3: add     rsp, 40h
 * 000000014009A8B7: pop     rdi
 * 000000014009A8B8: retn
 * 000000014009A8BA: mov     rax, cs:pfnWppTraceMessage
 * 000000014009A8C1: lea     rdx, [rsp+48h+arg_40]
 * 000000014009A8C9: mov     [rsp+48h+var_18], 0
 * 000000014009A8D2: lea     r8, WPP_c988c3f99a353e6ffe2381605806c7a5_Traceguids
 * 000000014009A8D9: mov     [rsp+48h+var_20], 8
 * 000000014009A8E2: mov     r9d, ebp
 * 000000014009A8E5: mov     [rsp+48h+var_28], rdx
 * 000000014009A8EA: mov     edx, 2Bh ; '+'
 * 000000014009A8EF: call    _guard_dispatch_icall
 * 000000014009A8F4: jmp     loc_14009A862
 */
