/*
 * XREFs of VidSchiPropagateCrossAdapterSignal @ 0x1C0021180
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BE90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0013EBC (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchTimeoutSyncObject @ 0x1C0014608 (VidSchTimeoutSyncObject.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C00229D0 (VidSchSignalSyncObjectsFromCpu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiPropagateCrossAdapterSignal(_QWORD *a1)
{
  _QWORD **v2; // rdi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[21] + 8LL), &LockHandle);
  v2 = (_QWORD **)(a1[21] + 16LL);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    if ( i - 15 != a1 )
      ((void (*)(void))i[7])();
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
