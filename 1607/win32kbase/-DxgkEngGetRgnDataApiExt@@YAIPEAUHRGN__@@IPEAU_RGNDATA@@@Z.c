/*
 * XREFs of ?DxgkEngGetRgnDataApiExt@@YAIPEAUHRGN__@@IPEAU_RGNDATA@@@Z @ 0x1C00C3660
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngGetRgnDataSupported_0 @ 0x1C0001520 (IsDxgkEngGetRgnDataSupported_0.c)
 *     DxgkEngGetRgnData_0 @ 0x1C0001528 (DxgkEngGetRgnData_0.c)
 */

__int64 __fastcall DxgkEngGetRgnDataApiExt(HRGN a1, __int64 a2, struct _RGNDATA *a3)
{
  int RgnDataSupported_0; // eax
  unsigned int v4; // r9d

  RgnDataSupported_0 = IsDxgkEngGetRgnDataSupported_0();
  v4 = 0;
  if ( RgnDataSupported_0 >= 0 )
    return (unsigned int)DxgkEngGetRgnData_0();
  return v4;
}
