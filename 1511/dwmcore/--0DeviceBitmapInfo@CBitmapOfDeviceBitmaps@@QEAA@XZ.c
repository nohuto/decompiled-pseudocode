/*
 * XREFs of ??0DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAA@XZ @ 0x180088330
 * Callers:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

CBitmapOfDeviceBitmaps::DeviceBitmapInfo *__fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::DeviceBitmapInfo(
        CBitmapOfDeviceBitmaps::DeviceBitmapInfo *this)
{
  *((_DWORD *)this + 1) = 0;
  return this;
}
