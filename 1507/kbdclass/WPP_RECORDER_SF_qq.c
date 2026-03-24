/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0001870
 * Callers:
 *     KeyboardClassPowerComplete @ 0x1C0001000 (KeyboardClassPowerComplete.c)
 *     KeyboardClassSetLedsComplete @ 0x1C00012D0 (KeyboardClassSetLedsComplete.c)
 *     KeyboardClassPower @ 0x1C00014F0 (KeyboardClassPower.c)
 *     KeyboardClassCreate @ 0x1C00021D0 (KeyboardClassCreate.c)
 *     KeyboardClassRead @ 0x1C0002640 (KeyboardClassRead.c)
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C0004190 (KeyboardClassCancelPendingIrpLeds.c)
 *     KeyboardClassReadCopyData @ 0x1C0004680 (KeyboardClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0001870
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001870
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001870: mov     [rsp+arg_0], rbx
 * 00000001C0001875: mov     [rsp+arg_8], rbp
 * 00000001C000187A: mov     [rsp+arg_10], rsi
 * 00000001C000187F: mov     [rsp+arg_18], rdi
 * 00000001C0001884: push    r14
 * 00000001C0001886: sub     rsp, 50h
 * 00000001C000188A: mov     ebx, r8d
 * 00000001C000188D: mov     r14, rcx
 * 00000001C0001890: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001897: movzx   ebp, r9w
 * 00000001C000189B: mov     edi, r8d
 * 00000001C000189E: movzx   esi, dl
 * 00000001C00018A1: shr     rdi, 10h
 * 00000001C00018A5: lea     r11d, [rbx-1]
 * 00000001C00018A9: mov     r8d, r11d
 * 00000001C00018AC: and     r11d, 1Fh
 * 00000001C00018B0: shr     r8, 5
 * 00000001C00018B4: and     r8d, 7FFh
 * 00000001C00018BB: lea     rax, [rdi+rdi*4]
 * 00000001C00018BF: lea     r10, [r8+rax*4]
 * 00000001C00018C3: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C00018C8: bt      eax, r11d
 * 00000001C00018CC: jb      loc_1C000331E
 * 00000001C00018D2: mov     [rsp+58h+var_10], 0
 * 00000001C00018DB: lea     rax, [rsp+58h+arg_30]
 * 00000001C00018E3: mov     [rsp+58h+var_18], 8
 * 00000001C00018EC: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C00018F3: mov     [rsp+58h+var_20], rax
 * 00000001C00018F8: mov     r8d, ebx
 * 00000001C00018FB: lea     rax, [rsp+58h+arg_28]
 * 00000001C0001903: mov     [rsp+58h+var_28], 8
 * 00000001C000190C: mov     [rsp+58h+var_30], rax
 * 00000001C0001911: mov     rcx, r14
 * 00000001C0001914: movzx   edx, sil
 * 00000001C0001918: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000191D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001923: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0001928: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000192D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0001932: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0001937: add     rsp, 50h
 * 00000001C000193B: pop     r14
 * 00000001C000193D: retn
 * 00000001C000331E: lea     rax, [rdi+rdi*4]
 * 00000001C0003322: shl     rax, 4
 * 00000001C0003326: add     rcx, rax
 * 00000001C0003329: cmp     [rcx+29h], sil
 * 00000001C000332D: jb      loc_1C00018D2
 * 00000001C0003333: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000333A: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0003342: mov     rcx, [rcx+18h]
 * 00000001C0003346: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C000334D: mov     [rsp+58h+var_18], 0
 * 00000001C0003356: mov     [rsp+58h+var_20], 8
 * 00000001C000335F: mov     [rsp+58h+var_28], rdx
 * 00000001C0003364: lea     rdx, [rsp+58h+arg_28]
 * 00000001C000336C: mov     [rsp+58h+var_30], 8
 * 00000001C0003375: mov     [rsp+58h+var_38], rdx
 * 00000001C000337A: mov     edx, 2Bh ; '+'
 * 00000001C000337F: movzx   r9d, bp
 * 00000001C0003383: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003389: nop
 * 00000001C000338A: jmp     loc_1C00018D2
 */
