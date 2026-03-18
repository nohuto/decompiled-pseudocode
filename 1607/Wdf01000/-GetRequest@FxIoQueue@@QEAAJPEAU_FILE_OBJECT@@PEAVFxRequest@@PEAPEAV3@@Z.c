/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0037750 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C003A360 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C008F5C0 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0011E28 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001C200 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0034C7C (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0034CAC (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003B6E0 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C003B760 (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C1C8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C91C8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9C00 (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9C44 (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxRequest *v5; // r15
  _FILE_OBJECT *v6; // r14
  void **v8; // r11
  void **v9; // r10
  FxIrpQueue *p_m_Queue; // r9
  FxIrpQueue *v11; // rdx
  _IRP *j; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v14; // r8
  _LIST_ENTRY *v15; // rdx
  $8B26BD50DADCE63D5F5F71A785E147C5 *v16; // rbx
  _LIST_ENTRY *Flink; // rax
  unsigned __int64 v18; // rbx
  __int64 (__fastcall *v19)(FxRequest *, void *, __int64, char *); // rax
  char v20; // cl
  bool v21; // r13
  char v22; // r12
  signed __int32 v23; // r14d
  void (__fastcall *v24)(FxRequestFromLookaside *, unsigned int); // rcx
  _LIST_ENTRY *v25; // rdx
  _LIST_ENTRY *v26; // rax
  _FX_DRIVER_GLOBALS *v27; // rdx
  FxTagTracker *v28; // rcx
  unsigned int v29; // r8d
  int v30; // eax
  void (__fastcall **v31)(FxRequestFromLookaside *, unsigned int); // rax
  __int64 (__fastcall *v32)(FxRequest *, void *, __int64, char *); // rax
  char v33; // si
  bool v34; // bp
  char v35; // r15
  int result; // eax
  __int16 v37; // cx
  FxTagTracker *v38; // r15
  unsigned __int16 v39; // cx
  _QWORD *v40; // rdi
  void (__fastcall *v41)(unsigned __int64); // rax
  void (__fastcall *v42)(unsigned __int64); // rax
  unsigned __int16 v43; // ax
  _QWORD *v44; // rcx
  _QWORD *v45; // rdi
  void (__fastcall *v46)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *v47)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v48; // rcx
  void (__fastcall **v49)(FxRequestFromLookaside *, unsigned int); // r15
  void (__fastcall **v50)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v51)(FxRequestFromLookaside *, unsigned int); // rdi
  FxRequestTimer *v52; // rcx
  char v53; // al
  void (__fastcall ***v54)(FxRequestFromLookaside *, unsigned int); // rsi
  void (__fastcall *v55)(FxRequestFromLookaside *, unsigned int); // rax
  _SLIST_ENTRY *v56; // rsi
  __int16 v57; // cx
  FxTagTracker *v58; // r12
  unsigned __int16 v59; // cx
  _QWORD *i; // rdi
  void (__fastcall *v61)(unsigned __int64, _FX_DRIVER_GLOBALS *); // rax
  void (__fastcall *v62)(unsigned __int64, _FX_DRIVER_GLOBALS *); // rax
  unsigned __int16 v63; // ax
  _QWORD *v64; // rcx
  _QWORD *v65; // rdi
  void (__fastcall *v66)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v67; // rdx
  void (__fastcall **v68)(FxRequestFromLookaside *, unsigned int); // rdi
  void (__fastcall **v69)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v70)(FxRequestFromLookaside *, unsigned int); // r14
  FxRequestTimer *v71; // rcx
  void (__fastcall ***v72)(FxRequestFromLookaside *, unsigned int); // r14
  void (__fastcall *v73)(FxRequestFromLookaside *, unsigned int); // rax
  _SLIST_ENTRY *v74; // r14
  void (__fastcall **v75)(FxRequestFromLookaside *, unsigned int); // rdi
  void (__fastcall *v76)(FxObject *, unsigned int); // rdx
  FxRegKey *(__fastcall *v77)(FxRegKey *, char); // rax
  void (__fastcall **v78)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v79)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall ***v80)(FxRequestFromLookaside *, unsigned int); // rax
  FX_POOL_TRACKER *v81; // rdi
  void (__fastcall *v82)(FxObject *, unsigned int); // rdx
  void (__fastcall *v83)(FxRequestFromLookaside *, unsigned int); // rax
  void (__fastcall **v84)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v85)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall ***v86)(FxRequestFromLookaside *, unsigned int); // rax
  FX_POOL_TRACKER *v87; // rdi
  _SLIST_ENTRY *v88; // rdi
  _SLIST_ENTRY *v89; // r14
  _MDL *v90; // rcx
  void (__fastcall **v91)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v92)(FxRequestFromLookaside *, unsigned int); // rdi
  FxRequestTimer *v93; // rcx
  void (__fastcall ***v94)(FxRequestFromLookaside *, unsigned int); // rcx
  _MDL *v95; // rdx
  void (__fastcall **v96)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v97)(FxRequestFromLookaside *, unsigned int); // rdi
  FxRequestTimer *v98; // rcx
  void (__fastcall ***v99)(FxRequestFromLookaside *, unsigned int); // rcx
  const void *_a1; // rbp
  _LIST_ENTRY *Blink; // rcx
  const void *v102; // rax
  const void *v103; // rax
  FxTagTracker *v104; // rcx
  void (__fastcall **v105)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v106; // rcx
  FX_POOL_HEADER *v107; // rax
  FxVerifierLock *v108; // rcx
  void (__fastcall **v109)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v110; // rcx
  FxRequestCompletionState v111; // esi
  FxIoQueue *v112; // rdi
  _IRP *v113; // rcx
  CCHAR v114; // dl
  FxRequest *v115; // rcx
  _FX_DRIVER_GLOBALS *v116; // rdx
  const void *_a2; // rcx
  const void *v118; // rax
  __int64 v119; // r8
  const void *v120; // rax
  const void *v121; // rcx
  int v122; // ebx
  _LIST_ENTRY *v123; // rcx
  const void *ObjectHandleUnchecked; // rax
  FxTagTracker *v125; // rcx
  void (__fastcall **v126)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v127; // rcx
  FX_POOL_HEADER *v128; // rax
  FxVerifierLock *v129; // rcx
  void (__fastcall **v130)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v131; // rcx
  FxRequestCompletionState v132; // esi
  FxIoQueue *v133; // rdi
  _IRP *v134; // rcx
  CCHAR v135; // dl
  FxRequest *v136; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 PreviousIrql[7]; // [rsp+41h] [rbp-67h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+48h] [rbp-60h]
  FxTagTracker *v140; // [rsp+50h] [rbp-58h]
  $8B26BD50DADCE63D5F5F71A785E147C5 *v141; // [rsp+58h] [rbp-50h]
  ULONG_PTR retaddr; // [rsp+A8h] [rbp+0h]
  char v143; // [rsp+B0h] [rbp+8h]
  signed __int32 v144; // [rsp+B0h] [rbp+8h]

  m_Globals = this->m_Globals;
  v5 = TagRequest;
  v6 = FileObject;
  globals = m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyGetRequestUpdateFlags(this, m_Globals, TagRequest);
    if ( result < 0 )
      return result;
  }
  if ( ((this->m_Type - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Au, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741436);
    return -1073741436;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)Blink, &irql, (unsigned __int8)TagRequest);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  if ( this->m_PowerState == FxIoQueuePowerOff )
  {
    if ( this->m_ObjectSize )
      v102 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v102 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxIoQueue_cpp_Traceguids, v102, -1071644157);
    FxNonPagedObject::Unlock(this, irql);
    return -1071644157;
  }
  if ( (this->m_QueueState & 2) == 0 )
  {
    if ( this->m_ObjectSize )
      v103 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v103 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Cu, WPP_FxIoQueue_cpp_Traceguids, v103, -1071644157);
    FxNonPagedObject::Unlock(this, irql);
    return -1071644157;
  }
  while ( 1 )
  {
    v8 = &FxNonPagedObject::`vftable';
    v9 = &FxRequestBase::`vftable';
    p_m_Queue = &this->m_Queue;
    if ( !v5 )
      break;
    v16 = &v5->120;
    if ( v5 == (FxRequest *)-120LL )
      break;
    if ( !FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &v5->m_CsqContext) )
    {
      v122 = -1073741275;
      goto LABEL_345;
    }
    v9 = &FxRequestBase::`vftable';
    v8 = &FxNonPagedObject::`vftable';
