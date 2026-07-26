/*
 * XREFs of ndisMiniportXStateClearFlag @ 0x1C001F85C
 * Callers:
 *     ndisMRestoreOpenHandlers @ 0x1C001F608 (ndisMRestoreOpenHandlers.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001F710 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C00203E4 (ndisUpdateMiniportFakeStatus.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

char __fastcall ndisMiniportXStateClearFlag(__int64 a1, __int64 a2)
{
  bool v2; // zf

  LOBYTE(a2) = ~(_BYTE)a2;
  v2 = ((unsigned __int8)a2 & *(_BYTE *)(a1 + 930)) == 0;
  *(_BYTE *)(a1 + 930) &= a2;
  if ( v2 )
  {
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
      WPP_SF_q(77LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
    return 1;
  }
  else
  {
    ndisUpdateMiniportFakeStatus(a1, a2, a1);
    return 0;
  }
}
