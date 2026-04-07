/*
 * XREFs of ?Opacity@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800985D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Opacity(
        CThumbnailAnimatedVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  bool v2; // zf
  double v3; // xmm1_8

  v2 = *((_BYTE *)this + 76) == 0;
  v3 = *((float *)a2 + 5);
  *((double *)this + 7) = v3;
  if ( !v2 )
    v3 = 0.0;
  CVisual::SetOpacity((CThumbnailAnimatedVisual *)((char *)this - 264), v3);
  return 0LL;
}
