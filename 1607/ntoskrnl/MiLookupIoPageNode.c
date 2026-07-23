/*
 * XREFs of MiLookupIoPageNode @ 0x140110B24
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E778 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 *     MmProtectMdlSystemAddress @ 0x1401E4310 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall MiLookupIoPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327600, &LockHandle);
  v2 = (_QWORD *)qword_140327610;
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
