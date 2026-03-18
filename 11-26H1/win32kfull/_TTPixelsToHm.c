/*
 * XREFs of _TTPixelsToHm @ 0x140088148
 * Callers:
 *     ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x140086370 (-DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1400871D0 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     TouchTargetingRankForRect @ 0x1400878F8 (TouchTargetingRankForRect.c)
 *     TouchTargetChildTree @ 0x140087E8C (TouchTargetChildTree.c)
 *     TouchTargetingBigTargetWindow @ 0x1400880F4 (TouchTargetingBigTargetWindow.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x140302BC4 (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TTPixelsToHm(int a1, int a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rdx

  v2 = 0x7FFFFFFF;
  v3 = a2 * (__int64)a1 / 1000;
  if ( v3 >= (__int64)0xFFFFFFFF80000000uLL && v3 <= 0x7FFFFFFF )
    return (unsigned int)v3;
  return v2;
}
