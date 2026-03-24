/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0035428
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C00358D8 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0035428
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035428
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035428: mov     [rsp+arg_0], rbx
 * 00000001C003542D: mov     [rsp+arg_8], rbp
 * 00000001C0035432: mov     [rsp+arg_10], rsi
 * 00000001C0035437: push    rdi
 * 00000001C0035438: push    r12
 * 00000001C003543A: push    r14
 * 00000001C003543C: sub     rsp, 40h
 * 00000001C0035440: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0035448: lea     rsi, aNull; "NULL"
 * 00000001C003544F: xor     r14d, r14d
 * 00000001C0035452: mov     rbp, rcx
 * 00000001C0035455: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003545C: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0035460: lea     r12d, [r14+18h]
 * 00000001C0035464: mov     eax, [rcx+2Ch]
 * 00000001C0035467: test    al, 1
 * 00000001C0035469: jz      short loc_1C00354CB
 * 00000001C003546B: cmp     byte ptr [rcx+29h], 4
 * 00000001C003546F: jb      short loc_1C00354CB
 * 00000001C0035471: test    rdi, rdi
 * 00000001C0035474: jz      short loc_1C0035488
 * 00000001C0035476: mov     r8, rbx
 * 00000001C0035479: inc     r8
 * 00000001C003547C: cmp     [rdi+r8*2], r14w
 * 00000001C0035481: jnz     short loc_1C0035479
 * 00000001C0035483: inc     r8
 * 00000001C0035486: jmp     short loc_1C003548E
 * 00000001C0035488: mov     r8d, 5
 * 00000001C003548E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0035495: add     r8, r8
 * 00000001C0035498: mov     rcx, [rcx+18h]
 * 00000001C003549C: test    rdi, rdi
 * 00000001C003549F: mov     [rsp+58h+var_28], r14
 * 00000001C00354A4: mov     rdx, rsi
 * 00000001C00354A7: cmovnz  rdx, rdi
 * 00000001C00354AB: mov     [rsp+58h+var_30], r8
 * 00000001C00354B0: mov     [rsp+58h+var_38], rdx
 * 00000001C00354B5: lea     r8, WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids
 * 00000001C00354BC: mov     edx, 2Bh ; '+'
 * 00000001C00354C1: movzx   r9d, r12w
 * 00000001C00354C5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00354CB: test    rdi, rdi
 * 00000001C00354CE: jz      short loc_1C00354DF
 * 00000001C00354D0: inc     rbx
 * 00000001C00354D3: cmp     [rdi+rbx*2], r14w
 * 00000001C00354D8: jnz     short loc_1C00354D0
 * 00000001C00354DA: inc     rbx
 * 00000001C00354DD: jmp     short loc_1C00354E4
 * 00000001C00354DF: mov     ebx, 5
 * 00000001C00354E4: mov     [rsp+58h+var_20], r14
 * 00000001C00354E9: lea     rax, [rbx+rbx]
 * 00000001C00354ED: mov     [rsp+58h+var_28], rax
 * 00000001C00354F2: lea     r9, WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids
 * 00000001C00354F9: test    rdi, rdi
 * 00000001C00354FC: mov     edx, 4
 * 00000001C0035501: mov     rcx, rbp
 * 00000001C0035504: cmovnz  rsi, rdi
 * 00000001C0035508: mov     [rsp+58h+var_30], rsi
 * 00000001C003550D: lea     r8d, [rdx-3]
 * 00000001C0035511: mov     word ptr [rsp+58h+var_38], r12w
 * 00000001C0035517: call    cs:__imp_WppAutoLogTrace
 * 00000001C003551D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0035522: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0035527: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003552C: add     rsp, 40h
 * 00000001C0035530: pop     r14
 * 00000001C0035532: pop     r12
 * 00000001C0035534: pop     rdi
 * 00000001C0035535: retn
 */
