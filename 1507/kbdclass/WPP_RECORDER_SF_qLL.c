/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C000557C
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C00049F0 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C000557C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000557C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000557C: mov     r11, rsp
 * 00000001C000557F: mov     [r11+8], rbx
 * 00000001C0005583: mov     [r11+10h], rsi
 * 00000001C0005587: push    rdi
 * 00000001C0005588: sub     rsp, 60h
 * 00000001C000558C: mov     rdi, rcx
 * 00000001C000558F: mov     esi, 4
 * 00000001C0005594: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000559B: movzx   ebx, r9w
 * 00000001C000559F: mov     eax, [rcx+2Ch]
 * 00000001C00055A2: test    sil, al
 * 00000001C00055A5: jz      short loc_1C00055F9
 * 00000001C00055A7: cmp     byte ptr [rcx+29h], 5
 * 00000001C00055AB: jb      short loc_1C00055F9
 * 00000001C00055AD: and     qword ptr [r11-18h], 0
 * 00000001C00055B2: lea     rdx, [r11+40h]
 * 00000001C00055B6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00055BD: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C00055C4: mov     rcx, [rcx+18h]
 * 00000001C00055C8: mov     [r11-20h], rsi
 * 00000001C00055CC: mov     [r11-28h], rdx
 * 00000001C00055D0: lea     rdx, [r11+38h]
 * 00000001C00055D4: mov     [r11-30h], rsi
 * 00000001C00055D8: mov     [r11-38h], rdx
 * 00000001C00055DC: lea     rdx, [r11+30h]
 * 00000001C00055E0: mov     qword ptr [r11-40h], 8
 * 00000001C00055E8: mov     [r11-48h], rdx
 * 00000001C00055EC: lea     edx, [rsi+27h]
 * 00000001C00055EF: movzx   r9d, bx
 * 00000001C00055F3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00055F9: and     [rsp+68h+var_10], 0
 * 00000001C00055FF: lea     rax, [rsp+68h+arg_38]
 * 00000001C0005607: mov     [rsp+68h+var_18], rsi
 * 00000001C000560C: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0005613: mov     [rsp+68h+var_20], rax
 * 00000001C0005618: mov     edx, 5
 * 00000001C000561D: mov     [rsp+68h+var_28], rsi
 * 00000001C0005622: lea     rax, [rsp+68h+arg_30]
 * 00000001C000562A: mov     [rsp+68h+var_30], rax
 * 00000001C000562F: mov     rcx, rdi
 * 00000001C0005632: lea     rax, [rsp+68h+arg_28]
 * 00000001C000563A: mov     [rsp+68h+var_38], 8
 * 00000001C0005643: mov     [rsp+68h+var_40], rax
 * 00000001C0005648: lea     r8d, [rdx-2]
 * 00000001C000564C: mov     [rsp+68h+var_48], bx
 * 00000001C0005651: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005657: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000565C: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0005661: add     rsp, 60h
 * 00000001C0005665: pop     rdi
 * 00000001C0005666: retn
 */
