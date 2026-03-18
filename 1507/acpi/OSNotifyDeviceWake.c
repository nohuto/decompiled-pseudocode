/*
 * XREFs of OSNotifyDeviceWake @ 0x1C003E0AC
 * Callers:
 *     ACPICMButtonSetPower @ 0x1C00366B0 (ACPICMButtonSetPower.c)
 *     NotifyHandler @ 0x1C00401E0 (NotifyHandler.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007374 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C003E3A0 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C004201C (ACPIWakeDisableAsync.c)
 */

__int64 __fastcall OSNotifyDeviceWake(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r8
  unsigned int v5; // eax
  KIRQL Irql; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x4D706341u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate(v1, (__int64)v3);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v3 == v3 )
    {
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      v5 = ACPIWakeDisableAsync(v1, v3, v4, v3);
      if ( v5 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v5, 0LL, v3);
    }
  }
  return 0LL;
}
