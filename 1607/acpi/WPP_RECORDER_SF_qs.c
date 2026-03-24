/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1C0045AA8
 * Callers:
 *     ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1C00442E0 (ACPIBuildIssueNotifyInvalidateRelationsForDockDevice.c)
 *     OSNotifyDeviceCheck @ 0x1C00512D0 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0051438 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C00514B8 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C0053634 (AcpiHandleInternalNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qs @ 0x1C0045AA8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0045AA8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0045AA8: mov     rax, rsp
 * 00000001C0045AAB: mov     [rax+10h], rbx
 * 00000001C0045AAF: mov     [rax+18h], rbp
 * 00000001C0045AB3: mov     [rax+20h], rsi
 * 00000001C0045AB7: mov     [rax+8], rcx
 * 00000001C0045ABB: push    rdi
 * 00000001C0045ABC: push    r12
 * 00000001C0045ABE: push    r13
 * 00000001C0045AC0: push    r14
 * 00000001C0045AC2: push    r15
 * 00000001C0045AC4: sub     rsp, 50h
 * 00000001C0045AC8: mov     r14, cs:WPP_GLOBAL_Control
 * 00000001C0045ACF: lea     rbp, aNull_0; "NULL"
 * 00000001C0045AD6: mov     rdi, [rsp+78h+arg_30]
 * 00000001C0045ADE: mov     r15b, dl
 * 00000001C0045AE1: mov     r13d, r8d
 * 00000001C0045AE4: movzx   r12d, r9w
 * 00000001C0045AE8: mov     esi, r8d
 * 00000001C0045AEB: shr     rsi, 10h
 * 00000001C0045AEF: lea     ebx, [r13-1]
 * 00000001C0045AF3: mov     r10d, ebx
 * 00000001C0045AF6: and     ebx, 1Fh
 * 00000001C0045AF9: shr     r10, 5
 * 00000001C0045AFD: lea     rax, [rsi+rsi*4]
 * 00000001C0045B01: and     r10d, 7FFh
 * 00000001C0045B08: mov     edx, ebx
 * 00000001C0045B0A: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0045B0E: lea     r11, [r10+rax*4]
 * 00000001C0045B12: mov     eax, [r14+r11*4+2Ch]
 * 00000001C0045B17: bt      eax, edx
 * 00000001C0045B1A: jnb     loc_1C0045BA4
 * 00000001C0045B20: lea     r10, [rsi+rsi*4]
 * 00000001C0045B24: add     r10, r10
 * 00000001C0045B27: cmp     [r14+r10*8+29h], r15b
 * 00000001C0045B2C: jb      short loc_1C0045BA4
 * 00000001C0045B2E: test    rdi, rdi
 * 00000001C0045B31: jz      short loc_1C0045B44
 * 00000001C0045B33: mov     rdx, rbx
 * 00000001C0045B36: inc     rdx
 * 00000001C0045B39: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0045B3D: jnz     short loc_1C0045B36
 * 00000001C0045B3F: inc     rdx
 * 00000001C0045B42: jmp     short loc_1C0045B49
 * 00000001C0045B44: mov     edx, 5
 * 00000001C0045B49: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0045B50: test    rdi, rdi
 * 00000001C0045B53: mov     r8, [rsp+78h+arg_20]
 * 00000001C0045B5B: mov     rcx, rbp
 * 00000001C0045B5E: cmovnz  rcx, rdi
 * 00000001C0045B62: movzx   r9d, r12w
 * 00000001C0045B66: and     [rsp+78h+var_38], 0
 * 00000001C0045B6C: mov     [rsp+78h+var_40], rdx
 * 00000001C0045B71: mov     edx, 2Bh ; '+'
 * 00000001C0045B76: mov     [rsp+78h+var_48], rcx
 * 00000001C0045B7B: lea     rcx, [rsp+78h+arg_28]
 * 00000001C0045B83: mov     [rsp+78h+var_50], 8
 * 00000001C0045B8C: mov     [rsp+78h+var_58], rcx
 * 00000001C0045B91: mov     rcx, [r14+r10*8+18h]
 * 00000001C0045B96: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045B9C: mov     rcx, [rsp+78h+arg_0]
 * 00000001C0045BA4: test    rdi, rdi
 * 00000001C0045BA7: jz      short loc_1C0045BB7
 * 00000001C0045BA9: inc     rbx
 * 00000001C0045BAC: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0045BB0: jnz     short loc_1C0045BA9
 * 00000001C0045BB2: inc     rbx
 * 00000001C0045BB5: jmp     short loc_1C0045BBC
 * 00000001C0045BB7: mov     ebx, 5
 * 00000001C0045BBC: mov     r9, [rsp+78h+arg_20]
 * 00000001C0045BC4: lea     rax, [rsp+78h+arg_28]
 * 00000001C0045BCC: test    rdi, rdi
 * 00000001C0045BCF: movzx   edx, r15b
 * 00000001C0045BD3: mov     r8d, r13d
 * 00000001C0045BD6: cmovnz  rbp, rdi
 * 00000001C0045BDA: and     [rsp+78h+var_30], 0
 * 00000001C0045BE0: mov     [rsp+78h+var_38], rbx
 * 00000001C0045BE5: mov     [rsp+78h+var_40], rbp
 * 00000001C0045BEA: mov     [rsp+78h+var_48], 8
 * 00000001C0045BF3: mov     [rsp+78h+var_50], rax
 * 00000001C0045BF8: mov     word ptr [rsp+78h+var_58], r12w
 * 00000001C0045BFE: call    cs:__imp_WppAutoLogTrace
 * 00000001C0045C04: lea     r11, [rsp+78h+var_28]
 * 00000001C0045C09: mov     rbx, [r11+38h]
 * 00000001C0045C0D: mov     rbp, [r11+40h]
 * 00000001C0045C11: mov     rsi, [r11+48h]
 * 00000001C0045C15: mov     rsp, r11
 * 00000001C0045C18: pop     r15
 * 00000001C0045C1A: pop     r14
 * 00000001C0045C1C: pop     r13
 * 00000001C0045C1E: pop     r12
 * 00000001C0045C20: pop     rdi
 * 00000001C0045C21: retn
 */
