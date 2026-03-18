/*
 * XREFs of ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0006B50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C0006C14 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007374 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0037860 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0037DC8 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 */

__int64 __fastcall ACPIDeviceIrpWaitWakeRequestPending(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 **v8; // rax
  KIRQL Irql; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a4 + 40);
  v5 = *(_QWORD *)(a4 + 200);
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  ++*(_DWORD *)(a4 + 112);
  if ( a2 < 0 )
  {
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    *(_DWORD *)(a4 + 256) = a2;
    ACPIDeviceIrpWaitWakeRequestComplete(a4);
  }
  else
  {
    v8 = (__int64 **)qword_1C0059BD8;
    *(_QWORD *)a4 = &AcpiPowerWaitWakeList;
    *(_QWORD *)(a4 + 8) = v8;
    if ( *v8 != &AcpiPowerWaitWakeList )
      __fastfail(3u);
    *v8 = (__int64 *)a4;
    qword_1C0059BD8 = a4;
    if ( *(_BYTE *)(v5 + 68) )
    {
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      ACPIDeviceCancelWaitWakeIrp(*(_QWORD *)(v4 + 712), v5);
    }
    else
    {
      *(_DWORD *)(a4 + 56) |= 0x40u;
      ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
      _InterlockedExchange64((volatile __int64 *)(v5 + 104), (__int64)ACPIDeviceCancelWaitWakeIrp);
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      IoReleaseCancelSpinLock(Irql);
    }
  }
  return ACPIDereferenceWaitWakePowerRequest(a4);
}
