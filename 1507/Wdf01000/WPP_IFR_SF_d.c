/*
 * XREFs of WPP_IFR_SF_D @ 0x1C00659E0
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     GetImageName @ 0x1C00059B4 (GetImageName.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0007D00 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C0007E30 (imp_WdfFdoRetrieveNextStaticChild.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001697C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x1C001E990 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C002E9A0 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfControlDeviceInitSetShutdownNotification @ 0x1C006B200 (imp_WdfControlDeviceInitSetShutdownNotification.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C00700C0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C007B438 (-InitializeLockOrder@FxVerifierLock@@AEAAXXZ.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
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
