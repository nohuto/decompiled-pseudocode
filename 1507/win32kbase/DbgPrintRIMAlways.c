/*
 * XREFs of DbgPrintRIMAlways @ 0x1C00B3870
 * Callers:
 *     RIMWatchDog @ 0x1C0052330 (RIMWatchDog.c)
 *     RIMOnPowerNotification @ 0x1C006E310 (RIMOnPowerNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C006F030 (rimStackAttachAndProcessInput.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0075724 (RIMStartDeviceSpecificRead.c)
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     RIMOpenDev @ 0x1C0076E4C (RIMOpenDev.c)
 *     rimInputApc @ 0x1C00826A0 (rimInputApc.c)
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00CE690 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIMAlways(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 0, Format, va);
}
