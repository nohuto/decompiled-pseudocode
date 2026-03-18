/*
 * XREFs of ?W32kCddIsNullBrushApiExt@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C000F130
 * Callers:
 *     <none>
 * Callees:
 *     IsW32kCddIsNullBrushSupported_0 @ 0x1C00015F8 (IsW32kCddIsNullBrushSupported_0.c)
 *     W32kCddIsNullBrush_0 @ 0x1C0001600 (W32kCddIsNullBrush_0.c)
 */

__int64 __fastcall W32kCddIsNullBrushApiExt(struct _BRUSHOBJ *a1)
{
  int IsNullBrushSupported_0; // eax
  unsigned int v2; // edx

  IsNullBrushSupported_0 = IsW32kCddIsNullBrushSupported_0();
  v2 = 0;
  if ( IsNullBrushSupported_0 >= 0 )
    return (unsigned int)W32kCddIsNullBrush_0();
  return v2;
}
