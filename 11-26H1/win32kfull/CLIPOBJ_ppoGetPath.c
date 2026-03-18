/*
 * XREFs of CLIPOBJ_ppoGetPath @ 0x1400D9660
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400D86E8 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 */

PATHOBJ *__stdcall CLIPOBJ_ppoGetPath(CLIPOBJ *pco)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  return XCLIPOBJ::ppoGetPath((XCLIPOBJ *)pco, v1, v2);
}
