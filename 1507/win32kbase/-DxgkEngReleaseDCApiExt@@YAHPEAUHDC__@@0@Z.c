/*
 * XREFs of ?DxgkEngReleaseDCApiExt@@YAHPEAUHDC__@@0@Z @ 0x1C00198C0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngReleaseDCSupported_0 @ 0x1C0001598 (IsDxgkEngReleaseDCSupported_0.c)
 *     DxgkEngReleaseDC_0 @ 0x1C00015A0 (DxgkEngReleaseDC_0.c)
 */

__int64 __fastcall DxgkEngReleaseDCApiExt(HDC a1, HDC a2)
{
  int v2; // eax
  unsigned int v3; // r8d

  v2 = IsDxgkEngReleaseDCSupported_0();
  v3 = 0;
  if ( v2 >= 0 )
    return (unsigned int)DxgkEngReleaseDC_0();
  return v3;
}
