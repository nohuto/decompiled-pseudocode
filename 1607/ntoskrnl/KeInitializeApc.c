/*
 * XREFs of KeInitializeApc @ 0x1400EEDA8
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     ExpSetTimer @ 0x1400ED6DC (ExpSetTimer.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14010DBB0 (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x14011B430 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x1401C8B7C (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401C8DE4 (IoRaiseInformationalHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140228EC4 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x140229060 (EtwpQueueStackWalkApc.c)
 *     KeInitThread @ 0x1403C8E74 (KeInitThread.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     IopCancelIrpsInThreadList @ 0x1404B22E8 (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx @ 0x1404BB320 (NtQueueApcThreadEx.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 *     ExSwapinWorkerThreads @ 0x14052F230 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14061B484 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406827D8 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 result; // rax

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    *(_BYTE *)(a1 + 80) = *(_BYTE *)(a2 + 586);
  else
    *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  result = a6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 48) = a6;
  if ( a6 )
  {
    *(_BYTE *)(a1 + 81) = a7;
    result = a8;
    *(_QWORD *)(a1 + 56) = a8;
  }
  else
  {
    *(_BYTE *)(a1 + 81) = 0;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_BYTE *)(a1 + 82) = 0;
  return result;
}
