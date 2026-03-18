/*
 * XREFs of EngCopyBits_0 @ 0x1C0001660
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C000CB80 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall EngCopyBits_0(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  return EngCopyBits(psoDest, psoSrc, pco, pxlo, prclDest, pptlSrc);
}
