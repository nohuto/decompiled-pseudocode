/*
 * XREFs of ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0022120
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiIncrementContextReference @ 0x1C00101E0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C00104B0 (VidSchiDecrementContextReference.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C005F2A0 (VidSchiSwitchNodeFromContext.c)
 */

void __fastcall VidSchiSwitchNodeFromDevice(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD **v3; // rsi
  _QWORD *v4; // rdi
  struct _VIDSCH_CONTEXT *v5; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[4];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1824), &LockHandle);
  v3 = (_QWORD **)(a1 + 9);
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = (struct _VIDSCH_CONTEXT *)(v4 - 3);
    VidSchiIncrementContextReference((__int64)(v4 - 3));
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    VidSchiSwitchNodeFromContext(v4 - 3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1824), &LockHandle);
    v4 = (_QWORD *)*v4;
    VidSchiDecrementContextReference(v5, 1);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
