/*
 * XREFs of PATHOBJ_bEnumClipLines @ 0x140334FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1400E1918 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 */

BOOL __stdcall PATHOBJ_bEnumClipLines(PATHOBJ *ppo, ULONG cj, CLIPLINE *pcl)
{
  return XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&ppo[9], ppo, cj, pcl, 1);
}
