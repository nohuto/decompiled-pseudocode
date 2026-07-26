/*
 * XREFs of ndisIfCreateFilterInterface @ 0x1C00140D8
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C009F758 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A17D0 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A24F0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00C3CC0 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfCreateFilterInterface(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  unsigned __int16 ifType; // r14
  int v4; // esi
  unsigned int v5; // ebx
  KIRQL v6; // al
  struct _NDIS_IF_NETWORK_BLOCK *Network; // rbx
  struct _GUID InterfaceGuid; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF
  union _NET_LUID_LH v11; // [rsp+78h] [rbp+10h] BYREF

  Miniport = a1->Miniport;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(195LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  ifType = Miniport->IfBlock->ifType;
  v4 = 0;
  v5 = ndisIfAllocateAndVerifyNetLuidIndex(ifType, &v10, 1u, 0);
  if ( !v5 )
  {
    if ( (unsigned int)ndisIfGetFilterIfInfoFromRegistry(a1, &a1->InterfaceGuid) )
    {
      if ( ExUuidCreate(&a1->InterfaceGuid) < 0 )
      {
        v5 = -1073741823;
        goto LABEL_8;
      }
      InterfaceGuid = a1->InterfaceGuid;
      ndisIfSetFilterIfInfoInRegistry(a1, &InterfaceGuid);
    }
    v11.Value = (((unsigned __int64)ifType << 24) | v10 & 0xFFFFFF) << 24;
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Network = Miniport->IfBlock->Network;
    KeReleaseSpinLock(&ndisIfListLock, v6);
    if ( (int)ndisIfCreateInterface(Network, 0, 0LL, &v11, 0LL, a1, NdisIfBlockSourceAutomaticLwFilter) < 0 )
      v4 = -1073741823;
    v5 = v4;
  }
LABEL_8:
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(196LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, v5);
  return v5;
}
