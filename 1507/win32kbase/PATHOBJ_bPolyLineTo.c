/*
 * XREFs of PATHOBJ_bPolyLineTo @ 0x1C00B0290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall PATHOBJ_bPolyLineTo(PATHOBJ *ppo, POINTFIX *pptfx, ULONG cptfx)
{
  return EPATHOBJ::bPolyLineTo((EPATHOBJ *)ppo, 0LL, (struct _POINTL *)pptfx, cptfx);
}
