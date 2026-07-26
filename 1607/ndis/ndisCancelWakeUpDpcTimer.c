/*
 * XREFs of ndisCancelWakeUpDpcTimer @ 0x1C001BF78
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     NdisMIdleNotificationConfirm @ 0x1C006B1E0 (NdisMIdleNotificationConfirm.c)
 *     ndisMCommonHaltMiniport @ 0x1C00EB5E4 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisCancelWakeUpDpcTimer(__int64 a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v4; // si

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(a1 + 124) |= 0x20000000u;
  v4 = v2;
  *(_QWORD *)(a1 + 520) = CurrentThread;
  *(_DWORD *)(a1 + 1856) = 1442714;
  if ( KeCancelTimer((PKTIMER)(a1 + 216)) )
    KeSetEvent((PRKEVENT)(a1 + 1912), 0, 0);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return KeWaitForSingleObject((PVOID)(a1 + 1912), Executive, 0, 0, 0LL);
}
