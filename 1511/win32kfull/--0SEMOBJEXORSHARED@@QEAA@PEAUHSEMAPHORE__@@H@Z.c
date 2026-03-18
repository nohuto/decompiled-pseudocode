/*
 * XREFs of ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0068580
 * Callers:
 *     GrePtInSprite @ 0x1C003BB90 (GrePtInSprite.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C00684F0 (GreRedrawSpriteOverlapPresent.c)
 *     GreDwmGetSurfaceData @ 0x1C007E0CC (GreDwmGetSurfaceData.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EA480 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0260DEC (GreDwmGetRedirectionStyle.c)
 *     GreHintDxUpdate @ 0x1C026152C (GreHintDxUpdate.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026E880 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

SEMOBJEXORSHARED *__fastcall SEMOBJEXORSHARED::SEMOBJEXORSHARED(SEMOBJEXORSHARED *this, HSEMAPHORE a2, int a3)
{
  *(_QWORD *)this = a2;
  if ( a3 == 1 )
  {
    GreAcquireSemaphoreSharedInternal(a2);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  }
  else
  {
    GreAcquireSemaphore(a2);
  }
  return this;
}
