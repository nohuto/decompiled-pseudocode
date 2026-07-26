/*
 * XREFs of ?ndisIsCompartmentEnumerableByCaller@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@II@Z @ 0x1C001600C
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0015E40 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003DB00 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCompartmentEnumerableByCaller(struct _NDIS_IF_COMPARTMENT_BLOCK *a1, int a2, int a3)
{
  if ( (a1->LoopbackInfo.Flags & 2) != 0 )
    return 0;
  if ( a3 == 1 || a2 == -1 )
    return 1;
  return a3 == a1->CompartmentId;
}
