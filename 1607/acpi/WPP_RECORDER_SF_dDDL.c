/*
 * XREFs of WPP_RECORDER_SF_dDDL @ 0x1C00555D0
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C000A9AC (ACPIRangeValidatePciResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDDL @ 0x1C00555D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00555D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00555D0: mov     r11, rsp
 * 00000001C00555D3: mov     [r11+8], rbx
 * 00000001C00555D7: mov     [r11+10h], rsi
 * 00000001C00555DB: push    rdi
 * 00000001C00555DC: sub     rsp, 70h
 * 00000001C00555E0: mov     rbx, rcx
 * 00000001C00555E3: mov     edi, 4
 * 00000001C00555E8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00555EF: lea     esi, [rdi+0Fh]
 * 00000001C00555F2: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C00555F9: jz      short loc_1C0055655
 * 00000001C00555FB: cmp     [rcx+29h], dil
 * 00000001C00555FF: jb      short loc_1C0055655
 * 00000001C0055601: and     qword ptr [r11-18h], 0
 * 00000001C0055606: lea     rdx, [r11+48h]
 * 00000001C005560A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0055611: lea     r8, WPP_f03c5da326113bd9ca6ac78acf399cb9_Traceguids
 * 00000001C0055618: mov     rcx, [rcx+18h]
 * 00000001C005561C: mov     [r11-20h], rdi
 * 00000001C0055620: mov     [r11-28h], rdx
 * 00000001C0055624: lea     rdx, [r11+40h]
 * 00000001C0055628: mov     [r11-30h], rdi
 * 00000001C005562C: mov     [r11-38h], rdx
 * 00000001C0055630: lea     rdx, [r11+38h]
 * 00000001C0055634: mov     [r11-40h], rdi
 * 00000001C0055638: mov     [r11-48h], rdx
 * 00000001C005563C: lea     rdx, [r11+30h]
 * 00000001C0055640: mov     [r11-50h], rdi
 * 00000001C0055644: mov     [r11-58h], rdx
 * 00000001C0055648: lea     edx, [rdi+27h]
 * 00000001C005564B: movzx   r9d, si
 * 00000001C005564F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0055655: and     [rsp+78h+var_10], 0
 * 00000001C005565B: lea     rax, [rsp+78h+arg_40]
 * 00000001C0055663: mov     [rsp+78h+var_18], rdi
 * 00000001C0055668: lea     r9, WPP_f03c5da326113bd9ca6ac78acf399cb9_Traceguids
 * 00000001C005566F: mov     [rsp+78h+var_20], rax
 * 00000001C0055674: mov     r8d, 0Dh
 * 00000001C005567A: mov     [rsp+78h+var_28], rdi
 * 00000001C005567F: lea     rax, [rsp+78h+arg_38]
 * 00000001C0055687: mov     [rsp+78h+var_30], rax
 * 00000001C005568C: mov     edx, edi
 * 00000001C005568E: mov     [rsp+78h+var_38], rdi
 * 00000001C0055693: lea     rax, [rsp+78h+arg_30]
 * 00000001C005569B: mov     [rsp+78h+var_40], rax
 * 00000001C00556A0: mov     rcx, rbx
 * 00000001C00556A3: lea     rax, [rsp+78h+arg_28]
 * 00000001C00556AB: mov     [rsp+78h+var_48], rdi
 * 00000001C00556B0: mov     [rsp+78h+var_50], rax
 * 00000001C00556B5: mov     [rsp+78h+var_58], si
 * 00000001C00556BA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00556C0: lea     r11, [rsp+78h+var_8]
 * 00000001C00556C5: mov     rbx, [r11+10h]
 * 00000001C00556C9: mov     rsi, [r11+18h]
 * 00000001C00556CD: mov     rsp, r11
 * 00000001C00556D0: pop     rdi
 * 00000001C00556D1: retn
 */
