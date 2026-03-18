/*
 * XREFs of _TTPixelsToHm @ 0x1C024CCE8
 * Callers:
 *     ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C022AD38 (-DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C022AEF0 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022B390 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     TouchTargetingBigTargetWindow @ 0x1C024B788 (TouchTargetingBigTargetWindow.c)
 *     TouchTargetingRankForRect @ 0x1C024BF7C (TouchTargetingRankForRect.c)
 *     _TTAdjustContactSide @ 0x1C024C874 (_TTAdjustContactSide.c)
 *     _TTLimitDeepTargetingPoint @ 0x1C024CC94 (_TTLimitDeepTargetingPoint.c)
 * Callees:
 *     LongLongToLong @ 0x1C01C20A0 (LongLongToLong.c)
 */

__int64 __fastcall TTPixelsToHm(int a1, int a2)
{
  unsigned int v2; // r9d
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  if ( LongLongToLong(a2 * (__int64)a1 / 1000, &plResult) >= 0 )
    return (unsigned int)plResult;
  return v2;
}
