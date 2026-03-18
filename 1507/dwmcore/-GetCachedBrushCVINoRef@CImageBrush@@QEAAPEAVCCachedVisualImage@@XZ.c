/*
 * XREFs of ?GetCachedBrushCVINoRef@CImageBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18000ED64
 * Callers:
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z @ 0x180020450 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct CCachedVisualImage *__fastcall CImageBrush::GetCachedBrushCVINoRef(CImageBrush *this)
{
  __int64 v1; // rbp
  __int64 v2; // rsi

  v1 = *((_QWORD *)this + 64);
  v2 = 0LL;
  if ( v1 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v1 + 8) + 144LL))(v1 + 8, 52LL) )
    return (struct CCachedVisualImage *)v1;
  return (struct CCachedVisualImage *)v2;
}
