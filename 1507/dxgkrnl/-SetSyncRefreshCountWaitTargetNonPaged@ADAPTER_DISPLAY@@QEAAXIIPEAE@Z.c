/*
 * XREFs of ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C00063D4
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C00959C4 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
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

  v6 = *((_QWORD *)this + 14) + 1008LL * a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 848), &LockHandle);
  KeResetEvent(*(PRKEVENT *)(v6 + 824));
  *(_DWORD *)(v6 + 832) = a3;
  if ( a3 <= *(_DWORD *)(v6 + 836) && a3 )
  {
    KeSetEvent(*(PRKEVENT *)(v6 + 824), 0, 0);
  }
  else if ( !*(_BYTE *)(v6 + 840) )
  {
    *(_BYTE *)(v6 + 840) = 1;
    *a4 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
