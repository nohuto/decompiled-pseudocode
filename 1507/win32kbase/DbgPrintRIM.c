/*
 * XREFs of DbgPrintRIM @ 0x1C0077BB4
 * Callers:
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00775D0 (RIMCreateHidDesc.c)
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C40FC (RIMMarkEndPointerMessageDelivery.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIM(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 1u, Format, va);
}
