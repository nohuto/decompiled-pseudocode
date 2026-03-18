/*
 * XREFs of ?DxgkEngUnlockVisRgnApiExt@@YAXPEAUHDEV__@@@Z @ 0x1C00C37C0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngUnlockVisRgnSupported_0 @ 0x1C0001490 (IsDxgkEngUnlockVisRgnSupported_0.c)
 *     DxgkEngUnlockVisRgn_0 @ 0x1C0001498 (DxgkEngUnlockVisRgn_0.c)
 */

void __fastcall DxgkEngUnlockVisRgnApiExt(HDEV a1)
{
  if ( (int)IsDxgkEngUnlockVisRgnSupported_0() >= 0 )
    DxgkEngUnlockVisRgn_0();
}
