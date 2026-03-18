/*
 * XREFs of PATHOBJ_bEnumClipLines @ 0x1C02B4CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C02B47C8 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 */

BOOL __stdcall PATHOBJ_bEnumClipLines(PATHOBJ *ppo, ULONG cj, CLIPLINE *pcl)
{
  return XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&ppo[10], ppo, cj, pcl, 1);
}
