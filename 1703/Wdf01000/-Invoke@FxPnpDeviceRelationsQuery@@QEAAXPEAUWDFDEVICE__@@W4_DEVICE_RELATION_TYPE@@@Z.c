/*
 * XREFs of ?Invoke@FxPnpDeviceRelationsQuery@@QEAAXPEAUWDFDEVICE__@@W4_DEVICE_RELATION_TYPE@@@Z @ 0x1C00676F0
 * Callers:
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C009B0E0 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPnpDeviceRelationsQuery::Invoke(
        FxPnpDeviceRelationsQuery *this,
        WDFDEVICE__ *Device,
        unsigned int RelationType)
{
  if ( this->m_Method )
    this->m_Method(Device, RelationType);
}
