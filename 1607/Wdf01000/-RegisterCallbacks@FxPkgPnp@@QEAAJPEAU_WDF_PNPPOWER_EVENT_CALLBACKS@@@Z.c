/*
 * XREFs of ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C00252A8
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026B60 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?InitializeMachine@FxSelfManagedIoMachine@@QEAAXPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C002DB2C (-InitializeMachine@FxSelfManagedIoMachine@@QEAAXPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C002EC44 (-_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C0099094 (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

int __fastcall FxPkgPnp::RegisterCallbacks(FxPkgPnp *this, _WDF_PNPPOWER_EVENT_CALLBACKS *DispatchTable)
{
  int v2; // edi
  FxPkgPnp *v4; // r10
  char v5; // bp
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // rsi
  int result; // eax
  FxSelfManagedIoMachine **p_m_SelfManagedIoMachine; // rsi
  _WDF_EXECUTION_LEVEL *v9; // r11
  unsigned int v10; // r14d
  int *v11; // r15
  FxCxPnpPowerCallbackContext *v12; // rcx
  FxCxPnpPowerCallbackContext *v13; // rcx
  FxCxPnpPowerCallbackContext *v14; // rcx
  int v15; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+24h] [rbp-24h]

  v2 = 0;
  this->m_DeviceD0Entry.m_Method = DispatchTable->EvtDeviceD0Entry;
  this->m_DeviceD0Entry.m_PkgPnp = this;
  v4 = this;
  this->m_DeviceD0Entry.m_CallbackType = FxCxCallbackD0Entry;
  this->m_DeviceD0Exit.m_Method = DispatchTable->EvtDeviceD0Exit;
  this->m_DeviceD0Exit.m_PkgPnp = this;
  this->m_DeviceD0Exit.m_CallbackType = FxCxCallbackD0Exit;
  this->m_DevicePrepareHardware.m_Method = DispatchTable->EvtDevicePrepareHardware;
  this->m_DevicePrepareHardware.m_PkgPnp = this;
  this->m_DevicePrepareHardware.m_CallbackType = FxCxCallbackPrepareHardware;
  this->m_DeviceReleaseHardware.m_Method = DispatchTable->EvtDeviceReleaseHardware;
  this->m_DeviceReleaseHardware.m_PkgPnp = this;
  this->m_DeviceReleaseHardware.m_CallbackType = FxCxCallbackReleaseHardware;
  this->m_DeviceSurpriseRemoval.m_Method = DispatchTable->EvtDeviceSurpriseRemoval;
  this->m_DeviceSurpriseRemoval.m_PkgPnp = this;
  this->m_DeviceSurpriseRemoval.m_CallbackType = FxCxCallbackSurpriseRemoval;
  this->m_DeviceD0EntryPostInterruptsEnabled.m_Method = DispatchTable->EvtDeviceD0EntryPostInterruptsEnabled;
  this->m_DeviceD0ExitPreInterruptsDisabled.m_Method = DispatchTable->EvtDeviceD0ExitPreInterruptsDisabled;
  this->m_DeviceQueryStop.m_Method = DispatchTable->EvtDeviceQueryStop;
  this->m_DeviceQueryRemove.m_Method = DispatchTable->EvtDeviceQueryRemove;
  this->m_DeviceUsageNotification.m_Method = DispatchTable->EvtDeviceUsageNotification;
  this->m_DeviceUsageNotificationEx.m_Method = DispatchTable->EvtDeviceUsageNotificationEx;
  this->m_DeviceRelationsQuery.m_Method = DispatchTable->EvtDeviceRelationsQuery;
  if ( *(_OWORD *)&DispatchTable->EvtDeviceSelfManagedIoCleanup == 0LL
    && !DispatchTable->EvtDeviceSelfManagedIoInit
    && !DispatchTable->EvtDeviceSelfManagedIoSuspend
    && !DispatchTable->EvtDeviceSelfManagedIoRestart )
  {
    v5 = 0;
    p_m_ExecutionLevel = &this->m_DeviceBase[1].m_ExecutionLevel;
    v15 = 117834498;
    v16 = 8;
    if ( *(_WDF_EXECUTION_LEVEL **)p_m_ExecutionLevel == p_m_ExecutionLevel )
      return v2;
    v9 = *(_WDF_EXECUTION_LEVEL **)p_m_ExecutionLevel;
    if ( !*(_QWORD *)p_m_ExecutionLevel )
      return v2;
    while ( !v5 )
    {
      v10 = 0;
      v11 = &v15;
      while ( 1 )
      {
        v12 = *(FxCxPnpPowerCallbackContext **)&v9[2 * *(unsigned __int8 *)v11 + 24];
        if ( v12 )
        {
          if ( FxCxPnpPowerCallbackContext::IsCallbackPresent(v12, FxCxPreCallback)
            || FxCxPnpPowerCallbackContext::IsCallbackPresent(v13, FxCxPostCallback)
            || FxCxPnpPowerCallbackContext::IsCallbackPresent(v14, FxCxCleanupCallback) )
          {
            break;
          }
        }
        ++v10;
        v11 = (int *)((char *)v11 + 1);
        if ( v10 >= 5 )
          goto LABEL_20;
      }
      v5 = 1;
LABEL_20:
      v9 = *(_WDF_EXECUTION_LEVEL **)v9;
      if ( v9 == p_m_ExecutionLevel || !v9 )
      {
        if ( !v5 )
          return v2;
        break;
      }
    }
  }
  p_m_SelfManagedIoMachine = &v4->m_SelfManagedIoMachine;
  result = FxSelfManagedIoMachine::_CreateAndInit(&v4->m_SelfManagedIoMachine, v4);
  v2 = result;
  if ( result >= 0 )
  {
    FxSelfManagedIoMachine::InitializeMachine(*p_m_SelfManagedIoMachine, DispatchTable);
    return v2;
  }
  return result;
}
