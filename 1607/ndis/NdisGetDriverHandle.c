/*
 * XREFs of NdisGetDriverHandle @ 0x1C005A5F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 */

void __fastcall NdisGetDriverHandle(__int64 a1, _QWORD *a2)
{
  char v4; // cl

  v4 = byte_1C00895CD;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
  {
    WPP_SF_q(0x1Du, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1);
    v4 = byte_1C00895CD;
  }
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 3816LL);
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qq(0x1Eu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1);
}
