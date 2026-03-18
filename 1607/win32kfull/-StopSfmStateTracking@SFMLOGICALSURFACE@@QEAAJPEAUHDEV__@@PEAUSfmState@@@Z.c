/*
 * XREFs of ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00522F4
 * Callers:
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1C0050E44 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     GreSfmCloseCompositorRef @ 0x1C00665AC (GreSfmCloseCompositorRef.c)
 *     GrepSfmRemoveSurfaces @ 0x1C01336E0 (GrepSfmRemoveSurfaces.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C025E1CC (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C025D93C (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::StopSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  SFMLOGICALSURFACE **v6; // rcx
  SFMLOGICALSURFACE **v7; // rax

  *((_DWORD *)this + 62) &= ~8u;
  DEC_SHARE_REF_CNT(this);
  --*((_DWORD *)a3 + 14);
  v6 = (SFMLOGICALSURFACE **)*((_QWORD *)this + 4);
  v7 = (SFMLOGICALSURFACE **)*((_QWORD *)this + 5);
  if ( v6[1] != (SFMLOGICALSURFACE *)((char *)this + 32) || *v7 != (SFMLOGICALSURFACE *)((char *)this + 32) )
    __fastfail(3u);
  *v7 = (SFMLOGICALSURFACE *)v6;
  v6[1] = (SFMLOGICALSURFACE *)v7;
  if ( (*((_DWORD *)this + 62) & 0x80u) != 0 )
  {
    if ( a2 || (a2 = (HDEV)*((_QWORD *)this + 3)) != 0LL )
      SpNotifyLSurfaceTracking(a2, *(HLSURF *)this, 0);
    *((_DWORD *)this + 62) &= ~0x80u;
  }
  return 0LL;
}
