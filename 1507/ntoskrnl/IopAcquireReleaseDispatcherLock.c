/*
 * XREFs of IopAcquireReleaseDispatcherLock @ 0x14067DAB4
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1401FB130 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void __fastcall IopAcquireReleaseDispatcherLock(__int64 a1, char a2)
{
  struct _KEVENT *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rcx
  __int16 v5; // ax

  v2 = (struct _KEVENT *)(a1 + 160);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v2, 0, 0);
    v4 = KeGetCurrentThread();
    v5 = v4->KernelApcDisable + 1;
    v4->KernelApcDisable = v5;
    if ( !v5
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152
      && !v4->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
