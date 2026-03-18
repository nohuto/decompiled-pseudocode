/*
 * XREFs of KeExecuteVerw @ 0x140195700
 * Callers:
 *     PoIdle @ 0x1400A7600 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140166358 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:701Ch }
}
