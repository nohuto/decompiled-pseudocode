/*
 * XREFs of ??0?$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ @ 0x180068D3C
 * Callers:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18005AAD4 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A18D0 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

__int64 __fastcall DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>::DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>(
        __int64 a1)
{
  DynArrayImpl<1>::DynArrayImpl<1>(a1, a1 + 32, 2LL);
  `vector constructor iterator'(
    (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(a1 + 32),
    48LL,
    2,
    (void (__fastcall *)(CBitmapOfDeviceBitmaps::DeviceBitmapInfo *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  return a1;
}
