/*
 * XREFs of ?AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0096480
 * Callers:
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C0097CA0 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0097E88 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::AdjustUsageCount(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE Usage,
        unsigned __int8 Add)
{
  if ( Add )
    return (unsigned int)_InterlockedIncrement(&this->m_SpecialFileCount[Usage - 1]);
  else
    return (unsigned int)_InterlockedDecrement(&this->m_SpecialFileCount[Usage - 1]);
}
