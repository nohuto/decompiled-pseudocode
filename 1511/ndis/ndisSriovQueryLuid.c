/*
 * XREFs of ndisSriovQueryLuid @ 0x1C00D6320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovQueryLuid(__int64 a1, _QWORD *a2)
{
  char v4; // cl

  v4 = byte_1C0083721;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
  {
    WPP_SF_q(0x69u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, a1);
    v4 = byte_1C0083721;
  }
  *a2 = *(_QWORD *)(a1 + 4940);
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qD(0x6Au, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, a1, 0);
  return 0LL;
}
