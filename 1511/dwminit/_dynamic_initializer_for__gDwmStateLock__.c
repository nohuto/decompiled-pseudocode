/*
 * XREFs of _dynamic_initializer_for__gDwmStateLock__ @ 0x180001180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__gDwmStateLock__()
{
  InitializeSRWLock(&gDwmStateLock);
}
