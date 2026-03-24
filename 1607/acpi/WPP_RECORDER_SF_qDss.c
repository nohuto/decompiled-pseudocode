/*
 * XREFs of WPP_RECORDER_SF_qDss @ 0x1C0062038
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0089270 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDss @ 0x1C0062038
 * Reason: Hex-Rays returned no pseudocode for 0x1C0062038
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0062038: mov     [rsp+arg_0], rbx
 * 00000001C006203D: mov     [rsp+arg_8], rbp
 * 00000001C0062042: mov     [rsp+arg_10], rsi
 * 00000001C0062047: push    rdi
 * 00000001C0062048: push    r12
 * 00000001C006204A: push    r14
 * 00000001C006204C: sub     rsp, 70h
 * 00000001C0062050: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0062057: lea     rbp, aNull_0; "NULL"
 * 00000001C006205E: mov     rdi, [rsp+88h+arg_40]
 * 00000001C0062066: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C006206A: mov     rsi, [rsp+88h+arg_38]
 * 00000001C0062072: mov     r14, rcx
 * 00000001C0062075: test    dword ptr [r10+2Ch], 80000h
 * 00000001C006207D: lea     r12d, [rbx+6]
 * 00000001C0062081: lea     r11d, [rbx+0Dh]
 * 00000001C0062085: jz      loc_1C006214A
 * 00000001C006208B: cmp     byte ptr [r10+29h], 2
 * 00000001C0062090: jb      loc_1C006214A
 * 00000001C0062096: test    rdi, rdi
 * 00000001C0062099: jz      short loc_1C00620AD
 * 00000001C006209B: mov     r8, rbx
 * 00000001C006209E: inc     r8
 * 00000001C00620A1: cmp     byte ptr [rdi+r8], 0
 * 00000001C00620A6: jnz     short loc_1C006209E
 * 00000001C00620A8: inc     r8
 * 00000001C00620AB: jmp     short loc_1C00620B0
 * 00000001C00620AD: mov     r8, r12
 * 00000001C00620B0: test    rdi, rdi
 * 00000001C00620B3: mov     r9, rbp
 * 00000001C00620B6: cmovnz  r9, rdi
 * 00000001C00620BA: test    rsi, rsi
 * 00000001C00620BD: jz      short loc_1C00620D0
 * 00000001C00620BF: mov     rcx, rbx
 * 00000001C00620C2: inc     rcx
 * 00000001C00620C5: cmp     byte ptr [rsi+rcx], 0
 * 00000001C00620C9: jnz     short loc_1C00620C2
 * 00000001C00620CB: inc     rcx
 * 00000001C00620CE: jmp     short loc_1C00620D3
 * 00000001C00620D0: mov     rcx, r12
 * 00000001C00620D3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00620DA: test    rsi, rsi
 * 00000001C00620DD: mov     rdx, rbp
 * 00000001C00620E0: cmovnz  rdx, rsi
 * 00000001C00620E4: and     [rsp+88h+var_28], 0
 * 00000001C00620EA: mov     [rsp+88h+var_30], r8
 * 00000001C00620EF: lea     r8, WPP_72c16bcf9880346d3bb9ee911629b0d7_Traceguids
 * 00000001C00620F6: mov     [rsp+88h+var_38], r9
 * 00000001C00620FB: mov     [rsp+88h+var_40], rcx
 * 00000001C0062100: lea     rcx, [rsp+88h+arg_30]
 * 00000001C0062108: mov     [rsp+88h+var_48], rdx
 * 00000001C006210D: mov     edx, 2Bh ; '+'
 * 00000001C0062112: mov     [rsp+88h+var_50], 4
 * 00000001C006211B: mov     [rsp+88h+var_58], rcx
 * 00000001C0062120: lea     rcx, [rsp+88h+arg_28]
 * 00000001C0062128: mov     [rsp+88h+var_60], 8
 * 00000001C0062131: mov     [rsp+88h+var_68], rcx
 * 00000001C0062136: mov     rcx, [r10+18h]
 * 00000001C006213A: movzx   r9d, r11w
 * 00000001C006213E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0062144: mov     r11d, 0Ch
 * 00000001C006214A: test    rdi, rdi
 * 00000001C006214D: jz      short loc_1C0062160
 * 00000001C006214F: mov     rax, rbx
 * 00000001C0062152: inc     rax
 * 00000001C0062155: cmp     byte ptr [rdi+rax], 0
 * 00000001C0062159: jnz     short loc_1C0062152
 * 00000001C006215B: inc     rax
 * 00000001C006215E: jmp     short loc_1C0062163
 * 00000001C0062160: mov     rax, r12
 * 00000001C0062163: test    rdi, rdi
 * 00000001C0062166: mov     rcx, rbp
 * 00000001C0062169: cmovnz  rcx, rdi
 * 00000001C006216D: test    rsi, rsi
 * 00000001C0062170: jz      short loc_1C0062180
 * 00000001C0062172: inc     rbx
 * 00000001C0062175: cmp     byte ptr [rsi+rbx], 0
 * 00000001C0062179: jnz     short loc_1C0062172
 * 00000001C006217B: inc     rbx
 * 00000001C006217E: jmp     short loc_1C0062183
 * 00000001C0062180: mov     rbx, r12
 * 00000001C0062183: test    rsi, rsi
 * 00000001C0062186: lea     r9, WPP_72c16bcf9880346d3bb9ee911629b0d7_Traceguids
 * 00000001C006218D: mov     edx, 2
 * 00000001C0062192: cmovnz  rbp, rsi
 * 00000001C0062196: and     [rsp+88h+var_20], 0
 * 00000001C006219C: mov     [rsp+88h+var_28], rax
 * 00000001C00621A1: lea     rax, [rsp+88h+arg_30]
 * 00000001C00621A9: mov     [rsp+88h+var_30], rcx
 * 00000001C00621AE: mov     rcx, r14
 * 00000001C00621B1: mov     [rsp+88h+var_38], rbx
 * 00000001C00621B6: lea     r8d, [rdx+12h]
 * 00000001C00621BA: mov     [rsp+88h+var_40], rbp
 * 00000001C00621BF: mov     [rsp+88h+var_48], 4
 * 00000001C00621C8: mov     [rsp+88h+var_50], rax
 * 00000001C00621CD: lea     rax, [rsp+88h+arg_28]
 * 00000001C00621D5: mov     [rsp+88h+var_58], 8
 * 00000001C00621DE: mov     [rsp+88h+var_60], rax
 * 00000001C00621E3: mov     word ptr [rsp+88h+var_68], r11w
 * 00000001C00621E9: call    cs:__imp_WppAutoLogTrace
 * 00000001C00621EF: lea     r11, [rsp+88h+var_18]
 * 00000001C00621F4: mov     rbx, [r11+20h]
 * 00000001C00621F8: mov     rbp, [r11+28h]
 * 00000001C00621FC: mov     rsi, [r11+30h]
 * 00000001C0062200: mov     rsp, r11
 * 00000001C0062203: pop     r14
 * 00000001C0062205: pop     r12
 * 00000001C0062207: pop     rdi
 * 00000001C0062208: retn
 */