LABEL_18:
    Flink = v16[-5].m_ListEntry.Flink;
    v18 = (unsigned __int64)&v16[-5];
    v19 = (__int64 (__fastcall *)(FxRequest *, void *, __int64, char *))Flink[1].Flink;
    *(_QWORD *)(v18 + 224) = 0LL;
    if ( v19 != FxRequest::Release )
    {
      v19((FxRequest *)v18, (void *)1969583441, 2102LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      goto LABEL_24;
    }
    v20 = *(_BYTE *)(v18 + 238);
    v21 = *(_BYTE *)(v18 + 213) == 0;
    v22 = *(_BYTE *)(v18 + 354);
    v143 = v20;
    if ( *(char *)(v18 + 24) < 0 )
    {
      v104 = *(FxTagTracker **)(v18 - 32);
      if ( v104 )
      {
        FxTagTracker::UpdateTagHistory(
          v104,
          (void *)0x75657551,
          2102,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagRelease,
          *(_DWORD *)(v18 + 12) - 1);
        v9 = &FxRequestBase::`vftable';
        v8 = &FxNonPagedObject::`vftable';
      }
      v20 = v143;
    }
    v23 = _InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
    if ( !v23 )
    {
      v37 = *(_WORD *)(v18 + 24);
      if ( (v37 & 0x20) != 0 || (v37 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked((FxObject *)v18, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(*(FxDisposeList **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 72LL) + 344LL), (FxObject *)v18);
        goto LABEL_81;
      }
      if ( (v37 & 0x80u) != 0 )
      {
        v38 = *(FxTagTracker **)(v18 - 32);
        v140 = v38;
        if ( v38 )
        {
          FxTagTracker::CheckForAbandondedTags(v38);
          v9 = &FxRequestBase::`vftable';
          v8 = &FxNonPagedObject::`vftable';
        }
      }
      else
      {
        v38 = 0LL;
        v140 = 0LL;
      }
      v39 = *(_WORD *)(v18 + 10);
      if ( v39 && (*(_BYTE *)(v18 + 24) & 8) != 0 )
      {
        v40 = (_QWORD *)(v18 + v39);
        if ( v40 )
        {
          do
          {
            v41 = (void (__fastcall *)(unsigned __int64))v40[2];
            if ( v41 )
            {
              v41(v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
              v40[2] = 0LL;
            }
            v42 = (void (__fastcall *)(unsigned __int64))v40[3];
            if ( v42 )
            {
              v42(v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
              v40[3] = 0LL;
            }
            v40 = (_QWORD *)v40[1];
          }
          while ( v40 );
          v38 = v140;
          v9 = &FxRequestBase::`vftable';
          v8 = &FxNonPagedObject::`vftable';
        }
        v43 = *(_WORD *)(v18 + 10);
        LOBYTE(v15) = 1;
        if ( v43 )
        {
          v44 = (_QWORD *)(v18 + v43);
          if ( v44 )
          {
            do
            {
              v45 = (_QWORD *)v44[1];
              if ( !(_BYTE)v15 )
                FxPoolFree(v44);
              LOBYTE(v15) = 0;
              v44 = v45;
            }
            while ( v45 );
            v9 = &FxRequestBase::`vftable';
            v8 = &FxNonPagedObject::`vftable';
          }
        }
      }
      if ( v38 )
      {
        *(_QWORD *)(v18 - 32) = 0LL;
        FxTagTracker::`scalar deleting destructor'(v38, (unsigned int)v15);
        v9 = &FxRequestBase::`vftable';
        v8 = &FxNonPagedObject::`vftable';
      }
      v46 = FxRequestFromLookaside::SelfDestruct;
      v47 = **(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
      if ( v47 == FxRequestFromLookaside::SelfDestruct )
      {
        v48 = *(_MDL **)(v18 + 240);
        v49 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 96);
        *(_QWORD *)v18 = v9;
        if ( v48 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v18 + 16) + 316LL) )
            FxMdlFreeDebug(*(_FX_DRIVER_GLOBALS **)(v18 + 16), v48);
          else
            IoFreeMdl(v48);
          v8 = &FxNonPagedObject::`vftable';
        }
        v50 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 168);
        v51 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 152);
        if ( v50 )
        {
          if ( v51 )
          {
            (*((void (__fastcall **)(_QWORD, unsigned __int64))*v50 + 3))(v50, v18);
            v8 = &FxNonPagedObject::`vftable';
          }
          v105 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 168);
          if ( v105 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))*v105)(v105, 1LL);
            v8 = &FxNonPagedObject::`vftable';
          }
        }
        if ( v51 && *(_BYTE *)(v18 + 213) == 1 )
        {
          IoFreeIrp(*(PIRP *)(v18 + 152));
          v8 = &FxNonPagedObject::`vftable';
        }
        v52 = *(FxRequestTimer **)(v18 + 176);
        if ( v52 )
        {
          FxRequestTimer::`scalar deleting destructor'(v52, (unsigned int)v46);
          v8 = &FxNonPagedObject::`vftable';
        }
        v53 = *(_BYTE *)(v18 + 24);
        *(_QWORD *)v18 = v8;
        if ( v53 < 0 )
        {
          v106 = *(FxVerifierLock **)(v18 - 24);
          if ( v106 )
          {
            FxVerifierLock::`scalar deleting destructor'(v106, (unsigned int)v46);
            *(_QWORD *)(v18 - 24) = 0LL;
          }
        }
        *(_BYTE *)(v18 + 104) = 0;
        FxObject::~FxObject((FxObject *)v18, (unsigned int)v46, (unsigned int)v14);
        if ( *(_BYTE *)(v18 + 355) )
        {
          v107 = FxObject::_CleanupPointer(*(_FX_DRIVER_GLOBALS **)(v18 + 16), (FxObject *)v18);
          ExFreePoolWithTag(v107->Base, 0);
          v5 = TagRequest;
        }
        else
        {
          if ( *(char *)(v18 + 24) < 0 )
            v54 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 32);
          else
            v54 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
          if ( *((_BYTE *)v49[2] + 264) )
            FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)*(v54 - 2));
          v55 = v49[81];
          if ( v55 && *((_WORD *)v55 + 4) == 4354 && *((_BYTE *)v55 + 1651) )
          {
            v88 = (_SLIST_ENTRY *)*(v54 - 2);
            if ( ExQueryDepthSList((PSLIST_HEADER)v49 + 28) < *((_WORD *)v49 + 232) )
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)v49 + 28, v88);
              v20 = v143;
              v5 = TagRequest;
              goto LABEL_21;
            }
            ((void (__fastcall *)(_SLIST_ENTRY *))v49[63])(v88);
            v5 = TagRequest;
          }
          else
          {
            v56 = (_SLIST_ENTRY *)*(v54 - 2);
            ++*((_DWORD *)v49 + 119);
            if ( ExQueryDepthSList((PSLIST_HEADER)v49 + 28) >= *((_WORD *)v49 + 232) )
            {
              ++*((_DWORD *)v49 + 120);
              ((void (__fastcall *)(_SLIST_ENTRY *))v49[63])(v56);
            }
            else
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)v49 + 28, v56);
            }
            v5 = TagRequest;
          }
        }
