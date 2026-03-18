/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000F470
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x1C003ACC0 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C003DAB0 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C00935F0 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 * Callees:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000577C (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0016D08 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001CEF0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003E200 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C003E22C (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003F20C (-PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003F2C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003F338 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003F9DC (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003FE38 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0066060 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4780 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D5324 (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D536C (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _FILE_OBJECT *v6; // r14
  $4F60D2EEAF443BADC51864A01D9AEC36 *v8; // rdi
  void (__fastcall *v9)(FxObject *, unsigned int); // r11
  void (__fastcall *const *v10)(); // r10
  FxIrpQueue *p_m_Queue; // r9
  FxIrpQueue *Flink; // rdx
  _IRP *j; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v15; // r8
  _LIST_ENTRY *v16; // rdx
  _QWORD *v17; // rbx
  void (__fastcall *const **v18)(); // rbx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  char v21; // cl
  char v22; // r12
  char v23; // r13
  signed __int32 v24; // r15d
  _FX_DRIVER_GLOBALS *v25; // rbp
  FxTagTracker *v26; // r13
  void (__fastcall *v27)(FxRequestFromLookaside *, unsigned int); // rcx
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v29; // rax
  unsigned __int64 v30; // rdx
  FxTagTracker *v31; // rcx
  unsigned int v32; // r8d
  char v33; // al
  __int64 v34; // rax
  __int64 (__fastcall *v35)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  char v36; // bp
  char v37; // r14
  char v38; // r12
  signed __int32 v39; // edi
  int result; // eax
  __int16 v41; // cx
  FxTagTracker *v42; // r14
  unsigned __int16 v43; // cx
  _QWORD *v44; // rdi
  void (__fastcall *v45)(unsigned __int64); // rax
  void (__fastcall *v46)(unsigned __int64); // rax
  unsigned __int16 v47; // ax
  _QWORD *v48; // rcx
  _QWORD *v49; // rdi
  void (__fastcall *v50)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *v51)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v52; // rcx
  void (__fastcall **v53)(FxRequestFromLookaside *, unsigned int); // r14
  void (__fastcall **v54)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v55)(FxRequestFromLookaside *, unsigned int); // rdi
  FxRequestTimer *v56; // rcx
  void (__fastcall ***v57)(FxRequestFromLookaside *, unsigned int); // rbp
  void (__fastcall *v58)(FxRequestFromLookaside *, unsigned int); // rax
  _SLIST_ENTRY *v59; // rbp
  __int16 v60; // cx
  unsigned __int16 v61; // cx
  _QWORD *v62; // rsi
  void (__fastcall *v63)(unsigned __int64, unsigned __int64); // rax
  void (__fastcall *v64)(unsigned __int64, unsigned __int64); // rax
  unsigned __int16 v65; // ax
  _QWORD *v66; // rcx
  _QWORD *v67; // rsi
  void (__fastcall *v68)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *v69)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v70; // rcx
  void (__fastcall **v71)(FxRequestFromLookaside *, unsigned int); // rsi
  void (__fastcall **v72)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v73)(FxRequestFromLookaside *, unsigned int); // r15
  FxRequestTimer *v74; // rcx
  void (__fastcall ***v75)(FxRequestFromLookaside *, unsigned int); // r15
  void (__fastcall *v76)(FxRequestFromLookaside *, unsigned int); // rax
  _SLIST_ENTRY *v77; // r15
  void (__fastcall **v78)(FxRequestFromLookaside *, unsigned int); // rsi
  FxRegKey *(__fastcall *v79)(FxRegKey *, char); // rax
  void (__fastcall **v80)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v81)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall ***v82)(FxRequestFromLookaside *, unsigned int); // rax
  FX_POOL_TRACKER *v83; // rdi
  void (__fastcall *v84)(FxObject *, unsigned int); // rdx
  FxRequest *(__fastcall *v85)(FxRequest *, char); // rax
  void (__fastcall **v86)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v87)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall ***v88)(FxRequestFromLookaside *, unsigned int); // rax
  FX_POOL_TRACKER *v89; // rsi
  _MDL *v90; // rcx
  void (__fastcall **v91)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v92)(FxRequestFromLookaside *, unsigned int); // rdi
  FxRequestTimer *v93; // rcx
  void (__fastcall ***v94)(FxRequestFromLookaside *, unsigned int); // rcx
  _MDL *v95; // rcx
  void (__fastcall **v96)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v97)(FxRequestFromLookaside *, unsigned int); // rsi
  FxRequestTimer *v98; // rcx
  void (__fastcall ***v99)(FxRequestFromLookaside *, unsigned int); // rcx
  _SLIST_ENTRY *v100; // rbp
  _SLIST_ENTRY *v101; // r15
  unsigned __int16 v102; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rsi
  FxVerifierLock *v105; // rcx
  unsigned __int16 v106; // r9
  const void *v107; // rcx
  int v108; // edi
  FxTagTracker *v109; // rcx
  void (__fastcall **v110)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v111; // rcx
  _SINGLE_LIST_ENTRY *v112; // rax
  void (__fastcall **v113)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v114; // rcx
  char v115; // di
  FxIoQueue *v116; // rbp
  _IRP *v117; // rcx
  CCHAR v118; // dl
  _FX_DRIVER_GLOBALS *v119; // rdx
  const void *_a2; // rdx
  const void *v121; // rcx
  __int64 v122; // r8
  const void *v123; // rdx
  const void *v124; // rcx
  FxVerifierLock *v125; // rcx
  const void *ObjectHandleUnchecked; // rax
  FxTagTracker *v127; // rcx
  void (__fastcall **v128)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v129; // rcx
  _SINGLE_LIST_ENTRY *v130; // rax
  void (__fastcall **v131)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v132; // rcx
  char v133; // di
  FxIoQueue *v134; // rsi
  _IRP *v135; // rcx
  CCHAR v136; // dl
  FxRequest *v137; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+41h] [rbp-67h] BYREF
  unsigned __int8 v140[6]; // [rsp+42h] [rbp-66h] BYREF
  $4F60D2EEAF443BADC51864A01D9AEC36 *i; // [rsp+48h] [rbp-60h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+50h] [rbp-58h]
  _QWORD *v143; // [rsp+58h] [rbp-50h]
  ULONG_PTR retaddr; // [rsp+A8h] [rbp+0h]
  char v145; // [rsp+B0h] [rbp+8h]
  FxTagTracker *v146; // [rsp+B0h] [rbp+8h]

  m_Globals = this->m_Globals;
  globals = m_Globals;
  v6 = FileObject;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyGetRequestUpdateFlags(this, m_Globals, TagRequest);
    if ( result < 0 )
      return result;
  }
  if ( ((this->m_Type - 1) & 0xFFFFFFFD) != 0 )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Au, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741436);
    return -1073741436;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v105 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v105, &irql, (unsigned __int8)TagRequest);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( this->m_PowerState == FxIoQueuePowerOff )
  {
    v106 = 27;
    v107 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v107 = 0LL;
    goto LABEL_206;
  }
  if ( (this->m_QueueState & 2) == 0 )
  {
    v106 = 28;
    v107 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v107 = 0LL;
LABEL_206:
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, v106, WPP_FxIoQueue_cpp_Traceguids, v107, -1071644157);
    FxNonPagedObject::Unlock(this, irql);
    return -1071644157;
  }
  v8 = &TagRequest->120;
  if ( !TagRequest )
    v8 = 0LL;
  for ( i = v8; ; v8 = i )
  {
    v9 = FxObject::SelfDestruct;
    v10 = FxRequestBase::`vftable';
    p_m_Queue = &this->m_Queue;
    if ( !v8 )
      break;
    if ( !FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &v8->m_CsqContext) )
    {
      v108 = -1073741275;
      goto LABEL_269;
    }
    v18 = (void (__fastcall *const **)())&v8[-5];
    v10 = FxRequestBase::`vftable';
    v9 = FxObject::SelfDestruct;
LABEL_21:
    v19 = (__int64)*v18;
    v18[28] = 0LL;
    v20 = *(__int64 (__fastcall **)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))(v19 + 16);
    if ( v20 != FxRequest::Release )
    {
      v20(
        (FxRequest *)v18,
        (FxObjectDebugLeakDetection *)1969583441,
        2102LL,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      goto LABEL_26;
    }
    v21 = *((_BYTE *)v18 + 238);
    v22 = *((_BYTE *)v18 + 354);
    v23 = *((_BYTE *)v18 + 213);
    v145 = v21;
    if ( *((char *)v18 + 24) < 0 )
    {
      v109 = (FxTagTracker *)*(v18 - 6);
      if ( v109 )
      {
        FxTagTracker::UpdateTagHistory(
          v109,
          (void *)0x75657551,
          2102,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagRelease,
          *((_DWORD *)v18 + 3) - 1);
        v10 = FxRequestBase::`vftable';
        v9 = FxObject::SelfDestruct;
      }
      v21 = v145;
    }
    v24 = _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
    if ( !v24 )
    {
      v41 = *((_WORD *)v18 + 12);
      if ( (v41 & 0x20) != 0 || (v41 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked((FxObject *)v18, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(*(FxDisposeList **)(*((_QWORD *)v18[2] + 9) + 344LL), (FxObject *)v18);
LABEL_84:
        v21 = v145;
        goto LABEL_24;
      }
      if ( (v41 & 0x80u) != 0 )
      {
        v42 = (FxTagTracker *)*(v18 - 6);
        if ( v42 )
        {
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)*(v18 - 6));
          v10 = FxRequestBase::`vftable';
          v9 = FxObject::SelfDestruct;
        }
      }
      else
      {
        v42 = 0LL;
      }
      v43 = *((_WORD *)v18 + 5);
      if ( v43 && ((_BYTE)v18[3] & 8) != 0 )
      {
        v44 = (void (__fastcall *const **)())((char *)v18 + v43);
        if ( v44 )
        {
          do
          {
            v45 = (void (__fastcall *)(unsigned __int64))v44[2];
            if ( v45 )
            {
              v45((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
              v44[2] = 0LL;
            }
            v46 = (void (__fastcall *)(unsigned __int64))v44[3];
            if ( v46 )
            {
              v46((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
              v44[3] = 0LL;
            }
            v44 = (_QWORD *)v44[1];
          }
          while ( v44 );
          v10 = FxRequestBase::`vftable';
          v9 = FxObject::SelfDestruct;
        }
        v47 = *((_WORD *)v18 + 5);
        LOBYTE(v16) = 1;
        if ( v47 )
        {
          v48 = (void (__fastcall *const **)())((char *)v18 + v47);
          if ( v48 )
          {
            do
            {
              v49 = (_QWORD *)v48[1];
              if ( !(_BYTE)v16 )
                FxPoolFree(v48);
              LOBYTE(v16) = 0;
              v48 = v49;
            }
            while ( v49 );
            v10 = FxRequestBase::`vftable';
            v9 = FxObject::SelfDestruct;
          }
        }
      }
      if ( *((char *)v18 + 24) < 0 )
      {
        if ( *((_BYTE *)v18 - 20) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v18[2] + 41) + 12LL));
          if ( *((_WORD *)v18 + 4) == 4098
            && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)v18[2] + 41) + 16LL), 0xFFFFFFFF) != 1 )
          {
            v16 = (_LIST_ENTRY *)*((_QWORD *)v18[2] + 41);
            _InterlockedExchangeAdd((volatile signed __int32 *)&v16->Blink, -HIDWORD(v16->Flink));
          }
        }
      }
      if ( v42 )
      {
        *(v18 - 6) = 0LL;
        FxTagTracker::`scalar deleting destructor'(v42, (unsigned int)v16);
        v10 = FxRequestBase::`vftable';
        v9 = FxObject::SelfDestruct;
      }
      v50 = FxRequestFromLookaside::SelfDestruct;
      v51 = (void (__fastcall *)(FxRequestFromLookaside *, unsigned int))**v18;
      if ( v51 == FxRequestFromLookaside::SelfDestruct )
      {
        v52 = (_MDL *)v18[30];
        v53 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[12];
        *v18 = v10;
        if ( v52 )
        {
          if ( *((_BYTE *)v18[2] + 316) )
            FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v18[2], v52);
          else
            IoFreeMdl(v52);
        }
        v54 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[21];
        v55 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[19];
        if ( v54 )
        {
          if ( v55 )
            (*((void (__fastcall **)(_QWORD, void (__fastcall *const **)()))*v54 + 3))(v54, v18);
          v110 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[21];
          if ( v110 )
            (*(void (__fastcall **)(_QWORD, __int64))*v110)(v110, 1LL);
        }
        if ( v55 && *((_BYTE *)v18 + 213) == 1 )
          IoFreeIrp((PIRP)v18[19]);
        v56 = (FxRequestTimer *)v18[22];
        if ( v56 )
          FxRequestTimer::`scalar deleting destructor'(v56, (unsigned int)v50);
        *v18 = FxNonPagedObject::`vftable';
        if ( *((char *)v18 + 24) < 0 )
        {
          v111 = (FxVerifierLock *)*(v18 - 5);
          if ( v111 )
          {
            FxVerifierLock::`scalar deleting destructor'(v111, (unsigned int)v50);
            *(v18 - 5) = 0LL;
          }
        }
        *((_BYTE *)v18 + 104) = 0;
        FxObject::~FxObject((FxObject *)v18, (unsigned int)v50, (unsigned int)v15);
        if ( *((_BYTE *)v18 + 355) )
        {
          v112 = FxObject::_CleanupPointer((_FX_DRIVER_GLOBALS *)v18[2], (FxObject *)v18);
          ExFreePoolWithTag(v112->Next, 0);
          v6 = FileObject;
        }
        else
        {
          if ( *((char *)v18 + 24) < 0 )
            v57 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 6);
          else
            v57 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
          if ( *((_BYTE *)v53[2] + 264) )
            FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)*(v57 - 2));
          v58 = v53[81];
          if ( v58 && *((_WORD *)v58 + 4) == 4354 && *((_BYTE *)v58 + 1667) )
          {
            v100 = (_SLIST_ENTRY *)*(v57 - 2);
            if ( ExQueryDepthSList((PSLIST_HEADER)v53 + 28) < *((_WORD *)v53 + 232) )
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)v53 + 28, v100);
              v21 = v145;
              v6 = FileObject;
              goto LABEL_24;
            }
            ((void (__fastcall *)(_SLIST_ENTRY *))v53[63])(v100);
            v6 = FileObject;
          }
          else
          {
            v59 = (_SLIST_ENTRY *)*(v57 - 2);
            ++*((_DWORD *)v53 + 119);
            if ( ExQueryDepthSList((PSLIST_HEADER)v53 + 28) >= *((_WORD *)v53 + 232) )
            {
              ++*((_DWORD *)v53 + 120);
              ((void (__fastcall *)(_SLIST_ENTRY *))v53[63])(v59);
            }
            else
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)v53 + 28, v59);
            }
            v6 = FileObject;
          }
        }
        goto LABEL_84;
      }
      if ( (char *)v51 == (char *)v9 )
      {
        v79 = (FxRegKey *(__fastcall *)(FxRegKey *, char))*((_QWORD *)*v18 + 1);
        if ( v79 == FxRegKey::`scalar deleting destructor' )
        {
          *v18 = FxRegKey::`vftable';
          v80 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[14];
          if ( v80 )
          {
            ZwClose(v80);
            v18[14] = 0LL;
          }
          v81 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[13];
          *v18 = FxPagedObject::`vftable';
          if ( v81 )
          {
            FxPoolFree(v81);
            v18[13] = 0LL;
          }
          FxObject::~FxObject((FxObject *)v18, (unsigned int)v50, (unsigned int)v15);
          if ( *((char *)v18 + 24) < 0 )
            v82 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 6);
          else
            v82 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
          if ( !v82 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          goto LABEL_135;
        }
        if ( (char *)v79 == (char *)FxRequest::`scalar deleting destructor' )
        {
          *v18 = v10;
          v90 = (_MDL *)v18[30];
          if ( v90 )
          {
            if ( *((_BYTE *)v18[2] + 316) )
              FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v18[2], (_MDL *)v18[30]);
            else
              IoFreeMdl(v90);
          }
          v91 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[21];
          v92 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[19];
          if ( v91 )
          {
            if ( v92 )
              (*((void (__fastcall **)(_QWORD, void (__fastcall *const **)()))*v91 + 3))(v91, v18);
            v113 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[21];
            if ( v113 )
              (*(void (__fastcall **)(_QWORD, __int64))*v113)(v113, 1LL);
          }
          if ( v92 && *((_BYTE *)v18 + 213) == 1 )
            IoFreeIrp((PIRP)v18[19]);
          v93 = (FxRequestTimer *)v18[22];
          if ( v93 )
            FxRequestTimer::`scalar deleting destructor'(v93, (unsigned int)v50);
          *v18 = FxNonPagedObject::`vftable';
          if ( *((char *)v18 + 24) < 0 )
          {
            v114 = (FxVerifierLock *)*(v18 - 5);
            if ( v114 )
            {
              FxVerifierLock::`scalar deleting destructor'(v114, (unsigned int)v50);
              *(v18 - 5) = 0LL;
            }
          }
          *((_BYTE *)v18 + 104) = 0;
          FxObject::~FxObject((FxObject *)v18, (unsigned int)v50, (unsigned int)v15);
          if ( *((char *)v18 + 24) < 0 )
            v94 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 6);
          else
            v94 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
          FxPoolFree(v94);
          v21 = v145;
          v6 = FileObject;
          goto LABEL_24;
        }
        if ( (char *)v79 == (char *)FxMemoryBuffer::`scalar deleting destructor' )
        {
          *v18 = FxMemoryBuffer::`vftable'{for `FxObject'};
          v18[13] = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
          FxObject::~FxObject((FxObject *)v18, (unsigned int)FxRequestFromLookaside::SelfDestruct, (unsigned int)v15);
          if ( *((char *)v18 + 24) < 0 )
            v82 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 6);
          else
            v82 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
          if ( !v82 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
LABEL_135:
          if ( ((unsigned __int16)v82 & 0xFFF) != 0 )
          {
            v83 = (FX_POOL_TRACKER *)*(v82 - 2);
            if ( *((_BYTE *)*(v82 - 1) + 264) )
            {
              if ( FxIsPagedPoolType(v83->PoolType) )
                FxPoolRemovePagedAllocateTracker(v83);
              else
                FxPoolRemoveNonPagedAllocateTracker(v83);
              memset(v83, 0, v83->Size + 64);
            }
            ExFreePoolWithTag(v83, 0);
            v21 = v145;
            v6 = FileObject;
            goto LABEL_24;
          }
          ExFreePoolWithTag(v82, 0);
        }
        else
        {
          v79((FxRegKey *)v18, 1);
        }
      }
      else
      {
        ((void (__fastcall *)(void (__fastcall *const **)()))v51)(v18);
      }
      v6 = FileObject;
      v21 = v145;
    }
