/*
 * XREFs of ?Release@CSwRenderTargetGetBounds@@UEAAKXZ @ 0x180082050
 * Callers:
 *     ?Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ @ 0x1800BDC20 (-Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ.c)
 *     ?Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ @ 0x1800BDC30 (-Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WBAA@EAAKXZ @ 0x1800BDD50 (-Release@CBitmapOfDeviceBitmaps@@WBAA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WCA@EAAKXZ @ 0x1800BDD60 (-Release@CBitmapOfDeviceBitmaps@@WCA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ @ 0x1800BDD70 (-Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ @ 0x1800BDD80 (-Release@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
