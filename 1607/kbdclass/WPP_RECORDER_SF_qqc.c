/*
 * XREFs of WPP_RECORDER_SF_qqc @ 0x1C0001C80
 * Callers:
 *     KeyboardPnP @ 0x1C0001A70 (KeyboardPnP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqc @ 0x1C0001C80
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001C80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001C80: mov     [rsp+arg_0], rbx
 * 00000001C0001C85: push    rsi
 * 00000001C0001C86: sub     rsp, 60h
 * 00000001C0001C8A: mov     rbx, rcx
 * 00000001C0001C8D: mov     esi, 55h ; 'U'
 * 00000001C0001C92: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001C99: mov     eax, [rcx+2Ch]
 * 00000001C0001C9C: test    al, 20h
 * 00000001C0001C9E: jnz     loc_1C0003ACE
 * 00000001C0001CA4: mov     [rsp+68h+var_10], 0
 * 00000001C0001CAD: lea     rax, [rsp+68h+arg_38]
 * 00000001C0001CB5: mov     [rsp+68h+var_18], 1
 * 00000001C0001CBE: lea     r9, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C0001CC5: mov     [rsp+68h+var_20], rax
 * 00000001C0001CCA: mov     edx, 4
 * 00000001C0001CCF: mov     [rsp+68h+var_28], 8
 * 00000001C0001CD8: lea     rax, [rsp+68h+arg_30]
 * 00000001C0001CE0: mov     [rsp+68h+var_30], rax
 * 00000001C0001CE5: mov     rcx, rbx
 * 00000001C0001CE8: lea     rax, [rsp+68h+arg_28]
 * 00000001C0001CF0: mov     [rsp+68h+var_38], 8
 * 00000001C0001CF9: mov     [rsp+68h+var_40], rax
 * 00000001C0001CFE: lea     r8d, [rdx+2]
 * 00000001C0001D02: mov     word ptr [rsp+68h+var_48], si
 * 00000001C0001D07: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001D0D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0001D12: add     rsp, 60h
 * 00000001C0001D16: pop     rsi
 * 00000001C0001D17: retn
 * 00000001C0003ACE: cmp     byte ptr [rcx+29h], 4
 * 00000001C0003AD2: jb      loc_1C0001CA4
 * 00000001C0003AD8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003ADF: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0003AE7: mov     rcx, [rcx+18h]
 * 00000001C0003AEB: lea     r8, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C0003AF2: mov     [rsp+68h+var_18], 0
 * 00000001C0003AFB: mov     [rsp+68h+var_20], 1
 * 00000001C0003B04: mov     [rsp+68h+var_28], rdx
 * 00000001C0003B09: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0003B11: mov     [rsp+68h+var_30], 8
 * 00000001C0003B1A: mov     [rsp+68h+var_38], rdx
 * 00000001C0003B1F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0003B27: mov     [rsp+68h+var_40], 8
 * 00000001C0003B30: mov     [rsp+68h+var_48], rdx
 * 00000001C0003B35: mov     edx, 2Bh ; '+'
 * 00000001C0003B3A: movzx   r9d, si
 * 00000001C0003B3E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003B44: nop
 * 00000001C0003B45: jmp     loc_1C0001CA4
 */
