/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0014508
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0004DA0 (ACPIMapNamedTable.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C0014380 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C00145BC (ACPIReleaseGlobalLock.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0051B60 (OSNotifyDeviceWakeCallBack.c)
 *     LinkNodepRunSrsWorker @ 0x1C0061CB0 (LinkNodepRunSrsWorker.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0087020 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C008C4D4 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A24E8 (IrqArbpAssignIrqFromLinkNode.c)
 *     ACPILoadProcessDSDT @ 0x1C00A668C (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00A673C (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1C00A6C1C (ACPILoadProcessRSDT.c)
 *     ACPIGlobalInitialize @ 0x1C00A6F5C (ACPIGlobalInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0014508
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014508
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014508: mov     [rsp+arg_0], rbx
 * 00000001C001450D: mov     [rsp+arg_8], rbp
 * 00000001C0014512: mov     [rsp+arg_10], rsi
 * 00000001C0014517: push    rdi
 * 00000001C0014518: push    r14
 * 00000001C001451A: push    r15
 * 00000001C001451C: sub     rsp, 40h
 * 00000001C0014520: mov     r14d, r8d
 * 00000001C0014523: mov     sil, dl
 * 00000001C0014526: mov     edi, r8d
 * 00000001C0014529: movzx   ebp, r9w
 * 00000001C001452D: shr     rdi, 10h
 * 00000001C0014531: mov     r15, rcx
 * 00000001C0014534: lea     ebx, [r14-1]
 * 00000001C0014538: mov     r10d, ebx
 * 00000001C001453B: and     ebx, 1Fh
 * 00000001C001453E: shr     r10, 5
 * 00000001C0014542: lea     rax, [rdi+rdi*4]
 * 00000001C0014546: and     r10d, 7FFh
 * 00000001C001454D: mov     edx, ebx
 * 00000001C001454F: mov     ebx, 8
 * 00000001C0014554: lea     r11, [r10+rax*4]
 * 00000001C0014558: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001455F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0014564: bt      eax, edx
 * 00000001C0014567: jb      loc_1C003664C
 * 00000001C001456D: and     [rsp+58h+var_20], 0
 * 00000001C0014573: lea     rax, [rsp+58h+arg_28]
 * 00000001C001457B: mov     r9, [rsp+58h+arg_20]
 * 00000001C0014583: mov     r8d, r14d
 * 00000001C0014586: mov     [rsp+58h+var_28], rbx
 * 00000001C001458B: mov     rcx, r15
 * 00000001C001458E: mov     [rsp+58h+var_30], rax
 * 00000001C0014593: movzx   edx, sil
 * 00000001C0014597: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C001459C: call    cs:__imp_WppAutoLogTrace
 * 00000001C00145A2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00145A7: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00145AC: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00145B1: add     rsp, 40h
 * 00000001C00145B5: pop     r15
 * 00000001C00145B7: pop     r14
 * 00000001C00145B9: pop     rdi
 * 00000001C00145BA: retn
 * 00000001C003664C: lea     rcx, [rdi+rdi*4]
 * 00000001C0036650: add     rcx, rcx
 * 00000001C0036653: cmp     [r10+rcx*8+29h], sil
 * 00000001C0036658: jb      loc_1C001456D
 * 00000001C003665E: and     [rsp+58h+var_28], 0
 * 00000001C0036664: lea     rdx, [rsp+58h+arg_28]
 * 00000001C003666C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0036673: mov     r8, [rsp+58h+arg_20]
 * 00000001C003667B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0036680: mov     [rsp+58h+var_30], rbx
 * 00000001C0036685: mov     [rsp+58h+var_38], rdx
 * 00000001C003668A: mov     edx, 2Bh ; '+'
 * 00000001C003668F: movzx   r9d, bp
 * 00000001C0036693: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0036699: nop
 * 00000001C003669A: jmp     loc_1C001456D
 */
