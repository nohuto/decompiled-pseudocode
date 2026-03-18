/*
 * XREFs of ACPIDispatchIrpDepFilterQueryID @ 0x1C001ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0007828 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000A32C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildFlushQueue @ 0x1C006725C (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDispatchIrpDepFilterQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  KIRQL v6; // al

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger(DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  ACPIBuildFlushQueue(DeviceExtension);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  *(_QWORD *)(DeviceExtension + 16) = AcpiFilterIrpDispatch;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 16) + 24LL) + 152LL))(
           a1,
           a2);
}
