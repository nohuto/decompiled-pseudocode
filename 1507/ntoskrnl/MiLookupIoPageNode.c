/*
 * XREFs of MiLookupIoPageNode @ 0x140135BE4
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1401356DC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14016A030 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiIoPfnCompare @ 0x140116BBC (MiIoPfnCompare.c)
 */

_QWORD *__fastcall MiLookupIoPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  int v3; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14034F640, &LockHandle);
  v2 = (_QWORD *)qword_14034F650;
  while ( v2 )
  {
    v3 = MiIoPfnCompare(a1, (__int64)v2);
    if ( v3 >= 0 )
    {
      if ( v3 <= 0 )
        break;
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      v2 = (_QWORD *)*v2;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
