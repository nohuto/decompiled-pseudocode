/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C0005A68
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C0004AF0 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C0005A68
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005A68
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005A68: mov     r11, rsp
 * 00000001C0005A6B: mov     [r11+8], rbx
 * 00000001C0005A6F: mov     [r11+10h], rbp
 * 00000001C0005A73: mov     [r11+18h], rsi
 * 00000001C0005A77: push    rdi
 * 00000001C0005A78: sub     rsp, 60h
 * 00000001C0005A7C: mov     rsi, rcx
 * 00000001C0005A7F: movzx   edi, r9w
 * 00000001C0005A83: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005A8A: mov     bl, dl
 * 00000001C0005A8C: mov     ebp, 8
 * 00000001C0005A91: mov     eax, [rcx+2Ch]
 * 00000001C0005A94: test    al, 10h
 * 00000001C0005A96: jz      short loc_1C0005AE9
 * 00000001C0005A98: cmp     [rcx+29h], dl
 * 00000001C0005A9B: jb      short loc_1C0005AE9
 * 00000001C0005A9D: and     qword ptr [r11-18h], 0
 * 00000001C0005AA2: lea     rdx, [r11+40h]
 * 00000001C0005AA6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005AAD: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005AB4: mov     rcx, [rcx+18h]
 * 00000001C0005AB8: mov     qword ptr [r11-20h], 4
 * 00000001C0005AC0: mov     [r11-28h], rdx
 * 00000001C0005AC4: lea     rdx, [r11+38h]
 * 00000001C0005AC8: mov     [r11-30h], rbp
 * 00000001C0005ACC: mov     [r11-38h], rdx
 * 00000001C0005AD0: lea     rdx, [r11+30h]
 * 00000001C0005AD4: mov     [r11-40h], rbp
 * 00000001C0005AD8: mov     [r11-48h], rdx
 * 00000001C0005ADC: lea     edx, [rbp+23h]
 * 00000001C0005ADF: movzx   r9d, r9w
 * 00000001C0005AE3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005AE9: and     [rsp+68h+var_10], 0
 * 00000001C0005AEF: lea     rax, [rsp+68h+arg_38]
 * 00000001C0005AF7: mov     [rsp+68h+var_18], 4
 * 00000001C0005B00: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005B07: mov     [rsp+68h+var_20], rax
 * 00000001C0005B0C: mov     r8d, 5
 * 00000001C0005B12: mov     [rsp+68h+var_28], rbp
 * 00000001C0005B17: lea     rax, [rsp+68h+arg_30]
 * 00000001C0005B1F: mov     [rsp+68h+var_30], rax
 * 00000001C0005B24: mov     rcx, rsi
 * 00000001C0005B27: lea     rax, [rsp+68h+arg_28]
 * 00000001C0005B2F: mov     [rsp+68h+var_38], rbp
 * 00000001C0005B34: mov     [rsp+68h+var_40], rax
 * 00000001C0005B39: movzx   edx, bl
 * 00000001C0005B3C: mov     [rsp+68h+var_48], di
 * 00000001C0005B41: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005B47: lea     r11, [rsp+68h+var_8]
 * 00000001C0005B4C: mov     rbx, [r11+10h]
 * 00000001C0005B50: mov     rbp, [r11+18h]
 * 00000001C0005B54: mov     rsi, [r11+20h]
 * 00000001C0005B58: mov     rsp, r11
 * 00000001C0005B5B: pop     rdi
 * 00000001C0005B5C: retn
 */
