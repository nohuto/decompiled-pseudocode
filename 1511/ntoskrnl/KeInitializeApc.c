/*
 * XREFs of KeInitializeApc @ 0x14002C320
 * Callers:
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     ExpSetTimer @ 0x140090DFC (ExpSetTimer.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     MiStoreModifiedWriteDereference @ 0x14010D5D8 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x1401BAE90 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401BB0F8 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1401DD0B0 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140210B28 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x140210C68 (EtwpQueueStackWalkApc.c)
 *     KeInitThread @ 0x14039C2C0 (KeInitThread.c)
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     IopCancelIrpsInThreadList @ 0x14048FFEC (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     NtQueueApcThreadEx @ 0x1404B1628 (NtQueueApcThreadEx.c)
 *     SmKmStoreAdd @ 0x1404D1C00 (SmKmStoreAdd.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1405F1178 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x140643C78 (PspRundownUmsThreadForApcDelivery.c)
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
