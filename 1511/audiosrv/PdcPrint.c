/*
 * XREFs of PdcPrint @ 0x1800A7F94
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x1800A7C90 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x1800A7E6C (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
