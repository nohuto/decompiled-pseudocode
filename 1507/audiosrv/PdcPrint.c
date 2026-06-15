/*
 * XREFs of PdcPrint @ 0x1800AA4B4
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x1800AA1B0 (PdcpAlpcProcessMessage.c)
 *     PdcpProcessMessageInternal @ 0x1800AA38C (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

ULONG PdcPrint(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
