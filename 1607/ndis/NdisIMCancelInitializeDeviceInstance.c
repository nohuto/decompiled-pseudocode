/*
 * XREFs of NdisIMCancelInitializeDeviceInstance @ 0x1C00CCAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     WPP_SF_qZL @ 0x1C004FF8C (WPP_SF_qZL.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00CCE50 (ndisIMCheckDeviceInstance.c)
 */

NDIS_STATUS __stdcall NdisIMCancelInitializeDeviceInstance(NDIS_HANDLE DriverHandle, PNDIS_STRING DeviceInstance)
{
  char v4; // al
  NDIS_STATUS v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZ(0x2Bu, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, (__int64)DriverHandle, &DeviceInstance->Length);
  v4 = 1 - ndisIMCheckDeviceInstance(DriverHandle, DeviceInstance, 0LL);
  v5 = v4 != 0 ? 0xC0000001 : 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v7 = v4 != 0 ? 0xC0000001 : 0;
    WPP_SF_qZL(
      0x2Cu,
      &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids,
      (__int64)DriverHandle,
      &DeviceInstance->Length,
      v7);
  }
  return v5;
}
