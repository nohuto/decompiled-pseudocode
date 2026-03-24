/*
 * XREFs of WPP_RECORDER_SF_LLss @ 0x1C00439F4
 * Callers:
 *     ACPIAssert @ 0x1C0007334 (ACPIAssert.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LLss @ 0x1C00439F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00439F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00439F4: mov     r11, rsp
 * 00000001C00439F7: mov     [r11+8], rbx
 * 00000001C00439FB: mov     [r11+10h], rbp
 * 00000001C00439FF: mov     [r11+18h], rsi
 * 00000001C0043A03: mov     [r11+20h], rdi
 * 00000001C0043A07: push    r14
 * 00000001C0043A09: sub     rsp, 70h
 * 00000001C0043A0D: mov     edi, 5
 * 00000001C0043A12: lea     rbp, aNull_0; "NULL"
 * 00000001C0043A19: mov     rbx, rcx
 * 00000001C0043A1C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043A23: lea     r14d, [rdi+7]
 * 00000001C0043A27: test    dword ptr [rcx+2Ch], 200000h
 * 00000001C0043A2E: lea     esi, [rdi-1]
 * 00000001C0043A31: jz      short loc_1C0043A85
 * 00000001C0043A33: cmp     byte ptr [rcx+29h], 2
 * 00000001C0043A37: jb      short loc_1C0043A85
 * 00000001C0043A39: and     qword ptr [r11-18h], 0
 * 00000001C0043A3E: lea     rdx, [r11+38h]
 * 00000001C0043A42: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0043A49: lea     r8, WPP_db66f502ccd5327f0bbb8755ae72e471_Traceguids
 * 00000001C0043A50: mov     rcx, [rcx+18h]
 * 00000001C0043A54: mov     [r11-20h], rdi
 * 00000001C0043A58: mov     [r11-28h], rbp
 * 00000001C0043A5C: mov     [r11-30h], rdi
 * 00000001C0043A60: mov     [r11-38h], rbp
 * 00000001C0043A64: mov     [r11-40h], rsi
 * 00000001C0043A68: mov     [r11-48h], rdx
 * 00000001C0043A6C: lea     rdx, [r11+30h]
 * 00000001C0043A70: mov     [r11-50h], rsi
 * 00000001C0043A74: mov     [r11-58h], rdx
 * 00000001C0043A78: lea     edx, [rdi+26h]
 * 00000001C0043A7B: movzx   r9d, r14w
 * 00000001C0043A7F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0043A85: and     [rsp+78h+var_10], 0
 * 00000001C0043A8B: lea     rax, [rsp+78h+arg_30]
 * 00000001C0043A93: mov     [rsp+78h+var_18], rdi
 * 00000001C0043A98: lea     r9, WPP_db66f502ccd5327f0bbb8755ae72e471_Traceguids
 * 00000001C0043A9F: mov     [rsp+78h+var_20], rbp
 * 00000001C0043AA4: mov     edx, 2
 * 00000001C0043AA9: mov     [rsp+78h+var_28], rdi
 * 00000001C0043AAE: mov     rcx, rbx
 * 00000001C0043AB1: mov     [rsp+78h+var_30], rbp
 * 00000001C0043AB6: mov     [rsp+78h+var_38], rsi
 * 00000001C0043ABB: mov     [rsp+78h+var_40], rax
 * 00000001C0043AC0: lea     r8d, [rdx+14h]
 * 00000001C0043AC4: lea     rax, [rsp+78h+arg_28]
 * 00000001C0043ACC: mov     [rsp+78h+var_48], rsi
 * 00000001C0043AD1: mov     [rsp+78h+var_50], rax
 * 00000001C0043AD6: mov     [rsp+78h+var_58], r14w
 * 00000001C0043ADC: call    cs:__imp_WppAutoLogTrace
 * 00000001C0043AE2: lea     r11, [rsp+78h+var_8]
 * 00000001C0043AE7: mov     rbx, [r11+10h]
 * 00000001C0043AEB: mov     rbp, [r11+18h]
 * 00000001C0043AEF: mov     rsi, [r11+20h]
 * 00000001C0043AF3: mov     rdi, [r11+28h]
 * 00000001C0043AF7: mov     rsp, r11
 * 00000001C0043AFA: pop     r14
 * 00000001C0043AFC: retn
 */
