/*
 * XREFs of ACPIInitStartACPI @ 0x1C0086FA4
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1C00870C0 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000A528 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C000AF24 (ACPIPowerScheduleDpc.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C001B858 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIInitialize @ 0x1C0086574 (ACPIInitialize.c)
 */

__int64 __fastcall ACPIInitStartACPI(ULONG_PTR a1)
{
  volatile signed __int64 *DeviceExtension; // rsi
  KIRQL v3; // al
  __int64 v4; // r9
  __int64 result; // rax
  int v6; // ebx
  KIRQL v7; // bl
  KIRQL v8; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  DeviceExtension = (volatile signed __int64 *)ACPIInternalGetDeviceExtension(a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  _InterlockedAnd64(&AcpiGlobalFlags, 0xFFFFFFFFFFFFFFFEuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  result = ACPIBuildSpecialSynchronizationRequest(
             (__int64)DeviceExtension,
             (__int64)ACPIInitPowerRequestCompletion,
             (__int64)&Event,
             v4,
             0);
  v6 = result;
  if ( (int)result >= 0 )
  {
    if ( ACPIInitialize(a1) )
    {
      if ( v6 == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ACPIInternalRegisterPowerCallBack(DeviceExtension, (PCALLBACK_FUNCTION)ACPIRootPowerCallBack);
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
      ACPIPowerScheduleDpc();
      KeReleaseSpinLock(&AcpiPowerQueueLock, v7);
      v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      _InterlockedOr64(&AcpiGlobalFlags, 1uLL);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
      return 0LL;
    }
    else
    {
      return 3221225664LL;
    }
  }
  return result;
}
