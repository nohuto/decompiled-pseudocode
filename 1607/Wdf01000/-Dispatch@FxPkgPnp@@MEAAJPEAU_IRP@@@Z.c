/*
 * XREFs of ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x1C0003D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqcLq @ 0x1C00027F4 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C0023750 (WPP_IFR_SF_qqcqL.c)
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C00272B8 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C002A030 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0034324 (WPP_IFR_SF_qqcq.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C00345B8 (WPP_IFR_SF_qqcqLd.c)
 */

__int64 __fastcall FxPkgPnp::Dispatch(FxPkgPnp *this, _IRP *Irp, __int64 a3, unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int _a3; // r8d
  _FX_DRIVER_GLOBALS *v8; // rcx
  FxPkgPnp_vtbl *v9; // rax
  int (__fastcall *const *(__fastcall *GetDispatchPnp)(FxPkgPnp *))(FxPkgPnp *, FxIrp *); // rax
  int (__fastcall *const *v11)(FxPkgPnp *, FxIrp *); // rax
  int (__fastcall *v12)(FxPkgPnp *, FxIrp *); // rax
  FxDeviceBase *v14; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v17; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  int PnpCapsInternal; // eax
  _FX_DRIVER_GLOBALS *v20; // rcx
  int (__fastcall *SendIrpSynchronously)(FxPkgPnp *, FxIrp *); // rax
  _IO_STACK_LOCATION *v22; // rcx
  _DEVICE_OBJECT *v23; // rdi
  _IO_STACK_LOCATION *v24; // rdx
  NTSTATUS Status; // r14d
  PIRP v26; // rdi
  FxDeviceBase *v27; // rcx
  unsigned int Length; // ecx
  FxDeviceBase *v29; // rax
  _DEVICE_OBJECT *v30; // r9
  const void *v31; // rax
  char MinorFunction; // cl
  FxDeviceBase *v33; // rsi
  unsigned int id; // r8d
  _DEVICE_OBJECT *v35; // rax
  const void *v36; // rsi
  unsigned __int8 v37; // di
  int (__fastcall *v38)(FxPkgPnp *, FxIrp *); // rax
  FxDeviceBase *v39; // rsi
  _DEVICE_OBJECT *v40; // r9
  const void *v41; // rsi
  _FX_DRIVER_GLOBALS *v42; // r10
  FxDeviceBase *v43; // rax
  _DEVICE_OBJECT *v44; // r10
  const void *v45; // rax
  FxDeviceBase *m_DeviceBase; // rsi
  _DEVICE_OBJECT *m_DeviceObject; // rax
  const void *v48; // rsi
  const _GUID *traceGuid; // [rsp+20h] [rbp-19h]
  _KEVENT Event; // [rsp+60h] [rbp+27h] BYREF
  char v51; // [rsp+78h] [rbp+3Fh]
  PIRP v52; // [rsp+A0h] [rbp+67h] BYREF

  m_Globals = this->m_Globals;
  v52 = Irp;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    Irp = v52;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( MinorFunction && MinorFunction != 2 )
    {
      v42 = this->m_Globals;
      if ( !v42->FxVerboseOn )
      {
LABEL_59:
        v37 = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
        v9 = this->__vftable;
        if ( v37 <= 3u )
        {
          v38 = v9->GetDispatchPower(this)[v37];
          return ((__int64 (__fastcall *)(FxPkgPnp *, PIRP *))v38)(this, &v52);
        }
        return ((__int64 (__fastcall *)(FxPkgPnp *, PIRP *))v9->FireAndForgetIrp)(this, &v52);
      }
      m_DeviceBase = this->m_DeviceBase;
      m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        v48 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v48 = 0LL;
      WPP_IFR_SF_qqcq(v42, 5u, 0xCu, 0x13u, WPP_FxPkgPnp_cpp_Traceguids, v48, m_DeviceObject, MinorFunction, Irp);
    }
    else if ( CurrentStackLocation->Parameters.Create.Options )
    {
      v33 = this->m_DeviceBase;
      id = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v35 = v33->m_DeviceObject.m_DeviceObject;
      if ( v33->m_ObjectSize )
        v36 = (const void *)((unsigned __int64)v33 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v36 = 0LL;
      WPP_IFR_SF_qqcqL(this->m_Globals, (unsigned __int8)Irp, id, a4, traceGuid, v36, v35, MinorFunction, Irp, id);
    }
    else
    {
      v39 = this->m_DeviceBase;
      v40 = v39->m_DeviceObject.m_DeviceObject;
      if ( v39->m_ObjectSize )
        v41 = (const void *)((unsigned __int64)v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v41 = 0LL;
      WPP_IFR_SF_qqcqLd(
        this->m_Globals,
        (unsigned __int8)Irp,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        (unsigned __int16)v40,
        traceGuid,
        v41,
        v40,
        MinorFunction,
        Irp,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1);
    }
    Irp = v52;
    goto LABEL_59;
  }
  _a3 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)_a3 < 0x11u && (unsigned __int8)_a3 >= 8u )
    goto LABEL_6;
  if ( (_BYTE)_a3 == 7 )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    v29 = this->m_DeviceBase;
    v30 = v29->m_DeviceObject.m_DeviceObject;
    if ( v29->m_ObjectSize )
      v31 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v31 = 0LL;
    WPP_IFR_SF_qqcLq(
      this->m_Globals,
      (unsigned __int8)Irp,
      _a3,
      (unsigned __int16)v30,
      traceGuid,
      v31,
      v30,
      _a3,
      Length,
      Irp);
