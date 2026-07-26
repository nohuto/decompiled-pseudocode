/*
 * XREFs of ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisCreateHandler @ 0x1C000CEDC (ndisCreateHandler.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000D400 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0012590 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0021B10 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0040AA0 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00416E0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0041AF0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0041F40 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C00EBFE0 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C00F2580 (ndisEnumerateInterfaces32.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCompartmentAccessibleByClient(__int64 a1, __int64 a2, char a3)
{
  int v3; // r10d
  __int64 v6; // rcx

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 == *(_DWORD *)(a1 + 16) )
    return 1;
  if ( a3 || *(_DWORD *)a2 == -1 )
  {
    v6 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(a1 + 1684);
    if ( !v6 )
      v6 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a1 + 1692);
    if ( !v6 )
      return 1;
  }
  if ( (*(_DWORD *)(a1 + 1680) & 2) != 0 )
    return 0;
  return v3 == 1;
}
