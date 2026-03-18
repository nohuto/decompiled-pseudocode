/*
 * XREFs of ?DxgkEngIsRedirectionDCApiExt@@YAHPEAUHDC__@@@Z @ 0x1C00B81A0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngIsRedirectionDCSupported_0 @ 0x1C00014A0 (IsDxgkEngIsRedirectionDCSupported_0.c)
 *     DxgkEngIsRedirectionDC_0 @ 0x1C00014A8 (DxgkEngIsRedirectionDC_0.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDCApiExt(HDC a1)
{
  int IsRedirectionDCSupported_0; // eax
  unsigned int v2; // edx

  IsRedirectionDCSupported_0 = IsDxgkEngIsRedirectionDCSupported_0();
  v2 = 0;
  if ( IsRedirectionDCSupported_0 >= 0 )
    return (unsigned int)DxgkEngIsRedirectionDC_0();
  return v2;
}
