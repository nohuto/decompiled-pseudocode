/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1C001C770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RegisterHvLegacyPccCounters(__int64 a1)
{
  return RegisterKernelLegacyPcc(a1);
}
