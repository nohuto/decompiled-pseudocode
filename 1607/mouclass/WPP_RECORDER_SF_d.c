/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0004FC4
 * Callers:
 *     MouConfiguration @ 0x1C000E020 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0004FC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004FC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004FC4: mov     r11, rsp
 * 00000001C0004FC7: mov     [r11+8], rbx
 * 00000001C0004FCB: push    rsi
 * 00000001C0004FCC: sub     rsp, 40h
 * 00000001C0004FD0: mov     rbx, rcx
 * 00000001C0004FD3: mov     esi, 40h ; '@'
 * 00000001C0004FD8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0004FDF: mov     eax, [rcx+2Ch]
 * 00000001C0004FE2: test    al, 1
 * 00000001C0004FE4: jz      short loc_1C0005020
 * 00000001C0004FE6: cmp     byte ptr [rcx+29h], 4
 * 00000001C0004FEA: jb      short loc_1C0005020
 * 00000001C0004FEC: and     qword ptr [r11-18h], 0
 * 00000001C0004FF1: lea     rdx, [r11+30h]
 * 00000001C0004FF5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004FFC: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005003: mov     rcx, [rcx+18h]
 * 00000001C0005007: mov     qword ptr [r11-20h], 4
 * 00000001C000500F: mov     [r11-28h], rdx
 * 00000001C0005013: lea     edx, [rsi-15h]
 * 00000001C0005016: movzx   r9d, si
 * 00000001C000501A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005020: and     [rsp+48h+var_10], 0
 * 00000001C0005026: lea     rax, [rsp+48h+arg_28]
 * 00000001C000502B: mov     edx, 4
 * 00000001C0005030: mov     [rsp+48h+var_18], 4
 * 00000001C0005039: mov     [rsp+48h+var_20], rax
 * 00000001C000503E: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0005045: mov     rcx, rbx
 * 00000001C0005048: mov     [rsp+48h+var_28], si
 * 00000001C000504D: lea     r8d, [rdx-3]
 * 00000001C0005051: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005057: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000505C: add     rsp, 40h
 * 00000001C0005060: pop     rsi
 * 00000001C0005061: retn
 */
