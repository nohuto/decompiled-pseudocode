/*
 * XREFs of KeInsertQueueApc @ 0x1400313A0
 * Callers:
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     ExpTimerDpcRoutine @ 0x1400ED4E0 (ExpTimerDpcRoutine.c)
 *     MiStoreModifiedWriteDereference @ 0x14010D5D8 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x1401BAE90 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401BB0F8 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1401DD0B0 (MiQueueSyncModifiedWriterApc.c)
 *     SmWdProcessStore @ 0x140209578 (SmWdProcessStore.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140210B28 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x140210C68 (EtwpQueueStackWalkApc.c)
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     IopCancelIrpsInThreadList @ 0x14048FFEC (IopCancelIrpsInThreadList.c)
 *     CmpPostNotify @ 0x14049AAF4 (CmpPostNotify.c)
 *     NtQueueApcThreadEx @ 0x1404B1628 (NtQueueApcThreadEx.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1405F1178 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x140643C78 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x140031480 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140031620 (KiInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 */

__int64 __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v11; // di
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( (*(_DWORD *)(v4 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v11 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc(CurrentPrcb, a1, CurrentIrql);
    v11 = 1;
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, a4, CurrentIrql);
  return v11;
}
