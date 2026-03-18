/*
 * XREFs of ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C0020D24
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00154B4 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxIoTargetRemote::GetTargetDeviceRelations(FxIoTargetRemote *this, unsigned __int8 *Close)
{
  _IRP *v3; // rbx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  PIRP Irp; // rax
  unsigned __int8 v7; // dl
  PIRP v8; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v10; // rax
  NTSTATUS Status; // edi
  _DEVICE_OBJECT **Information; // rcx
  const void *_a1; // rax
  FxCREvent v15; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(this->m_TargetDevice);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v8 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v3 = Irp;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    Irp->IoStatus.Status = -1073741637;
    FxCREvent::FxCREvent(&v15, v7);
    v10 = v3->Tail.Overlay.CurrentStackLocation;
    v10[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
    v10[-1].Context = &v15;
    v10[-1].Control = -32;
    Status = IofCallDriver(AttachedDeviceReference, v3);
    if ( Status == 259 )
    {
      FxCREvent::EnterCRAndWaitAndLeave(&v15);
      Status = v8->IoStatus.Status;
    }
    if ( Status >= 0 )
    {
      Information = (_DEVICE_OBJECT **)v8->IoStatus.Information;
      this->m_TargetPdo = Information[1];
      ExFreePoolWithTag(Information, 0);
    }
  }
  else
  {
    Status = -1073741670;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1, -1073741670);
  }
  if ( Status == -1073741670 )
    *Close = 1;
  else
    Status = 0;
  ObfDereferenceObject(AttachedDeviceReference);
  if ( v3 )
    IoFreeIrp(v3);
  return (unsigned int)Status;
}
