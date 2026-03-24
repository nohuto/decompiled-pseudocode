/*
 * XREFs of WPP_RECORDER_SF_qqc @ 0x1C0001D10
 * Callers:
 *     KeyboardPnP @ 0x1C0001B00 (KeyboardPnP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqc @ 0x1C0001D10
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001D10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001D10: mov     [rsp+arg_0], rbx
 * 00000001C0001D15: push    rsi
 * 00000001C0001D16: sub     rsp, 60h
 * 00000001C0001D1A: mov     rbx, rcx
 * 00000001C0001D1D: mov     esi, 55h ; 'U'
 * 00000001C0001D22: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001D29: mov     eax, [rcx+2Ch]
 * 00000001C0001D2C: test    al, 20h
 * 00000001C0001D2E: jnz     loc_1C0003BBA
 * 00000001C0001D34: mov     [rsp+68h+var_10], 0
 * 00000001C0001D3D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0001D45: mov     [rsp+68h+var_18], 1
 * 00000001C0001D4E: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0001D55: mov     [rsp+68h+var_20], rax
 * 00000001C0001D5A: mov     edx, 4
 * 00000001C0001D5F: mov     [rsp+68h+var_28], 8
 * 00000001C0001D68: lea     rax, [rsp+68h+arg_30]
 * 00000001C0001D70: mov     [rsp+68h+var_30], rax
 * 00000001C0001D75: mov     rcx, rbx
 * 00000001C0001D78: lea     rax, [rsp+68h+arg_28]
 * 00000001C0001D80: mov     [rsp+68h+var_38], 8
 * 00000001C0001D89: mov     [rsp+68h+var_40], rax
 * 00000001C0001D8E: lea     r8d, [rdx+2]
 * 00000001C0001D92: mov     word ptr [rsp+68h+var_48], si
 * 00000001C0001D97: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001D9D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0001DA2: add     rsp, 60h
 * 00000001C0001DA6: pop     rsi
 * 00000001C0001DA7: retn
 * 00000001C0003BBA: cmp     byte ptr [rcx+29h], 4
 * 00000001C0003BBE: jb      loc_1C0001D34
 * 00000001C0003BC4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003BCB: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0003BD3: mov     rcx, [rcx+18h]
 * 00000001C0003BD7: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0003BDE: mov     [rsp+68h+var_18], 0
 * 00000001C0003BE7: mov     [rsp+68h+var_20], 1
 * 00000001C0003BF0: mov     [rsp+68h+var_28], rdx
 * 00000001C0003BF5: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0003BFD: mov     [rsp+68h+var_30], 8
 * 00000001C0003C06: mov     [rsp+68h+var_38], rdx
 * 00000001C0003C0B: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0003C13: mov     [rsp+68h+var_40], 8
 * 00000001C0003C1C: mov     [rsp+68h+var_48], rdx
 * 00000001C0003C21: mov     edx, 2Bh ; '+'
 * 00000001C0003C26: movzx   r9d, si
 * 00000001C0003C2A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003C30: nop
 * 00000001C0003C31: jmp     loc_1C0001D34
 */
