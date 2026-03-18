/*
 * XREFs of STROBJ_dwGetCodePage @ 0x1C0280180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __stdcall STROBJ_dwGetCodePage(STROBJ *pstro)
{
  return HIDWORD(pstro[2].pgp);
}
