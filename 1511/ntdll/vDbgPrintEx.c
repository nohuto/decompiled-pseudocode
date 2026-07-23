/*
 * XREFs of vDbgPrintEx @ 0x1800D37D0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180049998 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __cdecl vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, (char *)Format, arglist, 1);
}
