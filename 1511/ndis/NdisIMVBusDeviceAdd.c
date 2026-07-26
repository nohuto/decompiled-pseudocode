/*
 * XREFs of NdisIMVBusDeviceAdd @ 0x1C00C7440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ?ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z @ 0x1C004B534 (-ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisVBusVirtMiniAdd @ 0x1C006B210 (ndisVBusVirtMiniAdd.c)
 */

__int64 __fastcall NdisIMVBusDeviceAdd(_BYTE *a1, struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *a2)
{
  unsigned int v4; // edi
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x1Bu, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, a1, a2);
  if ( ndisIMVBusIsValidInput(a1, a2) )
    v4 = ndisVBusVirtMiniAdd((__int64)a2 + 8, (__int64)a2 + 24, (__int64)a2 + 72);
  else
    v4 = -1073741811;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v6 = v4;
    WPP_SF_qqd(0x1Cu, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, a1, a2, v6);
  }
  return v4;
}
