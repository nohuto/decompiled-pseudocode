/*
 * XREFs of ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C007992C
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0016A14 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C003C420 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007D684 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     GreSfmCloseCompositorRef @ 0x1C007E5E4 (GreSfmCloseCompositorRef.c)
 *     GrepSfmRemoveSurfaces @ 0x1C0112050 (GrepSfmRemoveSurfaces.c)
 *     CleanupHLSURF @ 0x1C01144B0 (CleanupHLSURF.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C02608D0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 * Callees:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C007B6D4 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bhLSurfDestroyLogicalSurfaceObject(__int64 *a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v7; // rdi
  char v9; // [rsp+20h] [rbp-18h]

  v3 = *a1;
  v4 = 0;
  v7 = (__int64)a1;
  if ( *a1 )
  {
    v9 = 18;
    v7 = HmgRemoveObject(v3, 0LL, 0LL, 1LL, v9, 0LL);
  }
  if ( v7 )
  {
    SFMLOGICALSURFACE::DeInitialize(v7, v3, a3);
    FreeObject(v7, 18LL);
    if ( a2 )
      EtwLogicalSurfDestroyEvent(v3, 0LL);
    return 1;
  }
  return v4;
}
