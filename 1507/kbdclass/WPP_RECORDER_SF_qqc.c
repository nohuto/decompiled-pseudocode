/*
 * XREFs of WPP_RECORDER_SF_qqc @ 0x1C0001E60
 * Callers:
 *     KeyboardPnP @ 0x1C0001C50 (KeyboardPnP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqc @ 0x1C0001E60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001E60: mov     [rsp+arg_0], rbx
 * 00000001C0001E65: push    rsi
 * 00000001C0001E66: sub     rsp, 60h
 * 00000001C0001E6A: mov     rbx, rcx
 * 00000001C0001E6D: mov     esi, 55h ; 'U'
 * 00000001C0001E72: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001E79: mov     eax, [rcx+2Ch]
 * 00000001C0001E7C: test    al, 20h
 * 00000001C0001E7E: jnz     loc_1C0003814
 * 00000001C0001E84: mov     [rsp+68h+var_10], 0
 * 00000001C0001E8D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0001E95: mov     [rsp+68h+var_18], 1
 * 00000001C0001E9E: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0001EA5: mov     [rsp+68h+var_20], rax
 * 00000001C0001EAA: mov     edx, 4
 * 00000001C0001EAF: mov     [rsp+68h+var_28], 8
 * 00000001C0001EB8: lea     rax, [rsp+68h+arg_30]
 * 00000001C0001EC0: mov     [rsp+68h+var_30], rax
 * 00000001C0001EC5: mov     rcx, rbx
 * 00000001C0001EC8: lea     rax, [rsp+68h+arg_28]
 * 00000001C0001ED0: mov     [rsp+68h+var_38], 8
 * 00000001C0001ED9: mov     [rsp+68h+var_40], rax
 * 00000001C0001EDE: lea     r8d, [rdx+2]
 * 00000001C0001EE2: mov     word ptr [rsp+68h+var_48], si
 * 00000001C0001EE7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001EED: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0001EF2: add     rsp, 60h
 * 00000001C0001EF6: pop     rsi
 * 00000001C0001EF7: retn
 * 00000001C0003814: cmp     byte ptr [rcx+29h], 4
 * 00000001C0003818: jb      loc_1C0001E84
 * 00000001C000381E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003825: lea     rdx, [rsp+68h+arg_38]
 * 00000001C000382D: mov     rcx, [rcx+18h]
 * 00000001C0003831: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C0003838: mov     [rsp+68h+var_18], 0
 * 00000001C0003841: mov     [rsp+68h+var_20], 1
 * 00000001C000384A: mov     [rsp+68h+var_28], rdx
 * 00000001C000384F: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0003857: mov     [rsp+68h+var_30], 8
 * 00000001C0003860: mov     [rsp+68h+var_38], rdx
 * 00000001C0003865: lea     rdx, [rsp+68h+arg_28]
 * 00000001C000386D: mov     [rsp+68h+var_40], 8
 * 00000001C0003876: mov     [rsp+68h+var_48], rdx
 * 00000001C000387B: mov     edx, 2Bh ; '+'
 * 00000001C0003880: movzx   r9d, si
 * 00000001C0003884: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000388A: nop
 * 00000001C000388B: jmp     loc_1C0001E84
 */
