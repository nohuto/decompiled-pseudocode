/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C0001DE0
 * Callers:
 *     KeyboardClassReadCopyData @ 0x1C0004AA0 (KeyboardClassReadCopyData.c)
 *     KeyboardClassDeviceControl @ 0x1C000C7F0 (KeyboardClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqL @ 0x1C0001DE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001DE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001DE0: mov     [rsp+arg_0], rbx
 * 00000001C0001DE5: mov     [rsp+arg_8], rbp
 * 00000001C0001DEA: mov     [rsp+arg_10], rsi
 * 00000001C0001DEF: mov     [rsp+arg_18], rdi
 * 00000001C0001DF4: push    r14
 * 00000001C0001DF6: sub     rsp, 60h
 * 00000001C0001DFA: mov     ebx, r8d
 * 00000001C0001DFD: mov     r14, rcx
 * 00000001C0001E00: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001E07: movzx   ebp, r9w
 * 00000001C0001E0B: mov     edi, r8d
 * 00000001C0001E0E: movzx   esi, dl
 * 00000001C0001E11: shr     rdi, 10h
 * 00000001C0001E15: lea     r11d, [rbx-1]
 * 00000001C0001E19: mov     r8d, r11d
 * 00000001C0001E1C: and     r11d, 1Fh
 * 00000001C0001E20: shr     r8, 5
 * 00000001C0001E24: and     r8d, 7FFh
 * 00000001C0001E2B: lea     rax, [rdi+rdi*4]
 * 00000001C0001E2F: lea     r10, [r8+rax*4]
 * 00000001C0001E33: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0001E38: bt      eax, r11d
 * 00000001C0001E3C: jb      loc_1C0003BDC
 * 00000001C0001E42: mov     [rsp+68h+var_10], 0
 * 00000001C0001E4B: lea     rax, [rsp+68h+arg_38]
 * 00000001C0001E53: mov     [rsp+68h+var_18], 4
 * 00000001C0001E5C: lea     r9, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C0001E63: mov     [rsp+68h+var_20], rax
 * 00000001C0001E68: mov     r8d, ebx
 * 00000001C0001E6B: mov     [rsp+68h+var_28], 8
 * 00000001C0001E74: lea     rax, [rsp+68h+arg_30]
 * 00000001C0001E7C: mov     [rsp+68h+var_30], rax
 * 00000001C0001E81: mov     rcx, r14
 * 00000001C0001E84: lea     rax, [rsp+68h+arg_28]
 * 00000001C0001E8C: mov     [rsp+68h+var_38], 8
 * 00000001C0001E95: mov     [rsp+68h+var_40], rax
 * 00000001C0001E9A: movzx   edx, sil
 * 00000001C0001E9E: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0001EA3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001EA9: lea     r11, [rsp+68h+var_8]
 * 00000001C0001EAE: mov     rbx, [r11+10h]
 * 00000001C0001EB2: mov     rbp, [r11+18h]
 * 00000001C0001EB6: mov     rsi, [r11+20h]
 * 00000001C0001EBA: mov     rdi, [r11+28h]
 * 00000001C0001EBE: mov     rsp, r11
 * 00000001C0001EC1: pop     r14
 * 00000001C0001EC3: retn
 * 00000001C0003BDC: lea     rax, [rdi+rdi*4]
 * 00000001C0003BE0: shl     rax, 4
 * 00000001C0003BE4: add     rcx, rax
 * 00000001C0003BE7: cmp     [rcx+29h], sil
 * 00000001C0003BEB: jb      loc_1C0001E42
 * 00000001C0003BF1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003BF8: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0003C00: mov     rcx, [rcx+18h]
 * 00000001C0003C04: lea     r8, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C0003C0B: mov     [rsp+68h+var_18], 0
 * 00000001C0003C14: mov     [rsp+68h+var_20], 4
 * 00000001C0003C1D: mov     [rsp+68h+var_28], rdx
 * 00000001C0003C22: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0003C2A: mov     [rsp+68h+var_30], 8
 * 00000001C0003C33: mov     [rsp+68h+var_38], rdx
 * 00000001C0003C38: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0003C40: mov     [rsp+68h+var_40], 8
 * 00000001C0003C49: mov     [rsp+68h+var_48], rdx
 * 00000001C0003C4E: mov     edx, 2Bh ; '+'
 * 00000001C0003C53: movzx   r9d, bp
 * 00000001C0003C57: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003C5D: nop
 * 00000001C0003C5E: jmp     loc_1C0001E42
 */
