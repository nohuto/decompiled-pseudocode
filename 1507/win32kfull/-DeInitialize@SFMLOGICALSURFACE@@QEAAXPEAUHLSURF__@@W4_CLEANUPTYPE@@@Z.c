/*
 * XREFs of ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0011D7C
 * Callers:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C000E2B8 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 * Callees:
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C000E740 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0011838 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C0011870 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00118C0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::DeInitialize(HLSURF *a1, HLSURF a2, int a3)
{
  HLSURF v6; // rdx
  HSURF *v7; // rbx
  _QWORD *v8; // rcx

  SfmTokenArray::DeInitialize((SfmTokenArray *)(a1 + 28));
  if ( a3 == 2 )
    a1[3] = 0LL;
  *a1 = a2;
  v7 = (HSURF *)SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)a1, v6);
  if ( v7 )
  {
    SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)a1, a1[3], 0LL);
    SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)a1, v7);
  }
  v8 = a1[3];
  if ( v8 )
  {
    SpNotifyLSurface(v8, a2, 0, 0, 0LL);
    a1[3] = 0LL;
  }
  SFMLOGICALSURFACE::CleanupRegions((REGION **)a1);
}
