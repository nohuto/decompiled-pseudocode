/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C
 * Callers:
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C000DAF0 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     NtGdiSetPixel @ 0x1C0018B00 (NtGdiSetPixel.c)
 *     NtGdiFlushUserBatch @ 0x1C001BF90 (NtGdiFlushUserBatch.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086C10 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreRectVisible @ 0x1C00D49F8 (GreRectVisible.c)
 *     GreGetAppClipBox @ 0x1C00D7294 (GreGetAppClipBox.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00DEB20 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E6364 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F5838 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00F81D4 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     NtGdiExtFloodFill @ 0x1C0103240 (NtGdiExtFloodFill.c)
 *     NtGdiFastPolyPolyline @ 0x1C011CF30 (NtGdiFastPolyPolyline.c)
 *     GreGetRandomRgn @ 0x1C011DA40 (GreGetRandomRgn.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C012588C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0291854 (GreExtSelectClipRgnInternal.c)
 *     NtGdiOffsetClipRgn @ 0x1C0291D00 (NtGdiOffsetClipRgn.c)
 *     NtGdiPtVisible @ 0x1C0291ED0 (NtGdiPtVisible.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  DCOBJ::~DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
}
