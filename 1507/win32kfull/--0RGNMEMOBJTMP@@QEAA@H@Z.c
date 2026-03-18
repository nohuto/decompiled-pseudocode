/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C015B940
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0034C94 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     GreClientRgnUpdated @ 0x1C0061BE4 (GreClientRgnUpdated.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00F5598 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F5838 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     GreSetClientRgn @ 0x1C027CFBC (GreSetClientRgn.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  RGNMEMOBJ::RGNMEMOBJ(this, 0, 1);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
