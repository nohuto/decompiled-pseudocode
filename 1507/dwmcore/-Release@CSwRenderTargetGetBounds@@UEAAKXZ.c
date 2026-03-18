/*
 * XREFs of ?Release@CSwRenderTargetGetBounds@@UEAAKXZ @ 0x1800440D0
 * Callers:
 *     ?Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ @ 0x18009AF80 (-Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WBAA@EAAKXZ @ 0x18009B0A0 (-Release@CBitmapOfDeviceBitmaps@@WBAA@EAAKXZ.c)
 *     ?Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ @ 0x18009B0B0 (-Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WCA@EAAKXZ @ 0x18009B0C0 (-Release@CBitmapOfDeviceBitmaps@@WCA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ @ 0x18009B0D0 (-Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ @ 0x18009B0E0 (-Release@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::Release(CSwRenderTargetGetBounds *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CSwRenderTargetGetBounds *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
