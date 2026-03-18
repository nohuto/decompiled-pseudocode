/*
 * XREFs of ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18014AC40
 * Callers:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180149F3C (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?ClampValueToBoundaries@CScrollAnimation@@AEBAMM@Z @ 0x18015DDDC (-ClampValueToBoundaries@CScrollAnimation@@AEBAMM@Z.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEAAMXZ @ 0x18015DE28 (-GetBoundedEndpoint@CScrollAnimation@@QEAAMXZ.c)
 *     ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4 (-StartInertia@CScrollAnimation@@AEAAX_N@Z.c)
 *     ?ValueAtTimeDefault@CScrollAnimation@@IEAAMMPEA_N@Z @ 0x18015EF40 (-ValueAtTimeDefault@CScrollAnimation@@IEAAMMPEA_N@Z.c)
 *     ?GetInContactDeltaForAxis@CScrollScaleAnimation@@MEAAMXZ @ 0x18015F310 (-GetInContactDeltaForAxis@CScrollScaleAnimation@@MEAAMXZ.c)
 *     ?GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ @ 0x18015FA00 (-GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::GetScrollRange(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // edx

  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v4 = a1[45];
        v5 = a1[46];
      }
    }
    else
    {
      v4 = a1[36];
      v5 = a1[39];
    }
  }
  else
  {
    v4 = a1[35];
    v5 = a1[38];
  }
  *a3 = v4;
  *a4 = v5;
}
