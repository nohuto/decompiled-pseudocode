/*
 * XREFs of ?CalculateDeltaForState@CScrollAnimation@@QEAAMW4ScrollState@@@Z @ 0x18015D8E4
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18015D910 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?GetInContactDelta@CScrollAnimation@@AEAAMXZ @ 0x18015DEB0 (-GetInContactDelta@CScrollAnimation@@AEAAMXZ.c)
 */

float __fastcall CScrollAnimation::CalculateDeltaForState(CScrollAnimation *a1, int a2)
{
  float result; // xmm0_4
  int v3; // edx

  result = 0.0;
  v3 = a2 - 1;
  if ( !v3 )
    return CScrollAnimation::GetInContactDelta(a1);
  if ( v3 == 1 )
    return CScrollAnimation::GetInertiaDelta(a1);
  return result;
}
