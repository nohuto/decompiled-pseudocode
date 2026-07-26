/*
 * XREFs of ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001AB24
 * Callers:
 *     ndisIfCreatePersistedInterface @ 0x1C0020620 (ndisIfCreatePersistedInterface.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C009C4EC (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00B3714 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C0012D18 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001A3F8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001ACC0 (ndisIfFindInterfaceByNetLuid.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF__guid__guid_ @ 0x1C003E0C4 (WPP_SF__guid__guid_.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A761C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A8934 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(
        union _NET_LUID_LH *a1,
        struct _GUID *a2,
        enum NdisIfBlockSource a3)
{
  unsigned int v6; // edi
  __int64 InterfaceByNetLuid; // rbx
  KIRQL v8; // r8
  KIRQL v9; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  _LIST_ENTRY *CompartmentBlock; // rbp
  KIRQL v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int CompartmentId; // ecx
  int Interface; // eax
  int v17; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qq(170LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a2);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(a1->Value);
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( InterfaceByNetLuid )
    goto LABEL_21;
  v20 = (a1->Value >> 24) & 0xFFFFFF;
  if ( v20 - 0x8000 > 0x4000 )
  {
    v6 = ndisIfAllocateAndVerifyNetLuidIndex(*((_WORD *)&a1->Info + 3), &v20, 0, 0);
    if ( v6 )
      goto LABEL_18;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NetworkBlock = ndisIfFindNetworkBlock(a2 + 66);
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( NetworkBlock && a3 == NdisIfBlockSourcePersistedNetSetup )
    goto LABEL_13;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a2[67].Data1);
  if ( !CompartmentBlock )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    a2[67].Data1 = v19;
  }
  KeReleaseSpinLock(&ndisIfListLock, v12);
  if ( !CompartmentBlock )
  {
LABEL_21:
    v6 = -1073741823;
    goto LABEL_18;
  }
  NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)CompartmentBlock[3].Blink;
  if ( NetworkBlock )
  {
    a2[66] = NetworkBlock->NetworkGuid;
LABEL_13:
    CompartmentId = NetworkBlock->Compartment->CompartmentId;
    if ( a2[67].Data1 != CompartmentId )
      a2[67].Data1 = CompartmentId;
    Interface = ndisIfCreateInterface(NetworkBlock, 0, 0LL, a1, (struct _NDIS_NSI_INTERFACE_PERSIST_RW *)a2, 0LL, a3);
    v17 = v6;
    if ( Interface < 0 )
      v17 = -1073741823;
    v6 = v17;
    goto LABEL_18;
  }
  if ( (unsigned __int8)byte_1C008531D >= 3u )
    WPP_SF__guid__guid_(v14, v13, &a2[65], &a2[66]);
  v6 = -1073741252;
LABEL_18:
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qqd(172LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a2, v6);
  return v6;
}
