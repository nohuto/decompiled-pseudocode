/*
 * XREFs of PspGetThreadServerSilo @ 0x1400CE9B0
 * Callers:
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PspGetServerSiloForSilo @ 0x1400CEE80 (PspGetServerSiloForSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void *__fastcall PspGetThreadServerSilo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rcx
  void *ServerSiloForSilo; // rax
  void *v10; // rdi
  __int64 v11; // rcx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire(v6 + 728, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 728), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6 + 728, v7, v6 + 728);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = *(_QWORD *)(a1 + 1976);
  if ( v8 == -3 )
    v8 = *(_QWORD *)(v6 + 1832);
  ServerSiloForSilo = (void *)PspGetServerSiloForSilo(v8);
  v10 = ServerSiloForSilo;
  if ( ServerSiloForSilo )
    ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6 + 728);
  KeAbPostRelease(v6 + 728);
  v12 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v11);
  }
  return v10;
}
