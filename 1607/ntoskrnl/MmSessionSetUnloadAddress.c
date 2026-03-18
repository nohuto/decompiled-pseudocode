/*
 * XREFs of MmSessionSetUnloadAddress @ 0x140131938
 * Callers:
 *     ExpInitializeSessionDriver @ 0x140547D54 (ExpInitializeSessionDriver.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  if ( !*(_QWORD *)(v3 + 3360) )
    *(_QWORD *)(v3 + 3360) = v1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