LABEL_81:
        v20 = v143;
        goto LABEL_21;
      }
      v76 = FxObject::SelfDestruct;
      if ( (char *)v47 == (char *)FxObject::SelfDestruct )
      {
        v77 = *(FxRegKey *(__fastcall **)(FxRegKey *, char))(*(_QWORD *)v18 + 8LL);
        if ( v77 == FxRegKey::`scalar deleting destructor' )
        {
          *(_QWORD *)v18 = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
          v78 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 112);
          if ( v78 )
          {
            ZwClose(v78);
            *(_QWORD *)(v18 + 112) = 0LL;
          }
          v79 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 104);
          *(_QWORD *)v18 = &FxObject::`vftable'.WdfVerifierAllocateFailCount;
          if ( v79 )
          {
            FxPoolFree(v79);
            *(_QWORD *)(v18 + 104) = 0LL;
          }
          FxObject::~FxObject((FxObject *)v18, (unsigned int)v76, (unsigned int)v14);
          if ( *(char *)(v18 + 24) < 0 )
            v80 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 32);
          else
            v80 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
          if ( !v80 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          goto LABEL_131;
        }
        if ( (char *)v77 == (char *)FxFileObject::`vector deleting destructor' )
        {
          *(_QWORD *)v18 = v8;
          *(_QWORD *)(v18 + 120) = &FxFileObject::`vftable'{for `IFxHasCallbacks'};
          if ( *(char *)(v18 + 24) < 0 )
          {
            v108 = *(FxVerifierLock **)(v18 - 24);
            if ( v108 )
            {
              FxVerifierLock::`scalar deleting destructor'(v108, (unsigned int)FxObject::SelfDestruct);
              *(_QWORD *)(v18 - 24) = 0LL;
            }
          }
          *(_BYTE *)(v18 + 104) = 0;
          FxObject::~FxObject((FxObject *)v18, (unsigned int)v76, (unsigned int)v14);
          if ( *(char *)(v18 + 24) < 0 )
            v80 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 32);
          else
            v80 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
          if ( !v80 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
LABEL_131:
          if ( ((unsigned __int16)v80 & 0xFFF) != 0 )
          {
            v81 = (FX_POOL_TRACKER *)*(v80 - 2);
            if ( *((_BYTE *)*(v80 - 1) + 264) )
            {
              if ( FxIsPagedPoolType(v81->PoolType) )
                FxPoolRemovePagedAllocateTracker(v81);
              else
                FxPoolRemoveNonPagedAllocateTracker(v81);
              memset(v81, 0, v81->Size + 64);
            }
            ExFreePoolWithTag(v81, 0);
            v20 = v143;
            v5 = TagRequest;
            goto LABEL_21;
          }
          ExFreePoolWithTag(v80, 0);
        }
        else
        {
          if ( (char *)v77 == (char *)FxRequest::`scalar deleting destructor' )
          {
            *(_QWORD *)v18 = v9;
            v90 = *(_MDL **)(v18 + 240);
            if ( v90 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(v18 + 16) + 316LL) )
                FxMdlFreeDebug(*(_FX_DRIVER_GLOBALS **)(v18 + 16), *(_MDL **)(v18 + 240));
              else
                IoFreeMdl(v90);
            }
            v91 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 168);
            v92 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 152);
            if ( v91 )
            {
              if ( v92 )
                (*((void (__fastcall **)(_QWORD, unsigned __int64))*v91 + 3))(v91, v18);
              v109 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 168);
              if ( v109 )
                (*(void (__fastcall **)(_QWORD, __int64))*v109)(v109, 1LL);
            }
            if ( v92 && *(_BYTE *)(v18 + 213) == 1 )
              IoFreeIrp(*(PIRP *)(v18 + 152));
            v93 = *(FxRequestTimer **)(v18 + 176);
            if ( v93 )
              FxRequestTimer::`scalar deleting destructor'(v93, (unsigned int)v76);
            *(_QWORD *)v18 = &FxNonPagedObject::`vftable';
            if ( *(char *)(v18 + 24) < 0 )
            {
              v110 = *(FxVerifierLock **)(v18 - 24);
              if ( v110 )
              {
                FxVerifierLock::`scalar deleting destructor'(v110, (unsigned int)v76);
                *(_QWORD *)(v18 - 24) = 0LL;
              }
            }
            *(_BYTE *)(v18 + 104) = 0;
            FxObject::~FxObject((FxObject *)v18, (unsigned int)v76, (unsigned int)v14);
            if ( *(char *)(v18 + 24) < 0 )
              v94 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 32);
            else
              v94 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
            FxPoolFree(v94);
            v20 = v143;
            v5 = TagRequest;
            goto LABEL_21;
          }
          v77((FxRegKey *)v18, 1);
        }
      }
      else
      {
        ((void (__fastcall *)(unsigned __int64))v47)(v18);
      }
      v5 = TagRequest;
      v20 = v143;
    }
LABEL_21:
    if ( v22 && v23 == 1 && *(_BYTE *)(v18 + 214) )
    {
      FxIoQueue::ReturnReservedRequest(*(FxIoQueue **)(v18 + 336), (FxRequest *)v18);
LABEL_23:
      m_Globals = globals;
      v6 = FileObject;
      goto LABEL_24;
    }
    if ( v21 || !v20 || v23 != 1 || !*(_BYTE *)(v18 + 214) )
      goto LABEL_23;
    v111 = *(unsigned __int8 *)(v18 + 237);
    v112 = *(FxIoQueue **)(v18 + 248);
    v113 = *(_IRP **)(v18 + 152);
    v114 = *(_BYTE *)(v18 + 236);
    *(_QWORD *)(v18 + 248) = 0LL;
    *(_QWORD *)(v18 + 152) = 0LL;
    *(_BYTE *)(v18 + 237) = 0;
    IofCompleteRequest(v113, v114);
    FxRequest::PostProcessCompletionForDriverRequest(v115, v111, v112);
    m_Globals = globals;
    v6 = FileObject;
LABEL_24:
    if ( this->m_AllowZeroLengthRequests )
      goto LABEL_28;
    if ( *(_BYTE *)(*(_QWORD *)(v18 + 16) + 321LL) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)v18, PreviousIrql);
      v116 = *(_FX_DRIVER_GLOBALS **)(v18 + 16);
      if ( v116->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v18, v116);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v18, PreviousIrql[0]);
    }
    v24 = *(void (__fastcall **)(FxRequestFromLookaside *, unsigned int))(*(_QWORD *)(v18 + 152) + 184LL);
    if ( *(_BYTE *)v24 != 3 )
    {
      if ( *(_BYTE *)v24 == 4 && !*((_DWORD *)v24 + 2) )
      {
        FxNonPagedObject::Unlock(this, irql);
        if ( m_Globals->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v121 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v121 = 0LL;
          if ( *(_WORD *)(v18 + 10) )
            v120 = (const void *)(v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v120 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Eu, WPP_FxIoQueue_cpp_Traceguids, v120, v121);
        }
        *(_QWORD *)(*(_QWORD *)(v18 + 152) + 56LL) = 0LL;
        FxRequest::Complete((FxRequest *)v18, 0);
        v119 = 1136LL;
        goto LABEL_282;
      }
LABEL_28:
      ++this->m_DriverIoCount;
      v25 = this->m_DriverOwned.Blink;
      v26 = (_LIST_ENTRY *)(v18 + 304);
      if ( v25->Flink != &this->m_DriverOwned )
        __fastfail(3u);
      v26->Flink = &this->m_DriverOwned;
      *(_QWORD *)(v18 + 312) = v25;
      v25->Flink = v26;
      this->m_DriverOwned.Blink = v26;
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v123 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)v123, irql, (unsigned __int8)v14);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      if ( *(_BYTE *)(v18 + 214) )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)v18);
        WPP_IFR_SF_q(
          *(_FX_DRIVER_GLOBALS **)(v18 + 16),
          2u,
          0x10u,
          0x27u,
          WPP_FxRequest_cpp_Traceguids,
          ObjectHandleUnchecked);
        FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v18 + 16));
      }
      else
      {
        v30 = *(unsigned __int8 *)(v18 + 237);
        *(_BYTE *)(v18 + 237) = 1;
        if ( !v30 )
        {
          v27 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v18 + 12));
          if ( *(char *)(v18 + 24) < 0 )
          {
            v28 = *(FxTagTracker **)(v18 - 32);
            if ( v28 )
              FxTagTracker::UpdateTagHistory(
                v28,
                (void *)0x74617453,
                1820,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                TagAddRef,
                (unsigned int)v27);
          }
        }
      }
      if ( m_Globals->FxVerifierOn )
        FxIoQueue::Vf_VerifyGetRequestRestoreFlags((FxIoQueue *)v28, v27, (FxRequest *)v18);
      v31 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
      *(_BYTE *)(v18 + 352) = 1;
      v32 = (__int64 (__fastcall *)(FxRequest *, void *, __int64, char *))v31[2];
      if ( v32 == FxRequest::Release )
      {
        v33 = *(_BYTE *)(v18 + 354);
        v34 = *(_BYTE *)(v18 + 213) == 0;
        v35 = *(_BYTE *)(v18 + 238);
        if ( *(char *)(v18 + 24) < 0 )
        {
          v125 = *(FxTagTracker **)(v18 - 32);
          if ( v125 )
            FxTagTracker::UpdateTagHistory(
              v125,
              (void *)0x74617453,
              1190,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
              TagRelease,
              *(_DWORD *)(v18 + 12) - 1);
        }
        v144 = _InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
        if ( !v144 )
        {
          v57 = *(_WORD *)(v18 + 24);
          if ( (v57 & 0x20) != 0 || (v57 & 0x10) != 0 && KeGetCurrentIrql() )
          {
            FxObject::SetObjectStateLocked((FxObject *)v18, FxObjectStateDeferedDestroy);
            FxDisposeList::Add(*(FxDisposeList **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 72LL) + 344LL), (FxObject *)v18);
            goto LABEL_39;
          }
          if ( (v57 & 0x80u) != 0 )
          {
            v58 = *(FxTagTracker **)(v18 - 32);
            if ( v58 )
              FxTagTracker::CheckForAbandondedTags(*(FxTagTracker **)(v18 - 32));
          }
          else
          {
            v58 = 0LL;
          }
          v59 = *(_WORD *)(v18 + 10);
          if ( v59 && (*(_BYTE *)(v18 + 24) & 8) != 0 )
          {
            for ( i = (_QWORD *)(v18 + v59); i; i = (_QWORD *)i[1] )
            {
              v61 = (void (__fastcall *)(unsigned __int64, _FX_DRIVER_GLOBALS *))i[2];
              if ( v61 )
              {
                v61(v18 ^ 0xFFFFFFFFFFFFFFF8uLL, v27);
                i[2] = 0LL;
              }
              v62 = (void (__fastcall *)(unsigned __int64, _FX_DRIVER_GLOBALS *))i[3];
              if ( v62 )
              {
                v62(v18 ^ 0xFFFFFFFFFFFFFFF8uLL, v27);
                i[3] = 0LL;
              }
            }
            v63 = *(_WORD *)(v18 + 10);
            LOBYTE(v27) = 1;
            if ( v63 )
            {
              v64 = (_QWORD *)(v18 + v63);
              if ( v64 )
              {
                do
                {
                  v65 = (_QWORD *)v64[1];
                  if ( !(_BYTE)v27 )
                    FxPoolFree(v64);
                  LOBYTE(v27) = 0;
                  v64 = v65;
                }
                while ( v65 );
              }
            }
          }
          if ( v58 )
          {
            *(_QWORD *)(v18 - 32) = 0LL;
            FxTagTracker::`scalar deleting destructor'(v58, (unsigned int)v27);
          }
          v66 = **(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
          if ( v66 == FxRequestFromLookaside::SelfDestruct )
          {
            v67 = *(_MDL **)(v18 + 240);
            v68 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 96);
            *(_QWORD *)v18 = &FxRequestBase::`vftable';
            if ( v67 )
              FxMdlFree(*(_FX_DRIVER_GLOBALS **)(v18 + 16), v67);
            v69 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 168);
            v70 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 152);
            if ( v69 )
            {
              if ( v70 )
                (*((void (__fastcall **)(_QWORD, unsigned __int64))*v69 + 3))(v69, v18);
              v126 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 168);
              if ( v126 )
                (*(void (__fastcall **)(_QWORD, __int64))*v126)(v126, 1LL);
            }
            if ( v70 && *(_BYTE *)(v18 + 213) == 1 )
              IoFreeIrp(*(PIRP *)(v18 + 152));
            v71 = *(FxRequestTimer **)(v18 + 176);
            if ( v71 )
              FxRequestTimer::`scalar deleting destructor'(v71, (unsigned int)v67);
            *(_QWORD *)v18 = &FxNonPagedObject::`vftable';
            if ( *(char *)(v18 + 24) < 0 )
            {
              v127 = *(FxVerifierLock **)(v18 - 24);
              if ( v127 )
              {
                FxVerifierLock::`scalar deleting destructor'(v127, (unsigned int)v67);
                *(_QWORD *)(v18 - 24) = 0LL;
              }
            }
            *(_BYTE *)(v18 + 104) = 0;
            FxObject::~FxObject((FxObject *)v18, (unsigned int)v67, v29);
            if ( *(_BYTE *)(v18 + 355) )
            {
              v128 = FxObject::_CleanupPointer(*(_FX_DRIVER_GLOBALS **)(v18 + 16), (FxObject *)v18);
              ExFreePoolWithTag(v128->Base, 0);
            }
            else
            {
              if ( *(char *)(v18 + 24) < 0 )
                v72 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 32);
              else
                v72 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
              if ( *((_BYTE *)v68[2] + 264) )
                FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)*(v72 - 2));
              v73 = v68[81];
              if ( v73 && *((_WORD *)v73 + 4) == 4354 && *((_BYTE *)v73 + 1651) )
              {
                v89 = (_SLIST_ENTRY *)*(v72 - 2);
                if ( ExQueryDepthSList((PSLIST_HEADER)v68 + 28) >= *((_WORD *)v68 + 232) )
                  ((void (__fastcall *)(_SLIST_ENTRY *))v68[63])(v89);
                else
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)v68 + 28, v89);
              }
              else
              {
                v74 = (_SLIST_ENTRY *)*(v72 - 2);
                v75 = v68 + 56;
                ++*((_DWORD *)v75 + 7);
                if ( ExQueryDepthSList((PSLIST_HEADER)v75) >= *((_WORD *)v75 + 8) )
                {
                  ++*((_DWORD *)v75 + 8);
                  ((void (__fastcall *)(_SLIST_ENTRY *))v75[7])(v74);
                }
                else
                {
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)v75, v74);
                }
              }
            }
            goto LABEL_39;
          }
          v82 = FxObject::SelfDestruct;
          if ( (char *)v66 != (char *)FxObject::SelfDestruct )
          {
            ((void (__fastcall *)(unsigned __int64))v66)(v18);
            goto LABEL_39;
          }
          v83 = *(void (__fastcall **)(FxRequestFromLookaside *, unsigned int))(*(_QWORD *)v18 + 8LL);
          if ( (char *)v83 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            *(_QWORD *)v18 = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
            v84 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 112);
            if ( v84 )
            {
              ZwClose(v84);
              *(_QWORD *)(v18 + 112) = 0LL;
            }
            v85 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 104);
            *(_QWORD *)v18 = &FxObject::`vftable'.WdfVerifierAllocateFailCount;
            if ( v85 )
            {
              FxPoolFree(v85);
              *(_QWORD *)(v18 + 104) = 0LL;
            }
            FxObject::~FxObject((FxObject *)v18, (unsigned int)v82, v29);
            if ( *(char *)(v18 + 24) < 0 )
              v86 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 32);
            else
              v86 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
            if ( !v86 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          else
          {
            if ( (char *)v83 != (char *)FxFileObject::`vector deleting destructor' )
            {
              if ( (char *)v83 == (char *)FxRequest::`scalar deleting destructor' )
              {
                *(_QWORD *)v18 = &FxRequestBase::`vftable';
                v95 = *(_MDL **)(v18 + 240);
                if ( v95 )
                  FxMdlFree(*(_FX_DRIVER_GLOBALS **)(v18 + 16), v95);
                v96 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 168);
                v97 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 152);
                if ( v96 )
                {
                  if ( v97 )
                    (*((void (__fastcall **)(_QWORD, unsigned __int64))*v96 + 3))(v96, v18);
                  v130 = *(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 + 168);
                  if ( v130 )
                    (*(void (__fastcall **)(_QWORD, __int64))*v130)(v130, 1LL);
                }
                if ( v97 && *(_BYTE *)(v18 + 213) == 1 )
                  IoFreeIrp(*(PIRP *)(v18 + 152));
                v98 = *(FxRequestTimer **)(v18 + 176);
                if ( v98 )
                  FxRequestTimer::`scalar deleting destructor'(v98, (unsigned int)v95);
                *(_QWORD *)v18 = &FxNonPagedObject::`vftable';
                if ( *(char *)(v18 + 24) < 0 )
                {
                  v131 = *(FxVerifierLock **)(v18 - 24);
                  if ( v131 )
                  {
                    FxVerifierLock::`scalar deleting destructor'(v131, (unsigned int)v95);
                    *(_QWORD *)(v18 - 24) = 0LL;
                  }
                }
                *(_BYTE *)(v18 + 104) = 0;
                FxObject::~FxObject((FxObject *)v18, (unsigned int)v95, v29);
                if ( *(char *)(v18 + 24) < 0 )
                  v99 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 32);
                else
                  v99 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
                FxPoolFree(v99);
              }
              else
              {
                v83((FxRequestFromLookaside *)v18, 1u);
              }
              goto LABEL_39;
            }
            *(_QWORD *)(v18 + 120) = &FxFileObject::`vftable'{for `IFxHasCallbacks'};
            *(_QWORD *)v18 = &FxNonPagedObject::`vftable';
            if ( *(char *)(v18 + 24) < 0 )
            {
              v129 = *(FxVerifierLock **)(v18 - 24);
              if ( v129 )
              {
                FxVerifierLock::`scalar deleting destructor'(v129, (unsigned int)FxObject::SelfDestruct);
                *(_QWORD *)(v18 - 24) = 0LL;
              }
            }
            *(_BYTE *)(v18 + 104) = 0;
            FxObject::~FxObject((FxObject *)v18, (unsigned int)v82, v29);
            if ( *(char *)(v18 + 24) < 0 )
              v86 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 32);
            else
              v86 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
            if ( !v86 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          if ( ((unsigned __int16)v86 & 0xFFF) != 0 )
          {
            v87 = (FX_POOL_TRACKER *)*(v86 - 2);
            if ( *((_BYTE *)*(v86 - 1) + 264) )
            {
              if ( FxIsPagedPoolType(v87->PoolType) )
                FxPoolRemovePagedAllocateTracker(v87);
              else
                FxPoolRemoveNonPagedAllocateTracker(v87);
              memset(v87, 0, v87->Size + 64);
            }
            ExFreePoolWithTag(v87, 0);
          }
          else
          {
            ExFreePoolWithTag(v86, 0);
          }
        }
