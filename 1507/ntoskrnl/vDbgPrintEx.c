/*
 * XREFs of vDbgPrintEx @ 0x140131EE4
 * Callers:
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140131F0C (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((void *)&File, ComponentId, Level, Format, arglist, 1);
}
