/*
 * XREFs of MiLookupIoPageNode @ 0x14013C200
 * Callers:
 *     MiInsertViewOfPhysicalSection @ 0x14013BD7C (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall MiLookupIoPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1402FF180, &LockHandle);
  v2 = (_QWORD *)qword_1402FF190;
  while ( v2 )
  {
    v3 = v2[5];
    if ( a1 >= v3 )
    {
      if ( a1 < v3 + 512 )
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
