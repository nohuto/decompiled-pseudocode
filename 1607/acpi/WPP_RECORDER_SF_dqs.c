/*
 * XREFs of WPP_RECORDER_SF_dqs @ 0x1C004B2B8
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes @ 0x1C0049D20 (ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqs @ 0x1C004B2B8
 * Reason: Hex-Rays returned no pseudocode for 0x1C004B2B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004B2B8: mov     [rsp+arg_0], rbx
 * 00000001C004B2BD: mov     [rsp+arg_8], rbp
 * 00000001C004B2C2: mov     [rsp+arg_10], rsi
 * 00000001C004B2C7: push    rdi
 * 00000001C004B2C8: sub     rsp, 60h
 * 00000001C004B2CC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004B2D3: lea     rsi, aNull_0; "NULL"
 * 00000001C004B2DA: mov     rdi, [rsp+68h+arg_38]
 * 00000001C004B2E2: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004B2E6: mov     rbp, rcx
 * 00000001C004B2E9: test    dword ptr [r10+2Ch], 200h
 * 00000001C004B2F1: lea     r8d, [rbx+3Ch]
 * 00000001C004B2F5: jz      loc_1C004B38E
 * 00000001C004B2FB: cmp     byte ptr [r10+29h], 4
 * 00000001C004B300: jb      loc_1C004B38E
 * 00000001C004B306: test    rdi, rdi
 * 00000001C004B309: jz      short loc_1C004B31C
 * 00000001C004B30B: mov     rcx, rbx
 * 00000001C004B30E: inc     rcx
 * 00000001C004B311: cmp     byte ptr [rdi+rcx], 0
 * 00000001C004B315: jnz     short loc_1C004B30E
 * 00000001C004B317: inc     rcx
 * 00000001C004B31A: jmp     short loc_1C004B321
 * 00000001C004B31C: mov     ecx, 5
 * 00000001C004B321: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004B328: test    rdi, rdi
 * 00000001C004B32B: movzx   r9d, r8w
 * 00000001C004B32F: mov     rdx, rsi
 * 00000001C004B332: cmovnz  rdx, rdi
 * 00000001C004B336: lea     r8, WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids
 * 00000001C004B33D: and     [rsp+68h+var_18], 0
 * 00000001C004B343: mov     [rsp+68h+var_20], rcx
 * 00000001C004B348: lea     rcx, [rsp+68h+arg_30]
 * 00000001C004B350: mov     [rsp+68h+var_28], rdx
 * 00000001C004B355: mov     edx, 2Bh ; '+'
 * 00000001C004B35A: mov     [rsp+68h+var_30], 8
 * 00000001C004B363: mov     [rsp+68h+var_38], rcx
 * 00000001C004B368: lea     rcx, [rsp+68h+arg_28]
 * 00000001C004B370: mov     [rsp+68h+var_40], 4
 * 00000001C004B379: mov     [rsp+68h+var_48], rcx
 * 00000001C004B37E: mov     rcx, [r10+18h]
 * 00000001C004B382: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004B388: mov     r8d, 3Bh ; ';'
 * 00000001C004B38E: test    rdi, rdi
 * 00000001C004B391: jz      short loc_1C004B3A1
 * 00000001C004B393: inc     rbx
 * 00000001C004B396: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004B39A: jnz     short loc_1C004B393
 * 00000001C004B39C: inc     rbx
 * 00000001C004B39F: jmp     short loc_1C004B3A6
 * 00000001C004B3A1: mov     ebx, 5
 * 00000001C004B3A6: test    rdi, rdi
 * 00000001C004B3A9: lea     rax, [rsp+68h+arg_30]
 * 00000001C004B3B1: mov     edx, 4
 * 00000001C004B3B6: lea     r9, WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids
 * 00000001C004B3BD: cmovnz  rsi, rdi
 * 00000001C004B3C1: mov     rcx, rbp
 * 00000001C004B3C4: and     [rsp+68h+var_10], 0
 * 00000001C004B3CA: mov     [rsp+68h+var_18], rbx
 * 00000001C004B3CF: mov     [rsp+68h+var_20], rsi
 * 00000001C004B3D4: mov     [rsp+68h+var_28], 8
 * 00000001C004B3DD: mov     [rsp+68h+var_30], rax
 * 00000001C004B3E2: lea     rax, [rsp+68h+arg_28]
 * 00000001C004B3EA: mov     [rsp+68h+var_38], 4
 * 00000001C004B3F3: mov     [rsp+68h+var_40], rax
 * 00000001C004B3F8: mov     word ptr [rsp+68h+var_48], r8w
 * 00000001C004B3FE: lea     r8d, [rdx+6]
 * 00000001C004B402: call    cs:__imp_WppAutoLogTrace
 * 00000001C004B408: lea     r11, [rsp+68h+var_8]
 * 00000001C004B40D: mov     rbx, [r11+10h]
 * 00000001C004B411: mov     rbp, [r11+18h]
 * 00000001C004B415: mov     rsi, [r11+20h]
 * 00000001C004B419: mov     rsp, r11
 * 00000001C004B41C: pop     rdi
 * 00000001C004B41D: retn
 */
