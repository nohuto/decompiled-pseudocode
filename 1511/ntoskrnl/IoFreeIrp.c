/*
 * XREFs of IoFreeIrp @ 0x140087080
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x1403D210C (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1403D2A28 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1403D2B0C (CmpFileFlushAndPurge.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     FsRtlSetKernelEaFile @ 0x1404A233C (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404A249C (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404A2780 (FsRtlQueryKernelEaFile.c)
 *     IopFreeCompletionListPackets @ 0x1404A3290 (IopFreeCompletionListPackets.c)
 *     IopUserRundown @ 0x1404BD614 (IopUserRundown.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1404C3814 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1404C3908 (FsRtlMdlReadEx.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140509C08 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipGetFilePDO @ 0x14050B798 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140542638 (WmipSetTraceNotify.c)
 *     PopConnectToPolicyDevice @ 0x14054BF5C (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14054C598 (PopAcquireCoolingInterface.c)
 *     FsRtlQueryInformationFile @ 0x1405F46E4 (FsRtlQueryInformationFile.c)
 *     IoCancelFileOpen @ 0x1405F99D8 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x1406152E8 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x14063BA90 (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x14065A208 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x14065A4DC (SmKmIsVolumeIoPossible.c)
 *     VerifierIoFreeIrp @ 0x1406B9590 (VerifierIoFreeIrp.c)
 *     VfIrpSendSynchronousIrp @ 0x1406BFEA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoFreeIrp(PIRP Irp)
{
  pIoFreeIrp(Irp);
}
