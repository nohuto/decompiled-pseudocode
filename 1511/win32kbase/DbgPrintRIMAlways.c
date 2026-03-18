/*
 * XREFs of DbgPrintRIMAlways @ 0x1C00B62F0
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     RIMOpenDev @ 0x1C00105AC (RIMOpenDev.c)
 *     RIMWatchDog @ 0x1C0046A10 (RIMWatchDog.c)
 *     RIMStartDeviceSpecificRead @ 0x1C007AAF0 (RIMStartDeviceSpecificRead.c)
 *     rimInputApc @ 0x1C007C160 (rimInputApc.c)
 *     RIMOnPowerNotification @ 0x1C0085F40 (RIMOnPowerNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C0086D80 (rimStackAttachAndProcessInput.c)
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00CFA04 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIMAlways(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 0, Format, va);
}
