/*
 * XREFs of ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C00708B4
 * Callers:
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0030C3C (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C0030E24 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C00312D8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C00314A0 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031BB0 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C006F800 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxWmiIrpHandler::DeferUpdateLocked(FxWmiIrpHandler *this, unsigned __int8 OldIrql)
{
  if ( OldIrql )
  {
    if ( !this->m_WorkItemQueued )
    {
      _InterlockedIncrement(&this->m_UpdateCount);
      this->m_WorkItemQueued = 1;
      IoQueueWorkItem(this->m_WorkItem, FxWmiIrpHandler::_UpdateGuids, DelayedWorkQueue, this);
    }
    return 0;
  }
  else
  {
    _InterlockedIncrement(&this->m_UpdateCount);
    return 1;
  }
}
