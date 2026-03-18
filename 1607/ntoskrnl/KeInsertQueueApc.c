/*
 * XREFs of KeInsertQueueApc @ 0x1400C9FD0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140001410 (ExpTimerDpcRoutine.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14010D64C (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x14011AEC0 (MiStoreModifiedWriteDereference.c)
 *     IoRaiseHardError @ 0x1401C8CDC (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401C8F44 (IoRaiseInformationalHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140229098 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x140229234 (EtwpQueueStackWalkApc.c)
 *     CmpPostNotify @ 0x14049A9D4 (CmpPostNotify.c)
 *     IopCancelIrpsInThreadList @ 0x1404CC8BC (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx @ 0x1404D7D1C (NtQueueApcThreadEx.c)
 *     PspSetContextThreadInternal @ 0x140517374 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140517A04 (PspGetContextThreadInternal.c)
 *     ExSwapinWorkerThreads @ 0x14052ECF0 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14061B3D0 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406826F4 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x1400B7664 (EtwProviderEnabled.c)
 *     KiSignalThreadForApc @ 0x1400CA134 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400CA2B4 (KiInsertQueueApc.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     EtwTiLogQueueApcThread @ 0x140228910 (EtwTiLogQueueApcThread.c)
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
