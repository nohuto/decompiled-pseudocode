/*
 * XREFs of OSNotifyDeviceWakeByGPEEvent @ 0x1C003DD50
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C0024420 (ACPIInterruptDispatchEventDpc.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007E9C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C003DF90 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C0041A5C (ACPIWakeDisableAsync.c)
 */

void __fastcall OSNotifyDeviceWakeByGPEEvent(int a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  __int64 *i; // rcx
  __int64 v8; // r8
  unsigned int v9; // eax
  int Irql; // [rsp+40h] [rbp+18h] BYREF

  Irql = a3;
  v4 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x4D706341u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    IoAcquireCancelSpinLock((PKIRQL)&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    for ( i = (__int64 *)AcpiPowerWaitWakeList; i != &AcpiPowerWaitWakeList; i = (__int64 *)*i )
    {
      v4 = i[5];
      if ( (*(_QWORD *)(v4 + 904) & 0x500000000LL) == 0 && *(_DWORD *)(v4 + 448) == a1 )
      {
        ACPIWakeRemoveDevicesAndUpdate(i[5], (__int64)v6);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v6 == v6 )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v9 = ACPIWakeDisableAsync(v4, v6, v8, v6);
      if ( v9 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v9, 0LL, v6);
    }
  }
}
