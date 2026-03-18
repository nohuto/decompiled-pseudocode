/*
 * XREFs of ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C001E7D8
 * Callers:
 *     DxgkCreateDevice @ 0x1C008B790 (DxgkCreateDevice.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetSchedulerCrossAdapterData(KSPIN_LOCK *this, struct _KEVENT *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 112, &LockHandle);
  this[113] = (KSPIN_LOCK)a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *((_BYTE *)this + 657) = 0;
}
