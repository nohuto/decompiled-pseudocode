/*
 * XREFs of CLIPOBJ_bEnum @ 0x1C0101F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall CLIPOBJ_bEnum(CLIPOBJ *pco, ULONG cj, ULONG *pul)
{
  return XCLIPOBJ::bEnum((XCLIPOBJ *)pco, cj, (char *)pul, 0LL);
}
