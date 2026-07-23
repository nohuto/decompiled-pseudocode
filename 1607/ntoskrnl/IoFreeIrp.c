/*
 * XREFs of IoFreeIrp @ 0x140055950
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 *     CmpGetVolumeClusterSize @ 0x140480CE4 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404AC964 (WmipSendWmiIrpToTraceDeviceList.c)
 *     FsRtlQueryKernelEaFile @ 0x1404B33F8 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404B5000 (FsRtlKernelFsControlFile.c)
 *     IopUserRundown @ 0x1404C6810 (IopUserRundown.c)
 *     FsRtlSetKernelEaFile @ 0x1404CB0F8 (FsRtlSetKernelEaFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1404D017C (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1404D0270 (FsRtlMdlReadEx.c)
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 *     IopFreeCompletionListPackets @ 0x1404FEDD0 (IopFreeCompletionListPackets.c)
 *     WmipGetFilePDO @ 0x140546C44 (WmipGetFilePDO.c)
 *     WmipSendWmiIrp @ 0x140549C18 (WmipSendWmiIrp.c)
 *     PopConnectToPolicyDevice @ 0x14056C618 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14056CCB8 (PopAcquireCoolingInterface.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140575240 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     WmipSetTraceNotify @ 0x14057A6A4 (WmipSetTraceNotify.c)
 *     FsRtlQueryInformationFile @ 0x14061EAFC (FsRtlQueryInformationFile.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x14061FF4C (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x1406233F0 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x140649E24 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x140672F00 (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x140697EC4 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1406981EC (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF30 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoFreeIrp(PIRP Irp)
{
  pIoFreeIrp(Irp);
}
