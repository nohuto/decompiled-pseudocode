/*
 * XREFs of WPP_RECORDER_SF_x @ 0x1C0055F8C
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C009EFF0 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C009F3C4 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_x @ 0x1C0055F8C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055F8C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055F8C: mov     [rsp+arg_0], rbx
 * 00000001C0055F91: mov     [rsp+arg_8], rbp
 * 00000001C0055F96: mov     [rsp+arg_10], rsi
 * 00000001C0055F9B: push    rdi
 * 00000001C0055F9C: sub     rsp, 40h
 * 00000001C0055FA0: mov     esi, r8d
 * 00000001C0055FA3: movzx   edi, r9w
 * 00000001C0055FA7: mov     ebx, r8d
 * 00000001C0055FAA: mov     rbp, rcx
 * 00000001C0055FAD: shr     rbx, 10h
 * 00000001C0055FB1: lea     r11d, [rsi-1]
 * 00000001C0055FB5: mov     edx, r11d
 * 00000001C0055FB8: and     r11d, 1Fh
 * 00000001C0055FBC: shr     rdx, 5
 * 00000001C0055FC0: lea     rax, [rbx+rbx*4]
 * 00000001C0055FC4: and     edx, 7FFh
 * 00000001C0055FCA: lea     r10, [rdx+rax*4]
 * 00000001C0055FCE: mov     edx, r11d
 * 00000001C0055FD1: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0055FD8: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0055FDD: bt      eax, edx
 * 00000001C0055FE0: jnb     short loc_1C005602A
 * 00000001C0055FE2: lea     rcx, [rbx+rbx*4]
 * 00000001C0055FE6: add     rcx, rcx
 * 00000001C0055FE9: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C0055FEF: jb      short loc_1C005602A
 * 00000001C0055FF1: and     [rsp+48h+var_18], 0
 * 00000001C0055FF7: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0055FFC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0056003: mov     r8, [rsp+48h+arg_20]
 * 00000001C0056008: mov     rcx, [r11+rcx*8+18h]
 * 00000001C005600D: mov     [rsp+48h+var_20], 8
 * 00000001C0056016: mov     [rsp+48h+var_28], rdx
 * 00000001C005601B: mov     edx, 2Bh ; '+'
 * 00000001C0056020: movzx   r9d, r9w
 * 00000001C0056024: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005602A: and     [rsp+48h+var_10], 0
 * 00000001C0056030: lea     rax, [rsp+48h+arg_28]
 * 00000001C0056035: mov     r9, [rsp+48h+arg_20]
 * 00000001C005603A: mov     r8d, esi
 * 00000001C005603D: mov     [rsp+48h+var_18], 8
 * 00000001C0056046: mov     edx, 2
 * 00000001C005604B: mov     [rsp+48h+var_20], rax
 * 00000001C0056050: mov     rcx, rbp
 * 00000001C0056053: mov     word ptr [rsp+48h+var_28], di
 * 00000001C0056058: call    cs:__imp_WppAutoLogTrace
 * 00000001C005605E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0056063: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0056068: mov     rsi, [rsp+48h+arg_10]
 * 00000001C005606D: add     rsp, 40h
 * 00000001C0056071: pop     rdi
 * 00000001C0056072: retn
 */
