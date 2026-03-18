/*
 * XREFs of _TTPixelsToHm @ 0x1C0248FA8
 * Callers:
 *     ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0220BF4 (-DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C0220DB4 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0221274 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     TouchTargetingBigTargetWindow @ 0x1C0247A48 (TouchTargetingBigTargetWindow.c)
 *     TouchTargetingRankForRect @ 0x1C024823C (TouchTargetingRankForRect.c)
 *     _TTAdjustContactSide @ 0x1C0248B34 (_TTAdjustContactSide.c)
 *     _TTLimitDeepTargetingPoint @ 0x1C0248F54 (_TTLimitDeepTargetingPoint.c)
 * Callees:
 *     LongLongToLong @ 0x1C0125324 (LongLongToLong.c)
 */

__int64 __fastcall TTPixelsToHm(int a1, int a2)
{
  unsigned int v2; // r9d
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  if ( LongLongToLong(a2 * (__int64)a1 / 1000, &plResult) >= 0 )
    return (unsigned int)plResult;
  return v2;
}
