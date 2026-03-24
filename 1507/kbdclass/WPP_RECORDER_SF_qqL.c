/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C0001A00
 * Callers:
 *     KeyboardClassReadCopyData @ 0x1C0004680 (KeyboardClassReadCopyData.c)
 *     KeyboardClassDeviceControl @ 0x1C000C7F0 (KeyboardClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqL @ 0x1C0001A00
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001A00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001A00: mov     [rsp+arg_0], rbx
 * 00000001C0001A05: mov     [rsp+arg_8], rbp
 * 00000001C0001A0A: mov     [rsp+arg_10], rsi
 * 00000001C0001A0F: mov     [rsp+arg_18], rdi
 * 00000001C0001A14: push    r14
 * 00000001C0001A16: sub     rsp, 60h
 * 00000001C0001A1A: mov     ebx, r8d
 * 00000001C0001A1D: mov     r14, rcx
 * 00000001C0001A20: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001A27: movzx   ebp, r9w
 * 00000001C0001A2B: mov     edi, r8d
 * 00000001C0001A2E: movzx   esi, dl
 * 00000001C0001A31: shr     rdi, 10h
 * 00000001C0001A35: lea     r11d, [rbx-1]
 * 00000001C0001A39: mov     r8d, r11d
 * 00000001C0001A3C: and     r11d, 1Fh
 * 00000001C0001A40: shr     r8, 5
 * 00000001C0001A44: and     r8d, 7FFh
 * 00000001C0001A4B: lea     rax, [rdi+rdi*4]
 * 00000001C0001A4F: lea     r10, [r8+rax*4]
 * 00000001C0001A53: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0001A58: bt      eax, r11d
 * 00000001C0001A5C: jb      loc_1C0003422
 * 00000001C0001A62: mov     [rsp+68h+var_10], 0
 * 00000001C0001A6B: lea     rax, [rsp+68h+arg_38]
 * 00000001C0001A73: mov     [rsp+68h+var_18], 4
 * 00000001C0001A7C: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0001A83: mov     [rsp+68h+var_20], rax
 * 00000001C0001A88: mov     r8d, ebx
 * 00000001C0001A8B: mov     [rsp+68h+var_28], 8
 * 00000001C0001A94: lea     rax, [rsp+68h+arg_30]
 * 00000001C0001A9C: mov     [rsp+68h+var_30], rax
 * 00000001C0001AA1: mov     rcx, r14
 * 00000001C0001AA4: lea     rax, [rsp+68h+arg_28]
 * 00000001C0001AAC: mov     [rsp+68h+var_38], 8
 * 00000001C0001AB5: mov     [rsp+68h+var_40], rax
 * 00000001C0001ABA: movzx   edx, sil
 * 00000001C0001ABE: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0001AC3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001AC9: lea     r11, [rsp+68h+var_8]
 * 00000001C0001ACE: mov     rbx, [r11+10h]
 * 00000001C0001AD2: mov     rbp, [r11+18h]
 * 00000001C0001AD6: mov     rsi, [r11+20h]
 * 00000001C0001ADA: mov     rdi, [r11+28h]
 * 00000001C0001ADE: mov     rsp, r11
 * 00000001C0001AE1: pop     r14
 * 00000001C0001AE3: retn
 * 00000001C0003422: lea     rax, [rdi+rdi*4]
 * 00000001C0003426: shl     rax, 4
 * 00000001C000342A: add     rcx, rax
 * 00000001C000342D: cmp     [rcx+29h], sil
 * 00000001C0003431: jb      loc_1C0001A62
 * 00000001C0003437: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000343E: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0003446: mov     rcx, [rcx+18h]
 * 00000001C000344A: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0003451: mov     [rsp+68h+var_18], 0
 * 00000001C000345A: mov     [rsp+68h+var_20], 4
 * 00000001C0003463: mov     [rsp+68h+var_28], rdx
 * 00000001C0003468: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0003470: mov     [rsp+68h+var_30], 8
 * 00000001C0003479: mov     [rsp+68h+var_38], rdx
 * 00000001C000347E: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0003486: mov     [rsp+68h+var_40], 8
 * 00000001C000348F: mov     [rsp+68h+var_48], rdx
 * 00000001C0003494: mov     edx, 2Bh ; '+'
 * 00000001C0003499: movzx   r9d, bp
 * 00000001C000349D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00034A3: nop
 * 00000001C00034A4: jmp     loc_1C0001A62
 */
