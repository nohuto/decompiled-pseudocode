/*
 * XREFs of PdcPrint @ 0x18008F424
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x18008E470 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x18008E64C (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
