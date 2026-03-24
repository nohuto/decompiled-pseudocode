/*
 * XREFs of WPP_RECORDER_SF_qDD @ 0x1C00543C4
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C00532DC (AcpiConvertPackageArgumentToPackageObj.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDD @ 0x1C00543C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00543C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00543C4: mov     r11, rsp
 * 00000001C00543C7: mov     [r11+8], rbx
 * 00000001C00543CB: mov     [r11+10h], rbp
 * 00000001C00543CF: push    rdi
 * 00000001C00543D0: sub     rsp, 60h
 * 00000001C00543D4: mov     rbx, rcx
 * 00000001C00543D7: mov     ebp, 1Dh
 * 00000001C00543DC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00543E3: lea     edi, [rbp-19h]
 * 00000001C00543E6: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C00543ED: jz      short loc_1C0054441
 * 00000001C00543EF: cmp     byte ptr [rcx+29h], 2
 * 00000001C00543F3: jb      short loc_1C0054441
 * 00000001C00543F5: and     qword ptr [r11-18h], 0
 * 00000001C00543FA: lea     rdx, [r11+40h]
 * 00000001C00543FE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0054405: lea     r8, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C005440C: mov     rcx, [rcx+18h]
 * 00000001C0054410: mov     [r11-20h], rdi
 * 00000001C0054414: mov     [r11-28h], rdx
 * 00000001C0054418: lea     rdx, [r11+38h]
 * 00000001C005441C: mov     [r11-30h], rdi
 * 00000001C0054420: mov     [r11-38h], rdx
 * 00000001C0054424: lea     rdx, [r11+30h]
 * 00000001C0054428: mov     qword ptr [r11-40h], 8
 * 00000001C0054430: mov     [r11-48h], rdx
 * 00000001C0054434: lea     edx, [rbp+0Eh]
 * 00000001C0054437: movzx   r9d, bp
 * 00000001C005443B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054441: and     [rsp+68h+var_10], 0
 * 00000001C0054447: lea     rax, [rsp+68h+arg_38]
 * 00000001C005444F: mov     [rsp+68h+var_18], rdi
 * 00000001C0054454: lea     r9, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C005445B: mov     [rsp+68h+var_20], rax
 * 00000001C0054460: mov     edx, 2
 * 00000001C0054465: mov     [rsp+68h+var_28], rdi
 * 00000001C005446A: lea     rax, [rsp+68h+arg_30]
 * 00000001C0054472: mov     [rsp+68h+var_30], rax
 * 00000001C0054477: mov     rcx, rbx
 * 00000001C005447A: lea     rax, [rsp+68h+arg_28]
 * 00000001C0054482: mov     [rsp+68h+var_38], 8
 * 00000001C005448B: mov     [rsp+68h+var_40], rax
 * 00000001C0054490: lea     r8d, [rdx+13h]
 * 00000001C0054494: mov     [rsp+68h+var_48], bp
 * 00000001C0054499: call    cs:__imp_WppAutoLogTrace
 * 00000001C005449F: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00544A4: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00544A9: add     rsp, 60h
 * 00000001C00544AD: pop     rdi
 * 00000001C00544AE: retn
 */
