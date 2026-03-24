/*
 * XREFs of WPP_RECORDER_SF_qqc @ 0x1C0001A70
 * Callers:
 *     MousePnP @ 0x1C0001880 (MousePnP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqc @ 0x1C0001A70
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001A70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001A70: mov     [rsp+arg_0], rbx
 * 00000001C0001A75: push    rsi
 * 00000001C0001A76: sub     rsp, 60h
 * 00000001C0001A7A: mov     rbx, rcx
 * 00000001C0001A7D: mov     esi, 52h ; 'R'
 * 00000001C0001A82: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0001A89: mov     eax, [rcx+2Ch]
 * 00000001C0001A8C: test    al, 20h
 * 00000001C0001A8E: jnz     loc_1C000406C
 * 00000001C0001A94: mov     [rsp+68h+var_10], 0
 * 00000001C0001A9D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0001AA5: mov     [rsp+68h+var_18], 1
 * 00000001C0001AAE: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0001AB5: mov     [rsp+68h+var_20], rax
 * 00000001C0001ABA: mov     edx, 4
 * 00000001C0001ABF: mov     [rsp+68h+var_28], 8
 * 00000001C0001AC8: lea     rax, [rsp+68h+arg_30]
 * 00000001C0001AD0: mov     [rsp+68h+var_30], rax
 * 00000001C0001AD5: mov     rcx, rbx
 * 00000001C0001AD8: lea     rax, [rsp+68h+arg_28]
 * 00000001C0001AE0: mov     [rsp+68h+var_38], 8
 * 00000001C0001AE9: mov     [rsp+68h+var_40], rax
 * 00000001C0001AEE: lea     r8d, [rdx+2]
 * 00000001C0001AF2: mov     word ptr [rsp+68h+var_48], si
 * 00000001C0001AF7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001AFD: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0001B02: add     rsp, 60h
 * 00000001C0001B06: pop     rsi
 * 00000001C0001B07: retn
 * 00000001C000406C: cmp     byte ptr [rcx+29h], 4
 * 00000001C0004070: jb      loc_1C0001A94
 * 00000001C0004076: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000407D: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0004085: mov     rcx, [rcx+18h]
 * 00000001C0004089: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0004090: mov     [rsp+68h+var_18], 0
 * 00000001C0004099: mov     [rsp+68h+var_20], 1
 * 00000001C00040A2: mov     [rsp+68h+var_28], rdx
 * 00000001C00040A7: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00040AF: mov     [rsp+68h+var_30], 8
 * 00000001C00040B8: mov     [rsp+68h+var_38], rdx
 * 00000001C00040BD: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00040C5: mov     [rsp+68h+var_40], 8
 * 00000001C00040CE: mov     [rsp+68h+var_48], rdx
 * 00000001C00040D3: mov     edx, 2Bh ; '+'
 * 00000001C00040D8: movzx   r9d, si
 * 00000001C00040DC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00040E2: nop
 * 00000001C00040E3: jmp     loc_1C0001A94
 */
