/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x14020F0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackLimit()
{
  return KeGetCurrentThread()->StackLimit;
}
