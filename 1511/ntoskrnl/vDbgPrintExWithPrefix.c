/*
 * XREFs of vDbgPrintExWithPrefix @ 0x14012F5E4
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400E69D8 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(Prefix, ComponentId, Level, Format, arglist, 1);
}
