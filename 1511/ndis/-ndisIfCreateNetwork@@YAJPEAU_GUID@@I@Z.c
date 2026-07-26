/*
 * XREFs of ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00BEA04
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0020060 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003BE70 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisIfCreateNetwork(struct _GUID *a1, int a2)
{
  int v4; // eax
  unsigned int v5; // esi
  _QWORD v7[10]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v8[132]; // [rsp+80h] [rbp-80h] BYREF

  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(0x80u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, a2);
  memset(v7, 0, 0x48uLL);
  memset(v8, 0, sizeof(v8));
  v7[0] = 0LL;
  LODWORD(v7[1]) = 0;
  v7[2] = &NPI_MS_NDIS_MODULEID;
  v7[7] = v8;
  LODWORD(v7[3]) = 6;
  v7[4] = 0x100000002LL;
  v7[5] = a1;
  LODWORD(v7[6]) = 16;
  v8[0] = 34603436;
  v8[1] = a2;
  LODWORD(v7[8]) = 528;
  v4 = NsiSetAllParametersEx(v7);
  v5 = v4;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qdD(0x81u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, a2, v4);
  return v5;
}
