/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAXPEAUHDC__@@@Z @ 0x1C00C3430
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngAcquireStableVisRgnSupported_0 @ 0x1C00014A0 (IsDxgkEngAcquireStableVisRgnSupported_0.c)
 *     DxgkEngAcquireStableVisRgn_0 @ 0x1C00014A8 (DxgkEngAcquireStableVisRgn_0.c)
 */

void __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  if ( (int)IsDxgkEngAcquireStableVisRgnSupported_0() >= 0 )
    DxgkEngAcquireStableVisRgn_0();
}
