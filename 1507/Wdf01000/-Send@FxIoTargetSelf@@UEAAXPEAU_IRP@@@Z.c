/*
 * XREFs of ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0085080
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005650 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0023194 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0031D9C (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0032808 (WPP_IFR_SF_qcDqd.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00329A0 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0032A98 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0032CBC (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxIoTargetSelf::Send(FxIoTargetSelf *this, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  FxIoQueue *m_DispatchQueue; // rbp
  unsigned __int8 MajorFunction; // r8
  const void *_a1; // rcx
  int v8; // esi
  FxDeviceBase *m_DeviceBase; // rdx
  FxPkgIo *m_ParentObject; // rax
  FxPkgIo *Blink; // r14
  const void *v12; // rdx
  const void *v13; // rcx
  __int64 v14; // rax
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // r15
  bool v17; // zf
  char v18; // r13
  bool v19; // r12
  FxCxDeviceInfo *v20; // rdx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int v22; // eax
  FxRequest *v23; // rsi
  int v24; // edi
  int ReservedRequest; // eax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  FxRequest *Request; // [rsp+80h] [rbp+8h] BYREF

  --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  m_DispatchQueue = this->m_DispatchQueue;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !m_DispatchQueue )
  {
    m_DispatchQueue = (FxIoQueue *)*((_QWORD *)&this->m_DeviceBase[3].m_ChildListHead.Blink[9].Flink + MajorFunction);
    if ( !m_DispatchQueue )
    {
      if ( this->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetSelf_cpp_Traceguids, _a1, MajorFunction);
      v8 = -1073741436;
$Fail:
      Irp->IoStatus.Status = v8;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return;
    }
  }
  m_DeviceBase = this->m_DeviceBase;
  if ( MajorFunction > 0x10u )
  {
    if ( MajorFunction != 18 )
    {
      if ( MajorFunction != 22 )
      {
        if ( MajorFunction == 23 )
        {
          m_ParentObject = (FxPkgIo *)m_DeviceBase[3].m_ParentObject;
          goto LABEL_23;
        }
        if ( MajorFunction != 27 )
        {
LABEL_20:
          m_ParentObject = (FxPkgIo *)m_DeviceBase[3].m_ChildEntry.Flink;
          goto LABEL_23;
        }
      }
      m_ParentObject = *(FxPkgIo **)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
      if ( m_ParentObject )
        goto LABEL_23;
      goto LABEL_20;
    }
  }
  else if ( MajorFunction != 16 && MajorFunction && MajorFunction != 2 )
  {
    if ( MajorFunction > 2u && (MajorFunction <= 4u || (unsigned int)MajorFunction - 14 <= 1) )
    {
      m_ParentObject = (FxPkgIo *)m_DeviceBase[3].m_ChildListHead.Blink;
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  m_ParentObject = (FxPkgIo *)m_DeviceBase[3].m_SpinLock.m_Lock;
LABEL_23:
  Blink = (FxPkgIo *)m_DeviceBase[3].m_ChildListHead.Blink;
  if ( m_ParentObject != Blink )
  {
    v8 = -1073741811;
    if ( m_DeviceBase->m_ObjectSize )
      v12 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v12 = 0LL;
    if ( this->m_ObjectSize )
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v13 = 0LL;
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      (unsigned __int8)v12,
      0xEu,
      0xBu,
      WPP_FxIoTargetSelf_cpp_Traceguids,
      v13,
      MajorFunction,
      CurrentStackLocation->MinorFunction,
      v12);
    LODWORD(Request) = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v14 + 318) )
      DbgBreakPoint();
    goto $Fail;
  }
  m_CxDeviceInfo = m_DispatchQueue->m_CxDeviceInfo;
  p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
  if ( !m_CxDeviceInfo )
    p_IoInCallerContextCallback = &Blink->m_InCallerContextCallback;
  v17 = m_DispatchQueue->m_SupportForwardProgress == 0;
  v18 = 0;
  Request = 0LL;
  v19 = !v17;
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v18 = 1;
  }
  v20 = m_DispatchQueue->m_CxDeviceInfo;
  if ( v20 )
    p_RequestAttributes = &v20->RequestAttributes;
  else
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&Blink->m_DeviceBase[2].m_ExecutionLevel;
  v22 = FxRequest::_CreateForPackage(Blink->m_Device, p_RequestAttributes, Irp, &Request);
  v23 = Request;
  v24 = v22;
  if ( v19 )
  {
    if ( v22 < 0 )
      goto LABEL_45;
    if ( (Blink->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      v24 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(Blink, Request);
  }
  if ( v24 >= 0 )
  {
    if ( !v19 || !m_DispatchQueue->m_FwdProgContext->m_IoResourcesAllocate.Method )
      goto LABEL_49;
    v23->m_Presented = 1;
    v26 = v23->m_ObjectSize ? (unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    v27 = m_DispatchQueue->m_ObjectSize ? (unsigned __int64)m_DispatchQueue ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD))m_DispatchQueue->m_FwdProgContext->m_IoResourcesAllocate.Method)(
           v27,
           v26,
           0LL) >= 0 )
      goto LABEL_49;
    FxRequest::FreeRequest(v23);
    Request = 0LL;
    goto LABEL_46;
  }
LABEL_45:
  if ( !v19 )
  {
    WPP_IFR_SF_d(
      Blink->m_Globals,
      2u,
      0xDu,
      0x10u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      v24);
LABEL_54:
    Irp->IoStatus.Status = v24;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    goto LABEL_66;
  }
LABEL_46:
  ReservedRequest = FxIoQueue::GetReservedRequest(m_DispatchQueue, Irp, (_LIST_ENTRY **)&Request);
  v24 = ReservedRequest;
  if ( ReservedRequest == 259 )
    goto LABEL_66;
  if ( ReservedRequest < 0 )
    goto LABEL_54;
  v23 = Request;
LABEL_49:
  if ( p_IoInCallerContextCallback && p_IoInCallerContextCallback->m_Method && !v23->m_Reserved )
  {
    v23->m_InternalContext = m_DispatchQueue;
    FxPkgIo::DispathToInCallerContextCallback(Blink, p_IoInCallerContextCallback, v23, Irp);
  }
  else
  {
    FxIoQueue::QueueRequest(m_DispatchQueue, v23, 0);
  }
LABEL_66:
  if ( v18 )
    KeLeaveCriticalRegion();
}
