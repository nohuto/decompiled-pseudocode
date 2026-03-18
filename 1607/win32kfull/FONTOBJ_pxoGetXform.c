/*
 * XREFs of FONTOBJ_pxoGetXform @ 0x1C0284010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

XFORMOBJ *__stdcall FONTOBJ_pxoGetXform(FONTOBJ *pfo)
{
  return (XFORMOBJ *)&pfo[3].iFile;
}
