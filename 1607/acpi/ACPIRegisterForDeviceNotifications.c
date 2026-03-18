/*
 * XREFs of ACPIRegisterForDeviceNotifications @ 0x1C000A540
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000A7E0 (ACPICMButtonStartWorker.c)
 *     ACPIThermalStartDevice @ 0x1C0081910 (ACPIThermalStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C009BAF0 (ACPIFanStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C000A580 (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotifications(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  v5 = ACPIInternalGetDeviceExtension(a1) + 328;
  if ( v5 )
    return ACPIRegisterForDeviceNotificationsByPowerInfo(v5, a2, a3);
  else
    return 3221225486LL;
}
