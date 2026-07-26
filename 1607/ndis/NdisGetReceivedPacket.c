/*
 * XREFs of NdisGetReceivedPacket @ 0x1C005C540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 */

__int64 __fastcall NdisGetReceivedPacket(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  if ( (unsigned __int8)byte_1C00895CB >= 4u )
    WPP_SF_qq(0x3Du, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v2, a2);
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) == a2 && a2 )
    v4 = *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 96);
  if ( (unsigned __int8)byte_1C00895CB >= 4u )
    WPP_SF_qq(0x3Eu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v2, a2);
  return v4;
}
