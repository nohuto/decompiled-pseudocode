/*
 * XREFs of ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C008926C
 * Callers:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0016A00 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     ??1FxAutoIrp@@QEAA@XZ @ 0x1C0057454 (--1FxAutoIrp@@QEAA@XZ.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C008A5C4 (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 */

__int64 __fastcall PnpPassThroughQI(unsigned __int64 Device, FxIrp *Irp)
{
  unsigned int Status; // edi
  _DEVICE_OBJECT *_a2; // rbx
  _IRP *v6; // rax
  const void *_a1; // rcx
  _IRP *v8; // rbp
  FxAutoIrp fxFwdIrp; // [rsp+60h] [rbp+8h] BYREF
  MxDeviceObject pTopOfStack; // [rsp+68h] [rbp+10h] BYREF

  Status = Irp->m_Irp->IoStatus.Status;
  pTopOfStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(Device + 224) + 144LL));
  _a2 = pTopOfStack.m_DeviceObject;
  v6 = IoAllocateIrp(pTopOfStack.m_DeviceObject->StackSize, 0);
  _a1 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    fxFwdIrp.m_Irp = v6;
    PnpPassThroughQIWorker(&pTopOfStack, Irp, &fxFwdIrp);
    if ( v8->IoStatus.Status != -1073741637 )
      Status = v8->IoStatus.Status;
    Irp->m_Irp->IoStatus.Status = Status;
    Irp->m_Irp->IoStatus.Information = v8->IoStatus.Information;
    FxAutoIrp::~FxAutoIrp(&fxFwdIrp);
  }
  else
  {
    Status = -1073741670;
    if ( *(_WORD *)(Device + 10) )
      _a1 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qid(
      *(_FX_DRIVER_GLOBALS **)(Device + 16),
      2u,
      0xCu,
      0x22u,
      WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      (__int64)_a2,
      -1073741670);
  }
  ObfDereferenceObject(_a2);
  return Status;
}
