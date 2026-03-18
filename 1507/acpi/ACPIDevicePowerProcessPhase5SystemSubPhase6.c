/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0038730
 * Callers:
 *     <none>
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007374 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceCompleteCommon @ 0x1C001EB0C (ACPIDeviceCompleteCommon.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase6(__int64 a1)
{
  __int64 v1; // rbx
  POWER_STATE v3; // esi
  struct _DEVICE_OBJECT *v4; // rbx
  KIRQL Irql; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v3.SystemState = *(_SYSTEM_POWER_STATE *)(a1 + 104);
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  AcpiMostRecentSleepState = v3.SystemState;
  ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
  v4 = *(struct _DEVICE_OBJECT **)(v1 + 712);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(Irql);
  if ( v4 )
    PoSetPowerState(v4, SystemPowerState, v3);
  *(_DWORD *)(a1 + 256) = 0;
  ACPIDeviceCompleteCommon((volatile signed __int32 *)(a1 + 208), 0);
  return 0LL;
}
