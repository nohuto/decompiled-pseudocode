/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x14014B924
 * Callers:
 *     IopIncrementVpbRefCount @ 0x1400079F8 (IopIncrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x14002D820 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14002DA60 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14002E870 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002E950 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14007F4E0 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x140085F2C (IoInvalidateDeviceRelations.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140086468 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoGetDeviceInstanceName @ 0x14012CADC (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x140130E58 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x140157534 (KiMarkBugCheckRegions.c)
 *     IopUpdateMinidumpContext @ 0x1401C7970 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401CC168 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401CC26C (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401CC400 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401CC508 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401CC5F0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401CC770 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401CC864 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401CC8F8 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x1401CCCF0 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1401D5598 (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x1401E7814 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1401E7E6C (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1401FEF58 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1401FF0D0 (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x1402302F8 (WheapAddToDumpFile.c)
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     PopWriteHiberPages @ 0x1403CBF00 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1403CD62C (PopRequestWrite.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     IopDestroyDeviceNode @ 0x1403F1B98 (IopDestroyDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1403F21AC (PipProcessEnumeratedChildDevice.c)
 *     PnpProcessRelation @ 0x1404861B0 (PnpProcessRelation.c)
 *     IoGetDeviceInterfaces @ 0x1404D8C7C (IoGetDeviceInterfaces.c)
 *     IoGetDevicePropertyData @ 0x1404DA508 (IoGetDevicePropertyData.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     IoReportTargetDeviceChange @ 0x140529E58 (IoReportTargetDeviceChange.c)
 *     PnpNotifyDriverCallback @ 0x14052AFF8 (PnpNotifyDriverCallback.c)
 *     IoSetDevicePropertyData @ 0x14054D6AC (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x140570F88 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140571174 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x140578174 (IoGetDmaAdapter.c)
 *     IoAssignResources @ 0x140629D40 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x14062A00C (IoSteerInterrupt.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x14062A35C (IoSynchronousInvalidateDeviceRelations.c)
 *     IoReportResourceForDetection @ 0x14062BF88 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x14062C168 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x14014B970 (IopAddTriageDumpDataBlock.c)
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
