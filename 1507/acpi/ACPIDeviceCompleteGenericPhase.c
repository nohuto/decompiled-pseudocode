/*
 * XREFs of ACPIDeviceCompleteGenericPhase @ 0x1C000C280
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C000A430 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C000A4E0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000BE10 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000BF80 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000C0C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000C1B0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0022B30 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C0023080 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDeviceCompleteInterpreterRequest @ 0x1C00379A0 (ACPIDeviceCompleteInterpreterRequest.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0038000 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C00380B0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C00382F0 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C0038340 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C00383D0 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0038440 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0038480 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0038590 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C00386C0 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00387D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00388F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIWakeRestoreEnablesCompletion @ 0x1C0042520 (ACPIWakeRestoreEnablesCompletion.c)
 * Callees:
 *     ACPIDeviceCompleteCommon @ 0x1C001EB0C (ACPIDeviceCompleteCommon.c)
 */

void __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  KIRQL v4; // bl
  int v5; // edx

  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( a2 < 0 )
  {
    *(_DWORD *)(a4 + 256) = a2;
    ACPIDeviceCompleteCommon(a4 + 208, 2LL);
  }
  else
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 208), *(_DWORD *)(a4 + 212), 1);
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    v5 = AcpiPowerDpcFlags | 2;
    AcpiPowerDpcFlags = v5;
    if ( (v5 & 1) == 0 )
    {
      AcpiPowerDpcFlags = v5 | 1;
      KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiPowerQueueLock, v4);
  }
}