LABEL_24:
    if ( v22 && v24 == 1 && *((_BYTE *)v18 + 214) )
    {
      FxIoQueue::ReturnReservedRequest((FxIoQueue *)v18[42], (FxRequest *)v18);
    }
    else if ( v23 )
    {
      if ( v21 )
      {
        if ( v24 == 1 )
        {
          if ( *((_BYTE *)v18 + 214) )
          {
            v115 = *((_BYTE *)v18 + 237);
            v116 = (FxIoQueue *)v18[31];
            v117 = (_IRP *)v18[19];
            v118 = *((_BYTE *)v18 + 236);
            v18[31] = 0LL;
            v18[19] = 0LL;
            *((_BYTE *)v18 + 237) = 0;
            IofCompleteRequest(v117, v118);
            if ( v115 == 1 )
            {
              FxNonPagedObject::Lock(v116, &PreviousIrql);
              --v116->m_TwoPhaseCompletions;
              --v116->m_DriverIoCount;
              if ( v116->m_Dispatching )
                FxNonPagedObject::Unlock(v116, PreviousIrql);
              else
                FxIoQueue::DispatchEvents(v116, PreviousIrql, 0LL, v102);
            }
          }
        }
      }
    }
LABEL_26:
    v25 = globals;
    v26 = 0LL;
    if ( this->m_AllowZeroLengthRequests )
      goto LABEL_30;
    if ( *((_BYTE *)v18[2] + 321) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)v18, v140);
      v119 = (_FX_DRIVER_GLOBALS *)v18[2];
      if ( v119->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v18, v119);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v18, v140[0]);
    }
    v27 = (void (__fastcall *)(FxRequestFromLookaside *, unsigned int))*((_QWORD *)v18[19] + 23);
    if ( *(_BYTE *)v27 != 3 )
    {
      if ( *(_BYTE *)v27 == 4 && !*((_DWORD *)v27 + 2) )
      {
        FxNonPagedObject::Unlock(this, irql);
        if ( v25->FxVerboseOn )
        {
          v123 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v123 = 0LL;
          v124 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*((_WORD *)v18 + 5) )
            v124 = 0LL;
          WPP_IFR_SF_qq(v25, 5u, 0xDu, 0x1Eu, WPP_FxIoQueue_cpp_Traceguids, v124, v123);
        }
        *((_QWORD *)v18[19] + 7) = 0LL;
        FxRequest::Complete((FxRequest *)v18, 0);
        v122 = 1139LL;
        goto LABEL_292;
      }
