/*
 * XREFs of MiCheckAndUpdatePagingFileMinimum @ 0x1401DC4F0
 * Callers:
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiCheckAndUpdatePagingFileMinimum(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v4 = 1;
  KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
  if ( v2 > *a1 )
    v4 = 0;
  else
    a1[2] = v2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
