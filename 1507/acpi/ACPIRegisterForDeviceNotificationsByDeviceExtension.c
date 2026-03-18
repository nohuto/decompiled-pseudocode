/*
 * XREFs of ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C003FF38
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000B2D0 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIRegisterForDeviceNotifications2 @ 0x1C003FF30 (ACPIRegisterForDeviceNotifications2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIRegisterForDeviceNotificationsByDeviceExtension(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( a1 && (v4 = a1 + 320) != 0 )
    return ACPIRegisterForDeviceNotificationsByPowerInfo(v4, a2, a3);
  else
    return 3221225486LL;
}
