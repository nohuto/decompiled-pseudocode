/*
 * XREFs of PopWatchdogDpc @ 0x14020B7A4
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14020B780 (PopUpdateWatchdogNoWorkersEvent.c)
 */

void __fastcall PopWatchdogDpc(__int64 a1, __int64 a2)
{
  KIRQL v3; // di

  if ( *(_DWORD *)(a2 + 16) != 1146572624 )
    __fastfail(5u);
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a2 + 216) && !*(_BYTE *)(a2 + 21) )
  {
    *(_BYTE *)(a2 + 21) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 176), DelayedWorkQueue);
  }
  *(_BYTE *)(a2 + 20) = 0;
  PopUpdateWatchdogNoWorkersEvent(a2);
  KeReleaseSpinLock(&PopWatchdogLock, v3);
}
