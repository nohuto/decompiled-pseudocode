/*
 * XREFs of PsEqualCurrentSilo @ 0x140243D78
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

bool __fastcall PsEqualCurrentSilo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r15
  __int64 v8; // rbp
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  bool v11; // bp
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() < 2u )
  {
    Process = CurrentThread->Process;
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)&Process[1], v8, (ULONG_PTR)&Process[1], v9);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v10 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
    if ( v10 == -3LL )
      v10 = Process[2].ActiveProcessors.Bitmap[12];
    v11 = v10 == a1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
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
  else
  {
    if ( (PspDebugFlags & 2) != 0 )
      __debugbreak();
    return a1 == 0;
  }
}
