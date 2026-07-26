/*
 * XREFs of ndisMiniportXStateClearFlag @ 0x1C0024090
 * Callers:
 *     ndisMRestoreOpenHandlers @ 0x1C0012760 (ndisMRestoreOpenHandlers.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C0023F44 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C00240C0 (ndisUpdateMiniportFakeStatus.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
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
    if ( (unsigned __int8)byte_1C0083714 >= 4u )
      WPP_SF_q(77LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
    return 1;
  }
  else
  {
    ndisUpdateMiniportFakeStatus(a1);
    return 0;
  }
}
