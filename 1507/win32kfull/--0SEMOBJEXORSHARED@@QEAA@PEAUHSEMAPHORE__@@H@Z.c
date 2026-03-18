/*
 * XREFs of ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C008A510
 * Callers:
 *     GrePtInSprite @ 0x1C0012198 (GrePtInSprite.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C008A480 (GreRedrawSpriteOverlapPresent.c)
 *     GreDwmGetSurfaceData @ 0x1C00F015C (GreDwmGetSurfaceData.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014C4D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     GreDwmGetRedirectionStyle @ 0x1C02625BC (GreDwmGetRedirectionStyle.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026F850 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
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
