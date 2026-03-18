/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C0005710
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0093F60 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C00940B0 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C0094180 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0008454 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C002D6E4 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D2058 (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D20BC (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // r8
  const void *v10; // rsi
  FxIrpQueue *p_m_Queue; // r15
  FxIrpQueue *Flink; // rdx
  _IRP *i; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v15; // r8
  _LIST_ENTRY *v16; // rdx
  $CBDB4BB9AD9093A4D765C5B3340F9886 *v17; // rbx
  _LIST_ENTRY *v18; // rax
  $CBDB4BB9AD9093A4D765C5B3340F9886 *v19; // rbx
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
  _LIST_ENTRY *v34; // rcx
  const void *v35; // rsi
  int v36; // ebx
  _LIST_ENTRY *v37; // rcx
  unsigned __int8 v38; // r8
  _FX_DRIVER_GLOBALS *Csq; // rdx
  FxVerifierLock *v40; // rcx
  _LIST_ENTRY *v41; // rcx
  __int64 v42; // r8
  unsigned __int16 v43; // r9
  const void *_a2; // rcx
  const void *v45; // rax
  _LIST_ENTRY *v46; // rbp
  _FX_DRIVER_GLOBALS *v47; // rdx
  const void *v48; // rax
  __int64 v49; // r8
  unsigned __int8 v50; // r8
  _LIST_ENTRY *v51; // rcx
  __int64 v52; // r8
  unsigned __int16 v53; // r9
  const void *v54; // rcx
  const void *v55; // rax
  _LIST_ENTRY *v56; // rbp
  _FX_DRIVER_GLOBALS *v57; // rdx
  const void *v58; // rax
  _LIST_ENTRY *v59; // rcx
  _IO_CSQ *v60; // rax
  __int64 v61; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  unsigned __int8 PreviousIrql[4]; // [rsp+50h] [rbp-48h] BYREF
  int v64; // [rsp+54h] [rbp-44h] BYREF
  $CBDB4BB9AD9093A4D765C5B3340F9886 *v65; // [rsp+58h] [rbp-40h]
  unsigned __int8 irql; // [rsp+A0h] [rbp+8h] BYREF
  FxRequest **v67; // [rsp+B8h] [rbp+20h]

  v67 = pOutRequest;
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
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      0xDu,
      0x18u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      -1073741436);
    return -1073741436;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Blink, &irql, (unsigned __int8)TagRequest);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v8;
  }
  if ( this->m_PowerState == FxIoQueuePowerOff )
  {
    if ( this->m_ObjectSize )
      v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v32 = 0LL;
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      0xDu,
      0x19u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      v32,
      -1071644157);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      goto LABEL_54;
    v34 = this[-1].m_IoPkgListNode.m_ListEntry.Blink;
    if ( !v34 )
      goto LABEL_54;
    goto LABEL_48;
  }
  if ( (this->m_QueueState & 2) == 0 )
  {
    if ( this->m_ObjectSize )
      v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v35 = 0LL;
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      0xDu,
      0x1Au,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      v35,
      -1071644157);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 || (v34 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) == 0LL )
    {
LABEL_54:
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v8);
      return -1071644157;
    }
