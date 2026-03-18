/*
 * XREFs of ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C
 * Callers:
 *     EngStrokeAndFillPath @ 0x1C0006A30 (EngStrokeAndFillPath.c)
 *     GreHintSpriteBlt @ 0x1C000A188 (GreHintSpriteBlt.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0012BB8 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C001BB50 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001CF44 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C001D210 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001D324 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00CE854 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     GreRectVisible @ 0x1C00D49F8 (GreRectVisible.c)
 *     GreSubtractRgnRectList @ 0x1C00EB534 (GreSubtractRgnRectList.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00F5598 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     NtGdiExtFloodFill @ 0x1C0103240 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C0104C30 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0105250 (NtGdiFillRgn.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C0152B5C (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C026DABC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0273C00 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0273DEC (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02746F4 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C027A354 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C027C6E0 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C029124C (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0291854 (GreExtSelectClipRgnInternal.c)
 *     NtGdiOffsetClipRgn @ 0x1C0291D00 (NtGdiOffsetClipRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 84LL) != 1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u) + 2;
  return result;
}
