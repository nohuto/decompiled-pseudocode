/*
 * XREFs of EngCreateFastMutex @ 0x1C00BEC70
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
