/*
 * XREFs of ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A75C
 * Callers:
 *     ??$RunForAllScrollAnimationsWithAxis@V_lambda_d10c4ee2d6fa048af20684fb87925053_@@@CInteractionTracker@@AEAAXAEBV_lambda_d10c4ee2d6fa048af20684fb87925053_@@@Z @ 0x18014984C (--$RunForAllScrollAnimationsWithAxis@V_lambda_d10c4ee2d6fa048af20684fb87925053_@@@CInteractionTr.c)
 *     ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4 (-StartInertia@CScrollAnimation@@AEAAX_N@Z.c)
 *     ?GetInContactDeltaForAxis@CScrollScaleAnimation@@MEAAMXZ @ 0x18015F310 (-GetInContactDeltaForAxis@CScrollScaleAnimation@@MEAAMXZ.c)
 *     ?GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ @ 0x18015FA00 (-GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ.c)
 *     _lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator() @ 0x1801687F0 (_lambda_aa746e2ed241174a5cc881b0a8c3db18_--operator().c)
 * Callees:
 *     <none>
 */

float __fastcall CInteractionTracker::GetCurrentValue(float *a1, int a2)
{
  int v2; // edx

  if ( !a2 )
    return a1[32];
  v2 = a2 - 1;
  if ( !v2 )
    return a1[33];
  if ( v2 == 1 )
    return a1[44];
  return 0.0;
}
