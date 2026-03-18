/*
 * XREFs of IoFreeIrp @ 0x14004BC70
 * Callers:
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     CmpGetVolumeClusterSize @ 0x1404AE73C (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 *     WmipSendWmiIrp @ 0x1404D735C (WmipSendWmiIrp.c)
 *     IopFreeCompletionListPackets @ 0x14052B640 (IopFreeCompletionListPackets.c)
 *     FsRtlQueryKernelEaFile @ 0x140530A5C (FsRtlQueryKernelEaFile.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1405333A4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140554078 (FsRtlSetKernelEaFile.c)
 *     IopUserRundown @ 0x140554804 (IopUserRundown.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140558E04 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140558EF8 (FsRtlMdlReadEx.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     WmipGetFilePDO @ 0x140582DB8 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x1405BAA3C (WmipSetTraceNotify.c)
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x1405C3B58 (PopAcquireCoolingInterface.c)
 *     FsRtlQueryInformationFile @ 0x14066D780 (FsRtlQueryInformationFile.c)
 *     IoCancelFileOpen @ 0x140673C54 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x140694060 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1406BADA4 (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1406DC94C (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1406DCC20 (SmKmIsVolumeIoPossible.c)
 *     VerifierIoFreeIrp @ 0x140739B80 (VerifierIoFreeIrp.c)
 *     VfIrpSendSynchronousIrp @ 0x14074169C (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoFreeIrp(PIRP Irp)
{
  pIoFreeIrp(Irp);
}
