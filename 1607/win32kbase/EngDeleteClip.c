/*
 * XREFs of EngDeleteClip @ 0x1C00CBA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  EngFreeMem(pco);
}
