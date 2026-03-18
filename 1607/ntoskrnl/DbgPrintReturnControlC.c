/*
 * XREFs of DbgPrintReturnControlC @ 0x140211334
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140081BB0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintReturnControlC(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&File, 0x65u, 0, Format, va, 0);
}
