/*
 * XREFs of WPP_IFR_SF_D @ 0x1C0070554
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001110 (imp_WdfTimerStop.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     GetImageName @ 0x1C00136B4 (GetImageName.c)
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C0014830 (imp_WdfFdoRetrieveNextStaticChild.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0028D90 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x1C0039740 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C003A3D0 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0066A98 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     imp_WdfControlDeviceInitSetShutdownNotification @ 0x1C0075D60 (imp_WdfControlDeviceInitSetShutdownNotification.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C007A040 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C0081F48 (-InitializeLockOrder@FxVerifierLock@@AEAAXXZ.c)
 * Callees:
 *     FxIFR @ 0x1C0005E30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0070684 (FxWmiTraceMessage.c)
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
