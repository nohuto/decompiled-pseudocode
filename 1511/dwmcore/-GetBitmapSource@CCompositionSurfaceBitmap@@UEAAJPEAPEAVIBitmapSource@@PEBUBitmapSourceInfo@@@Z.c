/*
 * XREFs of ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180126000
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002E6E4 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBitmapSource(
        CCompositionSurfaceBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  *a2 = 0LL;
  if ( a3
    && *(_QWORD *)a3
    && CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 48), 0) )
  {
    (*(void (__fastcall **)(__int64, struct IBitmapSource **, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 50) + 16LL) + 72LL))(
      *((_QWORD *)this + 50) + 16LL,
      a2,
      0LL);
  }
  return 0LL;
}
