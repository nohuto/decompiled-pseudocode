/*
 * XREFs of ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0025090
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C00252C4 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0029320 (WPP_IFR_SF_qqcq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0068EA8 (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::Dispatch(FxWmiIrpHandler *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  FxWmiProvider *ProviderLocked; // r14
  FxWmiInstance *InstanceReferencedLocked; // r15
  char v8; // r13
  unsigned __int8 _a3; // bl
  unsigned __int64 v10; // r12
  _FX_DRIVER_GLOBALS *v11; // rcx
  int Status; // ebx
  int (__fastcall *Handler)(FxWmiIrpHandler *, _IRP *, FxWmiProvider *, FxWmiInstance *); // rax
  char v14; // bp
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 v17; // r8
  unsigned int v18; // edx
  FxTagTracker *m_TracingHandle; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rcx
  FxVerifierLock *v24; // rcx
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  char v26; // [rsp+98h] [rbp+10h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  ProviderLocked = 0LL;
  InstanceReferencedLocked = 0LL;
  v26 = 0;
  v8 = 0;
  _a3 = CurrentStackLocation->MinorFunction;
  v10 = _a3;
  v11 = this->m_Globals;
  if ( v11->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(v11, 5u, 0xDu, 0xEu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, _a2, _a3, Irp);
  }
  if ( _a3 != 11 && _a3 > 9u
    || (_DEVICE_OBJECT *)CurrentStackLocation->Parameters.WMI.ProviderId != this->m_DeviceBase->m_DeviceObject.m_DeviceObject )
  {
    goto LABEL_17;
  }
  if ( _a3 == 11 || _a3 == 8 )
  {
    Status = 0;
    goto LABEL_8;
  }
  FxNonPagedObject::Lock(this, &irql, 0);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(
                     this,
                     (_GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName);
  if ( !ProviderLocked )
  {
    Status = -1073741163;
    goto LABEL_42;
  }
  Status = 0;
  if ( FxWmiIrpHandler::m_WmiDispatchTable[v10].CheckInstance )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( (Parameters[1].ReadMode & 0x80u) == 0
      || (InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(
                                       ProviderLocked,
                                       Parameters[1].MaximumInstances,
                                       (void *)v10)) == 0LL )
    {
      Status = -1073741162;
LABEL_42:
      ProviderLocked = 0LL;
      goto LABEL_29;
    }
  }
  v18 = _InterlockedIncrement(&ProviderLocked->m_Refcnt);
  if ( SLOBYTE(ProviderLocked->m_ObjectFlags) < 0 )
    m_TracingHandle = (FxTagTracker *)ProviderLocked[-1].m_TracingHandle;
  else
    m_TracingHandle = 0LL;
  if ( m_TracingHandle )
    FxTagTracker::UpdateTagHistory(
      m_TracingHandle,
      (void *)v10,
      735,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp",
      TagAddRef,
      v18);
LABEL_29:
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v24 = *(FxVerifierLock **)&this[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v24, irql, v17);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( Status < 0 )
  {
    Irp->IoStatus.Status = Status;
    v8 = 1;
LABEL_8:
    if ( Status < 0 )
      goto LABEL_45;
  }
  Handler = FxWmiIrpHandler::m_WmiDispatchTable[v10].Handler;
  if ( Handler )
  {
    Status = Handler(this, Irp, ProviderLocked, InstanceReferencedLocked);
    v14 = 1;
    goto $Done_22;
  }
LABEL_45:
  v14 = v26;
$Done_22:
  if ( InstanceReferencedLocked )
    InstanceReferencedLocked->Release(
      InstanceReferencedLocked,
      (void *)v10,
      765,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( ProviderLocked )
    ProviderLocked->Release(
      ProviderLocked,
      (void *)v10,
      770,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( !v14 )
  {
LABEL_17:
    m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    if ( v8 || !m_DeviceObject )
    {
      Status = Irp->IoStatus.Status;
      IofCompleteRequest(Irp, 0);
    }
    else
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(m_DeviceObject, Irp);
    }
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return (unsigned int)Status;
}
