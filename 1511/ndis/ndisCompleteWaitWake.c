/*
 * XREFs of ndisCompleteWaitWake @ 0x1C001316C
 * Callers:
 *     ndisGenericWaitWakeCallback @ 0x1C0013100 (ndisGenericWaitWakeCallback.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0066760 (ndisIdleWaitWakeCallback.c)
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0069C10 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 *     ndisRequestWaitWake @ 0x1C00AC8D0 (ndisRequestWaitWake.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisCompleteWaitWake(__int64 a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 1296) = 0LL;
  *(_QWORD *)(a1 + 520) = CurrentThread;
  v4 = v2;
  *(_DWORD *)(a1 + 1856) = 1708967;
  KeSetEvent((PRKEVENT)(a1 + 1304), 0, 0);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  ndisDereferenceMiniport(a1, 0xAu);
}
