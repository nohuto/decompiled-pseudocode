/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x14020EEEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackLimit()
{
  return KeGetCurrentThread()->StackLimit;
}
