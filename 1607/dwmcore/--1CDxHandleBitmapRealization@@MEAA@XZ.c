/*
 * XREFs of ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800551A8
 * Callers:
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x180055330 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x18018EDFC (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x18018FFD8 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180054FD0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleBitmapRealization::~CDxHandleBitmapRealization(CDxHandleBitmapRealization *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  v2 = (void *)*((_QWORD *)this + 32);
  if ( v2 )
    CloseHandle(v2);
  CDxHandleBitmapRealization::ReleaseD2DBitmap(this);
  CBitmapRealization::~CBitmapRealization(this);
}
