/*
 * XREFs of ?GreGetRandomRgnApiExt@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C00C3810
 * Callers:
 *     <none>
 * Callees:
 *     IsGreGetRandomRgnSupported_0 @ 0x1C00015B8 (IsGreGetRandomRgnSupported_0.c)
 *     GreGetRandomRgn_0 @ 0x1C00015C0 (GreGetRandomRgn_0.c)
 */

__int64 __fastcall GreGetRandomRgnApiExt(HDC a1, HRGN a2)
{
  int RandomRgnSupported_0; // eax
  unsigned int v3; // r9d

  RandomRgnSupported_0 = IsGreGetRandomRgnSupported_0();
  v3 = 0;
  if ( RandomRgnSupported_0 >= 0 )
    return (unsigned int)GreGetRandomRgn_0();
  return v3;
}
