/*
 * XREFs of ndisIsMiniportReady @ 0x1C004A0C8
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055C68 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C00F2370 (ndisReferenceNextUnprocessedMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

char __fastcall ndisIsMiniportReady(_DWORD *a1)
{
  int v1; // r9d
  unsigned __int16 v3; // cx

  v1 = a1[30];
  if ( (v1 & 0x80200020) != 0 )
  {
    if ( (unsigned __int8)byte_1C0085314 < 4u )
      return 0;
    v3 = 67;
LABEL_4:
    WPP_SF_qD(v3, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, (__int64)a1, v1);
    return 0;
  }
  v1 = a1[31];
  if ( (v1 & 0x1084910) != 0 )
  {
    if ( (unsigned __int8)byte_1C0085314 < 4u )
      return 0;
    v3 = 68;
    goto LABEL_4;
  }
  v1 = a1[380];
  if ( v1 != 1 )
  {
    if ( (unsigned __int8)byte_1C0085314 < 4u )
      return 0;
    v3 = 69;
    goto LABEL_4;
  }
  v1 = a1[981];
  if ( v1 != 1 )
  {
    if ( (unsigned __int8)byte_1C0085314 < 4u )
      return 0;
    v3 = 70;
    goto LABEL_4;
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x47u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, (__int64)a1);
  return 1;
}
