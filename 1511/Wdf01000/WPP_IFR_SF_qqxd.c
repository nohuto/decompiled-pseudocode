/*
 * XREFs of WPP_IFR_SF_qqxd @ 0x1C0064E38
 * Callers:
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0005380 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestComplete @ 0x1C0005560 (imp_WdfRequestComplete.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0055834 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C00649C4 (-CompleteWithPriority@FxRequest@@QEAAJJD@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005F3FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqxd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *_a4,
        const void *globals_0,
        __int64 level,
        int flags)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x8000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxRequest_hpp_Traceguids,
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
    0x10u,
    WPP_FxRequest_hpp_Traceguids,
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
