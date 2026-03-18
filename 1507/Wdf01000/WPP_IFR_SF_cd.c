/*
 * XREFs of WPP_IFR_SF_cd @ 0x1C00952FC
 * Callers:
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C009482C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_cd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int a3,
        unsigned __int16 level,
        const _GUID *flags,
        char id)
{
  int _a2[6]; // [rsp+50h] [rbp-18h] BYREF

  _a2[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      0x15u,
      &id,
      1LL,
      _a2,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xDu,
    (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
    0x15u,
    &id,
    1LL,
    _a2,
    4LL,
    0LL);
}
