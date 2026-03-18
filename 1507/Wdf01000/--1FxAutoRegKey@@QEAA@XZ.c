/*
 * XREFs of ??1FxAutoRegKey@@QEAA@XZ @ 0x1C002B078
 * Callers:
 *     RegistryReadLastLoggedTime @ 0x1C0006C04 (RegistryReadLastLoggedTime.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C000E714 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0018FBC (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C002A420 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C002AF20 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C007A4A8 (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     RegistryWriteCurrentTime @ 0x1C00805BC (RegistryWriteCurrentTime.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C00A2ED8 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxAutoRegKey::~FxAutoRegKey(FxAutoRegKey *this)
{
  void *m_Key; // rcx

  m_Key = this->m_Key;
  if ( m_Key )
    ZwClose(m_Key);
}
