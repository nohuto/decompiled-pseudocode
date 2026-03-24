/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C0055D50
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0080CBC (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C0055D50
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055D50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055D50: mov     r11, rsp
 * 00000001C0055D53: mov     [r11+8], rbx
 * 00000001C0055D57: mov     [r11+10h], rsi
 * 00000001C0055D5B: push    rdi
 * 00000001C0055D5C: sub     rsp, 50h
 * 00000001C0055D60: mov     rbx, rcx
 * 00000001C0055D63: mov     esi, 21h ; '!'
 * 00000001C0055D68: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0055D6F: lea     edi, [rsi-1Dh]
 * 00000001C0055D72: test    dword ptr [rcx+2Ch], 400h
 * 00000001C0055D79: jz      short loc_1C0055DBD
 * 00000001C0055D7B: cmp     byte ptr [rcx+29h], 2
 * 00000001C0055D7F: jb      short loc_1C0055DBD
 * 00000001C0055D81: and     qword ptr [r11-18h], 0
 * 00000001C0055D86: lea     rdx, [r11+38h]
 * 00000001C0055D8A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0055D91: lea     r8, WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids
 * 00000001C0055D98: mov     rcx, [rcx+18h]
 * 00000001C0055D9C: mov     [r11-20h], rdi
 * 00000001C0055DA0: mov     [r11-28h], rdx
 * 00000001C0055DA4: lea     rdx, [r11+30h]
 * 00000001C0055DA8: mov     [r11-30h], rdi
 * 00000001C0055DAC: mov     [r11-38h], rdx
 * 00000001C0055DB0: lea     edx, [rsi+0Ah]
 * 00000001C0055DB3: movzx   r9d, si
 * 00000001C0055DB7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0055DBD: and     [rsp+58h+var_10], 0
 * 00000001C0055DC3: lea     rax, [rsp+58h+arg_30]
 * 00000001C0055DCB: mov     [rsp+58h+var_18], rdi
 * 00000001C0055DD0: lea     r9, WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids
 * 00000001C0055DD7: mov     [rsp+58h+var_20], rax
 * 00000001C0055DDC: mov     edx, 2
 * 00000001C0055DE1: lea     rax, [rsp+58h+arg_28]
 * 00000001C0055DE9: mov     [rsp+58h+var_28], rdi
 * 00000001C0055DEE: mov     [rsp+58h+var_30], rax
 * 00000001C0055DF3: mov     rcx, rbx
 * 00000001C0055DF6: mov     [rsp+58h+var_38], si
 * 00000001C0055DFB: lea     r8d, [rdx+9]
 * 00000001C0055DFF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0055E05: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0055E0A: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0055E0F: add     rsp, 50h
 * 00000001C0055E13: pop     rdi
 * 00000001C0055E14: retn
 */
