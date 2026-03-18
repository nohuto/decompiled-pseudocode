/*
 * XREFs of KeExecuteVerw @ 0x140171240
 * Callers:
 *     PoIdle @ 0x1400D9F40 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140140CF4 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:701Ch }
}
