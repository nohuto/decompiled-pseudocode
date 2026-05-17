/*
 * XREFs of RtlGetFunctionTableListHead @ 0x1800867C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *RtlGetFunctionTableListHead()
{
  return &RtlpDynamicFunctionTable;
}
