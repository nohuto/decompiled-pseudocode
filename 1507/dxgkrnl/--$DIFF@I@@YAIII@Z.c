/*
 * XREFs of ??$DIFF@I@@YAIII@Z @ 0x1C0008614
 * Callers:
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C002BF84 (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C009A69C (BmlCompareTargetModesWithConstraint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 <= a2 )
    return a2 - a1;
  else
    return a1 - a2;
}
