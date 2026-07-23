/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x14020EEDC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
