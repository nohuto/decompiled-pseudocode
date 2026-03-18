/*
 * XREFs of WPP_IFR_SF_qcq @ 0x1C000A4D0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qcq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        char flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 3u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      0x2Bu,
      &level,
      8LL,
      &flags,
      1LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    3u,
    0xDu,
    (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
    0x2Bu,
    &level,
    8LL,
    &flags,
    1LL,
    &id,
    8LL,
    0LL);
}
