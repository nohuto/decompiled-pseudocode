/*
 * XREFs of WPP_RECORDER_SF_DDD @ 0x1C0053E74
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C00532DC (AcpiConvertPackageArgumentToPackageObj.c)
 *     NotifyHandler @ 0x1C0054C30 (NotifyHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDD @ 0x1C0053E74
 * Reason: Hex-Rays returned no pseudocode for 0x1C0053E74
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0053E74: mov     [rsp+arg_0], rbx
 * 00000001C0053E79: mov     [rsp+arg_8], rbp
 * 00000001C0053E7E: mov     [rsp+arg_10], rsi
 * 00000001C0053E83: push    rdi
 * 00000001C0053E84: push    r14
 * 00000001C0053E86: push    r15
 * 00000001C0053E88: sub     rsp, 60h
 * 00000001C0053E8C: mov     r14d, r8d
 * 00000001C0053E8F: mov     sil, dl
 * 00000001C0053E92: mov     edi, r8d
 * 00000001C0053E95: movzx   ebp, r9w
 * 00000001C0053E99: shr     rdi, 10h
 * 00000001C0053E9D: mov     r15, rcx
 * 00000001C0053EA0: lea     ebx, [r14-1]
 * 00000001C0053EA4: mov     r10d, ebx
 * 00000001C0053EA7: and     ebx, 1Fh
 * 00000001C0053EAA: shr     r10, 5
 * 00000001C0053EAE: lea     rax, [rdi+rdi*4]
 * 00000001C0053EB2: and     r10d, 7FFh
 * 00000001C0053EB9: mov     edx, ebx
 * 00000001C0053EBB: mov     ebx, 4
 * 00000001C0053EC0: lea     r11, [r10+rax*4]
 * 00000001C0053EC4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0053ECB: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0053ED0: bt      eax, edx
 * 00000001C0053ED3: jnb     short loc_1C0053F40
 * 00000001C0053ED5: lea     rcx, [rdi+rdi*4]
 * 00000001C0053ED9: add     rcx, rcx
 * 00000001C0053EDC: cmp     [r10+rcx*8+29h], sil
 * 00000001C0053EE1: jb      short loc_1C0053F40
 * 00000001C0053EE3: and     [rsp+78h+var_28], 0
 * 00000001C0053EE9: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0053EF1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0053EF8: mov     r8, [rsp+78h+arg_20]
 * 00000001C0053F00: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0053F05: mov     [rsp+78h+var_30], rbx
 * 00000001C0053F0A: mov     [rsp+78h+var_38], rdx
 * 00000001C0053F0F: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0053F17: mov     [rsp+78h+var_40], rbx
 * 00000001C0053F1C: mov     [rsp+78h+var_48], rdx
 * 00000001C0053F21: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0053F29: mov     [rsp+78h+var_50], rbx
 * 00000001C0053F2E: mov     [rsp+78h+var_58], rdx
 * 00000001C0053F33: lea     edx, [rbx+27h]
 * 00000001C0053F36: movzx   r9d, r9w
 * 00000001C0053F3A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0053F40: and     [rsp+78h+var_20], 0
 * 00000001C0053F46: lea     rax, [rsp+78h+arg_38]
 * 00000001C0053F4E: mov     r9, [rsp+78h+arg_20]
 * 00000001C0053F56: mov     r8d, r14d
 * 00000001C0053F59: mov     [rsp+78h+var_28], rbx
 * 00000001C0053F5E: mov     rcx, r15
 * 00000001C0053F61: mov     [rsp+78h+var_30], rax
 * 00000001C0053F66: lea     rax, [rsp+78h+arg_30]
 * 00000001C0053F6E: mov     [rsp+78h+var_38], rbx
 * 00000001C0053F73: mov     [rsp+78h+var_40], rax
 * 00000001C0053F78: lea     rax, [rsp+78h+arg_28]
 * 00000001C0053F80: mov     [rsp+78h+var_48], rbx
 * 00000001C0053F85: mov     [rsp+78h+var_50], rax
 * 00000001C0053F8A: movzx   edx, sil
 * 00000001C0053F8E: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0053F93: call    cs:__imp_WppAutoLogTrace
 * 00000001C0053F99: lea     r11, [rsp+78h+var_18]
 * 00000001C0053F9E: mov     rbx, [r11+20h]
 * 00000001C0053FA2: mov     rbp, [r11+28h]
 * 00000001C0053FA6: mov     rsi, [r11+30h]
 * 00000001C0053FAA: mov     rsp, r11
 * 00000001C0053FAD: pop     r15
 * 00000001C0053FAF: pop     r14
 * 00000001C0053FB1: pop     rdi
 * 00000001C0053FB2: retn
 */
