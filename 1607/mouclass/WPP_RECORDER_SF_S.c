/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0002390
 * Callers:
 *     MouseAddDeviceEx @ 0x1C000B420 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 *     MouConfiguration @ 0x1C000E020 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0002390
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002390
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002390: mov     [rsp+arg_0], rbx
 * 00000001C0002395: mov     [rsp+arg_8], rbp
 * 00000001C000239A: mov     [rsp+arg_10], rsi
 * 00000001C000239F: mov     [rsp+arg_18], rdi
 * 00000001C00023A4: push    r12
 * 00000001C00023A6: push    r14
 * 00000001C00023A8: push    r15
 * 00000001C00023AA: sub     rsp, 40h
 * 00000001C00023AE: mov     rdi, [rsp+58h+arg_28]
 * 00000001C00023B6: mov     r12, rcx
 * 00000001C00023B9: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00023C0: movzx   r14d, dl
 * 00000001C00023C4: mov     ebp, r8d
 * 00000001C00023C7: movzx   r15d, r9w
 * 00000001C00023CB: mov     esi, r8d
 * 00000001C00023CE: shr     rsi, 10h
 * 00000001C00023D2: lea     ebx, [rbp-1]
 * 00000001C00023D5: mov     r10d, ebx
 * 00000001C00023D8: and     ebx, 1Fh
 * 00000001C00023DB: shr     r10, 5
 * 00000001C00023DF: lea     rax, [rsi+rsi*4]
 * 00000001C00023E3: and     r10d, 7FFh
 * 00000001C00023EA: mov     edx, ebx
 * 00000001C00023EC: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00023F0: lea     r11, [r10+rax*4]
 * 00000001C00023F4: mov     eax, [rcx+r11*4+2Ch]
 * 00000001C00023F9: bt      eax, edx
 * 00000001C00023FC: jb      loc_1C0003A16
 * 00000001C0002402: test    rdi, rdi
 * 00000001C0002405: jz      loc_1C0003A8E
 * 00000001C000240B: nop     dword ptr [rax+rax+00h]
 * 00000001C0002410: inc     rbx
 * 00000001C0002413: cmp     word ptr [rdi+rbx*2], 0
 * 00000001C0002418: jnz     short loc_1C0002410
 * 00000001C000241A: inc     rbx
 * 00000001C000241D: mov     [rsp+58h+var_20], 0
 * 00000001C0002426: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C000242D: add     rbx, rbx
 * 00000001C0002430: movzx   edx, r14b
 * 00000001C0002434: mov     [rsp+58h+var_28], rbx
 * 00000001C0002439: mov     r8d, ebp
 * 00000001C000243C: mov     [rsp+58h+var_30], rdi
 * 00000001C0002441: mov     rcx, r12
 * 00000001C0002444: mov     word ptr [rsp+58h+var_38], r15w
 * 00000001C000244A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002450: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002455: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000245A: mov     rsi, [rsp+58h+arg_10]
 * 00000001C000245F: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0002464: add     rsp, 40h
 * 00000001C0002468: pop     r15
 * 00000001C000246A: pop     r14
 * 00000001C000246C: pop     r12
 * 00000001C000246E: retn
 * 00000001C0003A16: lea     r10, [rsi+rsi*4]
 * 00000001C0003A1A: shl     r10, 4
 * 00000001C0003A1E: add     r10, rcx
 * 00000001C0003A21: cmp     [r10+29h], r14b
 * 00000001C0003A25: jb      loc_1C0002402
 * 00000001C0003A2B: test    rdi, rdi
 * 00000001C0003A2E: jz      short loc_1C0003A45
 * 00000001C0003A30: mov     rdx, rbx
 * 00000001C0003A33: inc     rdx
 * 00000001C0003A36: cmp     word ptr [rdi+rdx*2], 0
 * 00000001C0003A3B: jnz     short loc_1C0003A33
 * 00000001C0003A3D: inc     rdx
 * 00000001C0003A40: mov     rcx, rdi
 * 00000001C0003A43: jmp     short loc_1C0003A51
 * 00000001C0003A45: mov     edx, 5
 * 00000001C0003A4A: lea     rcx, aNull; "NULL"
 * 00000001C0003A51: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003A58: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0003A5F: add     rdx, rdx
 * 00000001C0003A62: mov     [rsp+58h+var_28], 0
 * 00000001C0003A6B: mov     [rsp+58h+var_30], rdx
 * 00000001C0003A70: mov     edx, 2Bh ; '+'
 * 00000001C0003A75: mov     [rsp+58h+var_38], rcx
 * 00000001C0003A7A: mov     rcx, [r10+18h]
 * 00000001C0003A7E: movzx   r9d, r15w
 * 00000001C0003A82: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003A88: nop
 * 00000001C0003A89: jmp     loc_1C0002402
 * 00000001C0003A8E: mov     ebx, 5
 * 00000001C0003A93: lea     rdi, aNull; "NULL"
 * 00000001C0003A9A: jmp     loc_1C000241D
 */
