/*
 * XREFs of ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C00146A0
 * Callers:
 *     ndisIfCreatePersistedInterface @ 0x1C0043470 (ndisIfCreatePersistedInterface.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00A1714 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00C3974 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C000D750 (ndisIfFindCompartmentBlock.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0014670 (ndisIfFindInterfaceByNetLuid.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0014FE8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF__guid__guid_ @ 0x1C0042E04 (WPP_SF__guid__guid_.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A17D0 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A24F0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(
        union _NET_LUID_LH *a1,
        struct _GUID *a2,
        enum NdisIfBlockSource a3)
{
  unsigned int v6; // edi
  _LIST_ENTRY *InterfaceByNetLuid; // rbx
  KIRQL v8; // r8
  KIRQL v9; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  unsigned int CompartmentId; // ecx
  int Interface; // eax
  int v13; // ecx
  _LIST_ENTRY *CompartmentBlock; // rbp
  KIRQL v16; // r10
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qq(170LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, a2);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)a1->Value);
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( InterfaceByNetLuid )
    goto LABEL_15;
  v20 = (a1->Value >> 24) & 0xFFFFFF;
  if ( v20 - 0x8000 > 0x4000 )
  {
    v6 = ndisIfAllocateAndVerifyNetLuidIndex(*((_WORD *)&a1->Info + 3), &v20, 0, 0);
    if ( v6 )
      goto LABEL_12;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NetworkBlock = ndisIfFindNetworkBlock(a2 + 66);
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( NetworkBlock && a3 == NdisIfBlockSourcePersistedNetSetup )
    goto LABEL_7;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a2[67].Data1);
  if ( !CompartmentBlock )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    a2[67].Data1 = v17;
  }
  KeReleaseSpinLock(&ndisIfListLock, v16);
  if ( !CompartmentBlock )
  {
LABEL_15:
    v6 = -1073741823;
    goto LABEL_12;
  }
  NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)CompartmentBlock[3].Blink;
  if ( NetworkBlock )
  {
    a2[66] = NetworkBlock->NetworkGuid;
LABEL_7:
    CompartmentId = NetworkBlock->Compartment->CompartmentId;
    if ( a2[67].Data1 != CompartmentId )
      a2[67].Data1 = CompartmentId;
    Interface = ndisIfCreateInterface(NetworkBlock, 0, 0LL, a1, (struct _NDIS_NSI_INTERFACE_PERSIST_RW *)a2, 0LL, a3);
    v13 = v6;
    if ( Interface < 0 )
      v13 = -1073741823;
    v6 = v13;
    goto LABEL_12;
  }
  if ( (unsigned __int8)byte_1C00895DD >= 3u )
    WPP_SF__guid__guid_(v19, v18, &a2[65], &a2[66]);
  v6 = -1073741252;
LABEL_12:
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qqd(172LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, a2, v6);
  return v6;
}
