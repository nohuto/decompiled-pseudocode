/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001C28
 * Callers:
 *     USBType1CompleteCallback @ 0x1C0003860 (USBType1CompleteCallback.c)
 *     USBCaptureCompleteCallback @ 0x1C0004E10 (USBCaptureCompleteCallback.c)
 *     PinReset @ 0x1C00148D0 (PinReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0001C28
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001C28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001C28: mov     [rsp+arg_0], rbx
 * 00000001C0001C2D: mov     [rsp+arg_8], rbp
 * 00000001C0001C32: mov     [rsp+arg_10], rsi
 * 00000001C0001C37: push    rdi
 * 00000001C0001C38: sub     rsp, 30h
 * 00000001C0001C3C: mov     esi, r8d
 * 00000001C0001C3F: movzx   edi, r9w
 * 00000001C0001C43: mov     ebx, r8d
 * 00000001C0001C46: mov     rbp, rcx
 * 00000001C0001C49: shr     rbx, 10h
 * 00000001C0001C4D: lea     r11d, [rsi-1]
 * 00000001C0001C51: mov     edx, r11d
 * 00000001C0001C54: and     r11d, 1Fh
 * 00000001C0001C58: shr     rdx, 5
 * 00000001C0001C5C: lea     rax, [rbx+rbx*4]
 * 00000001C0001C60: and     edx, 7FFh
 * 00000001C0001C66: lea     r10, [rdx+rax*4]
 * 00000001C0001C6A: mov     edx, r11d
 * 00000001C0001C6D: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0001C74: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0001C79: bt      eax, edx
 * 00000001C0001C7C: jnb     short loc_1C0001CB3
 * 00000001C0001C7E: lea     rcx, [rbx+rbx*4]
 * 00000001C0001C82: add     rcx, rcx
 * 00000001C0001C85: cmp     byte ptr [r11+rcx*8+29h], 5
 * 00000001C0001C8B: jb      short loc_1C0001CB3
 * 00000001C0001C8D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0001C94: mov     edx, 2Bh ; '+'
 * 00000001C0001C99: and     [rsp+38h+var_18], 0
 * 00000001C0001C9F: mov     r8, [rsp+38h+arg_20]
 * 00000001C0001CA4: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0001CA9: movzx   r9d, r9w
 * 00000001C0001CAD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0001CB3: and     [rsp+38h+var_10], 0
 * 00000001C0001CB9: mov     r8d, esi
 * 00000001C0001CBC: mov     r9, [rsp+38h+arg_20]
 * 00000001C0001CC1: mov     edx, 5
 * 00000001C0001CC6: mov     rcx, rbp
 * 00000001C0001CC9: mov     word ptr [rsp+38h+var_18], di
 * 00000001C0001CCE: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001CD4: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0001CD9: mov     rbp, [rsp+38h+arg_8]
 * 00000001C0001CDE: mov     rsi, [rsp+38h+arg_10]
 * 00000001C0001CE3: add     rsp, 30h
 * 00000001C0001CE7: pop     rdi
 * 00000001C0001CE8: retn
 */
