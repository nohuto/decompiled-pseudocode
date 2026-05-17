/*
 * XREFs of RtlpHpStackDbFreeRoutine @ 0x1800F8030
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpHpStackDbFreeRoutine(unsigned __int64 a1)
{
  return RtlpHpMetadataFree(a1);
}
