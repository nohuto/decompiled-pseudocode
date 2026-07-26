/*
 * XREFs of ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00C43AC
 * Callers:
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099D60 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_SF_qDqL @ 0x1C0043110 (WPP_SF_qDqL.c)
 *     WPP_SF_qLqL @ 0x1C0058224 (WPP_SF_qLqL.c)
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
  LOBYTE(a1) = byte_1C00895DD;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
  {
    WPP_SF_qDqL((__int64)a1, a2, (__int64)v7, a2);
    LOBYTE(a1) = byte_1C00895DD;
  }
  if ( v6 == 66183 && a3 >= 0xD8 && !a4[52] )
    a4[52] = v7->CompartmentId;
  if ( (unsigned __int8)a1 >= 4u )
    WPP_SF_qLqL(0xCEu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)v7, v6);
}
