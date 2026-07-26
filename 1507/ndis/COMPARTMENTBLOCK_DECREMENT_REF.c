/*
 * XREFs of COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C0012D04
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0012A70 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003B130 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003B450 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C003BAD8 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003CE40 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003D240 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

LONG __fastcall COMPARTMENTBLOCK_DECREMENT_REF(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
  if ( result == 1 )
  {
    v2 = *(struct _KEVENT **)(a1 + 1696);
    if ( v2 )
      return KeSetEvent(v2, 0, 0);
  }
  return result;
}
