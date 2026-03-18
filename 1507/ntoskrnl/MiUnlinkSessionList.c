/*
 * XREFs of MiUnlinkSessionList @ 0x14014C870
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14050550C (MiReleaseProcessReferenceToSessionDataPage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiUnlinkSessionList(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = (_QWORD *)(a1 + 144);
  if ( *v2 )
  {
    v3 = *v2;
    v4 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
