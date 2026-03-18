/*
 * XREFs of ?DxgkEngGetWindowRectApiExt@@YAHPEAUHWND__@@QEAUtagRECT@@@Z @ 0x1C007F550
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngGetWindowRectSupported_0 @ 0x1C0001490 (IsDxgkEngGetWindowRectSupported_0.c)
 *     DxgkEngGetWindowRect_0 @ 0x1C0001498 (DxgkEngGetWindowRect_0.c)
 */

__int64 __fastcall DxgkEngGetWindowRectApiExt(HWND a1, struct tagRECT *const a2)
{
  int WindowRectSupported_0; // eax
  unsigned int v3; // r8d

  WindowRectSupported_0 = IsDxgkEngGetWindowRectSupported_0();
  v3 = 0;
  if ( WindowRectSupported_0 >= 0 )
    return (unsigned int)DxgkEngGetWindowRect_0();
  return v3;
}
