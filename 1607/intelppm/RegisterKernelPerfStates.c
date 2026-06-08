/*
 * XREFs of RegisterKernelPerfStates @ 0x1C0013280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, RegisterKernelPerfStatesCallback);
}
