/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C00DBC74
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C00DBC74
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DBC74
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DBC74: mov     r11, rsp
 * 00000001C00DBC77: mov     [r11+8], rbx
 * 00000001C00DBC7B: push    rsi
 * 00000001C00DBC7C: sub     rsp, 40h
 * 00000001C00DBC80: mov     rbx, rcx
 * 00000001C00DBC83: mov     esi, 12h
 * 00000001C00DBC88: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00DBC8F: mov     eax, [rcx+2Ch]
 * 00000001C00DBC92: test    al, 8
 * 00000001C00DBC94: jz      short loc_1C00DBCD0
 * 00000001C00DBC96: cmp     byte ptr [rcx+29h], 3
 * 00000001C00DBC9A: jb      short loc_1C00DBCD0
 * 00000001C00DBC9C: and     qword ptr [r11-18h], 0
 * 00000001C00DBCA1: lea     rdx, [r11+30h]
 * 00000001C00DBCA5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00DBCAC: lea     r8, WPP_8981bbd0d82c39b705fac429922c1527_Traceguids
 * 00000001C00DBCB3: mov     rcx, [rcx+18h]
 * 00000001C00DBCB7: mov     qword ptr [r11-20h], 8
 * 00000001C00DBCBF: mov     [r11-28h], rdx
 * 00000001C00DBCC3: lea     edx, [rsi+19h]
 * 00000001C00DBCC6: movzx   r9d, si
 * 00000001C00DBCCA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00DBCD0: and     [rsp+48h+var_10], 0
 * 00000001C00DBCD6: lea     rax, [rsp+48h+arg_28]
 * 00000001C00DBCDB: mov     edx, 3
 * 00000001C00DBCE0: mov     [rsp+48h+var_18], 8
 * 00000001C00DBCE9: mov     [rsp+48h+var_20], rax
 * 00000001C00DBCEE: lea     r9, WPP_8981bbd0d82c39b705fac429922c1527_Traceguids
 * 00000001C00DBCF5: mov     rcx, rbx
 * 00000001C00DBCF8: mov     [rsp+48h+var_28], si
 * 00000001C00DBCFD: lea     r8d, [rdx+1]
 * 00000001C00DBD01: call    cs:__imp_WppAutoLogTrace
 * 00000001C00DBD07: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00DBD0C: add     rsp, 40h
 * 00000001C00DBD10: pop     rsi
 * 00000001C00DBD11: retn
 */
