/*
 * XREFs of MiCheckAndUpdatePagingFileMinimum @ 0x1401EE108
 * Callers:
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
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
