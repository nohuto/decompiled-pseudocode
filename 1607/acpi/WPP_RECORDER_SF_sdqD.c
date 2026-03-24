/*
 * XREFs of WPP_RECORDER_SF_sdqD @ 0x1C0055150
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002056C (EnableDisableDeviceTreeRegionSpace.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0054DB8 (EnableDisableRegionSpacesForDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sdqD @ 0x1C0055150
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055150
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055150: mov     [rsp+arg_0], rbx
 * 00000001C0055155: mov     [rsp+arg_8], rbp
 * 00000001C005515A: mov     [rsp+arg_10], rsi
 * 00000001C005515F: push    rdi
 * 00000001C0055160: push    r13
 * 00000001C0055162: push    r14
 * 00000001C0055164: sub     rsp, 70h
 * 00000001C0055168: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C005516F: lea     rsi, aNull_0; "NULL"
 * 00000001C0055176: mov     rdi, [rsp+88h+arg_28]
 * 00000001C005517E: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0055182: movzx   ebp, r9w
 * 00000001C0055186: mov     r14, rcx
 * 00000001C0055189: test    dword ptr [r10+2Ch], 100000h
 * 00000001C0055191: lea     r13d, [rbx+5]
 * 00000001C0055195: jz      loc_1C0055236
 * 00000001C005519B: cmp     byte ptr [r10+29h], 2
 * 00000001C00551A0: jb      loc_1C0055236
 * 00000001C00551A6: test    rdi, rdi
 * 00000001C00551A9: jz      short loc_1C00551BC
 * 00000001C00551AB: mov     rcx, rbx
 * 00000001C00551AE: inc     rcx
 * 00000001C00551B1: cmp     byte ptr [rdi+rcx], 0
 * 00000001C00551B5: jnz     short loc_1C00551AE
 * 00000001C00551B7: inc     rcx
 * 00000001C00551BA: jmp     short loc_1C00551C1
 * 00000001C00551BC: mov     ecx, 5
 * 00000001C00551C1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00551C8: lea     r8, [rsp+88h+arg_40]
 * 00000001C00551D0: test    rdi, rdi
 * 00000001C00551D3: movzx   r9d, bp
 * 00000001C00551D7: mov     rdx, rsi
 * 00000001C00551DA: cmovnz  rdx, rdi
 * 00000001C00551DE: and     [rsp+88h+var_28], 0
 * 00000001C00551E4: mov     [rsp+88h+var_30], r13
 * 00000001C00551E9: mov     [rsp+88h+var_38], r8
 * 00000001C00551EE: lea     r8, [rsp+88h+arg_38]
 * 00000001C00551F6: mov     [rsp+88h+var_40], 8
 * 00000001C00551FF: mov     [rsp+88h+var_48], r8
 * 00000001C0055204: lea     r8, [rsp+88h+arg_30]
 * 00000001C005520C: mov     [rsp+88h+var_50], r13
 * 00000001C0055211: mov     [rsp+88h+var_58], r8
 * 00000001C0055216: lea     r8, WPP_4fe430ae90f433c7fddb9329622b7a32_Traceguids
 * 00000001C005521D: mov     [rsp+88h+var_60], rcx
 * 00000001C0055222: mov     rcx, [r10+18h]
 * 00000001C0055226: mov     [rsp+88h+var_68], rdx
 * 00000001C005522B: mov     edx, 2Bh ; '+'
 * 00000001C0055230: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0055236: test    rdi, rdi
 * 00000001C0055239: jz      short loc_1C0055249
 * 00000001C005523B: inc     rbx
 * 00000001C005523E: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0055242: jnz     short loc_1C005523B
 * 00000001C0055244: inc     rbx
 * 00000001C0055247: jmp     short loc_1C005524E
 * 00000001C0055249: mov     ebx, 5
 * 00000001C005524E: test    rdi, rdi
 * 00000001C0055251: lea     rax, [rsp+88h+arg_40]
 * 00000001C0055259: mov     edx, 2
 * 00000001C005525E: lea     r9, WPP_4fe430ae90f433c7fddb9329622b7a32_Traceguids
 * 00000001C0055265: cmovnz  rsi, rdi
 * 00000001C0055269: mov     rcx, r14
 * 00000001C005526C: and     [rsp+88h+var_20], 0
 * 00000001C0055272: mov     [rsp+88h+var_28], r13
 * 00000001C0055277: mov     [rsp+88h+var_30], rax
 * 00000001C005527C: lea     r8d, [rdx+13h]
 * 00000001C0055280: mov     [rsp+88h+var_38], 8
 * 00000001C0055289: lea     rax, [rsp+88h+arg_38]
 * 00000001C0055291: mov     [rsp+88h+var_40], rax
 * 00000001C0055296: lea     rax, [rsp+88h+arg_30]
 * 00000001C005529E: mov     [rsp+88h+var_48], r13
 * 00000001C00552A3: mov     [rsp+88h+var_50], rax
 * 00000001C00552A8: mov     [rsp+88h+var_58], rbx
 * 00000001C00552AD: mov     [rsp+88h+var_60], rsi
 * 00000001C00552B2: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C00552B7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00552BD: lea     r11, [rsp+88h+var_18]
 * 00000001C00552C2: mov     rbx, [r11+20h]
 * 00000001C00552C6: mov     rbp, [r11+28h]
 * 00000001C00552CA: mov     rsi, [r11+30h]
 * 00000001C00552CE: mov     rsp, r11
 * 00000001C00552D1: pop     r14
 * 00000001C00552D3: pop     r13
 * 00000001C00552D5: pop     rdi
 * 00000001C00552D6: retn
 */
