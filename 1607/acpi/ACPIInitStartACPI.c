/*
 * XREFs of ACPIInitStartACPI @ 0x1C00A9A78
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1C00A9840 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000C6F0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     ACPIPowerScheduleDpc @ 0x1C0010384 (ACPIPowerScheduleDpc.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C00231B0 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIInitialize @ 0x1C00A90EC (ACPIInitialize.c)
 */

__int64 __fastcall ACPIInitStartACPI(ULONG_PTR a1)
{
  void *DeviceExtension; // rsi
  KIRQL v3; // al
  __int64 result; // rax
  int v5; // ebx
  KIRQL v6; // bl
  KIRQL v7; // al
  int v8; // edx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  DeviceExtension = (void *)ACPIInternalGetDeviceExtension(a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  _InterlockedAnd64(&AcpiGlobalFlags, 0xFFFFFFFFFFFFFFFEuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  result = ACPIBuildSpecialSynchronizationRequest(
             (__int64)DeviceExtension,
             (__int64)ACPIInitPowerRequestCompletion,
             (__int64)&Event,
             127,
             0);
  v5 = result;
  if ( (int)result >= 0 )
  {
    if ( ACPIInitialize(a1) )
    {
      if ( v5 == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ACPIInternalRegisterPowerCallBack(DeviceExtension, (PCALLBACK_FUNCTION)ACPIRootPowerCallBack);
      v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
      ACPIPowerScheduleDpc();
      KeReleaseSpinLock(&AcpiPowerQueueLock, v6);
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      _InterlockedOr64(&AcpiGlobalFlags, 1uLL);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        1,
        19,
        (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids);
      return 0LL;
    }
    else
    {
      return 3221225664LL;
    }
  }
  return result;
}
