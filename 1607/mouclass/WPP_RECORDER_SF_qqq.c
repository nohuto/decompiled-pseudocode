/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C0005C6C
 * Callers:
 *     MouseClassClose @ 0x1C0001000 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C0001110 (MouseClassCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqq @ 0x1C0005C6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005C6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005C6C: mov     r11, rsp
 * 00000001C0005C6F: mov     [r11+8], rbx
 * 00000001C0005C73: mov     [r11+10h], rbp
 * 00000001C0005C77: push    rdi
 * 00000001C0005C78: sub     rsp, 60h
 * 00000001C0005C7C: mov     rdi, rcx
 * 00000001C0005C7F: movzx   ebx, r9w
 * 00000001C0005C83: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005C8A: mov     ebp, 8
 * 00000001C0005C8F: mov     eax, [rcx+2Ch]
 * 00000001C0005C92: test    al, 2
 * 00000001C0005C94: jz      short loc_1C0005CE4
 * 00000001C0005C96: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005C9A: jb      short loc_1C0005CE4
 * 00000001C0005C9C: and     qword ptr [r11-18h], 0
 * 00000001C0005CA1: lea     rdx, [r11+40h]
 * 00000001C0005CA5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005CAC: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005CB3: mov     rcx, [rcx+18h]
 * 00000001C0005CB7: mov     [r11-20h], rbp
 * 00000001C0005CBB: mov     [r11-28h], rdx
 * 00000001C0005CBF: lea     rdx, [r11+38h]
 * 00000001C0005CC3: mov     [r11-30h], rbp
 * 00000001C0005CC7: mov     [r11-38h], rdx
 * 00000001C0005CCB: lea     rdx, [r11+30h]
 * 00000001C0005CCF: mov     [r11-40h], rbp
 * 00000001C0005CD3: mov     [r11-48h], rdx
 * 00000001C0005CD7: lea     edx, [rbp+23h]
 * 00000001C0005CDA: movzx   r9d, bx
 * 00000001C0005CDE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005CE4: and     [rsp+68h+var_10], 0
 * 00000001C0005CEA: lea     rax, [rsp+68h+arg_38]
 * 00000001C0005CF2: mov     [rsp+68h+var_18], rbp
 * 00000001C0005CF7: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005CFE: mov     [rsp+68h+var_20], rax
 * 00000001C0005D03: mov     edx, 2
 * 00000001C0005D08: mov     [rsp+68h+var_28], rbp
 * 00000001C0005D0D: lea     rax, [rsp+68h+arg_30]
 * 00000001C0005D15: mov     [rsp+68h+var_30], rax
 * 00000001C0005D1A: mov     r8d, edx
 * 00000001C0005D1D: lea     rax, [rsp+68h+arg_28]
 * 00000001C0005D25: mov     [rsp+68h+var_38], rbp
 * 00000001C0005D2A: mov     [rsp+68h+var_40], rax
 * 00000001C0005D2F: mov     rcx, rdi
 * 00000001C0005D32: mov     [rsp+68h+var_48], bx
 * 00000001C0005D37: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005D3D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0005D42: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0005D47: add     rsp, 60h
 * 00000001C0005D4B: pop     rdi
 * 00000001C0005D4C: retn
 */
