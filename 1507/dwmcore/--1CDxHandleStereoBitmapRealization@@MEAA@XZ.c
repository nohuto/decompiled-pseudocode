/*
 * XREFs of ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x18014DF80
 * Callers:
 *     ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x18014DFF0 (--_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18001B5AC (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x18014E5F0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::~CDxHandleStereoBitmapRealization(
        CDxHandleStereoBitmapRealization *this)
{
  *(_QWORD *)this = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleStereoBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  CDxHandleStereoBitmapRealization::ReleaseD2DBitmap(this);
  CD2DBitmapCache::~CD2DBitmapCache((CDxHandleStereoBitmapRealization *)((char *)this + 480));
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}
