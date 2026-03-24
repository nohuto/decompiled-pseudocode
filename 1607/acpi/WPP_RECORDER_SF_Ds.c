/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1C005B618
 * Callers:
 *     LogError @ 0x1C00258B8 (LogError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ds @ 0x1C005B618
 * Reason: Hex-Rays returned no pseudocode for 0x1C005B618
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005B618: mov     rax, rsp
 * 00000001C005B61B: mov     [rax+8], rbx
 * 00000001C005B61F: mov     [rax+10h], rbp
 * 00000001C005B623: mov     [rax+18h], rsi
 * 00000001C005B627: mov     [rax+20h], rdi
 * 00000001C005B62B: push    r13
 * 00000001C005B62D: sub     rsp, 50h
 * 00000001C005B631: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C005B638: lea     rsi, aNull_0; "NULL"
 * 00000001C005B63F: mov     rdi, [rsp+58h+arg_30]
 * 00000001C005B647: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C005B64B: mov     rbp, rcx
 * 00000001C005B64E: test    dword ptr [r10+2Ch], 100000h
 * 00000001C005B656: lea     r13d, [rbx+0Bh]
 * 00000001C005B65A: jz      short loc_1C005B6CF
 * 00000001C005B65C: cmp     byte ptr [r10+29h], 2
 * 00000001C005B661: jb      short loc_1C005B6CF
 * 00000001C005B663: test    rdi, rdi
 * 00000001C005B666: jz      short loc_1C005B679
 * 00000001C005B668: mov     rcx, rbx
 * 00000001C005B66B: inc     rcx
 * 00000001C005B66E: cmp     byte ptr [rdi+rcx], 0
 * 00000001C005B672: jnz     short loc_1C005B66B
 * 00000001C005B674: inc     rcx
 * 00000001C005B677: jmp     short loc_1C005B67E
 * 00000001C005B679: mov     ecx, 5
 * 00000001C005B67E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005B685: lea     r8, WPP_7dc9427f69cc35d04ffb3241cfe5f2cb_Traceguids
 * 00000001C005B68C: test    rdi, rdi
 * 00000001C005B68F: movzx   r9d, r13w
 * 00000001C005B693: mov     rdx, rsi
 * 00000001C005B696: cmovnz  rdx, rdi
 * 00000001C005B69A: and     [rsp+58h+var_18], 0
 * 00000001C005B6A0: mov     [rsp+58h+var_20], rcx
 * 00000001C005B6A5: lea     rcx, [rsp+58h+arg_28]
 * 00000001C005B6AD: mov     [rsp+58h+var_28], rdx
 * 00000001C005B6B2: mov     edx, 2Bh ; '+'
 * 00000001C005B6B7: mov     [rsp+58h+var_30], 4
 * 00000001C005B6C0: mov     [rsp+58h+var_38], rcx
 * 00000001C005B6C5: mov     rcx, [r10+18h]
 * 00000001C005B6C9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005B6CF: test    rdi, rdi
 * 00000001C005B6D2: jz      short loc_1C005B6E2
 * 00000001C005B6D4: inc     rbx
 * 00000001C005B6D7: cmp     byte ptr [rdi+rbx], 0
 * 00000001C005B6DB: jnz     short loc_1C005B6D4
 * 00000001C005B6DD: inc     rbx
 * 00000001C005B6E0: jmp     short loc_1C005B6E7
 * 00000001C005B6E2: mov     ebx, 5
 * 00000001C005B6E7: test    rdi, rdi
 * 00000001C005B6EA: lea     rax, [rsp+58h+arg_28]
 * 00000001C005B6F2: mov     edx, 2
 * 00000001C005B6F7: lea     r9, WPP_7dc9427f69cc35d04ffb3241cfe5f2cb_Traceguids
 * 00000001C005B6FE: cmovnz  rsi, rdi
 * 00000001C005B702: mov     rcx, rbp
 * 00000001C005B705: and     [rsp+58h+var_10], 0
 * 00000001C005B70B: mov     [rsp+58h+var_18], rbx
 * 00000001C005B710: mov     [rsp+58h+var_20], rsi
 * 00000001C005B715: lea     r8d, [rdx+13h]
 * 00000001C005B719: mov     [rsp+58h+var_28], 4
 * 00000001C005B722: mov     [rsp+58h+var_30], rax
 * 00000001C005B727: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C005B72D: call    cs:__imp_WppAutoLogTrace
 * 00000001C005B733: mov     rbx, [rsp+58h+arg_0]
 * 00000001C005B738: mov     rbp, [rsp+58h+arg_8]
 * 00000001C005B73D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C005B742: mov     rdi, [rsp+58h+arg_18]
 * 00000001C005B747: add     rsp, 50h
 * 00000001C005B74B: pop     r13
 * 00000001C005B74D: retn
 */
