/*
 * XREFs of ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0097E88
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00970C0 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C006297C (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 *     ?AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0096480 (-AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1C00988D8 (WPP_IFR_SF_dddDqqd.c)
 */

__int64 __fastcall FxPkgPnp::SetUsageNotificationFlags(FxPkgPnp *this, __int32 Type, unsigned __int8 InPath)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _DEVICE_OBJECT *level; // r11
  unsigned int globals; // ebx
  unsigned __int8 v10; // al
  const void *flags; // r10
  FxDeviceBase *v12; // rdx
  __int64 v13; // rdx
  const _GUID *v15; // [rsp+20h] [rbp-48h]
  int _a7; // [rsp+38h] [rbp-30h]

  m_Globals = this->m_Globals;
  m_DeviceBase = this->m_DeviceBase;
  level = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  globals = level->Flags;
  if ( m_Globals->FxVerboseOn )
  {
    v10 = BYTE2(m_DeviceBase[1].m_Globals);
    if ( m_DeviceBase->m_ObjectSize )
      flags = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      flags = 0LL;
    _a7 = this->m_SpecialFileCount[Type - 1];
    WPP_IFR_SF_dddDqqd(m_Globals, _a7, InPath, InPath, v15, Type, InPath, _a7, globals, level, flags, v10);
  }
  FxPkgPnp::AdjustUsageCount(this, (_DEVICE_USAGE_NOTIFICATION_TYPE)Type, InPath);
  if ( Type != 4 )
  {
    v12 = this->m_DeviceBase;
    if ( BYTE1(v12[1].m_Globals) )
    {
      v12->m_DeviceObject.m_DeviceObject->Flags = globals ^ ((unsigned __int16)globals ^ (unsigned __int16)v12->m_AttachedDevice.m_DeviceObject->Flags) & 0x6000;
    }
    else if ( InPath )
    {
      v12->m_DeviceObject.m_DeviceObject->Flags &= ~0x2000u;
    }
    else if ( BYTE2(v12[1].m_Globals) && !FxPkgPnp::IsInSpecialUse(this) )
    {
      *(_DWORD *)(*(_QWORD *)(v13 + 144) + 48LL) |= 0x2000u;
    }
  }
  return globals;
}
