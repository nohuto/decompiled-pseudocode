/*
 * XREFs of ndisSriovQueryLuid @ 0x1C00DC240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovQueryLuid(__int64 a1, _QWORD *a2)
{
  char v4; // cl

  v4 = byte_1C00895E1;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
  {
    WPP_SF_q(0x69u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, a1);
    v4 = byte_1C00895E1;
  }
  *a2 = *(_QWORD *)(a1 + 4940);
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qD(0x6Au, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, a1, 0);
  return 0LL;
}
