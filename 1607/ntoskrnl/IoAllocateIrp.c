/*
 * XREFs of IoAllocateIrp @ 0x1400C3FBC
 * Callers:
 *     CcSetValidData @ 0x1400C3EC4 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14012B2F0 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x140220978 (SmKmIssueVolumeIo.c)
 *     PnpAsynchronousCall @ 0x1403F0A74 (PnpAsynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x140480CE4 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404AC964 (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 *     IopFilterResourceRequirementsCall @ 0x14050D21C (IopFilterResourceRequirementsCall.c)
 *     WmipGetFilePDO @ 0x140546C44 (WmipGetFilePDO.c)
 *     WmipSendWmiIrp @ 0x140549C18 (WmipSendWmiIrp.c)
 *     PopFxRegisterDeviceWorker @ 0x140567268 (PopFxRegisterDeviceWorker.c)
 *     PopConnectToPolicyDevice @ 0x14056C618 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14056CCB8 (PopAcquireCoolingInterface.c)
 *     WmipSetTraceNotify @ 0x14057A6A4 (WmipSetTraceNotify.c)
 *     PiPagePathSetState @ 0x14057D7D0 (PiPagePathSetState.c)
 *     IopEjectDevice @ 0x140649E68 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1406981EC (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     <none>
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return (PIRP)pIoAllocateIrp(0LL, StackSize, ChargeQuota, retaddr);
}
