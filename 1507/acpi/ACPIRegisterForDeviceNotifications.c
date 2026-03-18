/*
 * XREFs of ACPIRegisterForDeviceNotifications @ 0x1C001A780
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C001AC10 (ACPICMButtonStartWorker.c)
 *     ACPIThermalStartDevice @ 0x1C006EEB0 (ACPIThermalStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C007AB40 (ACPIFanStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C001A7C0 (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotifications(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  v5 = ACPIInternalGetDeviceExtension(a1) + 320;
  if ( v5 )
    return ACPIRegisterForDeviceNotificationsByPowerInfo(v5, a2, a3);
  else
    return 3221225486LL;
}
