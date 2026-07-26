/*
 * XREFs of NdisGetDriverHandle @ 0x1C0055F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall NdisGetDriverHandle(__int64 a1, _QWORD *a2)
{
  char v4; // cl

  v4 = byte_1C008530D;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
  {
    WPP_SF_q(0x1Du, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1);
    v4 = byte_1C008530D;
  }
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 3816LL);
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qq(0x1Eu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1);
}
