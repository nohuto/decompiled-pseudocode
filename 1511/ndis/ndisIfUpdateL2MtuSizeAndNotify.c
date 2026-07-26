/*
 * XREFs of ndisIfUpdateL2MtuSizeAndNotify @ 0x1C00C0054
 * Callers:
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00CABE8 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisIfUpdateL2MtuSize @ 0x1C0040204 (ndisIfUpdateL2MtuSize.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C009FF84 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfUpdateL2MtuSizeAndNotify(__int64 a1, int a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( ndisIfUpdateL2MtuSize(a1, a2) )
  {
    v3[2] = 0x22000000004LL;
    v3[0] = 1LL;
    v3[1] = a1 + 1120;
    ndisNsiNotifyClientInterfaceChange(a1, 0, (__int64)v3, 1);
  }
}
