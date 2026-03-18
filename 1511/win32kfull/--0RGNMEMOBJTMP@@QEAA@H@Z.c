/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C0151088
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C003D804 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     GreClientRgnUpdated @ 0x1C004F8F8 (GreClientRgnUpdated.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FA7B8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FAA54 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     GreSetClientRgn @ 0x1C027C56C (GreSetClientRgn.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  RGNMEMOBJ::RGNMEMOBJ(this, 0, 1);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
