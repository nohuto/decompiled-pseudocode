/*
 * XREFs of WPP_IFR_SF_qLLd @ 0x1C005DFE4
 * Callers:
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C005DC60 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 * Callees:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005F3FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qLLd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        unsigned int flags,
        unsigned int id)
{
  int _a4[4]; // [rsp+70h] [rbp-18h] BYREF

  _a4[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaEnabler_cpp_Traceguids,
      0x10u,
      &level,
      8LL,
      &flags,
      4LL,
      &id,
      4LL,
      _a4,
      4LL,
      0LL);
  FxIFR(globals, 5u, 0xFu, WPP_FxDmaEnabler_cpp_Traceguids, 0x10u, &level, 8LL, &flags, 4LL, &id, 4LL, _a4, 4LL, 0LL);
}
