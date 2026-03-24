/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C00022A0
 * Callers:
 *     MouseClassReadCopyData @ 0x1C0004670 (MouseClassReadCopyData.c)
 *     MouseClassDeviceControl @ 0x1C000B510 (MouseClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqL @ 0x1C00022A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00022A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00022A0: mov     [rsp+arg_0], rbx
 * 00000001C00022A5: mov     [rsp+arg_8], rbp
 * 00000001C00022AA: mov     [rsp+arg_10], rsi
 * 00000001C00022AF: mov     [rsp+arg_18], rdi
 * 00000001C00022B4: push    r14
 * 00000001C00022B6: sub     rsp, 60h
 * 00000001C00022BA: mov     ebx, r8d
 * 00000001C00022BD: mov     r14, rcx
 * 00000001C00022C0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00022C7: movzx   ebp, r9w
 * 00000001C00022CB: mov     edi, r8d
 * 00000001C00022CE: movzx   esi, dl
 * 00000001C00022D1: shr     rdi, 10h
 * 00000001C00022D5: lea     r11d, [rbx-1]
 * 00000001C00022D9: mov     r8d, r11d
 * 00000001C00022DC: and     r11d, 1Fh
 * 00000001C00022E0: shr     r8, 5
 * 00000001C00022E4: and     r8d, 7FFh
 * 00000001C00022EB: lea     rax, [rdi+rdi*4]
 * 00000001C00022EF: lea     r10, [r8+rax*4]
 * 00000001C00022F3: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C00022F8: bt      eax, r11d
 * 00000001C00022FC: jb      loc_1C000398E
 * 00000001C0002302: mov     [rsp+68h+var_10], 0
 * 00000001C000230B: lea     rax, [rsp+68h+arg_38]
 * 00000001C0002313: mov     [rsp+68h+var_18], 4
 * 00000001C000231C: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0002323: mov     [rsp+68h+var_20], rax
 * 00000001C0002328: mov     r8d, ebx
 * 00000001C000232B: mov     [rsp+68h+var_28], 8
 * 00000001C0002334: lea     rax, [rsp+68h+arg_30]
 * 00000001C000233C: mov     [rsp+68h+var_30], rax
 * 00000001C0002341: mov     rcx, r14
 * 00000001C0002344: lea     rax, [rsp+68h+arg_28]
 * 00000001C000234C: mov     [rsp+68h+var_38], 8
 * 00000001C0002355: mov     [rsp+68h+var_40], rax
 * 00000001C000235A: movzx   edx, sil
 * 00000001C000235E: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0002363: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002369: lea     r11, [rsp+68h+var_8]
 * 00000001C000236E: mov     rbx, [r11+10h]
 * 00000001C0002372: mov     rbp, [r11+18h]
 * 00000001C0002376: mov     rsi, [r11+20h]
 * 00000001C000237A: mov     rdi, [r11+28h]
 * 00000001C000237E: mov     rsp, r11
 * 00000001C0002381: pop     r14
 * 00000001C0002383: retn
 * 00000001C000398E: lea     rax, [rdi+rdi*4]
 * 00000001C0003992: shl     rax, 4
 * 00000001C0003996: add     rcx, rax
 * 00000001C0003999: cmp     [rcx+29h], sil
 * 00000001C000399D: jb      loc_1C0002302
 * 00000001C00039A3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00039AA: lea     rdx, [rsp+68h+arg_38]
 * 00000001C00039B2: mov     rcx, [rcx+18h]
 * 00000001C00039B6: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C00039BD: mov     [rsp+68h+var_18], 0
 * 00000001C00039C6: mov     [rsp+68h+var_20], 4
 * 00000001C00039CF: mov     [rsp+68h+var_28], rdx
 * 00000001C00039D4: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00039DC: mov     [rsp+68h+var_30], 8
 * 00000001C00039E5: mov     [rsp+68h+var_38], rdx
 * 00000001C00039EA: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00039F2: mov     [rsp+68h+var_40], 8
 * 00000001C00039FB: mov     [rsp+68h+var_48], rdx
 * 00000001C0003A00: mov     edx, 2Bh ; '+'
 * 00000001C0003A05: movzx   r9d, bp
 * 00000001C0003A09: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003A0F: nop
 * 00000001C0003A10: jmp     loc_1C0002302
 */
