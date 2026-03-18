/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14012F934
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
