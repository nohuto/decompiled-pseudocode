/*
 * XREFs of MiCheckAndUpdatePagingFileMinimum @ 0x14022123C
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiCheckAndUpdatePagingFileMinimum(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v4 = 1;
  KeAcquireInStackQueuedSpinLock(a1 + 24, &LockHandle);
  if ( v2 > *a1 )
    v4 = 0;
  else
    a1[2] = v2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
