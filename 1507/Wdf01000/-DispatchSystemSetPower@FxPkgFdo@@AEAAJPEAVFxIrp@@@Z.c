/*
 * XREFs of ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00061F0
 * Callers:
 *     ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0011080 (-_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002BBA0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

NTSTATUS __fastcall FxPkgFdo::DispatchSystemSetPower(FxPkgFdo *this, FxIrp *Irp)
{
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v6; // rcx
  _IO_STACK_LOCATION *v8; // rcx
  _IO_STACK_LOCATION *v9; // rcx

  m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  this->m_SystemPowerState = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode;
  PoSetPowerState(
    m_DeviceObject,
    SystemPowerState,
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State);
  if ( !this->m_PowerPolicyMachine.m_Owner )
    return FxPkgFdo::_PowerPassDown(this, Irp);
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( this->m_SystemPowerState == 1 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(m_DeviceObject, Irp->m_Irp, FxPkgFdo::_SystemPowerS0Completion, this, 1u, 1u, 1u) < 0 )
    {
      v8 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v8[-1].CompletionRoutine = FxPkgFdo::_SystemPowerS0Completion;
      v8[-1].Context = this;
      v8[-1].Control = -32;
    }
    return PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
  }
  else
  {
    CurrentStackLocation->Control |= 1u;
    this->m_PendingSystemPowerIrp = Irp->m_Irp;
    v6 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v6[-1].MajorFunction = *(_OWORD *)&v6->MajorFunction;
    *(_OWORD *)&v6[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v6->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v6[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v6->Parameters.QueryDeviceRelations + 6);
    v6[-1].FileObject = v6->FileObject;
    v6[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(m_DeviceObject, Irp->m_Irp, FxPkgFdo::_SystemPowerSxCompletion, this, 1u, 1u, 1u) < 0 )
    {
      v9 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v9[-1].CompletionRoutine = FxPkgFdo::_SystemPowerSxCompletion;
      v9[-1].Context = this;
      v9[-1].Control = -32;
    }
    PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
    return 259;
  }
}
