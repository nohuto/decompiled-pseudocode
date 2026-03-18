/*
 * XREFs of _TTHmToPixels @ 0x140087E54
 * Callers:
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1400871D0 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1400872B4 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     TouchTargetingDownrank @ 0x140088194 (TouchTargetingDownrank.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x140302BC4 (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TTHmToPixels(int a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0x7FFFFFFF;
  v3 = 1000LL * a1 / a2;
  if ( v3 >= (__int64)0xFFFFFFFF80000000uLL && v3 <= 0x7FFFFFFF )
    return (unsigned int)(1000LL * a1 / a2);
  return v2;
}