LABEL_48:
    FxVerifierLock::Unlock((FxVerifierLock *)v34, v8, v33);
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
LABEL_61:
        v36 = -2147483622;
        if ( !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
          this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
        goto LABEL_65;
      }
      while ( !_InterlockedExchange64((volatile __int64 *)&i->CancelRoutine, 0LL) )
      {
        i = FxIrpQueue::PeekNextIrpFromQueue(&this->m_Queue, i, FileObject);
        if ( !i )
        {
          v8 = irql;
          goto LABEL_61;
        }
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
      v17 = ($CBDB4BB9AD9093A4D765C5B3340F9886 *)i->Tail.Overlay.DriverContext[3];
      if ( v17->m_CsqContext.Type == 1 )
        v17->m_CsqContext.Irp = 0LL;
      v8 = irql;
      v65 = v17;
      i->Tail.Overlay.DriverContext[3] = 0LL;
    }
    else if ( !FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &TagRequest->m_CsqContext) )
    {
      v36 = -1073741275;
LABEL_65:
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v37 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)v37, v8, v9);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, v8);
      return v36;
    }
    v18 = v17[-5].m_ListEntry.Flink;
    v19 = v17 - 5;
    v20 = v18[1].Flink;
    v19[9].m_CsqContext.Irp = 0LL;
    ((void (__fastcall *)($CBDB4BB9AD9093A4D765C5B3340F9886 *, __int64, __int64, const char *))v20)(
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
      if ( SLOBYTE(v19[1].m_CsqContext.Type) < 0 && (v40 = (FxVerifierLock *)v19[-1].m_ListEntry.Flink) != 0LL )
        FxVerifierLock::Unlock(v40, PreviousIrql[0], v38);
      else
        KeReleaseSpinLock((PKSPIN_LOCK)&v19[4].m_CsqContext.Csq, PreviousIrql[0]);
    }
    CurrentStackLocation = v19[6].m_CsqContext.Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction != 3 )
      break;
    if ( CurrentStackLocation->Parameters.Read.Length )
      goto LABEL_23;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v41 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v41, v8, v21);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v8);
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      if ( WORD1(v19->m_ListEntry.Blink) )
        v45 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v45 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xDu,
        0x1Bu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v45,
        _a2);
    }
    v19[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    v46 = v19[4].m_ListEntry.Flink;
    v47 = (_FX_DRIVER_GLOBALS *)v19->m_CsqContext.Csq;
    if ( v47->FxVerboseOn )
    {
      if ( WORD1(v19->m_ListEntry.Blink) )
        v48 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v48 = 0LL;
      WPP_IFR_SF_qqxd(
        v47,
        (unsigned __int8)v47,
        v19[6].m_CsqContext.Irp->IoStatus.Information,
        0xBu,
        traceGuid,
        v48,
        v19[6].m_CsqContext.Irp,
        v19[6].m_CsqContext.Irp->IoStatus.Information,
        0);
    }
    if ( v46 )
      *((_BYTE *)&v19[9].m_ListEntry + 20) = HIBYTE(v46[13].Blink);
    else
      *((_BYTE *)&v19[9].m_ListEntry + 20) = 0;
    FxRequest::CompleteInternal((FxRequest *)v19, 0LL, v42, v43);
    v49 = 1098LL;
LABEL_98:
    ((void (__fastcall *)($CBDB4BB9AD9093A4D765C5B3340F9886 *, __int64, __int64, const char *))v19->m_ListEntry.Flink[1].Flink)(
      v19,
      1886220099LL,
      v49,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql, v50);
    v8 = irql;
  }
  if ( CurrentStackLocation->MajorFunction == 4 && !CurrentStackLocation->Parameters.Read.Length )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v51 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v51, v8, v21);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v8);
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v54 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v54 = 0LL;
      if ( WORD1(v19->m_ListEntry.Blink) )
        v55 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v55 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xDu,
        0x1Cu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v55,
        v54);
    }
    v19[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    v56 = v19[4].m_ListEntry.Flink;
    v57 = (_FX_DRIVER_GLOBALS *)v19->m_CsqContext.Csq;
    if ( v57->FxVerboseOn )
    {
      if ( WORD1(v19->m_ListEntry.Blink) )
        v58 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v58 = 0LL;
      WPP_IFR_SF_qqxd(
        v57,
        (unsigned __int8)v57,
        v19[6].m_CsqContext.Irp->IoStatus.Information,
        0xBu,
        traceGuid,
        v58,
        v19[6].m_CsqContext.Irp,
        v19[6].m_CsqContext.Irp->IoStatus.Information,
        0);
    }
    if ( v56 )
      *((_BYTE *)&v19[9].m_ListEntry + 20) = HIBYTE(v56[13].Blink);
    else
      *((_BYTE *)&v19[9].m_ListEntry + 20) = 0;
    FxRequest::CompleteInternal((FxRequest *)v19, 0LL, v52, v53);
    v49 = 1114LL;
    goto LABEL_98;
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
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v59 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v59, irql, v21);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( *((_BYTE *)&v19[8].m_ListEntry + 22) )
  {
    if ( WORD1(v19->m_ListEntry.Blink) )
      v10 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)v19->m_CsqContext.Csq, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v10);
    v60 = v19->m_CsqContext.Csq;
    v64 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      (const char *)&v60[6].CsqCompleteCanceledIrp,
      (const char *)&v64,
      (const char *)&v60[6].CsqCompleteCanceledIrp,
      (const char *)&v64);
    if ( *(_BYTE *)(v61 + 318) )
      DbgBreakPoint();
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
  ((void (__fastcall *)($CBDB4BB9AD9093A4D765C5B3340F9886 *, __int64, __int64, const char *))v28[1].Flink)(
    v19,
    1952543827LL,
    1168LL,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  *v67 = (FxRequest *)v19;
  return 0;
}
