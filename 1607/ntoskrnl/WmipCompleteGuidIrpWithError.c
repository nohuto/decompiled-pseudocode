/*
 * XREFs of WmipCompleteGuidIrpWithError @ 0x1400A1C90
 * Callers:
 *     WmipReceiveNotifications @ 0x1400AF3D4 (WmipReceiveNotifications.c)
 *     WmipDeleteMethod @ 0x1404CC380 (WmipDeleteMethod.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x1400A2684 (WmipClearIrpObjectList.c)
 */

void __fastcall WmipCompleteGuidIrpWithError(__int64 a1)
{
  __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    WmipClearIrpObjectList(v2);
    v2 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 48) = -1073741816;
    pIofCompleteRequest((PIRP)v2, 0);
  }
}
