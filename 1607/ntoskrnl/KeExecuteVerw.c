/*
 * XREFs of KeExecuteVerw @ 0x140171740
 * Callers:
 *     PoIdle @ 0x1400D7DE0 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140141264 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:701Ch }
}
