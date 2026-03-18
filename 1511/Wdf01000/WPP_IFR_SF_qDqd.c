/*
 * XREFs of WPP_IFR_SF_qDqD @ 0x1C006D650
 * Callers:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     imp_WdfObjectDelete @ 0x1C00029F0 (imp_WdfObjectDelete.c)
 *     FxIoTargetFormatIoctl @ 0x1C00047E0 (FxIoTargetFormatIoctl.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     imp_WdfMemoryCreate @ 0x1C000D480 (imp_WdfMemoryCreate.c)
 *     imp_WdfObjectCreate @ 0x1C0024530 (imp_WdfObjectCreate.c)
 *     imp_WdfDeviceWdmGetDeviceObject @ 0x1C002C2A0 (imp_WdfDeviceWdmGetDeviceObject.c)
 *     imp_WdfDeviceGetIoTarget @ 0x1C002C350 (imp_WdfDeviceGetIoTarget.c)
 *     imp_WdfFdoQueryForInterface @ 0x1C002C870 (imp_WdfFdoQueryForInterface.c)
 *     imp_WdfMemoryGetBuffer @ 0x1C002D490 (imp_WdfMemoryGetBuffer.c)
 *     imp_WdfDeviceWdmGetPhysicalDevice @ 0x1C002F920 (imp_WdfDeviceWdmGetPhysicalDevice.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005F3FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qDqD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *globals_0,
        unsigned int level,
        const void *flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_HandleAPI_cpp_Traceguids,
      0xBu,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0x12u,
    WPP_HandleAPI_cpp_Traceguids,
    0xBu,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    8LL,
    &id,
    4LL,
    0LL);
}
