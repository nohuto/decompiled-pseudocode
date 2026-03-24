/*
 * XREFs of WPP_RECORDER_SF_sqqD @ 0x1C00545FC
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C0053C90 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C009D54C (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sqqD @ 0x1C00545FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00545FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00545FC: mov     rax, rsp
 * 00000001C00545FF: mov     [rax+8], rbx
 * 00000001C0054603: mov     [rax+10h], rbp
 * 00000001C0054607: mov     [rax+18h], rsi
 * 00000001C005460B: mov     [rax+20h], rdi
 * 00000001C005460F: push    r12
 * 00000001C0054611: push    r14
 * 00000001C0054613: push    r15
 * 00000001C0054615: sub     rsp, 70h
 * 00000001C0054619: mov     rdi, [rsp+88h+arg_28]
 * 00000001C0054621: lea     rbp, aNull_0; "NULL"
 * 00000001C0054628: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C005462C: mov     r14d, r8d
 * 00000001C005462F: mov     esi, r8d
 * 00000001C0054632: movzx   r15d, r9w
 * 00000001C0054636: shr     rsi, 10h
 * 00000001C005463A: mov     r12, rcx
 * 00000001C005463D: lea     r11d, [r14-1]
 * 00000001C0054641: mov     edx, r11d
 * 00000001C0054644: lea     r9d, [rbx+9]
 * 00000001C0054648: shr     rdx, 5
 * 00000001C005464C: lea     rax, [rsi+rsi*4]
 * 00000001C0054650: and     edx, 7FFh
 * 00000001C0054656: and     r11d, 1Fh
 * 00000001C005465A: lea     r10, [rdx+rax*4]
 * 00000001C005465E: mov     edx, r11d
 * 00000001C0054661: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0054668: mov     eax, [r11+r10*4+2Ch]
 * 00000001C005466D: bt      eax, edx
 * 00000001C0054670: jnb     loc_1C0054720
 * 00000001C0054676: lea     r10, [rsi+rsi*4]
 * 00000001C005467A: add     r10, r10
 * 00000001C005467D: cmp     byte ptr [r11+r10*8+29h], 2
 * 00000001C0054683: jb      loc_1C0054720
 * 00000001C0054689: test    rdi, rdi
 * 00000001C005468C: jz      short loc_1C005469F
 * 00000001C005468E: mov     rdx, rbx
 * 00000001C0054691: inc     rdx
 * 00000001C0054694: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0054698: jnz     short loc_1C0054691
 * 00000001C005469A: inc     rdx
 * 00000001C005469D: jmp     short loc_1C00546A4
 * 00000001C005469F: mov     edx, 5
 * 00000001C00546A4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00546AB: lea     r8, [rsp+88h+arg_40]
 * 00000001C00546B3: test    rdi, rdi
 * 00000001C00546B6: mov     rcx, rbp
 * 00000001C00546B9: cmovnz  rcx, rdi
 * 00000001C00546BD: and     [rsp+88h+var_28], 0
 * 00000001C00546C3: mov     [rsp+88h+var_30], 4
 * 00000001C00546CC: mov     [rsp+88h+var_38], r8
 * 00000001C00546D1: lea     r8, [rsp+88h+arg_38]
 * 00000001C00546D9: mov     [rsp+88h+var_40], r9
 * 00000001C00546DE: mov     [rsp+88h+var_48], r8
 * 00000001C00546E3: lea     r8, [rsp+88h+arg_30]
 * 00000001C00546EB: mov     [rsp+88h+var_50], r9
 * 00000001C00546F0: mov     [rsp+88h+var_58], r8
 * 00000001C00546F5: lea     r8, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C00546FC: mov     [rsp+88h+var_60], rdx
 * 00000001C0054701: mov     edx, 2Bh ; '+'
 * 00000001C0054706: mov     [rsp+88h+var_68], rcx
 * 00000001C005470B: mov     rcx, [r11+r10*8+18h]
 * 00000001C0054710: movzx   r9d, r15w
 * 00000001C0054714: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005471A: mov     r9d, 8
 * 00000001C0054720: test    rdi, rdi
 * 00000001C0054723: jz      short loc_1C0054733
 * 00000001C0054725: inc     rbx
 * 00000001C0054728: cmp     byte ptr [rdi+rbx], 0
 * 00000001C005472C: jnz     short loc_1C0054725
 * 00000001C005472E: inc     rbx
 * 00000001C0054731: jmp     short loc_1C0054738
 * 00000001C0054733: mov     ebx, 5
 * 00000001C0054738: test    rdi, rdi
 * 00000001C005473B: lea     rax, [rsp+88h+arg_40]
 * 00000001C0054743: mov     r8d, r14d
 * 00000001C0054746: mov     edx, 2
 * 00000001C005474B: cmovnz  rbp, rdi
 * 00000001C005474F: mov     rcx, r12
 * 00000001C0054752: and     [rsp+88h+var_20], 0
 * 00000001C0054758: mov     [rsp+88h+var_28], 4
 * 00000001C0054761: mov     [rsp+88h+var_30], rax
 * 00000001C0054766: lea     rax, [rsp+88h+arg_38]
 * 00000001C005476E: mov     [rsp+88h+var_38], r9
 * 00000001C0054773: mov     [rsp+88h+var_40], rax
 * 00000001C0054778: lea     rax, [rsp+88h+arg_30]
 * 00000001C0054780: mov     [rsp+88h+var_48], r9
 * 00000001C0054785: lea     r9, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C005478C: mov     [rsp+88h+var_50], rax
 * 00000001C0054791: mov     [rsp+88h+var_58], rbx
 * 00000001C0054796: mov     [rsp+88h+var_60], rbp
 * 00000001C005479B: mov     word ptr [rsp+88h+var_68], r15w
 * 00000001C00547A1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00547A7: lea     r11, [rsp+88h+var_18]
 * 00000001C00547AC: mov     rbx, [r11+20h]
 * 00000001C00547B0: mov     rbp, [r11+28h]
 * 00000001C00547B4: mov     rsi, [r11+30h]
 * 00000001C00547B8: mov     rdi, [r11+38h]
 * 00000001C00547BC: mov     rsp, r11
 * 00000001C00547BF: pop     r15
 * 00000001C00547C1: pop     r14
 * 00000001C00547C3: pop     r12
 * 00000001C00547C5: retn
 */
