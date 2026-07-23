/*
 * XREFs of KeInsertQueueApc @ 0x1400C7E70
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140001410 (ExpTimerDpcRoutine.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14010DBB0 (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x14011B430 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x1401C8B7C (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401C8DE4 (IoRaiseInformationalHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140228EC4 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x140229060 (EtwpQueueStackWalkApc.c)
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     IopCancelIrpsInThreadList @ 0x1404B22E8 (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx @ 0x1404BB320 (NtQueueApcThreadEx.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 *     ExSwapinWorkerThreads @ 0x14052F230 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14061B484 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406827D8 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     KiSignalThreadForApc @ 0x1400C7FD4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400C8154 (KiInsertQueueApc.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     EtwTiLogQueueApcThread @ 0x14022873C (EtwTiLogQueueApcThread.c)
 */

__int64 __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  BOOLEAN v4; // si
  __int64 v8; // rbx
  __int64 v9; // r13
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int8 v12; // di
  __int64 v13; // r9
  __int64 v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+20h]

  v17 = a4;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 81) )
    v4 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 56);
  v15 = *(_QWORD *)(a1 + 48);
  if ( v4 )
    ObfReferenceObjectWithTag((PVOID)v8, 0x5149654Bu);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(v8 + 64) );
  }
  if ( (*(_DWORD *)(v8 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v12 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc(CurrentPrcb, a1, CurrentIrql);
    v12 = 1;
  }
  v13 = v17;
  *(_QWORD *)(v8 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, v13, CurrentIrql);
  if ( v4 )
  {
    if ( v12 )
      EtwTiLogQueueApcThread((unsigned __int8)KeGetCurrentThread()->gap0[10], v8, v15, v9, a2, a3);
    ObfDereferenceObjectWithTag((PVOID)v8, 0x5149654Bu);
  }
  return v12;
}
