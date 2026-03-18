/*
 * XREFs of HeapFree @ 0x1C00144F8
 * Callers:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     ParseLoad @ 0x1C0005A50 (ParseLoad.c)
 *     EnableDisableCMOSRegions @ 0x1C0007690 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x1C0008B20 (AMLIIterateSiblingsNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0008D90 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C0009260 (GetPciAddressWorker.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ParseFieldList @ 0x1C000EE64 (ParseFieldList.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     ParseRelease @ 0x1C0014940 (ParseRelease.c)
 *     FindNSObjMainNoLock @ 0x1C0018E60 (FindNSObjMainNoLock.c)
 *     WriteCookAccess @ 0x1C001FF40 (WriteCookAccess.c)
 *     ProcessIncDec @ 0x1C0020AA0 (ProcessIncDec.c)
 *     Simulator_Free_Arguments @ 0x1C0042660 (Simulator_Free_Arguments.c)
 *     FreeObjOwner @ 0x1C004481C (FreeObjOwner.c)
 *     LoadFieldUnitDDB @ 0x1C0045510 (LoadFieldUnitDDB.c)
 *     ProcessSleep @ 0x1C0045AB0 (ProcessSleep.c)
 *     PreserveWriteObj @ 0x1C0046250 (PreserveWriteObj.c)
 *     RawFieldAccess @ 0x1C004635C (RawFieldAccess.c)
 *     ProcessDivide @ 0x1C0048280 (ProcessDivide.c)
 *     ProcessLoadTable @ 0x1C00483D0 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C0048810 (ProcessWait.c)
 *     ParseFieldConnection @ 0x1C0049A00 (ParseFieldConnection.c)
 *     ParseNestedContext @ 0x1C0049C60 (ParseNestedContext.c)
 *     ParseUnload @ 0x1C0049D10 (ParseUnload.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 */

void __fastcall HeapFree(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 16;
  *(_DWORD *)(a1 - 16) = 0;
  byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  HeapInsertFreeList(*(_QWORD *)(v1 + 8), v1);
  KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
}
