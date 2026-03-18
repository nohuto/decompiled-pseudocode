/*
 * XREFs of ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C0006C34
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0085380 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = *((_QWORD *)this + 14) + 1016LL * a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 856), &LockHandle);
  KeResetEvent(*(PRKEVENT *)(v6 + 832));
  *(_DWORD *)(v6 + 840) = a3;
  if ( a3 <= *(_DWORD *)(v6 + 844) && a3 )
  {
    KeSetEvent(*(PRKEVENT *)(v6 + 832), 0, 0);
  }
  else if ( !*(_BYTE *)(v6 + 848) )
  {
    *(_BYTE *)(v6 + 848) = 1;
    *a4 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
