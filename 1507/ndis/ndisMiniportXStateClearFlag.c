/*
 * XREFs of ndisMiniportXStateClearFlag @ 0x1C0012E30
 * Callers:
 *     ndisMRestoreOpenHandlers @ 0x1C000FAE0 (ndisMRestoreOpenHandlers.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C00138FC (ndisRestoreFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C001FB10 (ndisUpdateMiniportFakeStatus.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

char __fastcall ndisMiniportXStateClearFlag(__int64 a1, char a2)
{
  unsigned __int8 v2; // dl
  bool v3; // zf

  v2 = ~a2;
  v3 = (v2 & *(_BYTE *)(a1 + 930)) == 0;
  *(_BYTE *)(a1 + 930) &= v2;
  if ( v3 )
  {
    if ( (unsigned __int8)byte_1C0085314 >= 4u )
      WPP_SF_q(77LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
    return 1;
  }
  else
  {
    ndisUpdateMiniportFakeStatus(a1);
    return 0;
  }
}
