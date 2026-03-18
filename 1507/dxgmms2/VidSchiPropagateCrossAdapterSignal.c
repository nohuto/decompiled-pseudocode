/*
 * XREFs of VidSchiPropagateCrossAdapterSignal @ 0x1C0019518
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0003F58 (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0005914 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C001D100 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchTimeoutSyncObject @ 0x1C001D4A4 (VidSchTimeoutSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
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
