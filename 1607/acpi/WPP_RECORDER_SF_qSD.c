/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1C004D828
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C009B958 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsD @ 0x1C004D828
 * Reason: Hex-Rays returned no pseudocode for 0x1C004D828
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004D828: mov     [rsp+arg_0], rbx
 * 00000001C004D82D: mov     [rsp+arg_8], rbp
 * 00000001C004D832: mov     [rsp+arg_10], rsi
 * 00000001C004D837: push    rdi
 * 00000001C004D838: sub     rsp, 60h
 * 00000001C004D83C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004D843: lea     rsi, aNull_0; "NULL"
 * 00000001C004D84A: mov     rdi, [rsp+68h+arg_30]
 * 00000001C004D852: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004D856: mov     rbp, rcx
 * 00000001C004D859: test    dword ptr [r10+2Ch], 100000h
 * 00000001C004D861: lea     r9d, [rbx+0Eh]
 * 00000001C004D865: jz      loc_1C004D8FA
 * 00000001C004D86B: cmp     byte ptr [r10+29h], 2
 * 00000001C004D870: jb      loc_1C004D8FA
 * 00000001C004D876: test    rdi, rdi
 * 00000001C004D879: jz      short loc_1C004D88C
 * 00000001C004D87B: mov     rcx, rbx
 * 00000001C004D87E: inc     rcx
 * 00000001C004D881: cmp     byte ptr [rdi+rcx], 0
 * 00000001C004D885: jnz     short loc_1C004D87E
 * 00000001C004D887: inc     rcx
 * 00000001C004D88A: jmp     short loc_1C004D891
 * 00000001C004D88C: mov     ecx, 5
 * 00000001C004D891: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004D898: lea     r8, [rsp+68h+arg_38]
 * 00000001C004D8A0: test    rdi, rdi
 * 00000001C004D8A3: mov     rdx, rsi
 * 00000001C004D8A6: cmovnz  rdx, rdi
 * 00000001C004D8AA: and     [rsp+68h+var_18], 0
 * 00000001C004D8B0: mov     [rsp+68h+var_20], 4
 * 00000001C004D8B9: mov     [rsp+68h+var_28], r8
 * 00000001C004D8BE: lea     r8, WPP_a4223b8e9b7938dd681ac13229df622e_Traceguids
 * 00000001C004D8C5: mov     [rsp+68h+var_30], rcx
 * 00000001C004D8CA: lea     rcx, [rsp+68h+arg_28]
 * 00000001C004D8D2: mov     [rsp+68h+var_38], rdx
 * 00000001C004D8D7: mov     edx, 2Bh ; '+'
 * 00000001C004D8DC: mov     [rsp+68h+var_40], 8
 * 00000001C004D8E5: mov     [rsp+68h+var_48], rcx
 * 00000001C004D8EA: mov     rcx, [r10+18h]
 * 00000001C004D8EE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004D8F4: mov     r9d, 0Dh
 * 00000001C004D8FA: test    rdi, rdi
 * 00000001C004D8FD: jz      short loc_1C004D90D
 * 00000001C004D8FF: inc     rbx
 * 00000001C004D902: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004D906: jnz     short loc_1C004D8FF
 * 00000001C004D908: inc     rbx
 * 00000001C004D90B: jmp     short loc_1C004D912
 * 00000001C004D90D: mov     ebx, 5
 * 00000001C004D912: test    rdi, rdi
 * 00000001C004D915: lea     rax, [rsp+68h+arg_38]
 * 00000001C004D91D: mov     edx, 2
 * 00000001C004D922: mov     rcx, rbp
 * 00000001C004D925: cmovnz  rsi, rdi
 * 00000001C004D929: and     [rsp+68h+var_10], 0
 * 00000001C004D92F: mov     [rsp+68h+var_18], 4
 * 00000001C004D938: mov     [rsp+68h+var_20], rax
 * 00000001C004D93D: lea     rax, [rsp+68h+arg_28]
 * 00000001C004D945: mov     [rsp+68h+var_28], rbx
 * 00000001C004D94A: lea     r8d, [rdx+13h]
 * 00000001C004D94E: mov     [rsp+68h+var_30], rsi
 * 00000001C004D953: mov     [rsp+68h+var_38], 8
 * 00000001C004D95C: mov     [rsp+68h+var_40], rax
 * 00000001C004D961: mov     word ptr [rsp+68h+var_48], r9w
 * 00000001C004D967: lea     r9, WPP_a4223b8e9b7938dd681ac13229df622e_Traceguids
 * 00000001C004D96E: call    cs:__imp_WppAutoLogTrace
 * 00000001C004D974: lea     r11, [rsp+68h+var_8]
 * 00000001C004D979: mov     rbx, [r11+10h]
 * 00000001C004D97D: mov     rbp, [r11+18h]
 * 00000001C004D981: mov     rsi, [r11+20h]
 * 00000001C004D985: mov     rsp, r11
 * 00000001C004D988: pop     rdi
 * 00000001C004D989: retn
 */
