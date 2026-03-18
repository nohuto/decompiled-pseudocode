/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x14016F790
 * Callers:
 *     IopCheckVpbMounted @ 0x140006570 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400077EC (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x140026498 (IoInvalidateDeviceRelations.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140026540 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopIncrementVpbRefCount @ 0x14003F7B4 (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400458A0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x140045A10 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x140047EC0 (IopCheckDeviceAndDriver.c)
 *     IoGetDeviceInstanceName @ 0x14015377C (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x1401599BC (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x14017BCEC (KiMarkBugCheckRegions.c)
 *     IopUpdateMinidumpContext @ 0x1401F4F1C (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401F9578 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401F9680 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401F9814 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401F991C (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401F9A04 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401F9B7C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401F9C68 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401F9CF0 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x1401FA174 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140203154 (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x1402185CC (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x140218C8C (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402338C4 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x140233A40 (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x1402669C0 (WheapAddToDumpFile.c)
 *     PopEndMirroring @ 0x1403F1294 (PopEndMirroring.c)
 *     PopWriteHiberPages @ 0x1403F2D9C (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1403F4B2C (PopRequestWrite.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     IoGetDeviceInterfaces @ 0x140457D34 (IoGetDeviceInterfaces.c)
 *     PnpNotifyDriverCallback @ 0x14045E160 (PnpNotifyDriverCallback.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     IoGetDevicePropertyData @ 0x1404DB778 (IoGetDevicePropertyData.c)
 *     PipProcessEnumeratedChildDevice @ 0x1404E0BF8 (PipProcessEnumeratedChildDevice.c)
 *     IopDestroyDeviceNode @ 0x140534C48 (IopDestroyDeviceNode.c)
 *     PnpProcessRelation @ 0x140535938 (PnpProcessRelation.c)
 *     IoReportTargetDeviceChange @ 0x14055F648 (IoReportTargetDeviceChange.c)
 *     IoSetDevicePropertyData @ 0x140597904 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x1405B3954 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x1405B3B40 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x1405B8614 (IoGetDmaAdapter.c)
 *     IoAssignResources @ 0x14067A81C (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x14067AAE8 (IoSteerInterrupt.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x14067AE38 (IoSynchronousInvalidateDeviceRelations.c)
 *     IoReportResourceForDetection @ 0x14067CD30 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x14067CF10 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x14016F7DC (IopAddTriageDumpDataBlock.c)
 */

__int64 __fastcall IoAddTriageDumpDataBlock(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  __int128 *v4; // [rsp+38h] [rbp-10h]

  v3[0] = IopNumTriageDumpDataBlocks;
  v4 = &IopTriageDumpDataBlocks;
  v3[1] = 256;
  result = IopAddTriageDumpDataBlock(1, (unsigned int)v3, (unsigned int)v3, a1, a2);
  IopNumTriageDumpDataBlocks = v3[0];
  return result;
}
