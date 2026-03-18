/*
 * XREFs of WPP_IFR_SF_qqxx @ 0x1C006C6C8
 * Callers:
 *     ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C003DB40 (-TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C006BBD0 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     FxIFR @ 0x1C0005E30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0070684 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqxx(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int traceGuid,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        const void *_a4,
        __int64 globals_0,
        __int64 level)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      _a2,
      _a1,
      &_a3,
      8LL,
      &_a4,
      8LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      0LL);
  FxIFR(globals, 5u, 0xFu, _a2, _a1, &_a3, 8LL, &_a4, 8LL, &globals_0, 8LL, &level, 8LL, 0LL);
}
