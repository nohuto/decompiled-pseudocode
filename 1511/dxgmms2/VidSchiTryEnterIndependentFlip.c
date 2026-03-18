/*
 * XREFs of VidSchiTryEnterIndependentFlip @ 0x1C0001850
 * Callers:
 *     VidSchConfirmToken @ 0x1C0001780 (VidSchConfirmToken.c)
 *     VidSchiUpdatePresentParameters @ 0x1C00129F0 (VidSchiUpdatePresentParameters.c)
 * Callees:
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C000222C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 */

char __fastcall VidSchiTryEnterIndependentFlip(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  char result; // al
  unsigned int v4; // r10d
  __int64 v5; // r11

  result = VidSchiCheckPlaneIndependentFlipCondition(a1, a2, a3);
  if ( result )
    return VidSchiFlushPendingTokenList(v5, v4);
  return result;
}
