/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00018D0
 * Callers:
 *     KeyboardClassPowerComplete @ 0x1C0001060 (KeyboardClassPowerComplete.c)
 *     KeyboardClassSetLedsComplete @ 0x1C0001330 (KeyboardClassSetLedsComplete.c)
 *     KeyboardClassPower @ 0x1C0001550 (KeyboardClassPower.c)
 *     KeyboardClassCreate @ 0x1C0002230 (KeyboardClassCreate.c)
 *     KeyboardClassRead @ 0x1C0002690 (KeyboardClassRead.c)
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C0004650 (KeyboardClassCancelPendingIrpLeds.c)
 *     KeyboardClassReadCopyData @ 0x1C0004AF0 (KeyboardClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00018D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00018D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00018D0: mov     [rsp+arg_0], rbx
 * 00000001C00018D5: mov     [rsp+arg_8], rbp
 * 00000001C00018DA: mov     [rsp+arg_10], rsi
 * 00000001C00018DF: mov     [rsp+arg_18], rdi
 * 00000001C00018E4: push    r14
 * 00000001C00018E6: sub     rsp, 50h
 * 00000001C00018EA: mov     ebx, r8d
 * 00000001C00018ED: mov     r14, rcx
 * 00000001C00018F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00018F7: movzx   ebp, r9w
 * 00000001C00018FB: mov     edi, r8d
 * 00000001C00018FE: movzx   esi, dl
 * 00000001C0001901: shr     rdi, 10h
 * 00000001C0001905: lea     r11d, [rbx-1]
 * 00000001C0001909: mov     r8d, r11d
 * 00000001C000190C: and     r11d, 1Fh
 * 00000001C0001910: shr     r8, 5
 * 00000001C0001914: and     r8d, 7FFh
 * 00000001C000191B: lea     rax, [rdi+rdi*4]
 * 00000001C000191F: lea     r10, [r8+rax*4]
 * 00000001C0001923: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0001928: bt      eax, r11d
 * 00000001C000192C: jb      loc_1C00037DE
 * 00000001C0001932: mov     [rsp+58h+var_10], 0
 * 00000001C000193B: lea     rax, [rsp+58h+arg_30]
 * 00000001C0001943: mov     [rsp+58h+var_18], 8
 * 00000001C000194C: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0001953: mov     [rsp+58h+var_20], rax
 * 00000001C0001958: mov     r8d, ebx
 * 00000001C000195B: lea     rax, [rsp+58h+arg_28]
 * 00000001C0001963: mov     [rsp+58h+var_28], 8
 * 00000001C000196C: mov     [rsp+58h+var_30], rax
 * 00000001C0001971: mov     rcx, r14
 * 00000001C0001974: movzx   edx, sil
 * 00000001C0001978: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000197D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001983: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0001988: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000198D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0001992: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0001997: add     rsp, 50h
 * 00000001C000199B: pop     r14
 * 00000001C000199D: retn
 * 00000001C00037DE: lea     rax, [rdi+rdi*4]
 * 00000001C00037E2: shl     rax, 4
 * 00000001C00037E6: add     rcx, rax
 * 00000001C00037E9: cmp     [rcx+29h], sil
 * 00000001C00037ED: jb      loc_1C0001932
 * 00000001C00037F3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00037FA: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0003802: mov     rcx, [rcx+18h]
 * 00000001C0003806: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C000380D: mov     [rsp+58h+var_18], 0
 * 00000001C0003816: mov     [rsp+58h+var_20], 8
 * 00000001C000381F: mov     [rsp+58h+var_28], rdx
 * 00000001C0003824: lea     rdx, [rsp+58h+arg_28]
 * 00000001C000382C: mov     [rsp+58h+var_30], 8
 * 00000001C0003835: mov     [rsp+58h+var_38], rdx
 * 00000001C000383A: mov     edx, 2Bh ; '+'
 * 00000001C000383F: movzx   r9d, bp
 * 00000001C0003843: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003849: nop
 * 00000001C000384A: jmp     loc_1C0001932
 */