LABEL_30:
      ++this->m_DriverIoCount;
      Blink = this->m_DriverOwned.Blink;
      v29 = (_LIST_ENTRY *)(v18 + 38);
      if ( Blink->Flink != &this->m_DriverOwned )
        __fastfail(3u);
      v29->Flink = &this->m_DriverOwned;
      v18[39] = (void (__fastcall *const *)())Blink;
      Blink->Flink = v29;
      this->m_DriverOwned.Blink = v29;
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v125 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v125, irql, (unsigned __int8)v15);
      }
      else
      {
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      }
      if ( *((_BYTE *)v18 + 214) )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)v18);
        WPP_IFR_SF_q(
          (_FX_DRIVER_GLOBALS *)v18[2],
          2u,
          0x10u,
          0x27u,
          WPP_FxRequest_cpp_Traceguids,
          ObjectHandleUnchecked);
        FxVerifierDbgBreakPoint((_FX_DRIVER_GLOBALS *)v18[2]);
      }
      else
      {
        v33 = *((_BYTE *)v18 + 237);
        *((_BYTE *)v18 + 237) = 1;
        if ( !v33 )
        {
          v30 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v18 + 3);
          if ( *((char *)v18 + 24) < 0 )
          {
            v31 = (FxTagTracker *)*(v18 - 6);
            if ( v31 )
              FxTagTracker::UpdateTagHistory(
                v31,
                (void *)0x74617453,
                1820,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                TagAddRef,
                v30);
          }
        }
      }
      if ( v25->FxVerifierOn )
        FxIoQueue::Vf_VerifyGetRequestRestoreFlags((FxIoQueue *)v31, (_FX_DRIVER_GLOBALS *)v30, (FxRequest *)v18);
      v34 = (__int64)*v18;
      *((_BYTE *)v18 + 352) = 1;
      v35 = *(__int64 (__fastcall **)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))(v34 + 16);
      if ( v35 == FxRequest::Release )
      {
        v36 = *((_BYTE *)v18 + 354);
        v37 = *((_BYTE *)v18 + 213);
        v38 = *((_BYTE *)v18 + 238);
        if ( *((char *)v18 + 24) < 0 )
        {
          v127 = (FxTagTracker *)*(v18 - 6);
          if ( v127 )
            FxTagTracker::UpdateTagHistory(
              v127,
              (void *)0x74617453,
              1193,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
              TagRelease,
              *((_DWORD *)v18 + 3) - 1);
        }
        v39 = _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
        if ( !v39 )
        {
          v60 = *((_WORD *)v18 + 12);
          if ( (v60 & 0x20) != 0 || (v60 & 0x10) != 0 && KeGetCurrentIrql() )
          {
            FxObject::SetObjectStateLocked((FxObject *)v18, FxObjectStateDeferedDestroy);
            FxDisposeList::Add(*(FxDisposeList **)(*((_QWORD *)v18[2] + 9) + 344LL), (FxObject *)v18);
            goto LABEL_41;
          }
          if ( (v60 & 0x80u) != 0 )
          {
            v26 = (FxTagTracker *)*(v18 - 6);
            v146 = v26;
            if ( v26 )
              FxTagTracker::CheckForAbandondedTags(v26);
          }
          else
          {
            v146 = 0LL;
          }
          v61 = *((_WORD *)v18 + 5);
          if ( v61 && ((_BYTE)v18[3] & 8) != 0 )
          {
            v62 = (void (__fastcall *const **)())((char *)v18 + v61);
            if ( v62 )
            {
              do
              {
                v63 = (void (__fastcall *)(unsigned __int64, unsigned __int64))v62[2];
                if ( v63 )
                {
                  v63((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL, v30);
                  v62[2] = 0LL;
                }
                v64 = (void (__fastcall *)(unsigned __int64, unsigned __int64))v62[3];
                if ( v64 )
                {
                  v64((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL, v30);
                  v62[3] = 0LL;
                }
                v62 = (_QWORD *)v62[1];
              }
              while ( v62 );
              v26 = v146;
            }
            v65 = *((_WORD *)v18 + 5);
            LOBYTE(v30) = 1;
            if ( v65 )
            {
              v66 = (void (__fastcall *const **)())((char *)v18 + v65);
              if ( v66 )
              {
                do
                {
                  v67 = (_QWORD *)v66[1];
                  if ( !(_BYTE)v30 )
                    FxPoolFree(v66);
                  LOBYTE(v30) = 0;
                  v66 = v67;
                }
                while ( v67 );
              }
            }
          }
          if ( *((char *)v18 + 24) < 0 )
          {
            if ( *((_BYTE *)v18 - 20) )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v18[2] + 41) + 12LL));
              if ( *((_WORD *)v18 + 4) == 4098
                && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)v18[2] + 41) + 16LL), 0xFFFFFFFF) != 1 )
              {
                v30 = *((_QWORD *)v18[2] + 41);
                _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 8), -*(_DWORD *)(v30 + 4));
              }
            }
          }
          if ( v26 )
          {
            *(v18 - 6) = 0LL;
            FxTagTracker::`scalar deleting destructor'(v26, v30);
          }
          v68 = FxRequestFromLookaside::SelfDestruct;
          v69 = (void (__fastcall *)(FxRequestFromLookaside *, unsigned int))**v18;
          if ( v69 == FxRequestFromLookaside::SelfDestruct )
          {
            v70 = (_MDL *)v18[30];
            v71 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[12];
            *v18 = FxRequestBase::`vftable';
            if ( v70 )
            {
              if ( *((_BYTE *)v18[2] + 316) )
                FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v18[2], v70);
              else
                IoFreeMdl(v70);
            }
            v72 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[21];
            v73 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[19];
            if ( v72 )
            {
              if ( v73 )
                (*((void (__fastcall **)(_QWORD, void (__fastcall *const **)()))*v72 + 3))(v72, v18);
              v128 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[21];
              if ( v128 )
                (*(void (__fastcall **)(_QWORD, __int64))*v128)(v128, 1LL);
            }
            if ( v73 && *((_BYTE *)v18 + 213) == 1 )
              IoFreeIrp((PIRP)v18[19]);
            v74 = (FxRequestTimer *)v18[22];
            if ( v74 )
              FxRequestTimer::`scalar deleting destructor'(v74, (unsigned int)v68);
            *v18 = FxNonPagedObject::`vftable';
            if ( *((char *)v18 + 24) < 0 )
            {
              v129 = (FxVerifierLock *)*(v18 - 5);
              if ( v129 )
              {
                FxVerifierLock::`scalar deleting destructor'(v129, (unsigned int)v68);
                *(v18 - 5) = 0LL;
              }
            }
            *((_BYTE *)v18 + 104) = 0;
            FxObject::~FxObject((FxObject *)v18, (unsigned int)v68, v32);
            if ( *((_BYTE *)v18 + 355) )
            {
              v130 = FxObject::_CleanupPointer((_FX_DRIVER_GLOBALS *)v18[2], (FxObject *)v18);
              ExFreePoolWithTag(v130->Next, 0);
            }
            else
            {
              if ( *((char *)v18 + 24) < 0 )
                v75 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 6);
              else
                v75 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
              if ( *((_BYTE *)v71[2] + 264) )
                FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)*(v75 - 2));
              v76 = v71[81];
              if ( v76 && *((_WORD *)v76 + 4) == 4354 && *((_BYTE *)v76 + 1667) )
              {
                v101 = (_SLIST_ENTRY *)*(v75 - 2);
                if ( ExQueryDepthSList((PSLIST_HEADER)v71 + 28) >= *((_WORD *)v71 + 232) )
                  ((void (__fastcall *)(_SLIST_ENTRY *))v71[63])(v101);
                else
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)v71 + 28, v101);
              }
              else
              {
                v77 = (_SLIST_ENTRY *)*(v75 - 2);
                v78 = v71 + 56;
                ++*((_DWORD *)v78 + 7);
                if ( ExQueryDepthSList((PSLIST_HEADER)v78) >= *((_WORD *)v78 + 8) )
                {
                  ++*((_DWORD *)v78 + 8);
                  ((void (__fastcall *)(_SLIST_ENTRY *))v78[7])(v77);
                }
                else
                {
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)v78, v77);
                }
              }
            }
            goto LABEL_41;
          }
          v84 = FxObject::SelfDestruct;
          if ( (char *)v69 != (char *)FxObject::SelfDestruct )
          {
            ((void (__fastcall *)(void (__fastcall *const **)()))v69)(v18);
            goto LABEL_41;
          }
          v85 = (FxRequest *(__fastcall *)(FxRequest *, char))*((_QWORD *)*v18 + 1);
          if ( (char *)v85 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            *v18 = FxRegKey::`vftable';
            v86 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[14];
            if ( v86 )
            {
              ZwClose(v86);
              v18[14] = 0LL;
            }
            v87 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[13];
            *v18 = FxPagedObject::`vftable';
            if ( v87 )
            {
              FxPoolFree(v87);
              v18[13] = 0LL;
            }
            FxObject::~FxObject((FxObject *)v18, (unsigned int)v84, v32);
            if ( *((char *)v18 + 24) < 0 )
              v88 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 6);
            else
              v88 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
            if ( !v88 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          else
          {
            if ( v85 == FxRequest::`scalar deleting destructor' )
            {
              *v18 = FxRequestBase::`vftable';
              v95 = (_MDL *)v18[30];
              if ( v95 )
              {
                if ( *((_BYTE *)v18[2] + 316) )
                  FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v18[2], (_MDL *)v18[30]);
                else
                  IoFreeMdl(v95);
              }
              v96 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[21];
              v97 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[19];
              if ( v96 )
              {
                if ( v97 )
                  (*((void (__fastcall **)(_QWORD, void (__fastcall *const **)()))*v96 + 3))(v96, v18);
                v131 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v18[21];
                if ( v131 )
                  (*(void (__fastcall **)(_QWORD, __int64))*v131)(v131, 1LL);
              }
              if ( v97 && *((_BYTE *)v18 + 213) == 1 )
                IoFreeIrp((PIRP)v18[19]);
              v98 = (FxRequestTimer *)v18[22];
              if ( v98 )
                FxRequestTimer::`scalar deleting destructor'(v98, (unsigned int)v84);
              *v18 = FxNonPagedObject::`vftable';
              if ( *((char *)v18 + 24) < 0 )
              {
                v132 = (FxVerifierLock *)*(v18 - 5);
                if ( v132 )
                {
                  FxVerifierLock::`scalar deleting destructor'(v132, (unsigned int)v84);
                  *(v18 - 5) = 0LL;
                }
              }
              *((_BYTE *)v18 + 104) = 0;
              FxObject::~FxObject((FxObject *)v18, (unsigned int)v84, v32);
              if ( *((char *)v18 + 24) < 0 )
                v99 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 6);
              else
                v99 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
              FxPoolFree(v99);
              goto LABEL_41;
            }
            if ( (char *)v85 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
            {
              v85((FxRequest *)v18, 1);
              goto LABEL_41;
            }
            *v18 = FxMemoryBuffer::`vftable'{for `FxObject'};
            v18[13] = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
            FxObject::~FxObject((FxObject *)v18, (unsigned int)FxObject::SelfDestruct, v32);
            if ( *((char *)v18 + 24) < 0 )
              v88 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))(v18 - 6);
            else
              v88 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))v18;
            if ( !v88 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          if ( ((unsigned __int16)v88 & 0xFFF) != 0 )
          {
            v89 = (FX_POOL_TRACKER *)*(v88 - 2);
            if ( *((_BYTE *)*(v88 - 1) + 264) )
            {
              if ( FxIsPagedPoolType(v89->PoolType) )
                FxPoolRemovePagedAllocateTracker(v89);
              else
                FxPoolRemoveNonPagedAllocateTracker(v89);
              memset(v89, 0, v89->Size + 64);
            }
            ExFreePoolWithTag(v89, 0);
          }
          else
          {
            ExFreePoolWithTag(v88, 0);
          }
        }
