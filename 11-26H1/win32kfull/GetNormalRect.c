/*
 * XREFs of GetNormalRect @ 0x14024BFD0
 * Callers:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1401604A0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     CitGetWindowInfo @ 0x14025D590 (CitGetWindowInfo.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x14003139C (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 */

__int64 __fastcall GetNormalRect(const struct tagWND *a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm0

  result = (__int64)CHECKPOINT::Get(a1, (__int64)a2);
  if ( result )
  {
    v4 = *(_OWORD *)(result + 20);
    result = 1LL;
    *a2 = v4;
  }
  return result;
}
