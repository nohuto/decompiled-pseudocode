/*
 * XREFs of MiGetPrivatePageCount @ 0x14012B948
 * Callers:
 *     MiAllocateCrcList @ 0x14050E9B4 (MiAllocateCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

unsigned __int64 __fastcall MiGetPrivatePageCount(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v3 = (_QWORD *)(a1 + 5624);
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v5 = v4[11];
    v4 = (_QWORD *)*v4;
    v6 = v2 + v5;
    if ( v6 > v2 )
      v2 = v6;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
