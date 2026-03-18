/*
 * XREFs of DbgPrintRIM @ 0x1C000BD38
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C00DCA4C (rimExtractDigitizerPageButtonUsages.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIM(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 1u, Format, va);
}