LABEL_51:
    Irp = v52;
    goto LABEL_7;
  }
  if ( (unsigned __int8)_a3 > 6u && (_BYTE)_a3 != 20 && (_BYTE)_a3 != 17 && (_BYTE)_a3 != 23 )
  {
LABEL_6:
    v8 = this->m_Globals;
    if ( !v8->FxVerboseOn )
      goto LABEL_7;
    v43 = this->m_DeviceBase;
    v44 = v43->m_DeviceObject.m_DeviceObject;
    if ( v43->m_ObjectSize )
      v45 = (const void *)((unsigned __int64)v43 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v45 = 0LL;
    WPP_IFR_SF_qqcq(v8, 5u, 0xCu, 0x10u, WPP_FxPkgPnp_cpp_Traceguids, v45, v44, _a3, Irp);
    goto LABEL_51;
  }
  v14 = this->m_DeviceBase;
  _a2 = v14->m_DeviceObject.m_DeviceObject;
  if ( v14->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qqcq(this->m_Globals, 4u, 0xCu, 0xEu, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2, _a3, Irp);
  Irp = v52;
LABEL_7:
  v9 = this->__vftable;
  if ( Irp->Tail.Overlay.CurrentStackLocation->MinorFunction > 0x17u )
    return ((__int64 (__fastcall *)(FxPkgPnp *, PIRP *))v9->FireAndForgetIrp)(this, &v52);
  GetDispatchPnp = v9->GetDispatchPnp;
  if ( (char *)GetDispatchPnp == (char *)FxPkgFdo::GetDispatchPnp )
  {
    v11 = FxPkgFdo::m_FdoPnpFunctionTable;
  }
  else if ( (char *)GetDispatchPnp == (char *)FxPkgPdo::GetDispatchPnp )
  {
    v11 = FxPkgPdo::m_PdoPnpFunctionTable;
  }
  else
  {
    v11 = GetDispatchPnp(this);
    Irp = v52;
  }
  v12 = v11[Irp->Tail.Overlay.CurrentStackLocation->MinorFunction];
  if ( v12 != FxPkgFdo::_PnpQueryCapabilities )
    return ((__int64 (__fastcall *)(FxPkgPnp *, PIRP *))v12)(this, &v52);
  v17 = this->m_Globals;
  if ( v17->FxVerboseOn )
  {
    WPP_IFR_SF_(v17, 5u, 0xCu, 0xFu, WPP_fxpkgfdo_cpp_Traceguids);
    Irp = v52;
  }
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  PnpCapsInternal = FxPkgPnp::GetPnpCapsInternal(this);
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
    if ( this->m_WakeInterruptCount )
      HIDWORD(SecurityContext->SecurityQos) |= 0x80000u;
  }
  v20 = this->m_Globals;
  if ( v20->FxVerboseOn )
    WPP_IFR_SF_(v20, 5u, 0xCu, 0x10u, WPP_fxpkgfdo_cpp_Traceguids);
  SendIrpSynchronously = this->SendIrpSynchronously;
  if ( (char *)SendIrpSynchronously == (char *)FxPkgFdo::SendIrpSynchronously )
  {
    v51 = 0;
    v22 = v52->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v22[-1].MajorFunction = *(_OWORD *)&v22->MajorFunction;
    *(_OWORD *)&v22[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v22->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v22[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v22->Parameters.QueryDeviceRelations + 6);
    v22[-1].FileObject = v22->FileObject;
    v22[-1].Control = 0;
    v23 = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v51 = 1;
    v24 = v52->Tail.Overlay.CurrentStackLocation;
    v24[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
    v24[-1].Context = &Event;
    v24[-1].Control = -32;
    Status = IofCallDriver(v23, v52);
    if ( Status == 259 )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
      Status = v52->IoStatus.Status;
    }
  }
  else
  {
    Status = SendIrpSynchronously(this, (FxIrp *)&v52);
  }
  if ( Status >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion((FxPkgFdo *)this, (FxIrp *)&v52);
  v26 = v52;
  v52->IoStatus.Status = Status;
  IofCompleteRequest(v52, 0);
  v27 = this->m_DeviceBase;
  v52 = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&v27->m_DeviceObject.m_DeviceObject[1], v26, 0x20u);
  return (unsigned int)Status;
}
