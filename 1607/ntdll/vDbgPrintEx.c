/*
 * XREFs of vDbgPrintEx @ 0x1800DBA50
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18005C428 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 __fastcall vDbgPrintEx(unsigned int a1, unsigned int a2, char *a3, va_list a4)
{
  return vDbgPrintExWithPrefixInternal(byte_18010C822, a1, a2, a3, a4, 1);
}
