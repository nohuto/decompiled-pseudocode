/*
 * XREFs of WPP_RECORDER_SF_DDq @ 0x1C0013860
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0087020 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDq @ 0x1C0013860
 * Reason: Hex-Rays returned no pseudocode for 0x1C0013860
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0013860: mov     [rsp+arg_0], rbx
 * 00000001C0013865: mov     [rsp+arg_8], rbp
 * 00000001C001386A: push    rdi
 * 00000001C001386B: sub     rsp, 60h
 * 00000001C001386F: mov     rbx, rcx
 * 00000001C0013872: mov     edi, 4
 * 00000001C0013877: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001387E: lea     ebp, [rdi+0Fh]
 * 00000001C0013881: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C0013888: jnz     loc_1C0036176
 * 00000001C001388E: and     [rsp+68h+var_10], 0
 * 00000001C0013894: lea     rax, [rsp+68h+arg_38]
 * 00000001C001389C: mov     [rsp+68h+var_18], 8
 * 00000001C00138A5: lea     r9, WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids
 * 00000001C00138AC: mov     [rsp+68h+var_20], rax
 * 00000001C00138B1: mov     r8d, 14h
 * 00000001C00138B7: mov     [rsp+68h+var_28], rdi
 * 00000001C00138BC: lea     rax, [rsp+68h+arg_30]
 * 00000001C00138C4: mov     [rsp+68h+var_30], rax
 * 00000001C00138C9: mov     edx, edi
 * 00000001C00138CB: lea     rax, [rsp+68h+arg_28]
 * 00000001C00138D3: mov     [rsp+68h+var_38], rdi
 * 00000001C00138D8: mov     [rsp+68h+var_40], rax
 * 00000001C00138DD: mov     rcx, rbx
 * 00000001C00138E0: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00138E5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00138EB: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00138F0: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00138F5: add     rsp, 60h
 * 00000001C00138F9: pop     rdi
 * 00000001C00138FA: retn
 * 00000001C0036176: cmp     [rcx+29h], dil
 * 00000001C003617A: jb      loc_1C001388E
 * 00000001C0036180: and     [rsp+68h+var_18], 0
 * 00000001C0036186: lea     rdx, [rsp+68h+arg_38]
 * 00000001C003618E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0036195: lea     r8, WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids
 * 00000001C003619C: mov     rcx, [rcx+18h]
 * 00000001C00361A0: mov     [rsp+68h+var_20], 8
 * 00000001C00361A9: mov     [rsp+68h+var_28], rdx
 * 00000001C00361AE: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00361B6: mov     [rsp+68h+var_30], rdi
 * 00000001C00361BB: mov     [rsp+68h+var_38], rdx
 * 00000001C00361C0: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00361C8: mov     [rsp+68h+var_40], rdi
 * 00000001C00361CD: mov     [rsp+68h+var_48], rdx
 * 00000001C00361D2: mov     edx, 2Bh ; '+'
 * 00000001C00361D7: movzx   r9d, bp
 * 00000001C00361DB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00361E1: nop
 * 00000001C00361E2: jmp     loc_1C001388E
 */