LABEL_39:
        if ( v33 && v144 == 1 && *(_BYTE *)(v18 + 214) )
        {
          FxIoQueue::ReturnReservedRequest(*(FxIoQueue **)(v18 + 336), (FxRequest *)v18);
        }
        else if ( !v34 && v35 && v144 == 1 )
        {
          if ( *(_BYTE *)(v18 + 214) )
          {
            v132 = *(unsigned __int8 *)(v18 + 237);
            v133 = *(FxIoQueue **)(v18 + 248);
            v134 = *(_IRP **)(v18 + 152);
            v135 = *(_BYTE *)(v18 + 236);
            *(_BYTE *)(v18 + 237) = 0;
            *(_QWORD *)(v18 + 248) = 0LL;
            *(_QWORD *)(v18 + 152) = 0LL;
            IofCompleteRequest(v134, v135);
            FxRequest::PostProcessCompletionForDriverRequest(v136, v132, v133);
          }
        }
      }
      else
      {
        v32(
          (FxRequest *)v18,
          (void *)1952543827,
          1190LL,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      }
      *pOutRequest = (FxRequest *)v18;
      return 0;
    }
    if ( *((_DWORD *)v24 + 2) )
      goto LABEL_28;
    FxNonPagedObject::Unlock(this, irql);
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      if ( *(_WORD *)(v18 + 10) )
        v118 = (const void *)(v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v118 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Du, WPP_FxIoQueue_cpp_Traceguids, v118, _a2);
    }
    *(_QWORD *)(*(_QWORD *)(v18 + 152) + 56LL) = 0LL;
    FxRequest::Complete((FxRequest *)v18, 0);
    v119 = 1120LL;
