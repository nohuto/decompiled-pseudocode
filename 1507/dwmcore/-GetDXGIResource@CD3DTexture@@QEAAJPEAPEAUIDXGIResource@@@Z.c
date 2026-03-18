/*
 * XREFs of ?GetDXGIResource@CD3DTexture@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180084948
 * Callers:
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180084824 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18013F518 (-Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z.c)
 *     ?GetDXGIResource@CDxHandleDecodeBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801526D0 (-GetDXGIResource@CDxHandleDecodeBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DTexture::GetDXGIResource(CD3DTexture *this, struct IDXGIResource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  *a2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 24LL))(this) )
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 16))(
           *((_QWORD *)this + 16),
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           a2);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1C4u);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x1BFu);
  }
  return v5;
}
