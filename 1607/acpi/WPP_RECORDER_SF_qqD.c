/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x1C00544B0
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0053910 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0053C90 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C009D54C (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqD @ 0x1C00544B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00544B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00544B0: mov     rax, rsp
 * 00000001C00544B3: mov     [rax+8], rbx
 * 00000001C00544B7: mov     [rax+10h], rbp
 * 00000001C00544BB: mov     [rax+18h], rsi
 * 00000001C00544BF: mov     [rax+20h], rdi
 * 00000001C00544C3: push    r14
 * 00000001C00544C5: sub     rsp, 60h
 * 00000001C00544C9: mov     esi, r8d
 * 00000001C00544CC: movzx   edi, r9w
 * 00000001C00544D0: mov     ebx, r8d
 * 00000001C00544D3: mov     rbp, rcx
 * 00000001C00544D6: shr     rbx, 10h
 * 00000001C00544DA: mov     r14d, 8
 * 00000001C00544E0: lea     r11d, [rsi-1]
 * 00000001C00544E4: mov     edx, r11d
 * 00000001C00544E7: and     r11d, 1Fh
 * 00000001C00544EB: shr     rdx, 5
 * 00000001C00544EF: lea     rax, [rbx+rbx*4]
 * 00000001C00544F3: and     edx, 7FFh
 * 00000001C00544F9: lea     r10, [rdx+rax*4]
 * 00000001C00544FD: mov     edx, r11d
 * 00000001C0054500: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0054507: mov     eax, [r11+r10*4+2Ch]
 * 00000001C005450C: bt      eax, edx
 * 00000001C005450F: jnb     short loc_1C0054581
 * 00000001C0054511: lea     rcx, [rbx+rbx*4]
 * 00000001C0054515: add     rcx, rcx
 * 00000001C0054518: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C005451E: jb      short loc_1C0054581
 * 00000001C0054520: and     [rsp+68h+var_18], 0
 * 00000001C0054526: lea     rdx, [rsp+68h+arg_38]
 * 00000001C005452E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0054535: lea     r8, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C005453C: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0054541: mov     [rsp+68h+var_20], 4
 * 00000001C005454A: mov     [rsp+68h+var_28], rdx
 * 00000001C005454F: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0054557: mov     [rsp+68h+var_30], r14
 * 00000001C005455C: mov     [rsp+68h+var_38], rdx
 * 00000001C0054561: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0054569: mov     [rsp+68h+var_40], r14
 * 00000001C005456E: mov     [rsp+68h+var_48], rdx
 * 00000001C0054573: lea     edx, [r14+23h]
 * 00000001C0054577: movzx   r9d, r9w
 * 00000001C005457B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054581: and     [rsp+68h+var_10], 0
 * 00000001C0054587: lea     rax, [rsp+68h+arg_38]
 * 00000001C005458F: mov     [rsp+68h+var_18], 4
 * 00000001C0054598: lea     r9, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C005459F: mov     [rsp+68h+var_20], rax
 * 00000001C00545A4: mov     r8d, esi
 * 00000001C00545A7: mov     [rsp+68h+var_28], r14
 * 00000001C00545AC: lea     rax, [rsp+68h+arg_30]
 * 00000001C00545B4: mov     [rsp+68h+var_30], rax
 * 00000001C00545B9: mov     edx, 2
 * 00000001C00545BE: lea     rax, [rsp+68h+arg_28]
 * 00000001C00545C6: mov     [rsp+68h+var_38], r14
 * 00000001C00545CB: mov     [rsp+68h+var_40], rax
 * 00000001C00545D0: mov     rcx, rbp
 * 00000001C00545D3: mov     word ptr [rsp+68h+var_48], di
 * 00000001C00545D8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00545DE: lea     r11, [rsp+68h+var_8]
 * 00000001C00545E3: mov     rbx, [r11+10h]
 * 00000001C00545E7: mov     rbp, [r11+18h]
 * 00000001C00545EB: mov     rsi, [r11+20h]
 * 00000001C00545EF: mov     rdi, [r11+28h]
 * 00000001C00545F3: mov     rsp, r11
 * 00000001C00545F6: pop     r14
 * 00000001C00545F8: retn
 */
