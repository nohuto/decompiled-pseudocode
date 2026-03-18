/*
 * XREFs of IopAcquireReleaseDispatcherLock @ 0x140602C78
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1401BF60C (IopPassiveInterruptWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

NTSTATUS __fastcall IopAcquireReleaseDispatcherLock(__int64 a1, char a2)
{
  struct _KEVENT *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = (struct _KEVENT *)(a1 + 160);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v2, 0, 0);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
