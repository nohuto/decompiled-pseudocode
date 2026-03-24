/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C00055BC
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C0002950 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C00055BC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00055BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00055BC: mov     r11, rsp
 * 00000001C00055BF: mov     [r11+8], rbx
 * 00000001C00055C3: mov     [r11+10h], rsi
 * 00000001C00055C7: push    rdi
 * 00000001C00055C8: sub     rsp, 60h
 * 00000001C00055CC: mov     rdi, rcx
 * 00000001C00055CF: mov     esi, 4
 * 00000001C00055D4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00055DB: movzx   ebx, r9w
 * 00000001C00055DF: mov     eax, [rcx+2Ch]
 * 00000001C00055E2: test    sil, al
 * 00000001C00055E5: jz      short loc_1C0005639
 * 00000001C00055E7: cmp     byte ptr [rcx+29h], 5
 * 00000001C00055EB: jb      short loc_1C0005639
 * 00000001C00055ED: and     qword ptr [r11-18h], 0
 * 00000001C00055F2: lea     rdx, [r11+40h]
 * 00000001C00055F6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00055FD: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0005604: mov     rcx, [rcx+18h]
 * 00000001C0005608: mov     [r11-20h], rsi
 * 00000001C000560C: mov     [r11-28h], rdx
 * 00000001C0005610: lea     rdx, [r11+38h]
 * 00000001C0005614: mov     [r11-30h], rsi
 * 00000001C0005618: mov     [r11-38h], rdx
 * 00000001C000561C: lea     rdx, [r11+30h]
 * 00000001C0005620: mov     qword ptr [r11-40h], 8
 * 00000001C0005628: mov     [r11-48h], rdx
 * 00000001C000562C: lea     edx, [rsi+27h]
 * 00000001C000562F: movzx   r9d, bx
 * 00000001C0005633: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005639: and     [rsp+68h+var_10], 0
 * 00000001C000563F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0005647: mov     [rsp+68h+var_18], rsi
 * 00000001C000564C: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0005653: mov     [rsp+68h+var_20], rax
 * 00000001C0005658: mov     edx, 5
 * 00000001C000565D: mov     [rsp+68h+var_28], rsi
 * 00000001C0005662: lea     rax, [rsp+68h+arg_30]
 * 00000001C000566A: mov     [rsp+68h+var_30], rax
 * 00000001C000566F: mov     rcx, rdi
 * 00000001C0005672: lea     rax, [rsp+68h+arg_28]
 * 00000001C000567A: mov     [rsp+68h+var_38], 8
 * 00000001C0005683: mov     [rsp+68h+var_40], rax
 * 00000001C0005688: lea     r8d, [rdx-2]
 * 00000001C000568C: mov     [rsp+68h+var_48], bx
 * 00000001C0005691: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005697: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000569C: mov     rsi, [rsp+68h+arg_8]
 * 00000001C00056A1: add     rsp, 60h
 * 00000001C00056A5: pop     rdi
 * 00000001C00056A6: retn
 */
