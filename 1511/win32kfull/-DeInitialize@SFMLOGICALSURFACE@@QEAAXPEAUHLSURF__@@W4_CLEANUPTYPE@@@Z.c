/*
 * XREFs of ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C007B6D4
 * Callers:
 *     GreUpdateSprite @ 0x1C0032AF0 (GreUpdateSprite.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C007992C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C007B0F8 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C007B1C8 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B218 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007D76C (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::DeInitialize(HDEV *a1, HLSURF a2, int a3)
{
  HLSURF v6; // rdx
  struct SURFACE *v7; // rbx
  HDEV v8; // rcx

  SfmTokenArray::DeInitialize((SfmTokenArray *)(a1 + 28));
  if ( a3 == 2 )
    a1[3] = 0LL;
  *a1 = (HDEV)a2;
  v7 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)a1, v6);
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
