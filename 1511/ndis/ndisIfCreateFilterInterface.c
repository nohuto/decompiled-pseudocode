/*
 * XREFs of ndisIfCreateFilterInterface @ 0x1C001924C
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C009D048 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C009E688 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C009F918 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00BEF78 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
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
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(193LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(194LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, v5);
  return v5;
}
