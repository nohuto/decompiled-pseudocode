/*
 * XREFs of ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18010A730
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBitmapSource(
        CCompositionSurfaceBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  *a2 = 0LL;
  if ( a3
    && *(_QWORD *)a3 != __PAIR64__(g_luidZero.HighPart, 0)
    && CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 40), 0) )
  {
    (*(void (__fastcall **)(__int64, struct IBitmapSource **, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 50) + 16LL) + 72LL))(
      *((_QWORD *)this + 50) + 16LL,
      a2,
      0LL);
  }
  return 0LL;
}
