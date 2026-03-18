/*
 * XREFs of ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x180094544
 * Callers:
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B40F8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x180085328 (--0CBitmap@@QEAA@XZ.c)
 *     ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x1800A5AA0 (--0-$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ.c)
 */

CBitmapOfDeviceBitmaps *__fastcall CBitmapOfDeviceBitmaps::CBitmapOfDeviceBitmaps(
        CBitmapOfDeviceBitmaps *this,
        int a2,
        int a3,
        const struct PixelFormatInfo *a4)
{
  __int64 v8; // xmm1_8
  CBitmapOfDeviceBitmaps *result; // rax

  CBitmap::CBitmap(this);
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)this = &CBitmapOfDeviceBitmaps::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CBitmapOfDeviceBitmaps::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CBitmapOfDeviceBitmaps::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CBitmapOfDeviceBitmaps::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 32) = &CBitmapOfDeviceBitmaps::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 33) = &CBitmapOfDeviceBitmaps::`vftable'{for `IDeviceResourceNotify'};
  DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>::DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>((char *)this + 296);
  *((_DWORD *)this + 136) = 0;
  *((_QWORD *)this + 65) = (char *)this + 552;
  *((_QWORD *)this + 66) = (char *)this + 552;
  *((_DWORD *)this + 134) = 2;
  *((_DWORD *)this + 135) = 2;
  *((_DWORD *)this + 46) = a2;
  *((_DWORD *)this + 47) = a3;
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)a4;
  v8 = *((_QWORD *)a4 + 2);
  *((_DWORD *)this + 48) = 1119879168;
  *((_DWORD *)this + 49) = 1119879168;
  result = this;
  *((_QWORD *)this + 27) = v8;
  return result;
}
