/*
 * XREFs of WPP_RECORDER_SF_ddx @ 0x1C00556D4
 * Callers:
 *     ACPIRangeValidatePciMemoryResource @ 0x1C000AB00 (ACPIRangeValidatePciMemoryResource.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddx @ 0x1C00556D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00556D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00556D4: mov     r11, rsp
 * 00000001C00556D7: mov     [r11+8], rbx
 * 00000001C00556DB: mov     [r11+10h], rbp
 * 00000001C00556DF: push    rdi
 * 00000001C00556E0: sub     rsp, 60h
 * 00000001C00556E4: mov     rbx, rcx
 * 00000001C00556E7: mov     ebp, 0Ah
 * 00000001C00556EC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00556F3: lea     edi, [rbp-6]
 * 00000001C00556F6: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C00556FD: jz      short loc_1C0055751
 * 00000001C00556FF: cmp     byte ptr [rcx+29h], 2
 * 00000001C0055703: jb      short loc_1C0055751
 * 00000001C0055705: and     qword ptr [r11-18h], 0
 * 00000001C005570A: lea     rdx, [r11+40h]
 * 00000001C005570E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0055715: lea     r8, WPP_f03c5da326113bd9ca6ac78acf399cb9_Traceguids
 * 00000001C005571C: mov     rcx, [rcx+18h]
 * 00000001C0055720: mov     qword ptr [r11-20h], 8
 * 00000001C0055728: mov     [r11-28h], rdx
 * 00000001C005572C: lea     rdx, [r11+38h]
 * 00000001C0055730: mov     [r11-30h], rdi
 * 00000001C0055734: mov     [r11-38h], rdx
 * 00000001C0055738: lea     rdx, [r11+30h]
 * 00000001C005573C: mov     [r11-40h], rdi
 * 00000001C0055740: mov     [r11-48h], rdx
 * 00000001C0055744: lea     edx, [rbp+21h]
 * 00000001C0055747: movzx   r9d, bp
 * 00000001C005574B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0055751: and     [rsp+68h+var_10], 0
 * 00000001C0055757: lea     rax, [rsp+68h+arg_38]
 * 00000001C005575F: mov     [rsp+68h+var_18], 8
 * 00000001C0055768: lea     r9, WPP_f03c5da326113bd9ca6ac78acf399cb9_Traceguids
 * 00000001C005576F: mov     [rsp+68h+var_20], rax
 * 00000001C0055774: mov     edx, 2
 * 00000001C0055779: mov     [rsp+68h+var_28], rdi
 * 00000001C005577E: lea     rax, [rsp+68h+arg_30]
 * 00000001C0055786: mov     [rsp+68h+var_30], rax
 * 00000001C005578B: mov     rcx, rbx
 * 00000001C005578E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0055796: mov     [rsp+68h+var_38], rdi
 * 00000001C005579B: mov     [rsp+68h+var_40], rax
 * 00000001C00557A0: lea     r8d, [rdx+0Bh]
 * 00000001C00557A4: mov     [rsp+68h+var_48], bp
 * 00000001C00557A9: call    cs:__imp_WppAutoLogTrace
 * 00000001C00557AF: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00557B4: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00557B9: add     rsp, 60h
 * 00000001C00557BD: pop     rdi
 * 00000001C00557BE: retn
 */
