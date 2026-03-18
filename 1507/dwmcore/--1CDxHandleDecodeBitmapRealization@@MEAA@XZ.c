/*
 * XREFs of ??1CDxHandleDecodeBitmapRealization@@MEAA@XZ @ 0x18014F950
 * Callers:
 *     ??_GCDxHandleYUVBitmapRealization@@UEAAPEAXI@Z @ 0x18014F9F0 (--_GCDxHandleYUVBitmapRealization@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAXXZ @ 0x1801529B4 (-ReleaseVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleDecodeBitmapRealization::~CDxHandleDecodeBitmapRealization(
        CDxHandleDecodeBitmapRealization *this)
{
  __int64 v2; // rsi
  void *v3; // rcx

  *(_QWORD *)this = &CDxHandleDecodeBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleDecodeBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResource'};
  CDxHandleDecodeBitmapRealization::ReleaseVidMemOnlyTexture(this);
  v2 = *((_QWORD *)this + 59);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*((_QWORD *)this + 59));
  v3 = (void *)*((_QWORD *)this + 38);
  if ( v3 )
    CloseHandle(v3);
  CBitmapRealization::~CBitmapRealization(this);
}
