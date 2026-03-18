/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXXZ @ 0x1C00B8270
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngReleaseStableVisRgnSupported_0 @ 0x1C0001440 (IsDxgkEngReleaseStableVisRgnSupported_0.c)
 *     DxgkEngReleaseStableVisRgn_0 @ 0x1C0001448 (DxgkEngReleaseStableVisRgn_0.c)
 */

void DxgkEngReleaseStableVisRgnApiExt(void)
{
  if ( (int)IsDxgkEngReleaseStableVisRgnSupported_0() >= 0 )
    DxgkEngReleaseStableVisRgn_0();
}
