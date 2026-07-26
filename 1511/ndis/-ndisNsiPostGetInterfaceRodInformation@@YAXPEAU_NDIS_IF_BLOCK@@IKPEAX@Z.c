/*
 * XREFs of ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00BF69C
 * Callers:
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00959C0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_SF_qDqL @ 0x1C003F438 (WPP_SF_qDqL.c)
 *     WPP_SF_qLqL @ 0x1C0053664 (WPP_SF_qLqL.c)
 */

void __fastcall ndisNsiPostGetInterfaceRodInformation(
        struct _NDIS_IF_BLOCK *a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  int v6; // esi
  struct _NDIS_IF_BLOCK *v7; // rbp

  v6 = a2;
  v7 = a1;
  LOBYTE(a1) = byte_1C008371D;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
  {
    WPP_SF_qDqL((__int64)a1, a2, (__int64)v7, a2);
    LOBYTE(a1) = byte_1C008371D;
  }
  if ( v6 == 66183 && a3 >= 0xD8 && !a4[52] )
    a4[52] = v7->CompartmentId;
  if ( (unsigned __int8)a1 >= 4u )
    WPP_SF_qLqL(0xCCu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)v7, v6);
}
