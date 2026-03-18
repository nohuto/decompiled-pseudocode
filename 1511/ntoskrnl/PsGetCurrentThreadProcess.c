/*
 * XREFs of PsGetCurrentThreadProcess @ 0x1400F1D84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
