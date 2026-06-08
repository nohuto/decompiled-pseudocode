/*
 * XREFs of RegisterKernelCpc @ 0x1C00178C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterKernelCpc(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterKernelPerfStatesCallback);
}
