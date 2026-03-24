/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x14015C2D0
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sd @ 0x14015C2D0
 * Reason: Hex-Rays returned no pseudocode for 0x14015C2D0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015C2D0: mov     [rsp+arg_0], rbx
 * 000000014015C2D5: mov     [rsp+arg_8], rbp
 * 000000014015C2DA: mov     [rsp+arg_10], rsi
 * 000000014015C2DF: push    rdi
 * 000000014015C2E0: push    r13
 * 000000014015C2E2: push    r14
 * 000000014015C2E4: sub     rsp, 50h
 * 000000014015C2E8: mov     rbx, [rsp+68h+arg_40]
 * 000000014015C2F0: lea     r13, aNull; "NULL"
 * 000000014015C2F7: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014015C2FB: mov     bpl, r8b
 * 000000014015C2FE: mov     r14, r9
 * 000000014015C301: mov     r11, rcx
 * 000000014015C304: mov     r8d, 95h
 * 000000014015C30A: lea     esi, [rdi+6]
 * 000000014015C30D: test    dl, dl
 * 000000014015C30F: jnz     loc_14015C39C
 * 000000014015C315: test    bpl, bpl
 * 000000014015C318: jz      short loc_14015C381
 * 000000014015C31A: test    rbx, rbx
 * 000000014015C31D: jz      short loc_14015C32F
 * 000000014015C31F: inc     rdi
 * 000000014015C322: cmp     byte ptr [rbx+rdi], 0
 * 000000014015C326: jnz     short loc_14015C31F
 * 000000014015C328: lea     rsi, [rdi+1]
 * 000000014015C32C: test    rbx, rbx
 * 000000014015C32F: mov     [rsp+68h+var_20], 0
 * 000000014015C338: lea     rax, [rsp+68h+arg_48]
 * 000000014015C340: mov     [rsp+68h+var_28], 4
 * 000000014015C349: lea     r9, WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids
 * 000000014015C350: mov     [rsp+68h+var_30], rax
 * 000000014015C355: mov     edx, 4
 * 000000014015C35A: cmovz   rbx, r13
 * 000000014015C35E: mov     [rsp+68h+var_38], rsi
 * 000000014015C363: mov     [rsp+68h+var_40], rbx
 * 000000014015C368: mov     rcx, r14
 * 000000014015C36B: mov     word ptr [rsp+68h+var_48], r8w
 * 000000014015C371: lea     r8d, [rdx+3]
 * 000000014015C375: call    cs:__imp_WppAutoLogTrace
 * 000000014015C37C: nop     dword ptr [rax+rax+00h]
 * 000000014015C381: lea     r11, [rsp+68h+var_18]
 * 000000014015C386: mov     rbx, [r11+20h]
 * 000000014015C38A: mov     rbp, [r11+28h]
 * 000000014015C38E: mov     rsi, [r11+30h]
 * 000000014015C392: mov     rsp, r11
 * 000000014015C395: pop     r14
 * 000000014015C397: pop     r13
 * 000000014015C399: pop     rdi
 * 000000014015C39A: retn
 * 000000014015C39C: mov     r10, cs:pfnWppTraceMessage
 * 000000014015C3A3: test    rbx, rbx
 * 000000014015C3A6: jz      short loc_14015C3B9
 * 000000014015C3A8: mov     rax, rdi
 * 000000014015C3AB: inc     rax
 * 000000014015C3AE: cmp     byte ptr [rbx+rax], 0
 * 000000014015C3B2: jnz     short loc_14015C3AB
 * 000000014015C3B4: inc     rax
 * 000000014015C3B7: jmp     short loc_14015C3BC
 * 000000014015C3B9: mov     rax, rsi
 * 000000014015C3BC: mov     [rsp+68h+var_28], 0
 * 000000014015C3C5: lea     rdx, [rsp+68h+arg_48]
 * 000000014015C3CD: mov     [rsp+68h+var_30], 4
 * 000000014015C3D6: test    rbx, rbx
 * 000000014015C3D9: mov     [rsp+68h+var_38], rdx
 * 000000014015C3DE: mov     r9d, r8d
 * 000000014015C3E1: mov     [rsp+68h+var_40], rax
 * 000000014015C3E6: lea     r8, WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids
 * 000000014015C3ED: mov     rcx, rbx
 * 000000014015C3F0: mov     edx, 2Bh ; '+'
 * 000000014015C3F5: cmovz   rcx, r13
 * 000000014015C3F9: mov     rax, r10
 * 000000014015C3FC: mov     [rsp+68h+var_48], rcx
 * 000000014015C401: mov     rcx, r11
 * 000000014015C404: call    _guard_dispatch_icall
 * 000000014015C409: mov     r8d, 95h
 * 000000014015C40F: jmp     loc_14015C315
 */
