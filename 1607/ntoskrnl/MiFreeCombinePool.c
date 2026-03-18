/*
 * XREFs of MiFreeCombinePool @ 0x1401F9DBC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockPagedAddress @ 0x1400B4854 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCombinePool(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v2 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  do
  {
    v3 = (_QWORD *)*v2;
    MiUnlockPagedAddress((unsigned __int64)v2);
    ExFreePoolWithTag(v2, 0);
    v2 = v3;
  }
  while ( v3 );
}
