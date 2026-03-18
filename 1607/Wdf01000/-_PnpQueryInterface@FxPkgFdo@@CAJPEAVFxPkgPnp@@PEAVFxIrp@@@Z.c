/*
 * XREFs of ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0033D00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0027310 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryInterface(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int _a1; // eax
  unsigned int v6; // r14d
  _FX_DRIVER_GLOBALS *v7; // rcx
  _IRP *v8; // rdi
  FxDeviceBase *m_DeviceBase; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v11; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _IRP *v13; // rdx
  _IRP *m_Irp; // rbx
  unsigned __int8 completeIrp; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xDu, WPP_fxpkgfdo_cpp_Traceguids);
  _a1 = FxPkgPnp::HandleQueryInterface(This, Irp, &completeIrp);
  v6 = _a1;
  v7 = This->m_Globals;
  if ( v7->FxVerboseOn )
    WPP_IFR_SF_d(v7, 5u, 0xCu, 0xEu, WPP_fxpkgfdo_cpp_Traceguids, _a1);
  if ( completeIrp )
  {
    Irp->m_Irp->IoStatus.Information = 0LL;
    m_Irp = Irp->m_Irp;
    Irp->m_Irp->IoStatus.Status = v6;
    IofCompleteRequest(Irp->m_Irp, 0);
    Irp->m_Irp = 0LL;
    v13 = m_Irp;
    m_DeviceObject = This->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  }
  else
  {
    v8 = Irp->m_Irp;
    m_DeviceBase = This->m_DeviceBase;
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v11 = IofCallDriver(This->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
    m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    v13 = v8;
    v6 = v11;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceObject[1], v13, 0x20u);
  return v6;
}
