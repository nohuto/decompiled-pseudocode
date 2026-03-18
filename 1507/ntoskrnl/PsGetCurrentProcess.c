/*
 * XREFs of PsGetCurrentProcess @ 0x140101AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
