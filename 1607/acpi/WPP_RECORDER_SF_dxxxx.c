/*
 * XREFs of WPP_RECORDER_SF_dxxxx @ 0x1C0055AC4
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C000A9AC (ACPIRangeValidatePciResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dxxxx @ 0x1C0055AC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055AC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055AC4: mov     r11, rsp
 * 00000001C0055AC7: mov     [r11+8], rbx
 * 00000001C0055ACB: mov     [r11+10h], rsi
 * 00000001C0055ACF: push    rdi
 * 00000001C0055AD0: sub     rsp, 80h
 * 00000001C0055AD7: mov     rdi, rcx
 * 00000001C0055ADA: movzx   ebx, r9w
 * 00000001C0055ADE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0055AE5: mov     esi, 8
 * 00000001C0055AEA: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C0055AF1: jz      short loc_1C0055B5D
 * 00000001C0055AF3: cmp     byte ptr [rcx+29h], 2
 * 00000001C0055AF7: jb      short loc_1C0055B5D
 * 00000001C0055AF9: and     qword ptr [r11-18h], 0
 * 00000001C0055AFE: lea     rdx, [r11+50h]
 * 00000001C0055B02: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0055B09: lea     r8, WPP_f03c5da326113bd9ca6ac78acf399cb9_Traceguids
 * 00000001C0055B10: mov     rcx, [rcx+18h]
 * 00000001C0055B14: mov     [r11-20h], rsi
 * 00000001C0055B18: mov     [r11-28h], rdx
 * 00000001C0055B1C: lea     rdx, [r11+48h]
 * 00000001C0055B20: mov     [r11-30h], rsi
 * 00000001C0055B24: mov     [r11-38h], rdx
 * 00000001C0055B28: lea     rdx, [r11+40h]
 * 00000001C0055B2C: mov     [r11-40h], rsi
 * 00000001C0055B30: mov     [r11-48h], rdx
 * 00000001C0055B34: lea     rdx, [r11+38h]
 * 00000001C0055B38: mov     [r11-50h], rsi
 * 00000001C0055B3C: mov     [r11-58h], rdx
 * 00000001C0055B40: lea     rdx, [r11+30h]
 * 00000001C0055B44: mov     qword ptr [r11-60h], 4
 * 00000001C0055B4C: mov     [r11-68h], rdx
 * 00000001C0055B50: lea     edx, [rsi+23h]
 * 00000001C0055B53: movzx   r9d, bx
 * 00000001C0055B57: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0055B5D: and     [rsp+88h+var_10], 0
 * 00000001C0055B63: lea     rax, [rsp+88h+arg_48]
 * 00000001C0055B6B: mov     [rsp+88h+var_18], rsi
 * 00000001C0055B70: lea     r9, WPP_f03c5da326113bd9ca6ac78acf399cb9_Traceguids
 * 00000001C0055B77: mov     [rsp+88h+var_20], rax
 * 00000001C0055B7C: mov     edx, 2
 * 00000001C0055B81: mov     [rsp+88h+var_28], rsi
 * 00000001C0055B86: lea     rax, [rsp+88h+arg_40]
 * 00000001C0055B8E: mov     [rsp+88h+var_30], rax
 * 00000001C0055B93: mov     rcx, rdi
 * 00000001C0055B96: mov     [rsp+88h+var_38], rsi
 * 00000001C0055B9B: lea     rax, [rsp+88h+arg_38]
 * 00000001C0055BA3: mov     [rsp+88h+var_40], rax
 * 00000001C0055BA8: lea     r8d, [rdx+0Bh]
 * 00000001C0055BAC: mov     [rsp+88h+var_48], rsi
 * 00000001C0055BB1: lea     rax, [rsp+88h+arg_30]
 * 00000001C0055BB9: mov     [rsp+88h+var_50], rax
 * 00000001C0055BBE: lea     rax, [rsp+88h+arg_28]
 * 00000001C0055BC6: mov     [rsp+88h+var_58], 4
 * 00000001C0055BCF: mov     [rsp+88h+var_60], rax
 * 00000001C0055BD4: mov     [rsp+88h+var_68], bx
 * 00000001C0055BD9: call    cs:__imp_WppAutoLogTrace
 * 00000001C0055BDF: lea     r11, [rsp+88h+var_8]
 * 00000001C0055BE7: mov     rbx, [r11+10h]
 * 00000001C0055BEB: mov     rsi, [r11+18h]
 * 00000001C0055BEF: mov     rsp, r11
 * 00000001C0055BF2: pop     rdi
 * 00000001C0055BF3: retn
 */
