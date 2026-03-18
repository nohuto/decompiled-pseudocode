/*
 * XREFs of EngCreateFastMutex @ 0x1C00CA940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
