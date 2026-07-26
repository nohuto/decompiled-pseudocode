/*
 * XREFs of ndisNotifyDevicePowerStateChange @ 0x1C0097F64
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012550 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C001A980 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 */

void __fastcall ndisNotifyDevicePowerStateChange(__int64 a1, int a2)
{
  __int128 *v4; // r9
  PVOID v5; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  int v8; // ebp
  __int128 *v9; // r9
  PVOID v10; // rsi
  _WORD *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  int v14; // ebp
  PVOID WnodeEventItem; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(0x39u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1, a2);
  v4 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON;
  if ( a2 != 1 )
    v4 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF;
  ndisSetupWmiNode(a1, *(const void ***)(a1 + 3912), *(unsigned __int16 *)(a1 + 3864) + 2, v4, &WnodeEventItem);
  v5 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    memmove(
      (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14),
      *(const void **)(a1 + 3872),
      *(unsigned __int16 *)(a1 + 3864));
    v6 = IoWMIWriteEvent(v5);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 2u )
        WPP_SF_d(0x3Au, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v6);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        Template_qqq(v7, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4064), v8, 73, 0);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v9 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX;
  if ( a2 != 1 )
    v9 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX;
  ndisSetupWmiNode(a1, *(const void ***)(a1 + 3912), *(unsigned __int16 *)(a1 + 3864) + 2, v9, &WnodeEventItem);
  v10 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v11 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
    *v11 = *(_WORD *)(a1 + 3864);
    memmove(v11 + 1, *(const void **)(a1 + 3872), *(unsigned __int16 *)(a1 + 3864));
    v12 = IoWMIWriteEvent(v10);
    v14 = v12;
    if ( v12 < 0 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 2u )
        WPP_SF_d(0x3Bu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v12);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        Template_qqq(v13, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4064), v14, 119, 0);
      ExFreePoolWithTag(v10, 0);
    }
  }
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(0x3Cu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1, a2);
}
