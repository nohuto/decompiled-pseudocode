/*
 * XREFs of _TTHmToPixels @ 0x1C024C914
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C022C21C (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     TouchTargetingDownrank @ 0x1C024BC64 (TouchTargetingDownrank.c)
 *     _TTAdjustContactSide @ 0x1C024C804 (_TTAdjustContactSide.c)
 *     _TTLimitDeepTargetingPoint @ 0x1C024CC24 (_TTLimitDeepTargetingPoint.c)
 * Callees:
 *     LongLongToLong @ 0x1C01C3C60 (LongLongToLong.c)
 */

__int64 __fastcall TTHmToPixels(int a1, int a2)
{
  unsigned int v2; // r9d
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  if ( LongLongToLong(1000LL * a1 / a2, &plResult) >= 0 )
    return (unsigned int)plResult;
  return v2;
}
