/*
 * XREFs of PsGetCurrentSilo @ 0x140511880
 * Callers:
 *     PsRootSiloInformation @ 0x140243F20 (PsRootSiloInformation.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1405115F0 (PsLookupThreadByThreadId.c)
 *     PsInsertSiloObject @ 0x1406C0CC0 (PsInsertSiloObject.c)
 *     PsRemoveSiloObject @ 0x1406C10D8 (PsRemoveSiloObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 */

void *__fastcall PsGetCurrentSilo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  __int64 v6; // rbx
  __int64 v7; // r9
  void *v8; // rbx
  __int16 v9; // ax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)&Process[1], v6, (ULONG_PTR)&Process[1], v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = *(void **)&CurrentThread[1].WaitBlockFill11[160];
  if ( v8 == (void *)-3LL )
    v8 = (void *)Process[2].ActiveProcessors.Bitmap[12];
  if ( v8 )
    PspReferenceSiloObject(v8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  v9 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
