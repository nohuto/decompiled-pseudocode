/*
 * XREFs of ?W32kCddLineToApiExt@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0085B00
 * Callers:
 *     <none>
 * Callees:
 *     IsW32kCddLineToSupported_0 @ 0x1C0001628 (IsW32kCddLineToSupported_0.c)
 *     W32kCddLineTo_0 @ 0x1C0001630 (W32kCddLineTo_0.c)
 */

__int64 __fastcall W32kCddLineToApiExt(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _BRUSHOBJ *a3)
{
  int v3; // eax
  unsigned int v4; // r10d

  v3 = IsW32kCddLineToSupported_0();
  v4 = 0;
  if ( v3 >= 0 )
    return (unsigned int)W32kCddLineTo_0();
  return v4;
}
