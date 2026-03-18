/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B6C0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0032EC0 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0035610 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C0081650 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0028A44 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0028A64 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0055834 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA1A8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BABE0 (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAC24 (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 v9; // r8
  const void *v10; // rsi
  FxIrpQueue *p_m_Queue; // r14
  FxIrpQueue *Flink; // rdx
  _IRP *i; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v15; // r8
  _LIST_ENTRY *v16; // rdx
  $62629F1B78C8AA6D0A69F9052F9E18D0 *v17; // rbx
  _LIST_ENTRY *v18; // rax
  $62629F1B78C8AA6D0A69F9052F9E18D0 *v19; // rbx
  _LIST_ENTRY *v20; // rax
  unsigned __int8 v21; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LIST_ENTRY *v23; // rdx
  _LIST_ENTRY *v24; // rax
  _FX_DRIVER_GLOBALS *v25; // rdx
  FxTagTracker *v26; // rcx
  int v27; // eax
  _LIST_ENTRY *v28; // rax
  int result; // eax
  const void *_a1; // rdi
  _LIST_ENTRY *Blink; // rcx
  const void *v32; // rsi
  unsigned __int8 v33; // r8
  const void *v34; // rsi
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // r8
  _FX_DRIVER_GLOBALS *Csq; // rdx
  const void *_a2; // rcx
  const void *v39; // rax
  __int64 v40; // r8
  const void *v41; // rax
  unsigned __int8 v42; // r8
  const void *v43; // rcx
  int v44; // ebx
  _LIST_ENTRY *v45; // rcx
  unsigned __int8 PreviousIrql[8]; // [rsp+40h] [rbp-38h] BYREF
  $62629F1B78C8AA6D0A69F9052F9E18D0 *v47; // [rsp+48h] [rbp-30h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyGetRequestUpdateFlags(this, this->m_Globals, TagRequest);
    if ( result < 0 )
      return result;
  }
  if ( ((this->m_Type - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x18u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, -1073741436);
    return -1073741436;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)Blink, &irql, (unsigned __int8)TagRequest);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  if ( this->m_PowerState == FxIoQueuePowerOff )
  {
    if ( this->m_ObjectSize )
      v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v32 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x19u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v32, -1071644157);
    FxNonPagedObject::Unlock(this, irql, v33);
    return -1071644157;
  }
  if ( (this->m_QueueState & 2) == 0 )
  {
    if ( this->m_ObjectSize )
      v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v34 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Au, (const _GUID *)&FxObject::`vftable'.DebugExtension, v34, -1071644157);
    FxNonPagedObject::Unlock(this, irql, v35);
    return -1071644157;
  }
  v10 = 0LL;
  p_m_Queue = &this->m_Queue;
  while ( 1 )
  {
    if ( !TagRequest || (v17 = &TagRequest->120, TagRequest == (FxRequest *)-120LL) )
    {
      Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
      for ( i = 0LL; Flink != p_m_Queue; i = 0LL )
      {
        i = (_IRP *)&Flink[-5].m_RequestCount;
        if ( !FileObject )
          break;
        if ( i->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
          break;
        Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
      }
      if ( !i )
      {
LABEL_55:
        v44 = -2147483622;
        if ( !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
          this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
        goto LABEL_59;
      }
      while ( !_InterlockedExchange64((volatile __int64 *)&i->CancelRoutine, 0LL) )
      {
        i = FxIrpQueue::PeekNextIrpFromQueue(&this->m_Queue, i, FileObject);
        if ( !i )
          goto LABEL_55;
      }
      p_ListEntry = &i->Tail.Overlay.ListEntry;
      v15 = i->Tail.Overlay.ListEntry.Flink;
      v16 = i->Tail.Overlay.ListEntry.Blink;
      if ( (void **)v15->Blink != &i->Tail.CompletionKey + 6 || v16->Flink != p_ListEntry )
        __fastfail(3u);
      v16->Flink = v15;
      v15->Blink = v16;
      i->Tail.Overlay.ListEntry.Blink = &i->Tail.Overlay.ListEntry;
      p_ListEntry->Flink = p_ListEntry;
      --this->m_Queue.m_RequestCount;
      v17 = ($62629F1B78C8AA6D0A69F9052F9E18D0 *)i->Tail.Overlay.DriverContext[3];
      if ( v17->m_CsqContext.Type == 1 )
        v17->m_CsqContext.Irp = 0LL;
      v47 = v17;
      i->Tail.Overlay.DriverContext[3] = 0LL;
    }
    else if ( !FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &TagRequest->m_CsqContext) )
    {
      v44 = -1073741275;
LABEL_59:
      FxNonPagedObject::Unlock(this, irql, v9);
      return v44;
    }
    v18 = v17[-5].m_ListEntry.Flink;
    v19 = v17 - 5;
    v20 = v18[1].Flink;
    v19[9].m_CsqContext.Irp = 0LL;
    ((void (__fastcall *)($62629F1B78C8AA6D0A69F9052F9E18D0 *, __int64, __int64, const char *))v20)(
      v19,
      1969583441LL,
      2094LL,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    if ( this->m_AllowZeroLengthRequests )
      goto LABEL_23;
    if ( BYTE1(v19->m_CsqContext.Csq[5].Type) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)v19, PreviousIrql, v21);
      Csq = (_FX_DRIVER_GLOBALS *)v19->m_CsqContext.Csq;
      if ( Csq->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v19, Csq);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v19, PreviousIrql[0], v36);
    }
    CurrentStackLocation = v19[6].m_CsqContext.Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction != 3 )
      break;
    if ( CurrentStackLocation->Parameters.Read.Length )
      goto LABEL_23;
    FxNonPagedObject::Unlock(this, irql, v21);
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      if ( WORD1(v19->m_ListEntry.Blink) )
        v39 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v39 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Bu, (const _GUID *)&FxObject::`vftable'.DebugExtension, v39, _a2);
    }
    v19[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v19, 0);
    v40 = 1098LL;
