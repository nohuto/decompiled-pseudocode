/*
 * XREFs of ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18001EDA8
 * Callers:
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x18001EF20 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x18014DF80 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x18014E804 (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x18001EE20 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleBitmapRealization::~CDxHandleBitmapRealization(CDxHandleBitmapRealization *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CBitmapRealization::`vftable'{for `IDeviceResource'};
  CDxHandleBitmapRealization::ReleaseD2DBitmap(this);
  v2 = (void *)*((_QWORD *)this + 38);
  if ( v2 )
    CloseHandle(v2);
  CBitmapRealization::~CBitmapRealization(this);
}
