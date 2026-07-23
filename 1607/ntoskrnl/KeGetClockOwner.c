/*
 * XREFs of KeGetClockOwner @ 0x1401D2298
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeGetClockOwner()
{
  return (unsigned int)KiClockTimerOwner;
}
