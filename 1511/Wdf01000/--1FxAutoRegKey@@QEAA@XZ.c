/*
 * XREFs of ??1FxAutoRegKey@@QEAA@XZ @ 0x1C0030998
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001A10 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     RegistryReadLastLoggedTime @ 0x1C000E7E4 (RegistryReadLastLoggedTime.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0014498 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C001BE98 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C0030840 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C006E44C (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     RegistryWriteCurrentTime @ 0x1C00730C8 (RegistryWriteCurrentTime.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C008D1E8 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
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
