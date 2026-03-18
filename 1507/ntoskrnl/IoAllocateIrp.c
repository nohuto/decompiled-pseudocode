/*
 * XREFs of IoAllocateIrp @ 0x1400CF78C
 * Callers:
 *     CcSetValidData @ 0x1400CF694 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x1402579C0 (SmKmIssueVolumeIo.c)
 *     IopFilterResourceRequirementsCall @ 0x14045D284 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140461980 (PnpAsynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x1404AE73C (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 *     WmipSendWmiIrp @ 0x1404D735C (WmipSendWmiIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1405333A4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipGetFilePDO @ 0x140582DB8 (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 *     WmipSetTraceNotify @ 0x1405BAA3C (WmipSetTraceNotify.c)
 *     PiPagePathSetState @ 0x1405C0A08 (PiPagePathSetState.c)
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x1405C3B58 (PopAcquireCoolingInterface.c)
 *     IopEjectDevice @ 0x1406940A4 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1406DCC20 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     <none>
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return (PIRP)pIoAllocateIrp(0LL, StackSize, ChargeQuota, retaddr);
}
