/*
 * XREFs of ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x18005F038
 * Callers:
 *     ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x180048DCC (--0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18005198C (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

__int64 __fastcall DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>::DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DynArrayImpl<1>::DynArrayImpl<1>(a1, (void *)(a1 + 32), 2, a4, 96);
  `vector constructor iterator'(
    (Mesh::MeshLine *)(a1 + 32),
    96LL,
    2,
    (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  return a1;
}
