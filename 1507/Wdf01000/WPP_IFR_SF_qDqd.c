/*
 * XREFs of WPP_IFR_SF_qDqD @ 0x1C0079818
 * Callers:
 *     imp_WdfFdoQueryForInterface @ 0x1C0011E20 (imp_WdfFdoQueryForInterface.c)
 *     imp_WdfObjectCreate @ 0x1C0012010 (imp_WdfObjectCreate.c)
 *     FxIoTargetFormatIoctl @ 0x1C0012680 (FxIoTargetFormatIoctl.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     imp_WdfMemoryCreate @ 0x1C0025EE0 (imp_WdfMemoryCreate.c)
 *     imp_WdfObjectDelete @ 0x1C0026D10 (imp_WdfObjectDelete.c)
 *     imp_WdfDeviceWdmGetDeviceObject @ 0x1C0026E70 (imp_WdfDeviceWdmGetDeviceObject.c)
 *     imp_WdfDeviceGetIoTarget @ 0x1C0026F20 (imp_WdfDeviceGetIoTarget.c)
 *     imp_WdfMemoryGetBuffer @ 0x1C00281B0 (imp_WdfMemoryGetBuffer.c)
 *     imp_WdfDeviceWdmGetPhysicalDevice @ 0x1C00294B0 (imp_WdfDeviceWdmGetPhysicalDevice.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
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
