/*
 * XREFs of ?DxgkEngGetDCApiExt@@YAPEAUHDC__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x1C00C35F0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngGetDCSupported_0 @ 0x1C0001598 (IsDxgkEngGetDCSupported_0.c)
 *     DxgkEngGetDC_0 @ 0x1C00015A0 (DxgkEngGetDC_0.c)
 */

__int64 __fastcall DxgkEngGetDCApiExt(HWND a1, HDC *a2)
{
  int DCSupported_0; // eax
  __int64 v3; // r8

  DCSupported_0 = IsDxgkEngGetDCSupported_0();
  v3 = 0LL;
  if ( DCSupported_0 >= 0 )
    return DxgkEngGetDC_0();
  return v3;
}
