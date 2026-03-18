/*
 * XREFs of ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x18019069C
 * Callers:
 *     ??_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z @ 0x180190720 (--_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180191394 (-ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::~CDxHandleYUVBitmapRealization(CDxHandleYUVBitmapRealization *this)
{
  void *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  *(_QWORD *)this = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleYUVBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 52) = &CDxHandleYUVBitmapRealization::`vftable';
  v2 = (void *)*((_QWORD *)this + 32);
  if ( v2 )
    CloseHandle(v2);
  CDxHandleYUVBitmapRealization::ReleaseVidMemOnlyTexture(this);
  CBitmapRealization::~CBitmapRealization(this, v3, v4);
}
