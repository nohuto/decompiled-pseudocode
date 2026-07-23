/*
 * XREFs of RtlGetFunctionTableListHead @ 0x18008A490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLIST_ENTRY RtlGetFunctionTableListHead(void)
{
  return (PLIST_ENTRY)&RtlpDynamicFunctionTable;
}
