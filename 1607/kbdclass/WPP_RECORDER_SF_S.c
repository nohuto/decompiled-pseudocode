/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0001940
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000C540 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000CAE0 (KbdCreateClassObject.c)
 *     KbdConfiguration @ 0x1C000F420 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0001940
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001940
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001940: mov     [rsp+arg_0], rbx
 * 00000001C0001945: mov     [rsp+arg_8], rbp
 * 00000001C000194A: mov     [rsp+arg_10], rsi
 * 00000001C000194F: mov     [rsp+arg_18], rdi
 * 00000001C0001954: push    r14
 * 00000001C0001956: sub     rsp, 40h
 * 00000001C000195A: mov     rdi, [rsp+48h+arg_28]
 * 00000001C000195F: mov     r14, rcx
 * 00000001C0001962: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001969: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C000196D: movzx   ebp, r9w
 * 00000001C0001971: movzx   esi, dl
 * 00000001C0001974: mov     eax, [rcx+2Ch]
 * 00000001C0001977: test    al, 1
 * 00000001C0001979: jnz     loc_1C0003780
 * 00000001C000197F: test    rdi, rdi
 * 00000001C0001982: jz      loc_1C00037ED
 * 00000001C0001988: nop     dword ptr [rax+rax+00000000h]
 * 00000001C0001990: inc     rbx
 * 00000001C0001993: cmp     word ptr [rdi+rbx*2], 0
 * 00000001C0001998: jnz     short loc_1C0001990
 * 00000001C000199A: inc     rbx
 * 00000001C000199D: mov     [rsp+48h+var_10], 0
 * 00000001C00019A6: lea     r9, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C00019AD: add     rbx, rbx
 * 00000001C00019B0: movzx   edx, sil
 * 00000001C00019B4: mov     [rsp+48h+var_18], rbx
 * 00000001C00019B9: mov     r8d, 1
 * 00000001C00019BF: mov     [rsp+48h+var_20], rdi
 * 00000001C00019C4: mov     rcx, r14
 * 00000001C00019C7: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00019CC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00019D2: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00019D7: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00019DC: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00019E1: mov     rdi, [rsp+48h+arg_18]
 * 00000001C00019E6: add     rsp, 40h
 * 00000001C00019EA: pop     r14
 * 00000001C00019EC: retn
 * 00000001C0003780: cmp     [rcx+29h], sil
 * 00000001C0003784: jb      loc_1C000197F
 * 00000001C000378A: test    rdi, rdi
 * 00000001C000378D: jz      short loc_1C00037A4
 * 00000001C000378F: mov     rdx, rbx
 * 00000001C0003792: inc     rdx
 * 00000001C0003795: cmp     word ptr [rdi+rdx*2], 0
 * 00000001C000379A: jnz     short loc_1C0003792
 * 00000001C000379C: inc     rdx
 * 00000001C000379F: mov     r8, rdi
 * 00000001C00037A2: jmp     short loc_1C00037B0
 * 00000001C00037A4: mov     edx, 5
 * 00000001C00037A9: lea     r8, aNull; "NULL"
 * 00000001C00037B0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00037B7: add     rdx, rdx
 * 00000001C00037BA: mov     rcx, [rcx+18h]
 * 00000001C00037BE: mov     [rsp+48h+var_18], 0
 * 00000001C00037C7: mov     [rsp+48h+var_20], rdx
 * 00000001C00037CC: mov     edx, 2Bh ; '+'
 * 00000001C00037D1: mov     [rsp+48h+var_28], r8
 * 00000001C00037D6: lea     r8, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C00037DD: movzx   r9d, bp
 * 00000001C00037E1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00037E7: nop
 * 00000001C00037E8: jmp     loc_1C000197F
 * 00000001C00037ED: mov     ebx, 5
 * 00000001C00037F2: lea     rdi, aNull; "NULL"
 * 00000001C00037F9: jmp     loc_1C000199D
 */
