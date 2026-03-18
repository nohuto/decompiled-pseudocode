/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x14020F0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
