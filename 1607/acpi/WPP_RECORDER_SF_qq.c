/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00278EC
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0004140 (ACPIDispatchIrp.c)
 *     ACPIReleaseGlobalLock @ 0x1C00145BC (ACPIReleaseGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0027808 (ACPIStartNextGlobalLockRequest.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0054EC0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIDispatchAddDevice @ 0x1C00A7150 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00278EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00278EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00278EC: mov     [rsp+arg_0], rbx
 * 00000001C00278F1: mov     [rsp+arg_8], rbp
 * 00000001C00278F6: mov     [rsp+arg_10], rsi
 * 00000001C00278FB: push    rdi
 * 00000001C00278FC: push    r14
 * 00000001C00278FE: push    r15
 * 00000001C0027900: sub     rsp, 50h
 * 00000001C0027904: mov     r14d, r8d
 * 00000001C0027907: mov     sil, dl
 * 00000001C002790A: mov     edi, r8d
 * 00000001C002790D: movzx   ebp, r9w
 * 00000001C0027911: shr     rdi, 10h
 * 00000001C0027915: mov     r15, rcx
 * 00000001C0027918: lea     ebx, [r14-1]
 * 00000001C002791C: mov     r10d, ebx
 * 00000001C002791F: and     ebx, 1Fh
 * 00000001C0027922: shr     r10, 5
 * 00000001C0027926: lea     rax, [rdi+rdi*4]
 * 00000001C002792A: and     r10d, 7FFh
 * 00000001C0027931: mov     edx, ebx
 * 00000001C0027933: mov     ebx, 8
 * 00000001C0027938: lea     r11, [r10+rax*4]
 * 00000001C002793C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0027943: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0027948: bt      eax, edx
 * 00000001C002794B: jb      loc_1C003FB6A
 * 00000001C0027951: and     [rsp+68h+var_20], 0
 * 00000001C0027957: lea     rax, [rsp+68h+arg_30]
 * 00000001C002795F: mov     r9, [rsp+68h+arg_20]
 * 00000001C0027967: mov     r8d, r14d
 * 00000001C002796A: mov     [rsp+68h+var_28], rbx
 * 00000001C002796F: mov     rcx, r15
 * 00000001C0027972: mov     [rsp+68h+var_30], rax
 * 00000001C0027977: lea     rax, [rsp+68h+arg_28]
 * 00000001C002797F: mov     [rsp+68h+var_38], rbx
 * 00000001C0027984: mov     [rsp+68h+var_40], rax
 * 00000001C0027989: movzx   edx, sil
 * 00000001C002798D: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0027992: call    cs:__imp_WppAutoLogTrace
 * 00000001C0027998: lea     r11, [rsp+68h+var_18]
 * 00000001C002799D: mov     rbx, [r11+20h]
 * 00000001C00279A1: mov     rbp, [r11+28h]
 * 00000001C00279A5: mov     rsi, [r11+30h]
 * 00000001C00279A9: mov     rsp, r11
 * 00000001C00279AC: pop     r15
 * 00000001C00279AE: pop     r14
 * 00000001C00279B0: pop     rdi
 * 00000001C00279B1: retn
 * 00000001C003FB6A: lea     rcx, [rdi+rdi*4]
 * 00000001C003FB6E: add     rcx, rcx
 * 00000001C003FB71: cmp     [r10+rcx*8+29h], sil
 * 00000001C003FB76: jb      loc_1C0027951
 * 00000001C003FB7C: and     [rsp+68h+var_28], 0
 * 00000001C003FB82: lea     rdx, [rsp+68h+arg_30]
 * 00000001C003FB8A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003FB91: mov     r8, [rsp+68h+arg_20]
 * 00000001C003FB99: mov     rcx, [r10+rcx*8+18h]
 * 00000001C003FB9E: mov     [rsp+68h+var_30], rbx
 * 00000001C003FBA3: mov     [rsp+68h+var_38], rdx
 * 00000001C003FBA8: lea     rdx, [rsp+68h+arg_28]
 * 00000001C003FBB0: mov     [rsp+68h+var_40], rbx
 * 00000001C003FBB5: mov     [rsp+68h+var_48], rdx
 * 00000001C003FBBA: mov     edx, 2Bh ; '+'
 * 00000001C003FBBF: movzx   r9d, bp
 * 00000001C003FBC3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003FBC9: nop
 * 00000001C003FBCA: jmp     loc_1C0027951
 */
