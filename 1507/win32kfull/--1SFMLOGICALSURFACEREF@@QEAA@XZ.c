/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894
 * Callers:
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C000B4CC (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C000C544 (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C000C7BC (GreSfmCloseCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C000D620 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreHintSpriteShape @ 0x1C000FAE4 (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00111E4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0012720 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GrepSfmRemoveSurfaces @ 0x1C0131CF0 (GrepSfmRemoveSurfaces.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C026143C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C000E2B8 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0011A24 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // eax

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
    if ( *((_DWORD *)this + 10) == 1 )
    {
      v3 = *((_QWORD *)this + 4);
      v4 = *(_DWORD *)(v3 + 248);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *(_DWORD *)(v3 + 248) &= ~0x10u;
        SFMLOGICALSURFACE::StopSfmStateTracking(*((SFMLOGICALSURFACE **)this + 4), 0LL, gpSfmState);
      }
      bhLSurfDestroyLogicalSurfaceObject(*((__int64 **)this + 4), 1, 0);
    }
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this);
}
