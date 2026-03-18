/*
 * XREFs of ??0?$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ @ 0x1800A588C
 * Callers:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x180033F08 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A36B8 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

__int64 __fastcall DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>::DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DynArrayImpl<1>::DynArrayImpl<1>(a1, (void *)(a1 + 32), 2, a4, 48);
  `vector constructor iterator'(
    (TemporaryConfiguration *)(a1 + 32),
    48LL,
    2LL,
    (void (__fastcall *)(TemporaryConfiguration *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  return a1;
}
