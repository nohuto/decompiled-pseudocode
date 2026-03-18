/*
 * XREFs of IopDebugPrint @ 0x1401FB284
 * Callers:
 *     PnpCollectOpenHandles @ 0x14068E334 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x14068E3C8 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140131F0C (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(ULONG Level, NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, pszFormat);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, Level, pszFormat, va, 1);
  return Level;
}
