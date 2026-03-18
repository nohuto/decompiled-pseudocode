/*
 * XREFs of ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x1800A5AA0
 * Callers:
 *     ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x180094544 (--0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A36B8 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

__int64 __fastcall DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>::DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DynArrayImpl<1>::DynArrayImpl<1>(a1, (void *)(a1 + 32), 2, a4, 96);
  `vector constructor iterator'(
    (TemporaryConfiguration *)(a1 + 32),
    96LL,
    2LL,
    (void (__fastcall *)(TemporaryConfiguration *))CBitmapOfDeviceBitmaps::DeviceBitmapInfo::DeviceBitmapInfo);
  return a1;
}
