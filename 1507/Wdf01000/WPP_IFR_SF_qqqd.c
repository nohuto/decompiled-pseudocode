/*
 * XREFs of WPP_IFR_SF_qqqD @ 0x1C00644C0
 * Callers:
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C00623E0 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C0063AA0 (-_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqqD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *_a4,
        const void *globals_0,
        const void *level,
        unsigned int flags)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaTransaction_cpp_Traceguids,
      _a2,
      &_a4,
      8LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      4LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0xFu,
    WPP_FxDmaTransaction_cpp_Traceguids,
    _a2,
    &_a4,
    8LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    4LL,
    0LL);
}
