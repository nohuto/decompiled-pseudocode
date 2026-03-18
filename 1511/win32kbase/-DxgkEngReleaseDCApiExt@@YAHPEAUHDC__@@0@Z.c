/*
 * XREFs of ?DxgkEngReleaseDCApiExt@@YAHPEAUHDC__@@0@Z @ 0x1C00B8200
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngReleaseDCSupported_0 @ 0x1C0001538 (IsDxgkEngReleaseDCSupported_0.c)
 *     DxgkEngReleaseDC_0 @ 0x1C0001540 (DxgkEngReleaseDC_0.c)
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
