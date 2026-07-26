/*
 * XREFs of ndisIfFindCompartmentBlock @ 0x1C0020D08
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001AD78 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001ECD4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C0020220 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0020A00 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0020CA8 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003C190 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C003CB4C (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003DED0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003E2D0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfCreatePersistedInterface @ 0x1C003F798 (ndisIfCreatePersistedInterface.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C003FE34 (ndisIfReferenceCompartmentForUser.c)
 *     NdisGetAndReferenceCompartmentJobObject @ 0x1C0060E80 (NdisGetAndReferenceCompartmentJobObject.c)
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
