/*
 * XREFs of NdisIMVBusDeviceRemove @ 0x1C00CCDC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ?ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z @ 0x1C004FF54 (-ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisVBusVirtMiniRemove @ 0x1C006FECC (ndisVBusVirtMiniRemove.c)
 */

__int64 __fastcall NdisIMVBusDeviceRemove(_BYTE *a1, struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *a2)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x1Du, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1, a2);
  if ( ndisIMVBusIsValidInput(a1, a2) )
    v4 = ndisVBusVirtMiniRemove((__int64)a2 + 8, (__int64)a2 + 24);
  else
    v4 = -1073741811;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v6 = v4;
    WPP_SF_qqd(0x1Eu, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1, a2, v6);
  }
  return v4;
}
