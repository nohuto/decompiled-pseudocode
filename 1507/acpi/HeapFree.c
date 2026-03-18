/*
 * XREFs of HeapFree @ 0x1C0010E2C
 * Callers:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     ParseLoad @ 0x1C0005910 (ParseLoad.c)
 *     EnableDisableCMOSRegions @ 0x1C0006F70 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x1C0008E44 (AMLIIterateSiblingsNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00090D0 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C00095A0 (GetPciAddressWorker.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     ParseFieldList @ 0x1C000DC80 (ParseFieldList.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     ParseRelease @ 0x1C0013A10 (ParseRelease.c)
 *     FindNSObjMainNoLock @ 0x1C0018F2C (FindNSObjMainNoLock.c)
 *     WriteCookAccess @ 0x1C001F3B0 (WriteCookAccess.c)
 *     ProcessIncDec @ 0x1C0020540 (ProcessIncDec.c)
 *     Simulator_Free_Arguments @ 0x1C0042C40 (Simulator_Free_Arguments.c)
 *     FreeObjOwner @ 0x1C0044DE0 (FreeObjOwner.c)
 *     LoadFieldUnitDDB @ 0x1C0045ACC (LoadFieldUnitDDB.c)
 *     ProcessSleep @ 0x1C0046070 (ProcessSleep.c)
 *     PreserveWriteObj @ 0x1C0046930 (PreserveWriteObj.c)
 *     RawFieldAccess @ 0x1C0046A3C (RawFieldAccess.c)
 *     ProcessDivide @ 0x1C0048970 (ProcessDivide.c)
 *     ProcessLoadTable @ 0x1C0048AC0 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C0048F00 (ProcessWait.c)
 *     ParseFieldConnection @ 0x1C004A0F0 (ParseFieldConnection.c)
 *     ParseNestedContext @ 0x1C004A350 (ParseNestedContext.c)
 *     ParseUnload @ 0x1C004A400 (ParseUnload.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1C0013620 (HeapInsertFreeList.c)
 */

void __fastcall HeapFree(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 16;
  *(_DWORD *)(a1 - 16) = 0;
  byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  HeapInsertFreeList(*(_QWORD *)(v1 + 8));
  KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
}
