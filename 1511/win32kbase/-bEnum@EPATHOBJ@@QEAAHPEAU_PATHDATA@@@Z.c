/*
 * XREFs of ?bEnum@EPATHOBJ@@QEAAHPEAU_PATHDATA@@@Z @ 0x1C0083920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall EPATHOBJ::bEnum(PATHOBJ *ppo, PATHDATA *ppd)
{
  return PATHOBJ_bEnum(ppo, ppd);
}
