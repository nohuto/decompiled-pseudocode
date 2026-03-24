/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0001AF0
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000C540 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000C9D0 (KbdCreateClassObject.c)
 *     KbdConfiguration @ 0x1C000F420 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0001AF0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001AF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001AF0: mov     [rsp+arg_0], rbx
 * 00000001C0001AF5: mov     [rsp+arg_8], rbp
 * 00000001C0001AFA: mov     [rsp+arg_10], rsi
 * 00000001C0001AFF: mov     [rsp+arg_18], rdi
 * 00000001C0001B04: push    r12
 * 00000001C0001B06: push    r14
 * 00000001C0001B08: push    r15
 * 00000001C0001B0A: sub     rsp, 40h
 * 00000001C0001B0E: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0001B16: lea     rbp, aNull; "<NULL>"
 * 00000001C0001B1D: mov     r12, rcx
 * 00000001C0001B20: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0001B24: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001B2B: movzx   r15d, r9w
 * 00000001C0001B2F: movzx   r14d, dl
 * 00000001C0001B33: mov     esi, 0Eh
 * 00000001C0001B38: mov     eax, [rcx+2Ch]
 * 00000001C0001B3B: test    al, 1
 * 00000001C0001B3D: jnz     loc_1C00034AA
 * 00000001C0001B43: test    rdi, rdi
 * 00000001C0001B46: jz      loc_1C0003533
 * 00000001C0001B4C: movzx   eax, word ptr [rdi]
 * 00000001C0001B4F: test    ax, ax
 * 00000001C0001B52: jz      short loc_1C0001B70
 * 00000001C0001B54: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0001B5A: lea     rbx, [rbx+1]
 * 00000001C0001B5E: jnz     short loc_1C0001B54
 * 00000001C0001B60: lea     rsi, ds:2[rbx*2]
 * 00000001C0001B68: test    ax, ax
 * 00000001C0001B6B: jz      short loc_1C0001B70
 * 00000001C0001B6D: mov     rbp, rdi
 * 00000001C0001B70: mov     [rsp+58h+var_20], 0
 * 00000001C0001B79: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0001B80: mov     [rsp+58h+var_28], rsi
 * 00000001C0001B85: mov     r8d, 1
 * 00000001C0001B8B: mov     [rsp+58h+var_30], rbp
 * 00000001C0001B90: mov     rcx, r12
 * 00000001C0001B93: movzx   edx, r14b
 * 00000001C0001B97: mov     word ptr [rsp+58h+var_38], r15w
 * 00000001C0001B9D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001BA3: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0001BA8: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0001BAD: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0001BB2: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0001BB7: add     rsp, 40h
 * 00000001C0001BBB: pop     r15
 * 00000001C0001BBD: pop     r14
 * 00000001C0001BBF: pop     r12
 * 00000001C0001BC1: retn
 * 00000001C00034AA: cmp     [rcx+29h], r14b
 * 00000001C00034AE: jb      loc_1C0001B43
 * 00000001C00034B4: test    rdi, rdi
 * 00000001C00034B7: jz      short loc_1C00034EC
 * 00000001C00034B9: movzx   r9d, word ptr [rdi]
 * 00000001C00034BD: test    r9w, r9w
 * 00000001C00034C1: jnz     short loc_1C00034C8
 * 00000001C00034C3: mov     r8, rsi
 * 00000001C00034C6: jmp     short loc_1C00034DF
 * 00000001C00034C8: mov     rax, rbx
 * 00000001C00034CB: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C00034D1: lea     rax, [rax+1]
 * 00000001C00034D5: jnz     short loc_1C00034CB
 * 00000001C00034D7: lea     r8, ds:2[rax*2]
 * 00000001C00034DF: test    r9w, r9w
 * 00000001C00034E3: mov     rdx, rbp
 * 00000001C00034E6: cmovnz  rdx, rdi
 * 00000001C00034EA: jmp     short loc_1C00034F9
 * 00000001C00034EC: mov     r8d, 0Ah
 * 00000001C00034F2: lea     rdx, aNull_0; "NULL"
 * 00000001C00034F9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003500: mov     rcx, [rcx+18h]
 * 00000001C0003504: mov     [rsp+58h+var_28], 0
 * 00000001C000350D: mov     [rsp+58h+var_30], r8
 * 00000001C0003512: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0003519: mov     [rsp+58h+var_38], rdx
 * 00000001C000351E: mov     edx, 2Bh ; '+'
 * 00000001C0003523: movzx   r9d, r15w
 * 00000001C0003527: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000352D: nop
 * 00000001C000352E: jmp     loc_1C0001B43
 * 00000001C0003533: mov     esi, 0Ah
 * 00000001C0003538: lea     rbp, aNull_0; "NULL"
 * 00000001C000353F: jmp     loc_1C0001B70
 */
