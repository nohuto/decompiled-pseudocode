/*
 * XREFs of ?DxgkEngGetClientRectApiExt@@YAHPEAUHDC__@@QEAUtagRECT@@@Z @ 0x1C00B80A0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngGetClientRectSupported_0 @ 0x1C0001480 (IsDxgkEngGetClientRectSupported_0.c)
 *     DxgkEngGetClientRect_0 @ 0x1C0001488 (DxgkEngGetClientRect_0.c)
 */

__int64 __fastcall DxgkEngGetClientRectApiExt(HDC a1, struct tagRECT *const a2)
{
  int ClientRectSupported_0; // eax
  unsigned int v3; // r8d

  ClientRectSupported_0 = IsDxgkEngGetClientRectSupported_0();
  v3 = 0;
  if ( ClientRectSupported_0 >= 0 )
    return (unsigned int)DxgkEngGetClientRect_0();
  return v3;
}
