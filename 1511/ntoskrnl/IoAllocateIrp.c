/*
 * XREFs of IoAllocateIrp @ 0x14001AF44
 * Callers:
 *     CcSetValidData @ 0x14001AE4C (CcSetValidData.c)
 *     PopAllocateIrp @ 0x140121CF4 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x14020872C (SmKmIssueVolumeIo.c)
 *     PnpAsynchronousCall @ 0x1403D2000 (PnpAsynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x1403D210C (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1403D2A28 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1403D2B0C (CmpFileFlushAndPurge.c)
 *     IopSynchronousCall @ 0x1403D2C78 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1404F179C (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140509C08 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipGetFilePDO @ 0x14050B798 (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x14051BB30 (PopFxRegisterDeviceWorker.c)
 *     WmipSetTraceNotify @ 0x140542638 (WmipSetTraceNotify.c)
 *     PiPagePathSetState @ 0x1405493FC (PiPagePathSetState.c)
 *     PopConnectToPolicyDevice @ 0x14054BF5C (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14054C598 (PopAcquireCoolingInterface.c)
 *     IopEjectDevice @ 0x14061532C (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x14065A4DC (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     <none>
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return (PIRP)pIoAllocateIrp(0LL, StackSize, ChargeQuota, retaddr);
}
