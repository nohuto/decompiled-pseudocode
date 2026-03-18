/*
 * XREFs of IoFreeIrp @ 0x140055DD0
 * Callers:
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     CmpGetVolumeClusterSize @ 0x140481F90 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404C0C34 (WmipSendWmiIrpToTraceDeviceList.c)
 *     FsRtlQueryKernelEaFile @ 0x1404CE198 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404D1560 (FsRtlKernelFsControlFile.c)
 *     IopUserRundown @ 0x1404E3B58 (IopUserRundown.c)
 *     FsRtlSetKernelEaFile @ 0x1404E8D6C (FsRtlSetKernelEaFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1404EE0B4 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1404EE1A8 (FsRtlMdlReadEx.c)
 *     CmpFileFlushAndPurge @ 0x140506A2C (CmpFileFlushAndPurge.c)
 *     IopFreeCompletionListPackets @ 0x14051B9E0 (IopFreeCompletionListPackets.c)
 *     WmipGetFilePDO @ 0x140546704 (WmipGetFilePDO.c)
 *     WmipSendWmiIrp @ 0x1405496D8 (WmipSendWmiIrp.c)
 *     PopConnectToPolicyDevice @ 0x14056C0D8 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14056C778 (PopAcquireCoolingInterface.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140574D00 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     WmipSetTraceNotify @ 0x14057A164 (WmipSetTraceNotify.c)
 *     FsRtlQueryInformationFile @ 0x14061EA48 (FsRtlQueryInformationFile.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x14061FE98 (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     IopExceptionCleanup @ 0x1406213D4 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x14062333C (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x140649D40 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x140672E1C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x140697DE0 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x140698108 (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF00 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoFreeIrp(PIRP Irp)
{
  pIoFreeIrp(Irp);
}
