/*
 * XREFs of PATHOBJ_bCloseFigure @ 0x1C00B3CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall PATHOBJ_bCloseFigure(PATHOBJ *ppo)
{
  return EPATHOBJ::bCloseFigure((EPATHOBJ *)ppo);
}
