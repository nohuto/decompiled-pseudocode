/*
 * XREFs of NdisGetDriverHandle @ 0x1C0055DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall NdisGetDriverHandle(__int64 a1, _QWORD *a2)
{
  char v4; // cl

  v4 = byte_1C008370D;
  if ( (unsigned __int8)byte_1C008370D >= 4u )
  {
    WPP_SF_q(0x1Du, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1);
    v4 = byte_1C008370D;
  }
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 3816LL);
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qq(0x1Eu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1);
}