LABEL_76:
    ((void (__fastcall *)($62629F1B78C8AA6D0A69F9052F9E18D0 *, __int64, __int64, const char *))v19->m_ListEntry.Flink[1].Flink)(
      v19,
      1886220099LL,
      v40,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql, v42);
  }
  if ( CurrentStackLocation->MajorFunction == 4 && !CurrentStackLocation->Parameters.Read.Length )
  {
    FxNonPagedObject::Unlock(this, irql, v21);
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v43 = 0LL;
      if ( WORD1(v19->m_ListEntry.Blink) )
        v41 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v41 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Cu, (const _GUID *)&FxObject::`vftable'.DebugExtension, v41, v43);
    }
    v19[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v19, 0);
    v40 = 1114LL;
    goto LABEL_76;
  }
LABEL_23:
  ++this->m_DriverIoCount;
  v23 = this->m_DriverOwned.Blink;
  v24 = &v19[12].m_ListEntry + 1;
  v19[12].m_CsqContext.Csq = (_IO_CSQ *)&this->m_DriverOwned;
  v19[13].m_ListEntry.Flink = v23;
  if ( v23->Flink != &this->m_DriverOwned )
    __fastfail(3u);
  v23->Flink = v24;
  this->m_DriverOwned.Blink = v24;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v45 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v45, irql, v21);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( *((_BYTE *)&v19[8].m_ListEntry + 22) )
  {
    if ( WORD1(v19->m_ListEntry.Blink) )
      v10 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)v19->m_CsqContext.Csq, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v10);
    FxVerifierDbgBreakPoint((_FX_DRIVER_GLOBALS *)v19->m_CsqContext.Csq);
  }
  else
  {
    v27 = *((unsigned __int8 *)&v19[9].m_ListEntry + 21);
    *((_BYTE *)&v19[9].m_ListEntry + 21) = 1;
    if ( !v27 )
    {
      v25 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)&v19->m_ListEntry.Blink + 1);
      if ( SLOBYTE(v19[1].m_CsqContext.Type) < 0 )
      {
        v26 = (FxTagTracker *)v19[-2].m_CsqContext.Csq;
        if ( v26 )
          FxTagTracker::UpdateTagHistory(
            v26,
            (void *)0x74617453,
            1812,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            (unsigned int)v25);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyGetRequestRestoreFlags((FxIoQueue *)v26, v25, (FxRequest *)v19);
  v28 = v19->m_ListEntry.Flink;
  *((_BYTE *)&v19[14].m_ListEntry + 16) = 1;
  ((void (__fastcall *)($62629F1B78C8AA6D0A69F9052F9E18D0 *, __int64, __int64, const char *))v28[1].Flink)(
    v19,
    1952543827LL,
    1168LL,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  result = 0;
  *pOutRequest = (FxRequest *)v19;
  return result;
}
