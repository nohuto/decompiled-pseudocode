/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000E748
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C000A9AC (ACPIRangeValidatePciResources.c)
 *     ACPIDevicePowerDpc @ 0x1C0011020 (ACPIDevicePowerDpc.c)
 *     ACPIEnableEnterACPIMode @ 0x1C0022D1C (ACPIEnableEnterACPIMode.c)
 *     ACPIDeviceRecordDependencies @ 0x1C0025914 (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0025B04 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0027690 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0027808 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0028488 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIUnload @ 0x1C004C2F0 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D554 (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C00512D0 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051808 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00519CC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C0056270 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C0056A20 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C0057AB0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0057C50 (ACPIVectorDisconnect.c)
 *     ACPIProcessHardwareInformation @ 0x1C0080E90 (ACPIProcessHardwareInformation.c)
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C008131C (ACPIPccLegacyInitialize.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C00831E8 (ACPIProcessorBuildBootApicIds.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00841D8 (PnpCmResourcesToBiosResources.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00843F0 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0085F40 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 *     IrqArbAddAllocation @ 0x1C0089870 (IrqArbAddAllocation.c)
 *     IcCheckIrqConflict @ 0x1C008AA80 (IcCheckIrqConflict.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C008CDB4 (IrqArbpFindSuitableRangePci.c)
 *     ACPIInterruptInitialize @ 0x1C008DDA4 (ACPIInterruptInitialize.c)
 *     ACPIEnumerateTables @ 0x1C0090194 (ACPIEnumerateTables.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C009B508 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIPccInitialize @ 0x1C009CEE4 (ACPIPccInitialize.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C009EFF0 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C009F3C4 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     ACPILoadProcessFADT @ 0x1C00A65F4 (ACPILoadProcessFADT.c)
 *     ACPILoadProcessDSDT @ 0x1C00A668C (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00A673C (ACPILoadProcessFACS.c)
 *     ACPIInitializeDDBs @ 0x1C00A67F0 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessRSDT @ 0x1C00A6C1C (ACPILoadProcessRSDT.c)
 *     ACPIGlobalInitialize @ 0x1C00A6F5C (ACPIGlobalInitialize.c)
 *     ACPIDispatchAddDevice @ 0x1C00A7150 (ACPIDispatchAddDevice.c)
 *     OSReadAcpiConfigurationData @ 0x1C00A749C (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00A7620 (ACPIRegDumpAcpiTables.c)
 *     ACPIInitialize @ 0x1C00A90EC (ACPIInitialize.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A92B8 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitStartACPI @ 0x1C00A9A78 (ACPIInitStartACPI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C000E748
 * Reason: Hex-Rays returned no pseudocode for 0x1C000E748
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000E748: mov     [rsp+arg_0], rbx
 * 00000001C000E74D: mov     [rsp+arg_8], rbp
 * 00000001C000E752: mov     [rsp+arg_10], rsi
 * 00000001C000E757: push    rdi
 * 00000001C000E758: push    r14
 * 00000001C000E75A: push    r15
 * 00000001C000E75C: sub     rsp, 30h
 * 00000001C000E760: mov     r14d, r8d
 * 00000001C000E763: movzx   ebp, r9w
 * 00000001C000E767: mov     edi, r8d
 * 00000001C000E76A: mov     sil, dl
 * 00000001C000E76D: shr     rdi, 10h
 * 00000001C000E771: mov     r15, rcx
 * 00000001C000E774: lea     ebx, [r14-1]
 * 00000001C000E778: mov     r10d, ebx
 * 00000001C000E77B: and     ebx, 1Fh
 * 00000001C000E77E: shr     r10, 5
 * 00000001C000E782: lea     rax, [rdi+rdi*4]
 * 00000001C000E786: and     r10d, 7FFh
 * 00000001C000E78D: lea     r11, [r10+rax*4]
 * 00000001C000E791: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000E798: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000E79D: bt      eax, ebx
 * 00000001C000E7A0: jb      loc_1C0033F1A
 * 00000001C000E7A6: and     [rsp+48h+var_20], 0
 * 00000001C000E7AC: mov     r8d, r14d
 * 00000001C000E7AF: mov     r9, [rsp+48h+arg_20]
 * 00000001C000E7B4: mov     rcx, r15
 * 00000001C000E7B7: movzx   edx, sil
 * 00000001C000E7BB: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C000E7C0: call    cs:__imp_WppAutoLogTrace
 * 00000001C000E7C6: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000E7CB: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000E7D0: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000E7D5: add     rsp, 30h
 * 00000001C000E7D9: pop     r15
 * 00000001C000E7DB: pop     r14
 * 00000001C000E7DD: pop     rdi
 * 00000001C000E7DE: retn
 * 00000001C0033F1A: lea     rcx, [rdi+rdi*4]
 * 00000001C0033F1E: add     rcx, rcx
 * 00000001C0033F21: cmp     [r10+rcx*8+29h], sil
 * 00000001C0033F26: jb      loc_1C000E7A6
 * 00000001C0033F2C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0033F33: mov     edx, 2Bh ; '+'
 * 00000001C0033F38: and     [rsp+48h+var_28], 0
 * 00000001C0033F3E: mov     r8, [rsp+48h+arg_20]
 * 00000001C0033F43: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0033F48: movzx   r9d, bp
 * 00000001C0033F4C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0033F52: nop
 * 00000001C0033F53: jmp     loc_1C000E7A6
 */
