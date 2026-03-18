/*
 * XREFs of WPP_IFR_SF_Lq @ 0x1C000A904
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000B100 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Lq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        unsigned int flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      0x1Eu,
      &flags,
      4LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    4u,
    0xDu,
    (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
    0x1Eu,
    &flags,
    4LL,
    &id,
    8LL,
    0LL);
}
