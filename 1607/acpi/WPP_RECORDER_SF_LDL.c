/*
 * XREFs of WPP_RECORDER_SF_LDL @ 0x1C0051CB0
 * Callers:
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051808 (OSNotifyDeviceWakeByGPEEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LDL @ 0x1C0051CB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0051CB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0051CB0: mov     r11, rsp
 * 00000001C0051CB3: mov     [r11+8], rbx
 * 00000001C0051CB7: mov     [r11+10h], rsi
 * 00000001C0051CBB: push    rdi
 * 00000001C0051CBC: sub     rsp, 60h
 * 00000001C0051CC0: mov     rbx, rcx
 * 00000001C0051CC3: mov     edi, 4
 * 00000001C0051CC8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0051CCF: lea     esi, [rdi+1Bh]
 * 00000001C0051CD2: test    dword ptr [rcx+2Ch], 10000h
 * 00000001C0051CD9: jz      short loc_1C0051D29
 * 00000001C0051CDB: cmp     [rcx+29h], dil
 * 00000001C0051CDF: jb      short loc_1C0051D29
 * 00000001C0051CE1: and     qword ptr [r11-18h], 0
 * 00000001C0051CE6: lea     rdx, [r11+40h]
 * 00000001C0051CEA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0051CF1: lea     r8, WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids
 * 00000001C0051CF8: mov     rcx, [rcx+18h]
 * 00000001C0051CFC: mov     [r11-20h], rdi
 * 00000001C0051D00: mov     [r11-28h], rdx
 * 00000001C0051D04: lea     rdx, [r11+38h]
 * 00000001C0051D08: mov     [r11-30h], rdi
 * 00000001C0051D0C: mov     [r11-38h], rdx
 * 00000001C0051D10: lea     rdx, [r11+30h]
 * 00000001C0051D14: mov     [r11-40h], rdi
 * 00000001C0051D18: mov     [r11-48h], rdx
 * 00000001C0051D1C: lea     edx, [rdi+27h]
 * 00000001C0051D1F: movzx   r9d, si
 * 00000001C0051D23: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0051D29: and     [rsp+68h+var_10], 0
 * 00000001C0051D2F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0051D37: mov     [rsp+68h+var_18], rdi
 * 00000001C0051D3C: lea     r9, WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids
 * 00000001C0051D43: mov     [rsp+68h+var_20], rax
 * 00000001C0051D48: mov     r8d, 11h
 * 00000001C0051D4E: mov     [rsp+68h+var_28], rdi
 * 00000001C0051D53: lea     rax, [rsp+68h+arg_30]
 * 00000001C0051D5B: mov     [rsp+68h+var_30], rax
 * 00000001C0051D60: mov     edx, edi
 * 00000001C0051D62: lea     rax, [rsp+68h+arg_28]
 * 00000001C0051D6A: mov     [rsp+68h+var_38], rdi
 * 00000001C0051D6F: mov     [rsp+68h+var_40], rax
 * 00000001C0051D74: mov     rcx, rbx
 * 00000001C0051D77: mov     [rsp+68h+var_48], si
 * 00000001C0051D7C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0051D82: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0051D87: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0051D8C: add     rsp, 60h
 * 00000001C0051D90: pop     rdi
 * 00000001C0051D91: retn
 */
