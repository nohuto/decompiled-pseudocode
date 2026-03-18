/*
 * XREFs of DbgPrintRIMAlways @ 0x1C00C0E60
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C000C65C (RIMHandleTTMDeviceArrival.c)
 *     RIMOpenDev @ 0x1C000CD84 (RIMOpenDev.c)
 *     rimStackAttachAndProcessInput @ 0x1C000FEEC (rimStackAttachAndProcessInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0010A8C (RIMStartDeviceSpecificRead.c)
 *     rimInputApc @ 0x1C0010CF0 (rimInputApc.c)
 *     RIMWatchDog @ 0x1C0012970 (RIMWatchDog.c)
 *     RIMOnPowerNotification @ 0x1C0086BF0 (RIMOnPowerNotification.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00CD874 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C00CE90C (RIMDoMobileKeyboardInvalidation.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00D3F64 (RIMTransformPhysicalPointToScreen.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C00D85A0 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00D8720 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIMAlways(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 0, Format, va);
}
