/*
 * XREFs of ?W32kCddStrokePathApiExt@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0069440
 * Callers:
 *     <none>
 * Callees:
 *     IsW32kCddStrokePathSupported_0 @ 0x1C0001628 (IsW32kCddStrokePathSupported_0.c)
 *     W32kCddStrokePath_0 @ 0x1C0001630 (W32kCddStrokePath_0.c)
 */

__int64 __fastcall W32kCddStrokePathApiExt(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4)
{
  int v4; // eax
  unsigned int v5; // r10d

  v4 = IsW32kCddStrokePathSupported_0();
  v5 = 0;
  if ( v4 >= 0 )
    return (unsigned int)W32kCddStrokePath_0();
  return v5;
}
