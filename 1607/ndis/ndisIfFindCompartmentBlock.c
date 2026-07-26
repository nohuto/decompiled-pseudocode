/*
 * XREFs of ndisIfFindCompartmentBlock @ 0x1C000D750
 * Callers:
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000D400 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C00146A0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001491C (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C001A00C (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C001CE2C (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003FDEC (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040174 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C00407B0 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0041AF0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0041F40 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0043470 (ndisIfCreatePersistedInterface.c)
 *     ndisIfGetCompartmentNamespaceGuid @ 0x1C004392C (ndisIfGetCompartmentNamespaceGuid.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0043988 (ndisIfReferenceCompartmentForUser.c)
 *     NdisGetAndReferenceCompartmentJobObject @ 0x1C00652A0 (NdisGetAndReferenceCompartmentJobObject.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall ndisIfFindCompartmentBlock(unsigned int a1)
{
  _LIST_ENTRY *Flink; // rax
  __int64 v2; // rdx
  unsigned int v3; // r8d

  Flink = ndisIfCompartmentList.Flink;
  v2 = 0LL;
  while ( Flink != &ndisIfCompartmentList )
  {
    v3 = (unsigned int)Flink[1].Flink;
    if ( v3 == a1 )
      return Flink;
    if ( v3 > a1 )
      return (_LIST_ENTRY *)v2;
    Flink = Flink->Flink;
  }
  return (_LIST_ENTRY *)v2;
}
