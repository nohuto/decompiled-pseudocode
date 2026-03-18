/*
 * XREFs of ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0014810
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0016240 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C0011048 (-_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::RegisterCallbacks(FxPkgPnp *this, _WDF_PNPPOWER_EVENT_CALLBACKS *DispatchTable)
{
  __int64 result; // rax
  FxSelfManagedIoMachine **p_m_SelfManagedIoMachine; // rdi
  FxSelfManagedIoMachine *v5; // rcx

  this->m_DeviceD0Entry.m_Method = DispatchTable->EvtDeviceD0Entry;
  this->m_DeviceD0EntryPostInterruptsEnabled.m_Method = DispatchTable->EvtDeviceD0EntryPostInterruptsEnabled;
  this->m_DeviceD0ExitPreInterruptsDisabled.m_Method = DispatchTable->EvtDeviceD0ExitPreInterruptsDisabled;
  this->m_DeviceD0Exit.m_Method = DispatchTable->EvtDeviceD0Exit;
  this->m_DevicePrepareHardware.m_Method = DispatchTable->EvtDevicePrepareHardware;
  this->m_DeviceReleaseHardware.m_Method = DispatchTable->EvtDeviceReleaseHardware;
  this->m_DeviceQueryStop.m_Method = DispatchTable->EvtDeviceQueryStop;
  this->m_DeviceQueryRemove.m_Method = DispatchTable->EvtDeviceQueryRemove;
  this->m_DeviceSurpriseRemoval.m_Method = DispatchTable->EvtDeviceSurpriseRemoval;
  this->m_DeviceUsageNotification.m_Method = DispatchTable->EvtDeviceUsageNotification;
  this->m_DeviceUsageNotificationEx.m_Method = DispatchTable->EvtDeviceUsageNotificationEx;
  this->m_DeviceRelationsQuery.m_Method = DispatchTable->EvtDeviceRelationsQuery;
  if ( *(_OWORD *)&DispatchTable->EvtDeviceSelfManagedIoCleanup == 0LL
    && !DispatchTable->EvtDeviceSelfManagedIoInit
    && !DispatchTable->EvtDeviceSelfManagedIoSuspend
    && !DispatchTable->EvtDeviceSelfManagedIoRestart )
  {
    return 0LL;
  }
  p_m_SelfManagedIoMachine = &this->m_SelfManagedIoMachine;
  result = FxSelfManagedIoMachine::_CreateAndInit(&this->m_SelfManagedIoMachine, this);
  if ( (int)result >= 0 )
  {
    v5 = *p_m_SelfManagedIoMachine;
    v5->m_DeviceSelfManagedIoCleanup.m_Method = DispatchTable->EvtDeviceSelfManagedIoCleanup;
    v5->m_DeviceSelfManagedIoFlush.m_Method = DispatchTable->EvtDeviceSelfManagedIoFlush;
    v5->m_DeviceSelfManagedIoInit.m_Method = DispatchTable->EvtDeviceSelfManagedIoInit;
    v5->m_DeviceSelfManagedIoSuspend.m_Method = DispatchTable->EvtDeviceSelfManagedIoSuspend;
    v5->m_DeviceSelfManagedIoRestart.m_Method = DispatchTable->EvtDeviceSelfManagedIoRestart;
    return 0LL;
  }
  return result;
}
