/*
 * XREFs of ??1CDxHandleDecodeBitmapRealization@@MEAA@XZ @ 0x18015E414
 * Callers:
 *     ??_GCDxHandleYUVBitmapRealization@@UEAAPEAXI@Z @ 0x18015E4C0 (--_GCDxHandleYUVBitmapRealization@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAXXZ @ 0x18015FEE4 (-ReleaseVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleDecodeBitmapRealization::~CDxHandleDecodeBitmapRealization(
        CDxHandleDecodeBitmapRealization *this)
{
  void *v2; // rcx
  __int64 v3; // rsi

  *(_QWORD *)this = &CDxHandleDecodeBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleDecodeBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResource'};
  v2 = (void *)*((_QWORD *)this + 38);
  if ( v2 )
    CloseHandle(v2);
  CDxHandleDecodeBitmapRealization::ReleaseVidMemOnlyTexture(this);
  v3 = *((_QWORD *)this + 59);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 59));
  CBitmapRealization::~CBitmapRealization(this);
}
