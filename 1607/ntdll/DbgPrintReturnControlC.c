/*
 * XREFs of DbgPrintReturnControlC @ 0x1800DB9A0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18005C428 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DbgPrintReturnControlC(char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(byte_18010C822, 0x65u, 0, a1, va, 0);
}
