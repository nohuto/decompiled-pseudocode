/*
 * XREFs of WPP_RECORDER_SF_DDDD @ 0x1C0053FB4
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005314C (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDD @ 0x1C0053FB4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0053FB4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0053FB4: mov     rax, rsp
 * 00000001C0053FB7: mov     [rax+8], rbx
 * 00000001C0053FBB: mov     [rax+10h], rbp
 * 00000001C0053FBF: mov     [rax+18h], rsi
 * 00000001C0053FC3: mov     [rax+20h], rdi
 * 00000001C0053FC7: push    r14
 * 00000001C0053FC9: sub     rsp, 70h
 * 00000001C0053FCD: mov     esi, r8d
 * 00000001C0053FD0: movzx   edi, r9w
 * 00000001C0053FD4: mov     ebx, r8d
 * 00000001C0053FD7: mov     rbp, rcx
 * 00000001C0053FDA: shr     rbx, 10h
 * 00000001C0053FDE: mov     r14d, 4
 * 00000001C0053FE4: lea     r11d, [rsi-1]
 * 00000001C0053FE8: mov     edx, r11d
 * 00000001C0053FEB: and     r11d, 1Fh
 * 00000001C0053FEF: shr     rdx, 5
 * 00000001C0053FF3: lea     rax, [rbx+rbx*4]
 * 00000001C0053FF7: and     edx, 7FFh
 * 00000001C0053FFD: lea     r10, [rdx+rax*4]
 * 00000001C0054001: mov     edx, r11d
 * 00000001C0054004: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C005400B: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0054010: bt      eax, edx
 * 00000001C0054013: jnb     short loc_1C0054093
 * 00000001C0054015: lea     rcx, [rbx+rbx*4]
 * 00000001C0054019: add     rcx, rcx
 * 00000001C005401C: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C0054022: jb      short loc_1C0054093
 * 00000001C0054024: and     [rsp+78h+var_18], 0
 * 00000001C005402A: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0054032: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0054039: lea     r8, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C0054040: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0054045: mov     [rsp+78h+var_20], r14
 * 00000001C005404A: mov     [rsp+78h+var_28], rdx
 * 00000001C005404F: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0054057: mov     [rsp+78h+var_30], r14
 * 00000001C005405C: mov     [rsp+78h+var_38], rdx
 * 00000001C0054061: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0054069: mov     [rsp+78h+var_40], r14
 * 00000001C005406E: mov     [rsp+78h+var_48], rdx
 * 00000001C0054073: lea     rdx, [rsp+78h+arg_28]
 * 00000001C005407B: mov     [rsp+78h+var_50], r14
 * 00000001C0054080: mov     [rsp+78h+var_58], rdx
 * 00000001C0054085: lea     edx, [r14+27h]
 * 00000001C0054089: movzx   r9d, r9w
 * 00000001C005408D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054093: and     [rsp+78h+var_10], 0
 * 00000001C0054099: lea     rax, [rsp+78h+arg_40]
 * 00000001C00540A1: mov     [rsp+78h+var_18], r14
 * 00000001C00540A6: lea     r9, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C00540AD: mov     [rsp+78h+var_20], rax
 * 00000001C00540B2: mov     r8d, esi
 * 00000001C00540B5: mov     [rsp+78h+var_28], r14
 * 00000001C00540BA: lea     rax, [rsp+78h+arg_38]
 * 00000001C00540C2: mov     [rsp+78h+var_30], rax
 * 00000001C00540C7: mov     edx, 2
 * 00000001C00540CC: mov     [rsp+78h+var_38], r14
 * 00000001C00540D1: lea     rax, [rsp+78h+arg_30]
 * 00000001C00540D9: mov     [rsp+78h+var_40], rax
 * 00000001C00540DE: mov     rcx, rbp
 * 00000001C00540E1: lea     rax, [rsp+78h+arg_28]
 * 00000001C00540E9: mov     [rsp+78h+var_48], r14
 * 00000001C00540EE: mov     [rsp+78h+var_50], rax
 * 00000001C00540F3: mov     word ptr [rsp+78h+var_58], di
 * 00000001C00540F8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00540FE: lea     r11, [rsp+78h+var_8]
 * 00000001C0054103: mov     rbx, [r11+10h]
 * 00000001C0054107: mov     rbp, [r11+18h]
 * 00000001C005410B: mov     rsi, [r11+20h]
 * 00000001C005410F: mov     rdi, [r11+28h]
 * 00000001C0054113: mov     rsp, r11
 * 00000001C0054116: pop     r14
 * 00000001C0054118: retn
 */
