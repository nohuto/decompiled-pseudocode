/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C003264C
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0032AE4 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C003264C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003264C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003264C: mov     [rsp+arg_0], rbx
 * 00000001C0032651: mov     [rsp+arg_8], rbp
 * 00000001C0032656: mov     [rsp+arg_10], rsi
 * 00000001C003265B: push    rdi
 * 00000001C003265C: push    r12
 * 00000001C003265E: push    r14
 * 00000001C0032660: sub     rsp, 40h
 * 00000001C0032664: mov     rdi, [rsp+58h+arg_28]
 * 00000001C003266C: lea     rsi, aNull; "NULL"
 * 00000001C0032673: xor     r14d, r14d
 * 00000001C0032676: mov     rbp, rcx
 * 00000001C0032679: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0032680: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0032684: lea     r12d, [r14+18h]
 * 00000001C0032688: mov     eax, [rcx+2Ch]
 * 00000001C003268B: test    al, 1
 * 00000001C003268D: jz      short loc_1C00326EF
 * 00000001C003268F: cmp     byte ptr [rcx+29h], 4
 * 00000001C0032693: jb      short loc_1C00326EF
 * 00000001C0032695: test    rdi, rdi
 * 00000001C0032698: jz      short loc_1C00326AC
 * 00000001C003269A: mov     r8, rbx
 * 00000001C003269D: inc     r8
 * 00000001C00326A0: cmp     [rdi+r8*2], r14w
 * 00000001C00326A5: jnz     short loc_1C003269D
 * 00000001C00326A7: inc     r8
 * 00000001C00326AA: jmp     short loc_1C00326B2
 * 00000001C00326AC: mov     r8d, 5
 * 00000001C00326B2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00326B9: add     r8, r8
 * 00000001C00326BC: mov     rcx, [rcx+18h]
 * 00000001C00326C0: test    rdi, rdi
 * 00000001C00326C3: mov     [rsp+58h+var_28], r14
 * 00000001C00326C8: mov     rdx, rsi
 * 00000001C00326CB: cmovnz  rdx, rdi
 * 00000001C00326CF: mov     [rsp+58h+var_30], r8
 * 00000001C00326D4: mov     [rsp+58h+var_38], rdx
 * 00000001C00326D9: lea     r8, WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids
 * 00000001C00326E0: mov     edx, 2Bh ; '+'
 * 00000001C00326E5: movzx   r9d, r12w
 * 00000001C00326E9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00326EF: test    rdi, rdi
 * 00000001C00326F2: jz      short loc_1C0032703
 * 00000001C00326F4: inc     rbx
 * 00000001C00326F7: cmp     [rdi+rbx*2], r14w
 * 00000001C00326FC: jnz     short loc_1C00326F4
 * 00000001C00326FE: inc     rbx
 * 00000001C0032701: jmp     short loc_1C0032708
 * 00000001C0032703: mov     ebx, 5
 * 00000001C0032708: mov     [rsp+58h+var_20], r14
 * 00000001C003270D: lea     rax, [rbx+rbx]
 * 00000001C0032711: mov     [rsp+58h+var_28], rax
 * 00000001C0032716: lea     r9, WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids
 * 00000001C003271D: test    rdi, rdi
 * 00000001C0032720: mov     edx, 4
 * 00000001C0032725: mov     rcx, rbp
 * 00000001C0032728: cmovnz  rsi, rdi
 * 00000001C003272C: mov     [rsp+58h+var_30], rsi
 * 00000001C0032731: lea     r8d, [rdx-3]
 * 00000001C0032735: mov     word ptr [rsp+58h+var_38], r12w
 * 00000001C003273B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0032741: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0032746: mov     rbp, [rsp+58h+arg_8]
 * 00000001C003274B: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0032750: add     rsp, 40h
 * 00000001C0032754: pop     r14
 * 00000001C0032756: pop     r12
 * 00000001C0032758: pop     rdi
 * 00000001C0032759: retn
 */
