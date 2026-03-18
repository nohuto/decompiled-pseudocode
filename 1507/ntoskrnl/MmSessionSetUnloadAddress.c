/*
 * XREFs of MmSessionSetUnloadAddress @ 0x14015A3A4
 * Callers:
 *     ExpInitializeSessionDriver @ 0x140583EE8 (ExpInitializeSessionDriver.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MmSessionSetUnloadAddress(__int64 a1)
{
  __int64 v1; // rbx
  _KPROCESS *Process; // rdx
  unsigned __int64 v3; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 104);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !v1 )
    v1 = 1LL;
  v3 = Process[1].ActiveProcessors.Bitmap[2];
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( !*(_QWORD *)(v3 + 3232) )
    *(_QWORD *)(v3 + 3232) = v1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
