/*
 * XREFs of MiLookupIoPageNode @ 0x1401105C0
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MmProtectMdlSystemAddress @ 0x1401E44E4 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall MiLookupIoPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403275C0, &LockHandle);
  v2 = (_QWORD *)qword_1403275D0;
  while ( v2 )
  {
    v3 = v2[5];
    if ( a1 < v3 )
    {
      v2 = (_QWORD *)*v2;
    }
    else
    {
      if ( a1 < v3 + 512 )
        break;
      v2 = (_QWORD *)v2[1];
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
