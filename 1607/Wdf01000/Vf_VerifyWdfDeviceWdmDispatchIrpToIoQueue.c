/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00C8380
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001E3F0 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C001FF78 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C0038864 (WPP_IFR_SF_Dd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C003B5AC (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1C0072F7C (WPP_IFR_SF_qqcDqd.c)
 */

__int64 __fastcall Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *device,
        _IRP *Irp,
        FxIoQueue *queue,
        unsigned int Flags)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v10; // ebp
  unsigned __int8 _a5; // r14
  unsigned __int8 MinorFunction; // r12
  _DEVICE_OBJECT *_a4; // rdx
  const void *_a3; // rcx
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  const void *v17; // rbx
  const void *v18; // rdi
  unsigned __int16 v19; // r9
  const _GUID *v20; // r10
  FxDevice *m_ParentDevice; // rcx
  FxDevice *m_Device; // rax
  const void *v23; // rbx
  unsigned __int16 v24; // r9
  FxPkgPnp *m_PkgPnp; // rax
  const void *v26; // rax
  const _GUID *_a2; // [rsp+20h] [rbp-68h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v10 = 0;
  _a5 = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( FxDriverGlobals->FxVerboseOn )
  {
    _a4 = device->m_DeviceObject.m_DeviceObject;
    if ( device->m_ObjectSize )
      _a3 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a3 = 0LL;
    WPP_IFR_SF_qqcDq(
      FxDriverGlobals,
      (unsigned __int8)_a4,
      (unsigned int)Irp,
      0x3Eu,
      WPP_FxDeviceApi_cpp_Traceguids,
      _a3,
      _a4,
      _a5,
      MinorFunction,
      Irp);
  }
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    v10 = -1073741811;
    WPP_IFR_SF_Dd(FxDriverGlobals, 2u, 0xDu, 0x3Fu, WPP_FxDeviceApi_cpp_Traceguids, Flags, -1073741811);
LABEL_43:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return v10;
  }
  if ( FxDevice::GetDispatchPackage(device, _a5) != (FxDefaultIrpHandler *)device->m_PkgIo )
  {
    v10 = -1073741811;
    if ( device->m_ObjectSize )
      v17 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v17 = 0LL;
    if ( queue->m_ObjectSize )
      v18 = (const void *)((unsigned __int64)queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v18 = 0LL;
    v19 = 64;
LABEL_16:
    WPP_IFR_SF_qqcDqd(FxDriverGlobals, v15, v16, v19, _a2, v18, Irp, _a5, MinorFunction, v17);
    goto LABEL_43;
  }
  if ( !FxIoQueue::IsIoEventHandlerRegistered(queue, (_WDF_REQUEST_TYPE)_a5) )
  {
    v10 = -1073741811;
    if ( device->m_ObjectSize )
      v17 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v17 = 0LL;
    if ( queue->m_ObjectSize )
      v18 = (const void *)((unsigned __int64)queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v18 = 0LL;
    v19 = 65;
    goto LABEL_16;
  }
  m_ParentDevice = device->m_ParentDevice;
  m_Device = queue->m_Device;
  if ( m_ParentDevice == m_Device )
  {
    if ( !m_ParentDevice )
    {
      v10 = -1073741811;
      if ( device->m_ObjectSize )
        v23 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v23 = 0LL;
      v24 = 66;
LABEL_31:
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, v24, v20, v23, v10);
      goto LABEL_43;
    }
    m_PkgPnp = device->m_PkgPnp;
    if ( m_PkgPnp && !BYTE3(m_PkgPnp[1].m_DisposeSingleEntry.Next) )
    {
      v10 = -1073741808;
      if ( device->m_ObjectSize )
        v23 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v23 = 0LL;
      v24 = 67;
      goto LABEL_31;
    }
  }
  else if ( device != m_Device )
  {
    v10 = -1073741811;
    if ( m_Device->m_ObjectSize )
      v26 = (const void *)((unsigned __int64)m_Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v26 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x44u, v20, v26, -1073741811);
    goto LABEL_43;
  }
  return v10;
}
