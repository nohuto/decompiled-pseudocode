/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0028D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C00272B8 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C002A030 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryCapabilities(FxPkgFdo *This, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int PnpCapsInternal; // eax
  _FX_DRIVER_GLOBALS *v8; // rcx
  int (__fastcall *SendIrpSynchronously)(FxPkgPnp *, FxIrp *); // rax
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  _IRP *v13; // rax
  _IO_STACK_LOCATION *v14; // rdx
  NTSTATUS Status; // ebp
  _IRP *v16; // rbx
  _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  char v19; // [rsp+48h] [rbp-10h]

  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xFu, WPP_fxpkgfdo_cpp_Traceguids);
  SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  PnpCapsInternal = FxPkgPnp::GetPnpCapsInternal(This, (__int64)Irp, a3);
  if ( LOWORD(SecurityContext->SecurityQos) >= 0x40u && WORD1(SecurityContext->SecurityQos) == 1 )
  {
    if ( (PnpCapsInternal & 0x3000) == 0x1000 )
      HIDWORD(SecurityContext->SecurityQos) |= 4u;
    if ( (PnpCapsInternal & 0xC000) == 0x4000 )
      HIDWORD(SecurityContext->SecurityQos) |= 8u;
    if ( (PnpCapsInternal & 0x30000) == 0x10000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
    if ( (PnpCapsInternal & 0xC0000) == 0x40000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20u;
    if ( (PnpCapsInternal & 0x3000000) == 0x1000000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
    if ( (PnpCapsInternal & 0x30000000) == 0x10000000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    if ( This->m_WakeInterruptCount )
      HIDWORD(SecurityContext->SecurityQos) |= 0x80000u;
  }
  v8 = This->m_Globals;
  if ( v8->FxVerboseOn )
    WPP_IFR_SF_(v8, 5u, 0xCu, 0x10u, WPP_fxpkgfdo_cpp_Traceguids);
  SendIrpSynchronously = This->SendIrpSynchronously;
  if ( (char *)SendIrpSynchronously == (char *)FxPkgFdo::SendIrpSynchronously )
  {
    m_Irp = Irp->m_Irp;
    v19 = 0;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    m_DeviceObject = This->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v13 = Irp->m_Irp;
    v19 = 1;
    v14 = v13->Tail.Overlay.CurrentStackLocation;
    v14[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
    v14[-1].Context = &Event;
    v14[-1].Control = -32;
    Status = IofCallDriver(m_DeviceObject, Irp->m_Irp);
    if ( Status == 259 )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
      Status = Irp->m_Irp->IoStatus.Status;
    }
  }
  else
  {
    Status = SendIrpSynchronously(This, Irp);
  }
  if ( Status >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion(This, Irp);
  v16 = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], v16, 0x20u);
  return (unsigned int)Status;
}
