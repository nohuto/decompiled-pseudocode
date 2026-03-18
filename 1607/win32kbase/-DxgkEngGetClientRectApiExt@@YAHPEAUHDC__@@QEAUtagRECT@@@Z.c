/*
 * XREFs of ?DxgkEngGetClientRectApiExt@@YAHPEAUHDC__@@QEAUtagRECT@@@Z @ 0x1C00C35B0
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngGetClientRectSupported_0 @ 0x1C00014F0 (IsDxgkEngGetClientRectSupported_0.c)
 *     DxgkEngGetClientRect_0 @ 0x1C00014F8 (DxgkEngGetClientRect_0.c)
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
