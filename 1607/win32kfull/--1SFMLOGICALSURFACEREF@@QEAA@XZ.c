/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00517F0
 * Callers:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0052968 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00534D8 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C0062450 (GreHintSpriteShape.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0065268 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreSfmCloseCompositorRef @ 0x1C00665AC (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C0066C34 (GreSfmOpenCompositorRef.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00D72A4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C0122B44 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GrepSfmRemoveSurfaces @ 0x1C01336E0 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1C0050E44 (SFMLOGICALSURFACEREF_vDestructor.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  SFMLOGICALSURFACEREF_vDestructor((__int64)this);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this);
}
