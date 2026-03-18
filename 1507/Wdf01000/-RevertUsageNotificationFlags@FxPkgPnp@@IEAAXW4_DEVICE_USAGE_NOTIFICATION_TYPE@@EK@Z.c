/*
 * XREFs of ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C009E850
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009DC84 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C009D02C (-AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 */

void __fastcall FxPkgPnp::RevertUsageNotificationFlags(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE Type,
        unsigned __int8 InPath,
        unsigned int OldFlags)
{
  __int64 v4; // r10
  int v5; // r11d

  FxPkgPnp::AdjustUsageCount(this, Type, InPath == 0);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 144LL) + 48LL) = v5;
}
