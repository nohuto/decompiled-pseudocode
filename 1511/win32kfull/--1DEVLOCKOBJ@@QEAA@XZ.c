/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C85C
 * Callers:
 *     NtGdiSetPixel @ 0x1C002C0B0 (NtGdiSetPixel.c)
 *     NtGdiFlushUserBatch @ 0x1C0030EB0 (NtGdiFlushUserBatch.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0040258 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C007D400 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FAA54 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01009F4 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     NtGdiExtFloodFill @ 0x1C012E0C0 (NtGdiExtFloodFill.c)
 *     NtGdiFastPolyPolyline @ 0x1C013B590 (NtGdiFastPolyPolyline.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0140480 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
}
