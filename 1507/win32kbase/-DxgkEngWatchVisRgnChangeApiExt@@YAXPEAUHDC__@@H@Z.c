/*
 * XREFs of ?DxgkEngWatchVisRgnChangeApiExt@@YAXPEAUHDC__@@H@Z @ 0x1C00B5C60
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngWatchVisRgnChangeSupported_0 @ 0x1C00014D0 (IsDxgkEngWatchVisRgnChangeSupported_0.c)
 *     DxgkEngWatchVisRgnChange_0 @ 0x1C00014D8 (DxgkEngWatchVisRgnChange_0.c)
 */

void __fastcall DxgkEngWatchVisRgnChangeApiExt(HDC a1)
{
  if ( (int)IsDxgkEngWatchVisRgnChangeSupported_0() >= 0 )
    DxgkEngWatchVisRgnChange_0();
}
