/*
 * XREFs of ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18014C0D4
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z @ 0x18015E958 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z.c)
 *     ?GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ @ 0x18015FA00 (-GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ.c)
 * Callees:
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18014BF84 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 */

char __fastcall CInteractionTracker::ShouldChainForAxis(__int64 a1, int a2)
{
  char result; // al
  __int64 v3; // r8

  result = 0;
  if ( *(_QWORD *)(a1 + 552) )
  {
    v3 = *(_QWORD *)(a1 + 544);
    if ( v3 )
      return CInteractionTracker::ShouldChainForAxis(a1, a2, v3, 0);
  }
  return result;
}
