/*
 * XREFs of MiGetPrivatePageCount @ 0x14021AAD0
 * Callers:
 *     MiAllocateCrcList @ 0x1406A8890 (MiAllocateCrcList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
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
  v3 = (_QWORD *)(a1 + 5264);
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
