/*
 * XREFs of ??1FxAutoRegKey@@QEAA@XZ @ 0x1C0035958
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001920 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     FxInitialize @ 0x1C0017CE8 (FxInitialize.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0024F1C (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C0035800 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x1C006E80C (-FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C007CB54 (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     RegistryWriteCurrentTime @ 0x1C0081070 (RegistryWriteCurrentTime.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C009BD78 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
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
