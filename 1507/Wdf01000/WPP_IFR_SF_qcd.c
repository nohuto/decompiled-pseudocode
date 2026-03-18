/*
 * XREFs of WPP_IFR_SF_qcd @ 0x1C00953C4
 * Callers:
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C009482C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qcd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const void *flags,
        char id)
{
  int _a3[6]; // [rsp+60h] [rbp-18h] BYREF

  _a3[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      0x16u,
      &flags,
      8LL,
      &id,
      1LL,
      _a3,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0x12u,
    (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
    0x16u,
    &flags,
    8LL,
    &id,
    1LL,
    _a3,
    4LL,
    0LL);
}
