/*
 * XREFs of IopDebugPrint @ 0x1401BF73C
 * Callers:
 *     PnpCollectOpenHandles @ 0x14060E4AC (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x14060E540 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400E69D8 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, Level, a2, va, 1);
  return Level;
}
