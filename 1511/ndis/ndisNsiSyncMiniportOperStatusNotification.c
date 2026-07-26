/*
 * XREFs of ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A930C
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001F5D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F998 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C009FF84 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiSyncMiniportOperStatusNotification(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+34h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 4096);
  v2[0] = 1LL;
  v2[1] = v1 + 1112;
  v3 = 8;
  v4 = 536;
  ndisNsiNotifyClientInterfaceChange(v1, 0, (__int64)v2, 1);
}
