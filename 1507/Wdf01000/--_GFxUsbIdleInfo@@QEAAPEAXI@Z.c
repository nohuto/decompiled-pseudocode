/*
 * XREFs of ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C009FE18
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C009FD64 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C00A0088 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxUsbIdleInfo *__fastcall FxUsbIdleInfo::`scalar deleting destructor'(FxUsbIdleInfo *this)
{
  _IRP *m_Irp; // rcx

  m_Irp = this->m_IdleIrp.m_Irp;
  if ( m_Irp )
    IoFreeIrp(m_Irp);
  if ( this )
    FxPoolFree(this);
  return this;
}
