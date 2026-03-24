/*
 * XREFs of WPP_RECORDER_SF_sqSD @ 0x1C004C638
 * Callers:
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008FCB0 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sqSD @ 0x1C004C638
 * Reason: Hex-Rays returned no pseudocode for 0x1C004C638
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004C638: mov     rax, rsp
 * 00000001C004C63B: mov     [rax+8], rbx
 * 00000001C004C63F: mov     [rax+10h], rbp
 * 00000001C004C643: mov     [rax+18h], rsi
 * 00000001C004C647: mov     [rax+20h], rdi
 * 00000001C004C64B: push    r12
 * 00000001C004C64D: push    r14
 * 00000001C004C64F: push    r15
 * 00000001C004C651: sub     rsp, 70h
 * 00000001C004C655: mov     rsi, [rsp+88h+arg_38]
 * 00000001C004C65D: lea     rbp, aNull; "NULL"
 * 00000001C004C664: xor     r15d, r15d
 * 00000001C004C667: lea     r12, aAcpiinternalno; "ACPIInternalNotifyAvailableDeviceObject"
 * 00000001C004C66E: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C004C672: mov     r14, rcx
 * 00000001C004C675: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004C67C: lea     r11d, [r15+15h]
 * 00000001C004C680: lea     ebx, [rdi+6]
 * 00000001C004C683: mov     eax, [rcx+2Ch]
 * 00000001C004C686: test    al, 20h
 * 00000001C004C688: jz      loc_1C004C73B
 * 00000001C004C68E: cmp     byte ptr [rcx+29h], 2
 * 00000001C004C692: jb      loc_1C004C73B
 * 00000001C004C698: test    rsi, rsi
 * 00000001C004C69B: jz      short loc_1C004C6AF
 * 00000001C004C69D: mov     rax, rdi
 * 00000001C004C6A0: inc     rax
 * 00000001C004C6A3: cmp     [rsi+rax*2], r15w
 * 00000001C004C6A8: jnz     short loc_1C004C6A0
 * 00000001C004C6AA: inc     rax
 * 00000001C004C6AD: jmp     short loc_1C004C6B2
 * 00000001C004C6AF: mov     rax, rbx
 * 00000001C004C6B2: test    rsi, rsi
 * 00000001C004C6B5: lea     r9, [rax+rax]
 * 00000001C004C6B9: mov     r8, rbp
 * 00000001C004C6BC: mov     rdx, rdi
 * 00000001C004C6BF: cmovnz  r8, rsi
 * 00000001C004C6C3: inc     rdx
 * 00000001C004C6C6: cmp     [r12+rdx], r15b
 * 00000001C004C6CA: jnz     short loc_1C004C6C3
 * 00000001C004C6CC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004C6D3: lea     r10, [rsp+88h+arg_40]
 * 00000001C004C6DB: mov     rcx, [rcx+18h]
 * 00000001C004C6DF: inc     rdx
 * 00000001C004C6E2: mov     [rsp+88h+var_28], r15
 * 00000001C004C6E7: mov     [rsp+88h+var_30], 4
 * 00000001C004C6F0: mov     [rsp+88h+var_38], r10
 * 00000001C004C6F5: mov     [rsp+88h+var_40], r9
 * 00000001C004C6FA: mov     [rsp+88h+var_48], r8
 * 00000001C004C6FF: lea     r8, [rsp+88h+arg_30]
 * 00000001C004C707: mov     [rsp+88h+var_50], 8
 * 00000001C004C710: mov     [rsp+88h+var_58], r8
 * 00000001C004C715: lea     r8, WPP_f0fe160f89a6365bbdf73264e71c5878_Traceguids
 * 00000001C004C71C: mov     [rsp+88h+var_60], rdx
 * 00000001C004C721: mov     edx, 2Bh ; '+'
 * 00000001C004C726: movzx   r9d, r11w
 * 00000001C004C72A: mov     [rsp+88h+var_68], r12
 * 00000001C004C72F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004C735: mov     r11d, 15h
 * 00000001C004C73B: test    rsi, rsi
 * 00000001C004C73E: jz      short loc_1C004C753
 * 00000001C004C740: mov     rbx, rdi
 * 00000001C004C743: inc     rbx
 * 00000001C004C746: cmp     [rsi+rbx*2], r15w
 * 00000001C004C74B: jnz     short loc_1C004C743
 * 00000001C004C74D: inc     rbx
 * 00000001C004C750: test    rsi, rsi
 * 00000001C004C753: cmovnz  rbp, rsi
 * 00000001C004C757: add     rbx, rbx
 * 00000001C004C75A: inc     rdi
 * 00000001C004C75D: cmp     [r12+rdi], r15b
 * 00000001C004C761: jnz     short loc_1C004C75A
 * 00000001C004C763: mov     [rsp+88h+var_20], r15
 * 00000001C004C768: lea     rax, [rsp+88h+arg_40]
 * 00000001C004C770: mov     [rsp+88h+var_28], 4
 * 00000001C004C779: lea     r9, WPP_f0fe160f89a6365bbdf73264e71c5878_Traceguids
 * 00000001C004C780: mov     [rsp+88h+var_30], rax
 * 00000001C004C785: mov     edx, 2
 * 00000001C004C78A: mov     [rsp+88h+var_38], rbx
 * 00000001C004C78F: lea     rax, [rsp+88h+arg_30]
 * 00000001C004C797: mov     [rsp+88h+var_40], rbp
 * 00000001C004C79C: inc     rdi
 * 00000001C004C79F: mov     [rsp+88h+var_48], 8
 * 00000001C004C7A8: mov     rcx, r14
 * 00000001C004C7AB: mov     [rsp+88h+var_50], rax
 * 00000001C004C7B0: lea     r8d, [rdx+4]
 * 00000001C004C7B4: mov     [rsp+88h+var_58], rdi
 * 00000001C004C7B9: mov     [rsp+88h+var_60], r12
 * 00000001C004C7BE: mov     word ptr [rsp+88h+var_68], r11w
 * 00000001C004C7C4: call    cs:__imp_WppAutoLogTrace
 * 00000001C004C7CA: lea     r11, [rsp+88h+var_18]
 * 00000001C004C7CF: mov     rbx, [r11+20h]
 * 00000001C004C7D3: mov     rbp, [r11+28h]
 * 00000001C004C7D7: mov     rsi, [r11+30h]
 * 00000001C004C7DB: mov     rdi, [r11+38h]
 * 00000001C004C7DF: mov     rsp, r11
 * 00000001C004C7E2: pop     r15
 * 00000001C004C7E4: pop     r14
 * 00000001C004C7E6: pop     r12
 * 00000001C004C7E8: retn
 */
