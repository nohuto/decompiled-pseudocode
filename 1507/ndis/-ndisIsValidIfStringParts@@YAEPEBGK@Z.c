/*
 * XREFs of ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C0020230
 * Callers:
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0010164 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C001287C (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001A27C (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0020228 (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C003BAD8 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C009D5C8 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     ndisIfInitialize @ 0x1C010505C (ndisIfInitialize.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidIfStringParts(const unsigned __int16 *a1, unsigned int a2)
{
  return a2 <= 0x200 && (a2 & 1) == 0;
}