LABEL_41:
        if ( v36 && v39 == 1 && *((_BYTE *)v18 + 214) )
        {
          FxIoQueue::ReturnReservedRequest((FxIoQueue *)v18[42], (FxRequest *)v18);
        }
        else if ( v37 && v38 && v39 == 1 && *((_BYTE *)v18 + 214) )
        {
          v133 = *((_BYTE *)v18 + 237);
          v134 = (FxIoQueue *)v18[31];
          v135 = (_IRP *)v18[19];
          v136 = *((_BYTE *)v18 + 236);
          v18[31] = 0LL;
          v18[19] = 0LL;
          *((_BYTE *)v18 + 237) = 0;
          IofCompleteRequest(v135, v136);
          if ( v133 == 1 )
            FxIoQueue::PostRequestCompletedCallback(v134, v137);
        }
      }
      else
      {
        v35(
          (FxRequest *)v18,
          (FxObjectDebugLeakDetection *)1952543827,
          1193LL,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      }
      *pOutRequest = (FxRequest *)v18;
      return 0;
    }
    if ( *((_DWORD *)v27 + 2) )
      goto LABEL_30;
    FxNonPagedObject::Unlock(this, irql);
    if ( v25->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      v121 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*((_WORD *)v18 + 5) )
        v121 = 0LL;
      WPP_IFR_SF_qq(v25, 5u, 0xDu, 0x1Du, WPP_FxIoQueue_cpp_Traceguids, v121, _a2);
    }
    *((_QWORD *)v18[19] + 7) = 0LL;
    FxRequest::Complete((FxRequest *)v18, 0);
    v122 = 1123LL;
