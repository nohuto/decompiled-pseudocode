/*
 * XREFs of vDbgPrintEx @ 0x1800D37D0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180049998 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 __fastcall vDbgPrintEx(unsigned int a1, unsigned int a2, char *a3, va_list a4)
{
  return vDbgPrintExWithPrefixInternal(byte_180101832, a1, a2, a3, a4, 1);
}
