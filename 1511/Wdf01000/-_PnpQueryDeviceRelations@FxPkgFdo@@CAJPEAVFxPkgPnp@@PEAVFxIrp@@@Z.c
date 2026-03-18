/*
 * XREFs of ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002E730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0016D00 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0017028 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0088620 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     WPP_IFR_SF_L @ 0x1C008A9D8 (WPP_IFR_SF_L.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryDeviceRelations(FxPkgPnp *This, FxIrp *Irp, __int64 a3, unsigned __int16 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Length; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int DeviceRelations; // esi
  _IRP *m_Irp; // rdi
  FxDeviceBase *m_DeviceBase; // rbx
  _IO_STACK_LOCATION *v12; // rax
  _FX_DRIVER_GLOBALS *v13; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_L(
      m_Globals,
      (unsigned __int8)Irp,
      (unsigned int)CurrentStackLocation,
      a4,
      traceGuid,
      CurrentStackLocation->Parameters.Read.Length);
  if ( Length )
  {
    if ( Length != 3 )
      goto LABEL_7;
    DeviceRelations = FxPkgPnp::HandleQueryDeviceRelations(This, Irp, This->m_RemovalDeviceList);
    if ( DeviceRelations == -1073741637 )
      goto LABEL_7;
  }
  else
  {
    DeviceRelations = FxPkgPnp::HandleQueryBusRelations(This, Irp);
    if ( DeviceRelations == -1073741637 )
      DeviceRelations = 0;
  }
  if ( DeviceRelations >= 0 )
  {
LABEL_7:
    m_Irp = Irp->m_Irp;
    m_DeviceBase = This->m_DeviceBase;
    v12 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
    *(_OWORD *)&v12[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v12->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v12[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v12->Parameters.QueryDeviceRelations + 6);
    v12[-1].FileObject = v12->FileObject;
    v12[-1].Control = 0;
    DeviceRelations = IofCallDriver(This->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
    goto LABEL_8;
  }
  FxPkgPnp::CompletePnpRequest(This, Irp, DeviceRelations);
LABEL_8:
  v13 = This->m_Globals;
  if ( v13->FxVerboseOn )
    WPP_IFR_SF_d(v13, 5u, 0xCu, 0xCu, WPP_fxpkgfdo_cpp_Traceguids, DeviceRelations);
  return (unsigned int)DeviceRelations;
}
