/*
 * XREFs of ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x180068A88
 * Callers:
 *     ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x18008AFCC (--0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A18D0 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

__int64 __fastcall DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>::DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>(
        __int64 a1)
{
  DynArrayImpl<1>::DynArrayImpl<1>(a1, a1 + 32, 2LL);
  `vector constructor iterator'(
    (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(a1 + 32),
    96LL,
    2,
    (void (__fastcall *)(CBitmapOfDeviceBitmaps::DeviceBitmapInfo *))CBitmapOfDeviceBitmaps::DeviceBitmapInfo::DeviceBitmapInfo);
  return a1;
}
