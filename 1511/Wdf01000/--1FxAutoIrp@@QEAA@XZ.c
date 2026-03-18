/*
 * XREFs of ??1FxAutoIrp@@QEAA@XZ @ 0x1C0057454
 * Callers:
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C0062BB0 (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00889D4 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C008926C (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C008AB10 (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxAutoIrp::~FxAutoIrp(FxAutoIrp *this)
{
  _IRP *m_Irp; // rcx

  m_Irp = this->m_Irp;
  if ( m_Irp )
    IoFreeIrp(m_Irp);
}
