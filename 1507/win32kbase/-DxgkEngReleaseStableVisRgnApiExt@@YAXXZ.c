/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXXZ @ 0x1C00B5BA0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngReleaseStableVisRgnSupported_0 @ 0x1C00014A0 (IsDxgkEngReleaseStableVisRgnSupported_0.c)
 *     DxgkEngReleaseStableVisRgn_0 @ 0x1C00014A8 (DxgkEngReleaseStableVisRgn_0.c)
 */

void DxgkEngReleaseStableVisRgnApiExt(void)
{
  if ( (int)IsDxgkEngReleaseStableVisRgnSupported_0() >= 0 )
    DxgkEngReleaseStableVisRgn_0();
}
