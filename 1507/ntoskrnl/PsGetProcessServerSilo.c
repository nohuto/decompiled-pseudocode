/*
 * XREFs of PsGetProcessServerSilo @ 0x14050C11C
 * Callers:
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     SepRmLsaConnectRequest @ 0x1405A79A8 (SepRmLsaConnectRequest.c)
 *     EtwpPsProvTraceThread @ 0x1406E4CDC (EtwpPsProvTraceThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PspGetServerSiloForSilo @ 0x1400CEE80 (PspGetServerSiloForSilo.c)
 *     PsGetProcessSilo @ 0x1400EFF80 (PsGetProcessSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 */

void *__fastcall PsGetProcessServerSilo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 ProcessSilo; // rax
  void *ServerSiloForSilo; // rax
  void *v11; // rsi
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (unsigned __int64 *)(a1 + 728);
  v7 = KeAbPreAcquire(a1 + 728, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  ProcessSilo = PsGetProcessSilo(a1);
  ServerSiloForSilo = (void *)PspGetServerSiloForSilo(ProcessSilo);
  v11 = ServerSiloForSilo;
  if ( ServerSiloForSilo )
    PspReferenceSiloObject(ServerSiloForSilo);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v12 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v11;
}
