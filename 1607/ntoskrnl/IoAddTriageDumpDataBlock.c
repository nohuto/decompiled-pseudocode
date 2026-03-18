/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x14014B3B4
 * Callers:
 *     IopIncrementVpbRefCount @ 0x140007888 (IopIncrementVpbRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140007CA8 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopCheckDeviceAndDriver @ 0x14002DCA0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14002DEE0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14002ECF0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002EDD0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14007F460 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x14009ECD4 (IoInvalidateDeviceRelations.c)
 *     IoGetDeviceInstanceName @ 0x14012C56C (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x1401308E8 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x14014C4A8 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x140156FC4 (KiMarkBugCheckRegions.c)
 *     IopUpdateMinidumpContext @ 0x1401C7AD0 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401CC284 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401CC388 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401CC51C (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401CC624 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401CC70C (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401CC88C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401CC980 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401CCA14 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x1401CCEA4 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1401D576C (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x1401E79E8 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1401E8040 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1401FF078 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1401FF12C (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1401FF2A4 (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x1402304CC (WheapAddToDumpFile.c)
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     PopWriteHiberPages @ 0x1403CBF00 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1403CD62C (PopRequestWrite.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     IopDestroyDeviceNode @ 0x1403F2CD4 (IopDestroyDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1403F32E8 (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PnpProcessRelation @ 0x1404C47D8 (PnpProcessRelation.c)
 *     IoGetDeviceInterfaces @ 0x1404F5CF0 (IoGetDeviceInterfaces.c)
 *     IoGetDevicePropertyData @ 0x1404F757C (IoGetDevicePropertyData.c)
 *     IoReportTargetDeviceChange @ 0x140529918 (IoReportTargetDeviceChange.c)
 *     PnpNotifyDriverCallback @ 0x14052C110 (PnpNotifyDriverCallback.c)
 *     IoSetDevicePropertyData @ 0x14054D30C (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x140570A48 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140570C34 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x140577C34 (IoGetDmaAdapter.c)
 *     IoAssignResources @ 0x140629C8C (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140629F58 (IoSteerInterrupt.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x14062A2A8 (IoSynchronousInvalidateDeviceRelations.c)
 *     IoReportResourceForDetection @ 0x14062BED4 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x14062C0B4 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x14014B400 (IopAddTriageDumpDataBlock.c)
 */

__int64 __fastcall IoAddTriageDumpDataBlock(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  void *v4; // [rsp+38h] [rbp-10h]

  v3[0] = IopNumTriageDumpDataBlocks;
  v4 = &IopTriageDumpDataBlocks;
  v3[1] = 256;
  result = IopAddTriageDumpDataBlock(1, (unsigned int)v3, (unsigned int)v3, a1, a2);
  IopNumTriageDumpDataBlocks = v3[0];
  return result;
}
