/*
 * XREFs of ?DxgkEngDetectGDIPathApiExt@@YAHPEBXPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C00B5A10
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngDetectGDIPathSupported_0 @ 0x1C0001510 (IsDxgkEngDetectGDIPathSupported_0.c)
 *     DxgkEngDetectGDIPath_0 @ 0x1C0001518 (DxgkEngDetectGDIPath_0.c)
 */

__int64 __fastcall DxgkEngDetectGDIPathApiExt(const void *a1, HDEV a2, HWND a3, HRGN a4)
{
  int v4; // eax
  unsigned int v5; // r10d

  v4 = IsDxgkEngDetectGDIPathSupported_0();
  v5 = 0;
  if ( v4 >= 0 )
    return (unsigned int)DxgkEngDetectGDIPath_0();
  return v5;
}
