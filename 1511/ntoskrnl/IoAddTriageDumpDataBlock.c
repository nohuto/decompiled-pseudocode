/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x1401417B4
 * Callers:
 *     IopCheckDeviceAndDriver @ 0x140043BB0 (IopCheckDeviceAndDriver.c)
 *     IopDecrementDeviceObjectRef @ 0x14007E3E0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14007E610 (IopIncrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x1400AFB14 (IopIncrementVpbRefCount.c)
 *     IopCheckVpbMounted @ 0x1400CFEA0 (IopCheckVpbMounted.c)
 *     IoInvalidateDeviceRelations @ 0x1400D1570 (IoInvalidateDeviceRelations.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400F3468 (IopDecrementDeviceObjectRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140102528 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoGetDeviceInstanceName @ 0x1401245A8 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x140125EB4 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x140142738 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x14014DBFC (KiMarkBugCheckRegions.c)
 *     IopUpdateMinidumpContext @ 0x1401B9CA4 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401BDD10 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401BDE18 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401BDFAC (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401BE0B4 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401BE19C (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401BE314 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401BE400 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401BE488 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x1401BE90C (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1401C660C (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x1401D6128 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1401D67AC (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1401E66D8 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1401E678C (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1401E6908 (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x140216370 (WheapAddToDumpFile.c)
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 *     PopWriteHiberPages @ 0x1403A0160 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1403A1D5C (PopRequestWrite.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     IopDestroyDeviceNode @ 0x140455E40 (IopDestroyDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x140457C40 (PipProcessEnumeratedChildDevice.c)
 *     IoGetDevicePropertyData @ 0x1404594A0 (IoGetDevicePropertyData.c)
 *     PnpProcessRelation @ 0x14049EE70 (PnpProcessRelation.c)
 *     IoGetDeviceInterfaces @ 0x1404DD560 (IoGetDeviceInterfaces.c)
 *     PnpNotifyDriverCallback @ 0x1404E2024 (PnpNotifyDriverCallback.c)
 *     IoReportTargetDeviceChange @ 0x1404EABBC (IoReportTargetDeviceChange.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     IoSetDevicePropertyData @ 0x14051C7A0 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x14053E790 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14053E97C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x14054204C (IoGetDmaAdapter.c)
 *     IoAssignResources @ 0x1405FFC38 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x1405FFF04 (IoSteerInterrupt.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x140600254 (IoSynchronousInvalidateDeviceRelations.c)
 *     IoReportResourceForDetection @ 0x140601E88 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140602068 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x140141800 (IopAddTriageDumpDataBlock.c)
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
