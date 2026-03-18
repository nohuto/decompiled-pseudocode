/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C000F9E4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFastPolyPolyline @ 0x1C0010D50 (NtGdiFastPolyPolyline.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0035FA0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiSetPixel @ 0x1C00472A0 (NtGdiSetPixel.c)
 *     NtGdiGetDCObject @ 0x1C004C540 (NtGdiGetDCObject.c)
 *     GreRectVisible @ 0x1C004C688 (GreRectVisible.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C004EE70 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C00EEF3C (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00F0E78 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     GreGetAppClipBox @ 0x1C00FA434 (GreGetAppClipBox.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C0101540 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C4C8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     NtGdiExtFloodFill @ 0x1C0137AF0 (NtGdiExtFloodFill.c)
 *     GreGetRandomRgn @ 0x1C014BED0 (GreGetRandomRgn.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025D0AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C026561C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0290370 (GreExtSelectClipRgnInternal.c)
 *     NtGdiOffsetClipRgn @ 0x1C0290810 (NtGdiOffsetClipRgn.c)
 *     NtGdiPtVisible @ 0x1C02909E0 (NtGdiPtVisible.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  DCOBJ::~DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
}
