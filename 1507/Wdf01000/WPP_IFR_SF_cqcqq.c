/*
 * XREFs of WPP_IFR_SF_cqcqq @ 0x1C009F2B4
 * Callers:
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1C001BC54 (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 *     ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C002CD50 (-_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_cqcqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        char _a5,
        const void *globals_0,
        char level,
        const void *flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxPkgPnp_cpp_Traceguids,
      0x47u,
      &_a5,
      1LL,
      &globals_0,
      8LL,
      &level,
      1LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xCu,
    WPP_FxPkgPnp_cpp_Traceguids,
    0x47u,
    &_a5,
    1LL,
    &globals_0,
    8LL,
    &level,
    1LL,
    &flags,
    8LL,
    &id,
    8LL,
    0LL);
}
