/*
 * XREFs of ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0060F74
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002B960 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C00620A4 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C00621EC (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWmiIrpHandler::DecrementUpdateCount(FxWmiIrpHandler *this)
{
  if ( _InterlockedExchangeAdd(&this->m_UpdateCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&this->m_UpdateEvent.m_Event.m_Event, 0, 0);
}
