/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0046200
 * Callers:
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00380F0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00456B0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(struct SURFACE **a1, int a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*a1, a2, 0);
  if ( (_DWORD)result )
    *a1 = 0LL;
  return result;
}
