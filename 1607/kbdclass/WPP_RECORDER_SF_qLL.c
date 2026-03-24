/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C000556C
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C0002920 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C000556C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000556C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000556C: mov     r11, rsp
 * 00000001C000556F: mov     [r11+8], rbx
 * 00000001C0005573: mov     [r11+10h], rsi
 * 00000001C0005577: push    rdi
 * 00000001C0005578: sub     rsp, 60h
 * 00000001C000557C: mov     rdi, rcx
 * 00000001C000557F: mov     esi, 4
 * 00000001C0005584: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000558B: movzx   ebx, r9w
 * 00000001C000558F: mov     eax, [rcx+2Ch]
 * 00000001C0005592: test    sil, al
 * 00000001C0005595: jz      short loc_1C00055E9
 * 00000001C0005597: cmp     byte ptr [rcx+29h], 5
 * 00000001C000559B: jb      short loc_1C00055E9
 * 00000001C000559D: and     qword ptr [r11-18h], 0
 * 00000001C00055A2: lea     rdx, [r11+40h]
 * 00000001C00055A6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00055AD: lea     r8, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C00055B4: mov     rcx, [rcx+18h]
 * 00000001C00055B8: mov     [r11-20h], rsi
 * 00000001C00055BC: mov     [r11-28h], rdx
 * 00000001C00055C0: lea     rdx, [r11+38h]
 * 00000001C00055C4: mov     [r11-30h], rsi
 * 00000001C00055C8: mov     [r11-38h], rdx
 * 00000001C00055CC: lea     rdx, [r11+30h]
 * 00000001C00055D0: mov     qword ptr [r11-40h], 8
 * 00000001C00055D8: mov     [r11-48h], rdx
 * 00000001C00055DC: lea     edx, [rsi+27h]
 * 00000001C00055DF: movzx   r9d, bx
 * 00000001C00055E3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00055E9: and     [rsp+68h+var_10], 0
 * 00000001C00055EF: lea     rax, [rsp+68h+arg_38]
 * 00000001C00055F7: mov     [rsp+68h+var_18], rsi
 * 00000001C00055FC: lea     r9, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C0005603: mov     [rsp+68h+var_20], rax
 * 00000001C0005608: mov     edx, 5
 * 00000001C000560D: mov     [rsp+68h+var_28], rsi
 * 00000001C0005612: lea     rax, [rsp+68h+arg_30]
 * 00000001C000561A: mov     [rsp+68h+var_30], rax
 * 00000001C000561F: mov     rcx, rdi
 * 00000001C0005622: lea     rax, [rsp+68h+arg_28]
 * 00000001C000562A: mov     [rsp+68h+var_38], 8
 * 00000001C0005633: mov     [rsp+68h+var_40], rax
 * 00000001C0005638: lea     r8d, [rdx-2]
 * 00000001C000563C: mov     [rsp+68h+var_48], bx
 * 00000001C0005641: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005647: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000564C: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0005651: add     rsp, 60h
 * 00000001C0005655: pop     rdi
 * 00000001C0005656: retn
 */
