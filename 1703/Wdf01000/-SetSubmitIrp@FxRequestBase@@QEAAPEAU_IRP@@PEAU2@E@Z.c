/*
 * XREFs of ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1C00665F4
 * Callers:
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C007C5B8 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 * Callees:
 *     <none>
 */

_IRP *__fastcall FxRequestBase::SetSubmitIrp(FxRequestBase *this, _IRP *NewIrp, unsigned __int8 a3)
{
  _IRP *m_Irp; // r8
  _IRP *result; // rax

  m_Irp = this->m_Irp.m_Irp;
  result = 0LL;
  this->m_Irp.m_Irp = NewIrp;
  if ( NewIrp )
    this->m_Completed = 0;
  if ( m_Irp && m_Irp != NewIrp && this->m_IrpAllocation == 1 )
    return m_Irp;
  return result;
}
