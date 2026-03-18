/*
 * XREFs of CLIPOBJ_ppoGetPath @ 0x1C025B3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PATHOBJ *__stdcall CLIPOBJ_ppoGetPath(CLIPOBJ *pco)
{
  return XCLIPOBJ::ppoGetPath((XCLIPOBJ *)pco);
}
