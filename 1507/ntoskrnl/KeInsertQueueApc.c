/*
 * XREFs of KeInsertQueueApc @ 0x14000CF3C
 * Callers:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     ExpTimerDpcRoutine @ 0x14012B7B8 (ExpTimerDpcRoutine.c)
 *     MiStoreModifiedWriteDereference @ 0x14013F1C8 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x1401F60B8 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F6358 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140222054 (MiQueueSyncModifiedWriterApc.c)
 *     SmWdProcessStore @ 0x1402586CC (SmWdProcessStore.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14025FEE8 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x140260000 (EtwpQueueStackWalkApc.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     IopCancelIrpsInThreadList @ 0x1404A8064 (IopCancelIrpsInThreadList.c)
 *     CmpPostNotify @ 0x1404ECFFC (CmpPostNotify.c)
 *     NtQueueApcThreadEx @ 0x140540B68 (NtQueueApcThreadEx.c)
 *     ExSwapinWorkerThreads @ 0x140564D10 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140669E08 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406C6990 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x14000D028 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x14000D1B4 (KiInsertQueueApc.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v11; // esi
  __int64 v12; // r8
  char v13; // bl

  v4 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( (*(_DWORD *)(v4 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v13 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    LOBYTE(v12) = CurrentIrql;
    KiSignalThreadForApc(CurrentPrcb, a1, v12);
    v13 = 1;
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, a4, CurrentIrql);
  return v13;
}
