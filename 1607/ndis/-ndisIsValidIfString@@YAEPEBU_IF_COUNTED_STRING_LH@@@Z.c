/*
 * XREFs of ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C001F1D4
 * Callers:
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A24F0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIsValidIfString(const struct _IF_COUNTED_STRING_LH *a1)
{
  return ndisIsValidIfStringParts(&a1->Length, a1->Length);
}