LABEL_292:
    (*((void (__fastcall **)(void (__fastcall *const **)(), __int64, __int64, const char *))*v18 + 2))(
      v18,
      1886220099LL,
      v122,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql);
  }
  Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
  for ( j = 0LL; Flink != p_m_Queue; j = 0LL )
  {
    j = (_IRP *)&Flink[-5].m_RequestCount;
    if ( !v6 )
      break;
    if ( j->Tail.Overlay.CurrentStackLocation->FileObject == v6 )
      break;
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
  }
  if ( j )
  {
    while ( !_InterlockedExchange64((volatile __int64 *)&j->CancelRoutine, 0LL) )
    {
      j = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, j, v6);
      p_m_Queue = &this->m_Queue;
      if ( !j )
        goto LABEL_213;
    }
    p_ListEntry = &j->Tail.Overlay.ListEntry;
    v15 = j->Tail.Overlay.ListEntry.Flink;
    v16 = j->Tail.Overlay.ListEntry.Blink;
    if ( (void **)v15->Blink != &j->Tail.CompletionKey + 6 || v16->Flink != p_ListEntry )
      __fastfail(3u);
    v16->Flink = v15;
    v15->Blink = v16;
    j->Tail.Overlay.ListEntry.Blink = &j->Tail.Overlay.ListEntry;
    p_ListEntry->Flink = p_ListEntry;
    --p_m_Queue->m_RequestCount;
    v17 = j->Tail.Overlay.DriverContext[3];
    if ( *(_DWORD *)v17 == 1 )
      v17[1] = 0LL;
    v143 = v17;
    v18 = (void (__fastcall *const **)())(v17 - 15);
    j->Tail.Overlay.DriverContext[3] = 0LL;
    goto LABEL_21;
  }
LABEL_213:
  v108 = -2147483622;
LABEL_269:
  if ( v108 == -2147483622 && !v6 && !TagRequest && this->m_Queue.m_RequestCount > 0 )
    this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
  FxNonPagedObject::Unlock(this, irql);
  return v108;
}
