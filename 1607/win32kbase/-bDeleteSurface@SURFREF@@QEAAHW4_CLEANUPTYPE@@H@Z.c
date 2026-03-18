/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BEDC0
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0031D40 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005A02C (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCBE8 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCCC4 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(__int64 a1, int a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*(SURFACE **)(a1 + 32), a2, 0);
  if ( (_DWORD)result )
    *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
