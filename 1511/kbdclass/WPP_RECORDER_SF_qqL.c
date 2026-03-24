/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C0001E70
 * Callers:
 *     KeyboardClassReadCopyData @ 0x1C0004AF0 (KeyboardClassReadCopyData.c)
 *     KeyboardClassDeviceControl @ 0x1C000C7F0 (KeyboardClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqL @ 0x1C0001E70
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001E70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001E70: mov     [rsp+arg_0], rbx
 * 00000001C0001E75: mov     [rsp+arg_8], rbp
 * 00000001C0001E7A: mov     [rsp+arg_10], rsi
 * 00000001C0001E7F: mov     [rsp+arg_18], rdi
 * 00000001C0001E84: push    r14
 * 00000001C0001E86: sub     rsp, 60h
 * 00000001C0001E8A: mov     ebx, r8d
 * 00000001C0001E8D: mov     r14, rcx
 * 00000001C0001E90: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001E97: movzx   ebp, r9w
 * 00000001C0001E9B: mov     edi, r8d
 * 00000001C0001E9E: movzx   esi, dl
 * 00000001C0001EA1: shr     rdi, 10h
 * 00000001C0001EA5: lea     r11d, [rbx-1]
 * 00000001C0001EA9: mov     r8d, r11d
 * 00000001C0001EAC: and     r11d, 1Fh
 * 00000001C0001EB0: shr     r8, 5
 * 00000001C0001EB4: and     r8d, 7FFh
 * 00000001C0001EBB: lea     rax, [rdi+rdi*4]
 * 00000001C0001EBF: lea     r10, [r8+rax*4]
 * 00000001C0001EC3: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0001EC8: bt      eax, r11d
 * 00000001C0001ECC: jb      loc_1C0003CC8
 * 00000001C0001ED2: mov     [rsp+68h+var_10], 0
 * 00000001C0001EDB: lea     rax, [rsp+68h+arg_38]
 * 00000001C0001EE3: mov     [rsp+68h+var_18], 4
 * 00000001C0001EEC: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0001EF3: mov     [rsp+68h+var_20], rax
 * 00000001C0001EF8: mov     r8d, ebx
 * 00000001C0001EFB: mov     [rsp+68h+var_28], 8
 * 00000001C0001F04: lea     rax, [rsp+68h+arg_30]
 * 00000001C0001F0C: mov     [rsp+68h+var_30], rax
 * 00000001C0001F11: mov     rcx, r14
 * 00000001C0001F14: lea     rax, [rsp+68h+arg_28]
 * 00000001C0001F1C: mov     [rsp+68h+var_38], 8
 * 00000001C0001F25: mov     [rsp+68h+var_40], rax
 * 00000001C0001F2A: movzx   edx, sil
 * 00000001C0001F2E: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0001F33: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001F39: lea     r11, [rsp+68h+var_8]
 * 00000001C0001F3E: mov     rbx, [r11+10h]
 * 00000001C0001F42: mov     rbp, [r11+18h]
 * 00000001C0001F46: mov     rsi, [r11+20h]
 * 00000001C0001F4A: mov     rdi, [r11+28h]
 * 00000001C0001F4E: mov     rsp, r11
 * 00000001C0001F51: pop     r14
 * 00000001C0001F53: retn
 * 00000001C0003CC8: lea     rax, [rdi+rdi*4]
 * 00000001C0003CCC: shl     rax, 4
 * 00000001C0003CD0: add     rcx, rax
 * 00000001C0003CD3: cmp     [rcx+29h], sil
 * 00000001C0003CD7: jb      loc_1C0001ED2
 * 00000001C0003CDD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003CE4: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0003CEC: mov     rcx, [rcx+18h]
 * 00000001C0003CF0: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0003CF7: mov     [rsp+68h+var_18], 0
 * 00000001C0003D00: mov     [rsp+68h+var_20], 4
 * 00000001C0003D09: mov     [rsp+68h+var_28], rdx
 * 00000001C0003D0E: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0003D16: mov     [rsp+68h+var_30], 8
 * 00000001C0003D1F: mov     [rsp+68h+var_38], rdx
 * 00000001C0003D24: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0003D2C: mov     [rsp+68h+var_40], 8
 * 00000001C0003D35: mov     [rsp+68h+var_48], rdx
 * 00000001C0003D3A: mov     edx, 2Bh ; '+'
 * 00000001C0003D3F: movzx   r9d, bp
 * 00000001C0003D43: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003D49: nop
 * 00000001C0003D4A: jmp     loc_1C0001ED2
 */
