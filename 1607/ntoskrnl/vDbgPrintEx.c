/*
 * XREFs of vDbgPrintEx @ 0x140084D0C
 * Callers:
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140084D34 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((void *)&File, ComponentId, Level, arglist, 1);
}
