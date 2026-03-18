/*
 * XREFs of ?DxgkEngGetDCExApiExt@@YAPEAUHDC__@@PEAUHWND__@@PEAUHRGN__@@K@Z @ 0x1C00B5A70
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngGetDCExSupported_0 @ 0x1C0001588 (IsDxgkEngGetDCExSupported_0.c)
 *     DxgkEngGetDCEx_0 @ 0x1C0001590 (DxgkEngGetDCEx_0.c)
 */

__int64 __fastcall DxgkEngGetDCExApiExt(HWND a1, HRGN a2)
{
  int DCExSupported_0; // eax
  __int64 v3; // r9

  DCExSupported_0 = IsDxgkEngGetDCExSupported_0();
  v3 = 0LL;
  if ( DCExSupported_0 >= 0 )
    return DxgkEngGetDCEx_0();
  return v3;
}
