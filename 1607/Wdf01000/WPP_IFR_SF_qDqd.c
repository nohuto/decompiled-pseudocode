/*
 * XREFs of WPP_IFR_SF_qDqD @ 0x1C007BD2C
 * Callers:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     imp_WdfMemoryCreate @ 0x1C0001C80 (imp_WdfMemoryCreate.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     FxIoTargetFormatIoctl @ 0x1C000E7B0 (FxIoTargetFormatIoctl.c)
 *     imp_WdfObjectDelete @ 0x1C00107F0 (imp_WdfObjectDelete.c)
 *     imp_WdfObjectCreate @ 0x1C001A3B0 (imp_WdfObjectCreate.c)
 *     imp_WdfFdoQueryForInterface @ 0x1C002B4A0 (imp_WdfFdoQueryForInterface.c)
 *     imp_WdfDeviceWdmGetDeviceObject @ 0x1C00322D0 (imp_WdfDeviceWdmGetDeviceObject.c)
 *     imp_WdfDeviceGetIoTarget @ 0x1C0032380 (imp_WdfDeviceGetIoTarget.c)
 *     imp_WdfMemoryGetBuffer @ 0x1C00337A0 (imp_WdfMemoryGetBuffer.c)
 *     imp_WdfDeviceWdmGetPhysicalDevice @ 0x1C0034420 (imp_WdfDeviceWdmGetPhysicalDevice.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000A230 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006CD0C (FxWmiTraceMessage.c)
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
