/*
 * XREFs of _TTHmToPixels @ 0x1C0248C44
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0221EF0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     TouchTargetingDownrank @ 0x1C0247F94 (TouchTargetingDownrank.c)
 *     _TTAdjustContactSide @ 0x1C0248B34 (_TTAdjustContactSide.c)
 *     _TTLimitDeepTargetingPoint @ 0x1C0248F54 (_TTLimitDeepTargetingPoint.c)
 * Callees:
 *     LongLongToLong @ 0x1C0125324 (LongLongToLong.c)
 */

__int64 __fastcall TTHmToPixels(int a1, int a2)
{
  unsigned int v2; // r9d
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  if ( LongLongToLong(1000LL * a1 / a2, &plResult) >= 0 )
    return (unsigned int)plResult;
  return v2;
}
