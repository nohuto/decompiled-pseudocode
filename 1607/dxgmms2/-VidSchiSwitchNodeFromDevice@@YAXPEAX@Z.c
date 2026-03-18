/*
 * XREFs of ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0001AF0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x1C0001CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C0041180 (VidSchiSwitchNodeFromContext.c)
 */

void __fastcall VidSchiSwitchNodeFromDevice(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD **v3; // rsi
  _QWORD *v4; // rbx
  struct _VIDSCH_CONTEXT *v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[4];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1856), &LockHandle);
  v3 = (_QWORD **)(a1 + 8);
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = (struct _VIDSCH_CONTEXT *)(v4 - 3);
    VidSchiIncrementContextReference(v4 - 3);
    if ( !*((_BYTE *)v4 + 872) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSwitchNodeFromContext(v4 - 3);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1856), &LockHandle);
    }
    v4 = (_QWORD *)*v4;
    VidSchiDecrementContextReference(v5);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
