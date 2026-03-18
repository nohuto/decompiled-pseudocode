/*
 * XREFs of ?DxgkEngUnlockVisRgnApiExt@@YAXPEAUHDEV__@@@Z @ 0x1C00B82B0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngUnlockVisRgnSupported_0 @ 0x1C0001420 (IsDxgkEngUnlockVisRgnSupported_0.c)
 *     DxgkEngUnlockVisRgn_0 @ 0x1C0001428 (DxgkEngUnlockVisRgn_0.c)
 */

void __fastcall DxgkEngUnlockVisRgnApiExt(HDEV a1)
{
  if ( (int)IsDxgkEngUnlockVisRgnSupported_0() >= 0 )
    DxgkEngUnlockVisRgn_0();
}
