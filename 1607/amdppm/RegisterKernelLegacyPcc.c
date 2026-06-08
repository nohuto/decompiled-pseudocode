/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C0004000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  return InitLegacyPccInternal(a1, RegisterKernelPerfStatesCallback);
}
