/*
 * XREFs of IoAllocateIrp @ 0x1400C611C
 * Callers:
 *     CcSetValidData @ 0x1400C6024 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x14012AD80 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x140220B4C (SmKmIssueVolumeIo.c)
 *     PnpAsynchronousCall @ 0x1403F1BB0 (PnpAsynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x140481F90 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404C0C34 (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopFilterResourceRequirementsCall @ 0x1404C8FAC (IopFilterResourceRequirementsCall.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 *     CmpFileFlushAndPurge @ 0x140506A2C (CmpFileFlushAndPurge.c)
 *     WmipGetFilePDO @ 0x140546704 (WmipGetFilePDO.c)
 *     WmipSendWmiIrp @ 0x1405496D8 (WmipSendWmiIrp.c)
 *     PopFxRegisterDeviceWorker @ 0x140566D28 (PopFxRegisterDeviceWorker.c)
 *     PopConnectToPolicyDevice @ 0x14056C0D8 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14056C778 (PopAcquireCoolingInterface.c)
 *     WmipSetTraceNotify @ 0x14057A164 (WmipSetTraceNotify.c)
 *     PiPagePathSetState @ 0x14057D324 (PiPagePathSetState.c)
 *     IopEjectDevice @ 0x140649D84 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x140698108 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     <none>
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return (PIRP)pIoAllocateIrp(0LL, StackSize, ChargeQuota, retaddr);
}
