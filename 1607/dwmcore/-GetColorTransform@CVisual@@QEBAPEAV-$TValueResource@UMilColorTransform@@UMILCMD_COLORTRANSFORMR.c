/*
 * XREFs of ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@XZ @ 0x18010A158
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ProcessSetColorTransform@CVisual@@UEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x180109A00 (-ProcessSetColorTransform@CVisual@@UEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetColorTransform(__int64 a1)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *(_QWORD *)(a1 + 272);
  if ( (*(_DWORD *)(v1 + 4) & 0x20000000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x3000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(_QWORD *)(i + 4);
}
