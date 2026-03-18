/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAXPEAUHDC__@@@Z @ 0x1C00B58F0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngAcquireStableVisRgnSupported_0 @ 0x1C0001490 (IsDxgkEngAcquireStableVisRgnSupported_0.c)
 *     DxgkEngAcquireStableVisRgn_0 @ 0x1C0001498 (DxgkEngAcquireStableVisRgn_0.c)
 */

void __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  if ( (int)IsDxgkEngAcquireStableVisRgnSupported_0() >= 0 )
    DxgkEngAcquireStableVisRgn_0();
}
