/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C001F680
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteCommon @ 0x1C001F88C (ACPIDeviceCompleteCommon.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase6(__int64 a1)
{
  __int64 v1; // rdi
  POWER_STATE v3; // ebx
  struct _DEVICE_OBJECT *v4; // rdi

  v1 = *(_QWORD *)(a1 + 40);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v3.SystemState = *(_SYSTEM_POWER_STATE *)(v1 + 488);
  *(POWER_STATE *)(v1 + 328) = v3;
  v4 = *(struct _DEVICE_OBJECT **)(v1 + 712);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v4 )
    PoSetPowerState(v4, DevicePowerState, v3);
  *(_DWORD *)(a1 + 256) = 0;
  ACPIDeviceCompleteCommon(a1 + 208, 0LL);
  return 0LL;
}
