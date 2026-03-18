/*
 * XREFs of ACPIDereferenceWaitWakePowerRequest @ 0x1C0007064
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0006FA0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001C684 (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0038580 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 * Callees:
 *     ACPIFreeWaitWakePowerRequest @ 0x1C00418F0 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEmulationDisable @ 0x1C0041CD8 (ACPIWakeEmulationDisable.c)
 */

void __fastcall ACPIDereferenceWaitWakePowerRequest(__int64 a1)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = --*(_DWORD *)(a1 + 112);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  if ( !v3 )
  {
    ACPIWakeEmulationDisable(a1);
    if ( KeGetCurrentIrql() <= 1u )
    {
      ACPIFreeWaitWakePowerRequest(a1);
    }
    else
    {
      *(_QWORD *)(a1 + 120) = 0LL;
      *(_QWORD *)(a1 + 136) = ACPIFreeWaitWakePowerRequest;
      *(_QWORD *)(a1 + 144) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 120), DelayedWorkQueue);
    }
  }
}
