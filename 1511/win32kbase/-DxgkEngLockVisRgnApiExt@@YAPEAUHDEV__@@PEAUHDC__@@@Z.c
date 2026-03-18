/*
 * XREFs of ?DxgkEngLockVisRgnApiExt@@YAPEAUHDEV__@@PEAUHDC__@@@Z @ 0x1C00B81D0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngLockVisRgnSupported_0 @ 0x1C0001410 (IsDxgkEngLockVisRgnSupported_0.c)
 *     DxgkEngLockVisRgn_0 @ 0x1C0001418 (DxgkEngLockVisRgn_0.c)
 */

__int64 __fastcall DxgkEngLockVisRgnApiExt(HDC a1)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = IsDxgkEngLockVisRgnSupported_0();
  v2 = 0LL;
  if ( v1 >= 0 )
    return DxgkEngLockVisRgn_0();
  return v2;
}
