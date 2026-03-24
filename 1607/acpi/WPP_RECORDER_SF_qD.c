/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C004B650
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x1C000D088 (OSNotifyCreateOperationRegion.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C0014380 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C00145BC (ACPIReleaseGlobalLock.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049E20 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C004A0B0 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C004A130 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C004B650
 * Reason: Hex-Rays returned no pseudocode for 0x1C004B650
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004B650: mov     [rsp+arg_0], rbx
 * 00000001C004B655: mov     [rsp+arg_8], rbp
 * 00000001C004B65A: mov     [rsp+arg_10], rsi
 * 00000001C004B65F: push    rdi
 * 00000001C004B660: push    r14
 * 00000001C004B662: push    r15
 * 00000001C004B664: sub     rsp, 50h
 * 00000001C004B668: mov     r14d, r8d
 * 00000001C004B66B: mov     sil, dl
 * 00000001C004B66E: mov     edi, r8d
 * 00000001C004B671: movzx   ebp, r9w
 * 00000001C004B675: shr     rdi, 10h
 * 00000001C004B679: mov     r15, rcx
 * 00000001C004B67C: lea     ebx, [r14-1]
 * 00000001C004B680: mov     r10d, ebx
 * 00000001C004B683: and     ebx, 1Fh
 * 00000001C004B686: shr     r10, 5
 * 00000001C004B68A: lea     rax, [rdi+rdi*4]
 * 00000001C004B68E: and     r10d, 7FFh
 * 00000001C004B695: mov     edx, ebx
 * 00000001C004B697: mov     ebx, 4
 * 00000001C004B69C: lea     r11, [r10+rax*4]
 * 00000001C004B6A0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004B6A7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C004B6AC: bt      eax, edx
 * 00000001C004B6AF: jnb     short loc_1C004B70E
 * 00000001C004B6B1: lea     rcx, [rdi+rdi*4]
 * 00000001C004B6B5: add     rcx, rcx
 * 00000001C004B6B8: cmp     [r10+rcx*8+29h], sil
 * 00000001C004B6BD: jb      short loc_1C004B70E
 * 00000001C004B6BF: and     [rsp+68h+var_28], 0
 * 00000001C004B6C5: lea     rdx, [rsp+68h+arg_30]
 * 00000001C004B6CD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004B6D4: mov     r8, [rsp+68h+arg_20]
 * 00000001C004B6DC: mov     rcx, [r10+rcx*8+18h]
 * 00000001C004B6E1: mov     [rsp+68h+var_30], rbx
 * 00000001C004B6E6: mov     [rsp+68h+var_38], rdx
 * 00000001C004B6EB: lea     rdx, [rsp+68h+arg_28]
 * 00000001C004B6F3: mov     [rsp+68h+var_40], 8
 * 00000001C004B6FC: mov     [rsp+68h+var_48], rdx
 * 00000001C004B701: lea     edx, [rbx+27h]
 * 00000001C004B704: movzx   r9d, r9w
 * 00000001C004B708: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004B70E: and     [rsp+68h+var_20], 0
 * 00000001C004B714: lea     rax, [rsp+68h+arg_30]
 * 00000001C004B71C: mov     r9, [rsp+68h+arg_20]
 * 00000001C004B724: mov     r8d, r14d
 * 00000001C004B727: mov     [rsp+68h+var_28], rbx
 * 00000001C004B72C: mov     rcx, r15
 * 00000001C004B72F: mov     [rsp+68h+var_30], rax
 * 00000001C004B734: lea     rax, [rsp+68h+arg_28]
 * 00000001C004B73C: mov     [rsp+68h+var_38], 8
 * 00000001C004B745: mov     [rsp+68h+var_40], rax
 * 00000001C004B74A: movzx   edx, sil
 * 00000001C004B74E: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C004B753: call    cs:__imp_WppAutoLogTrace
 * 00000001C004B759: lea     r11, [rsp+68h+var_18]
 * 00000001C004B75E: mov     rbx, [r11+20h]
 * 00000001C004B762: mov     rbp, [r11+28h]
 * 00000001C004B766: mov     rsi, [r11+30h]
 * 00000001C004B76A: mov     rsp, r11
 * 00000001C004B76D: pop     r15
 * 00000001C004B76F: pop     r14
 * 00000001C004B771: pop     rdi
 * 00000001C004B772: retn
 */
