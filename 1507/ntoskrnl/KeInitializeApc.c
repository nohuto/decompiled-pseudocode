/*
 * XREFs of KeInitializeApc @ 0x1400215A8
 * Callers:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     ExpSetTimer @ 0x140065EC0 (ExpSetTimer.c)
 *     MiStoreModifiedWriteDereference @ 0x14013F1C8 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x1401F60B8 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F6358 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140222054 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14025FEE8 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x140260000 (EtwpQueueStackWalkApc.c)
 *     KeInitThread @ 0x1403EB280 (KeInitThread.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     IopCancelIrpsInThreadList @ 0x1404A8064 (IopCancelIrpsInThreadList.c)
 *     SmKmStoreAdd @ 0x1404F97FC (SmKmStoreAdd.c)
 *     NtQueueApcThreadEx @ 0x140540B68 (NtQueueApcThreadEx.c)
 *     ExSwapinWorkerThreads @ 0x140564D10 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140669E08 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406C6990 (PspRundownUmsThreadForApcDelivery.c)
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
