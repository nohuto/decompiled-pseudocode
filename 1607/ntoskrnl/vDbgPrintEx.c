/*
 * XREFs of vDbgPrintEx @ 0x140081B88
 * Callers:
 *     PopPrintEx @ 0x140081AE0 (PopPrintEx.c)
 *     KsepDebugPrint @ 0x1401DCC3C (KsepDebugPrint.c)
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140081BB0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((void *)&File, ComponentId, Level, arglist, 1);
}
