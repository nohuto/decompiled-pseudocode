/*
 * XREFs of ?PowerReleasePendingDeviceIrp@FxPkgFdo@@EEAAXE@Z @ 0x1C00290C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0039190 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

void __fastcall FxPkgFdo::PowerReleasePendingDeviceIrp(FxPkgFdo *this, unsigned __int8 IrpMustBePresent)
{
  _IRP *m_PendingDevicePowerIrp; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  bool v5; // zf
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  m_PendingDevicePowerIrp = this->m_PendingDevicePowerIrp;
  this->m_PendingDevicePowerIrp = 0LL;
  if ( m_PendingDevicePowerIrp )
  {
    CurrentStackLocation = m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
    irp.m_Irp = m_PendingDevicePowerIrp;
    v5 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1;
    m_PendingDevicePowerIrp->IoStatus.Status = 0;
    if ( v5 )
    {
      PoStartNextPowerIrp(m_PendingDevicePowerIrp);
      IofCompleteRequest(m_PendingDevicePowerIrp, 0);
      IoReleaseRemoveLockEx(
        (PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
        m_PendingDevicePowerIrp,
        0x20u);
    }
    else
    {
      FxPkgFdo::_PowerPassDown(this, &irp);
    }
  }
}
