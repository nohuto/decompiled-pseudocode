/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00554D8
 * Callers:
 *     ACPIRangeValidatePciMemoryResource @ 0x1C000AB00 (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIGpeBuildEventMasks @ 0x1C000DA68 (ACPIGpeBuildEventMasks.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0080CBC (ACPIRegReadAMLRegistryEntry.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 *     IrqArbAddAllocation @ 0x1C0089870 (IrqArbAddAllocation.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C009E090 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C009E2CC (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C009E764 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C009E948 (OSReadNextRegValue.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A24E8 (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C00554D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00554D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00554D8: mov     [rsp+arg_0], rbx
 * 00000001C00554DD: mov     [rsp+arg_8], rbp
 * 00000001C00554E2: mov     [rsp+arg_10], rsi
 * 00000001C00554E7: push    rdi
 * 00000001C00554E8: push    r14
 * 00000001C00554EA: push    r15
 * 00000001C00554EC: sub     rsp, 40h
 * 00000001C00554F0: mov     r14d, r8d
 * 00000001C00554F3: mov     sil, dl
 * 00000001C00554F6: mov     edi, r8d
 * 00000001C00554F9: movzx   ebp, r9w
 * 00000001C00554FD: shr     rdi, 10h
 * 00000001C0055501: mov     r15, rcx
 * 00000001C0055504: lea     ebx, [r14-1]
 * 00000001C0055508: mov     r10d, ebx
 * 00000001C005550B: and     ebx, 1Fh
 * 00000001C005550E: shr     r10, 5
 * 00000001C0055512: lea     rax, [rdi+rdi*4]
 * 00000001C0055516: and     r10d, 7FFh
 * 00000001C005551D: mov     edx, ebx
 * 00000001C005551F: mov     ebx, 4
 * 00000001C0055524: lea     r11, [r10+rax*4]
 * 00000001C0055528: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C005552F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0055534: bt      eax, edx
 * 00000001C0055537: jnb     short loc_1C0055580
 * 00000001C0055539: lea     rcx, [rdi+rdi*4]
 * 00000001C005553D: add     rcx, rcx
 * 00000001C0055540: cmp     [r10+rcx*8+29h], sil
 * 00000001C0055545: jb      short loc_1C0055580
 * 00000001C0055547: and     [rsp+58h+var_28], 0
 * 00000001C005554D: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0055555: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005555C: mov     r8, [rsp+58h+arg_20]
 * 00000001C0055564: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0055569: mov     [rsp+58h+var_30], rbx
 * 00000001C005556E: mov     [rsp+58h+var_38], rdx
 * 00000001C0055573: lea     edx, [rbx+27h]
 * 00000001C0055576: movzx   r9d, r9w
 * 00000001C005557A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0055580: and     [rsp+58h+var_20], 0
 * 00000001C0055586: lea     rax, [rsp+58h+arg_28]
 * 00000001C005558E: mov     r9, [rsp+58h+arg_20]
 * 00000001C0055596: mov     r8d, r14d
 * 00000001C0055599: mov     [rsp+58h+var_28], rbx
 * 00000001C005559E: mov     rcx, r15
 * 00000001C00555A1: mov     [rsp+58h+var_30], rax
 * 00000001C00555A6: movzx   edx, sil
 * 00000001C00555AA: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00555AF: call    cs:__imp_WppAutoLogTrace
 * 00000001C00555B5: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00555BA: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00555BF: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00555C4: add     rsp, 40h
 * 00000001C00555C8: pop     r15
 * 00000001C00555CA: pop     r14
 * 00000001C00555CC: pop     rdi
 * 00000001C00555CD: retn
 */
