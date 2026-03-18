/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAXPEAUHDC__@@@Z @ 0x1C00B7F20
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngAcquireStableVisRgnSupported_0 @ 0x1C0001430 (IsDxgkEngAcquireStableVisRgnSupported_0.c)
 *     DxgkEngAcquireStableVisRgn_0 @ 0x1C0001438 (DxgkEngAcquireStableVisRgn_0.c)
 */

void __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  if ( (int)IsDxgkEngAcquireStableVisRgnSupported_0() >= 0 )
    DxgkEngAcquireStableVisRgn_0();
}
