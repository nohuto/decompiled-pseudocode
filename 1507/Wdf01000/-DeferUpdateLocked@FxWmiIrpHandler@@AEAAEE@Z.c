/*
 * XREFs of ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0069F44
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0024010 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0024720 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C0024DB4 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C0025024 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0025330 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C0068F24 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
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
