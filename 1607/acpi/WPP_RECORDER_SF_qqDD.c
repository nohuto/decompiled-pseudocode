/*
 * XREFs of WPP_RECORDER_SF_qqDD @ 0x1C0056DC4
 * Callers:
 *     ACPITableNotifyFreeObject @ 0x1C0056A20 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqDD @ 0x1C0056DC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0056DC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0056DC4: mov     r11, rsp
 * 00000001C0056DC7: mov     [r11+8], rbx
 * 00000001C0056DCB: mov     [r11+10h], rbp
 * 00000001C0056DCF: mov     [r11+18h], rsi
 * 00000001C0056DD3: push    rdi
 * 00000001C0056DD4: sub     rsp, 70h
 * 00000001C0056DD8: mov     edi, 4
 * 00000001C0056DDD: mov     rbx, rcx
 * 00000001C0056DE0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0056DE7: lea     ebp, [rdi+8]
 * 00000001C0056DEA: test    dword ptr [rcx+2Ch], 200000h
 * 00000001C0056DF1: lea     esi, [rdi+4]
 * 00000001C0056DF4: jz      short loc_1C0056E50
 * 00000001C0056DF6: cmp     [rcx+29h], dil
 * 00000001C0056DFA: jb      short loc_1C0056E50
 * 00000001C0056DFC: and     qword ptr [r11-18h], 0
 * 00000001C0056E01: lea     rdx, [r11+48h]
 * 00000001C0056E05: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0056E0C: lea     r8, WPP_02eb1c2c891c34645cbc337bb305e2dd_Traceguids
 * 00000001C0056E13: mov     rcx, [rcx+18h]
 * 00000001C0056E17: mov     [r11-20h], rdi
 * 00000001C0056E1B: mov     [r11-28h], rdx
 * 00000001C0056E1F: lea     rdx, [r11+40h]
 * 00000001C0056E23: mov     [r11-30h], rdi
 * 00000001C0056E27: mov     [r11-38h], rdx
 * 00000001C0056E2B: lea     rdx, [r11+38h]
 * 00000001C0056E2F: mov     [r11-40h], rsi
 * 00000001C0056E33: mov     [r11-48h], rdx
 * 00000001C0056E37: lea     rdx, [r11+30h]
 * 00000001C0056E3B: mov     [r11-50h], rsi
 * 00000001C0056E3F: mov     [r11-58h], rdx
 * 00000001C0056E43: lea     edx, [rdi+27h]
 * 00000001C0056E46: movzx   r9d, bp
 * 00000001C0056E4A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0056E50: and     [rsp+78h+var_10], 0
 * 00000001C0056E56: lea     rax, [rsp+78h+arg_40]
 * 00000001C0056E5E: mov     [rsp+78h+var_18], rdi
 * 00000001C0056E63: lea     r9, WPP_02eb1c2c891c34645cbc337bb305e2dd_Traceguids
 * 00000001C0056E6A: mov     [rsp+78h+var_20], rax
 * 00000001C0056E6F: mov     r8d, 16h
 * 00000001C0056E75: mov     [rsp+78h+var_28], rdi
 * 00000001C0056E7A: lea     rax, [rsp+78h+arg_38]
 * 00000001C0056E82: mov     [rsp+78h+var_30], rax
 * 00000001C0056E87: mov     edx, edi
 * 00000001C0056E89: mov     [rsp+78h+var_38], rsi
 * 00000001C0056E8E: lea     rax, [rsp+78h+arg_30]
 * 00000001C0056E96: mov     [rsp+78h+var_40], rax
 * 00000001C0056E9B: mov     rcx, rbx
 * 00000001C0056E9E: lea     rax, [rsp+78h+arg_28]
 * 00000001C0056EA6: mov     [rsp+78h+var_48], rsi
 * 00000001C0056EAB: mov     [rsp+78h+var_50], rax
 * 00000001C0056EB0: mov     [rsp+78h+var_58], bp
 * 00000001C0056EB5: call    cs:__imp_WppAutoLogTrace
 * 00000001C0056EBB: lea     r11, [rsp+78h+var_8]
 * 00000001C0056EC0: mov     rbx, [r11+10h]
 * 00000001C0056EC4: mov     rbp, [r11+18h]
 * 00000001C0056EC8: mov     rsi, [r11+20h]
 * 00000001C0056ECC: mov     rsp, r11
 * 00000001C0056ECF: pop     rdi
 * 00000001C0056ED0: retn
 */
