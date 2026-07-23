/*
 * XREFs of RtlGetFunctionTableListHead @ 0x1800867C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLIST_ENTRY RtlGetFunctionTableListHead(void)
{
  return (PLIST_ENTRY)&RtlpDynamicFunctionTable;
}
