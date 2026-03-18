/*
 * XREFs of WPP_IFR_SF_D @ 0x1C006CC30
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001000 (imp_WdfTimerStop.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     GetImageName @ 0x1C0017740 (GetImageName.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C00295F4 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C00305C0 (imp_WdfFdoRetrieveNextStaticChild.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x1C0035D50 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C0036CD0 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C00637A0 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     imp_WdfControlDeviceInitSetShutdownNotification @ 0x1C0071FF0 (imp_WdfControlDeviceInitSetShutdownNotification.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C00760E0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C007DA2C (-InitializeLockOrder@FxVerifierLock@@AEAAXXZ.c)
 * Callees:
 *     FxIFR @ 0x1C000A230 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006CD0C (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_D(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        unsigned int globals_0)
{
  int v9; // eax
  unsigned __int64 v10; // r11

  v9 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v9, ((_BYTE)id - 1) & 0x1F) )
  {
    v10 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v10 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v10),
        0x2Bu,
        _a1,
        traceGuid,
        &globals_0,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &globals_0, 4LL, 0LL);
}