LABEL_282:
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v18 + 16LL))(
      v18,
      1886220099LL,
      v119,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql);
  }
  v11 = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
  for ( j = 0LL; v11 != p_m_Queue; j = 0LL )
  {
    j = (_IRP *)&v11[-5].m_RequestCount;
    if ( !v6 )
      break;
    if ( j->Tail.Overlay.CurrentStackLocation->FileObject == v6 )
      break;
    v11 = (FxIrpQueue *)v11->m_Queue.Flink;
  }
  if ( j )
  {
    while ( !_InterlockedExchange64((volatile __int64 *)&j->CancelRoutine, 0LL) )
    {
      j = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, j, v6);
      if ( !j )
        goto LABEL_341;
      p_m_Queue = &this->m_Queue;
    }
    p_ListEntry = &j->Tail.Overlay.ListEntry;
    v14 = j->Tail.Overlay.ListEntry.Flink;
    v15 = j->Tail.Overlay.ListEntry.Blink;
    if ( (void **)v14->Blink != &j->Tail.CompletionKey + 6 || v15->Flink != p_ListEntry )
      __fastfail(3u);
    v15->Flink = v14;
    v14->Blink = v15;
    j->Tail.Overlay.ListEntry.Blink = &j->Tail.Overlay.ListEntry;
    p_ListEntry->Flink = p_ListEntry;
    --p_m_Queue->m_RequestCount;
    v16 = ($8B26BD50DADCE63D5F5F71A785E147C5 *)j->Tail.Overlay.DriverContext[3];
    if ( v16->m_CsqContext.Type == 1 )
      v16->m_CsqContext.Irp = 0LL;
    v141 = v16;
    j->Tail.Overlay.DriverContext[3] = 0LL;
    goto LABEL_18;
  }
LABEL_341:
  v122 = -2147483622;
  if ( !v6 && !v5 && this->m_Queue.m_RequestCount > 0 )
    this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
LABEL_345:
  FxNonPagedObject::Unlock(this, irql);
  return v122;
}
