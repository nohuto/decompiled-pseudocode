/*
 * XREFs of ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C009D5C0
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009DC84 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z @ 0x1C0018A40 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z.c)
 *     WPP_IFR_SF_dDqq @ 0x1C009F3E0 (WPP_IFR_SF_dDqq.c)
 */

void __fastcall FxPkgPnp::CommitUsageNotification(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE Type,
        __int16 OldFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int level; // edi
  unsigned __int16 v8; // r9
  const void *id; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  const _GUID *v11; // [rsp+20h] [rbp-38h]

  m_Globals = this->m_Globals;
  level = this->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  if ( (level & 0x2000) == 0 && (OldFlags & 0x2000) != 0 )
    FxPkgPnp::PowerProcessEvent(this, 0x400u);
  if ( (level & 0x2000) != 0 && (OldFlags & 0x2000) == 0 )
    FxPkgPnp::PowerProcessEvent(this, 0x200u);
  IoInvalidateDeviceState(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  id = 0LL;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_dDqq(
      m_Globals,
      Type - 1,
      (unsigned int)m_DeviceBase,
      v8,
      v11,
      this->m_SpecialFileCount[Type - 1],
      level,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      id);
  }
}
