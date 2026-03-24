/*
 * XREFs of WPP_RECORDER_SF_IdDD @ 0x1C0059434
 * Callers:
 *     ACPIWmiEnableLog @ 0x1C0059364 (ACPIWmiEnableLog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IdDD @ 0x1C0059434
 * Reason: Hex-Rays returned no pseudocode for 0x1C0059434
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0059434: mov     r11, rsp
 * 00000001C0059437: mov     [r11+8], rbx
 * 00000001C005943B: mov     [r11+10h], rbp
 * 00000001C005943F: push    rdi
 * 00000001C0059440: sub     rsp, 80h
 * 00000001C0059447: mov     rax, cs:ACPIWmiLoggerHandle
 * 00000001C005944E: mov     rbx, rcx
 * 00000001C0059451: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0059458: mov     edi, 4
 * 00000001C005945D: mov     [r11-18h], rax
 * 00000001C0059461: mov     eax, [rcx+2Ch]
 * 00000001C0059464: lea     ebp, [rdi+8]
 * 00000001C0059467: test    al, 1
 * 00000001C0059469: jz      short loc_1C00594C9
 * 00000001C005946B: cmp     [rcx+29h], dil
 * 00000001C005946F: jb      short loc_1C00594C9
 * 00000001C0059471: and     qword ptr [r11-28h], 0
 * 00000001C0059476: lea     rdx, [r11+48h]
 * 00000001C005947A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0059481: lea     r8, WPP_7c2b74e231b3382ede7fe299b6b07f82_Traceguids
 * 00000001C0059488: mov     rcx, [rcx+18h]
 * 00000001C005948C: mov     [r11-30h], rdi
 * 00000001C0059490: mov     [r11-38h], rdx
 * 00000001C0059494: lea     rdx, [r11+40h]
 * 00000001C0059498: mov     [r11-40h], rdi
 * 00000001C005949C: mov     [r11-48h], rdx
 * 00000001C00594A0: lea     rdx, [r11+38h]
 * 00000001C00594A4: mov     [r11-50h], rdi
 * 00000001C00594A8: mov     [r11-58h], rdx
 * 00000001C00594AC: lea     rdx, [r11-18h]
 * 00000001C00594B0: mov     qword ptr [r11-60h], 8
 * 00000001C00594B8: mov     [r11-68h], rdx
 * 00000001C00594BC: lea     edx, [rdi+27h]
 * 00000001C00594BF: movzx   r9d, bp
 * 00000001C00594C3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00594C9: and     [rsp+88h+var_20], 0
 * 00000001C00594CF: lea     rax, [rsp+88h+arg_40]
 * 00000001C00594D7: mov     [rsp+88h+var_28], rdi
 * 00000001C00594DC: lea     r9, WPP_7c2b74e231b3382ede7fe299b6b07f82_Traceguids
 * 00000001C00594E3: mov     [rsp+88h+var_30], rax
 * 00000001C00594E8: mov     r8d, 1
 * 00000001C00594EE: mov     [rsp+88h+var_38], rdi
 * 00000001C00594F3: lea     rax, [rsp+88h+arg_38]
 * 00000001C00594FB: mov     [rsp+88h+var_40], rax
 * 00000001C0059500: mov     edx, edi
 * 00000001C0059502: mov     [rsp+88h+var_48], rdi
 * 00000001C0059507: lea     rax, [rsp+88h+arg_30]
 * 00000001C005950F: mov     [rsp+88h+var_50], rax
 * 00000001C0059514: mov     rcx, rbx
 * 00000001C0059517: lea     rax, [rsp+88h+var_18]
 * 00000001C005951C: mov     [rsp+88h+var_58], 8
 * 00000001C0059525: mov     [rsp+88h+var_60], rax
 * 00000001C005952A: mov     [rsp+88h+var_68], bp
 * 00000001C005952F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0059535: lea     r11, [rsp+88h+var_8]
 * 00000001C005953D: mov     rbx, [r11+10h]
 * 00000001C0059541: mov     rbp, [r11+18h]
 * 00000001C0059545: mov     rsp, r11
 * 00000001C0059548: pop     rdi
 * 00000001C0059549: retn
 */
