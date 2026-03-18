/*
 * XREFs of ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007600
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0007590 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C0064910 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000AF2C (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001E254 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0023424 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0055834 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?InvokeAllocateResourcesCallback@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00561A4 (-InvokeAllocateResourcesCallback@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0056944 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0069D70 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C006B488 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0076D80 (WPP_IFR_SF_qcDqd.c)
 *     ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x1C0081D18 (-Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0081E7C (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0083350 (WPP_IFR_SF_qLsqd.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C00836D0 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA1A8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00BA628 (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall FxPkgIo::DispatchStep1(FxPkgIo *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdi
  _LIST_ENTRY *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 MajorFunction; // rcx
  FxIoQueue *v9; // r15
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // rax
  FxCxDeviceInfo *v12; // rsi
  _WDF_EXECUTION_LEVEL *p_RequestAttributes; // rsi
  FxDeviceBase *m_DeviceBase; // rcx
  const void *v15; // rdi
  FxRequest *v16; // r14
  __int64 v17; // rax
  _BYTE *m_Globals; // r12
  MxLock *p_m_SpinLock; // r12
  FX_POOL_TRACKER *v20; // rbx
  _QWORD *p_Flink; // r12
  _BYTE *v22; // rax
  FxRequest *v23; // rbx
  char *p_m_ParentObject; // r12
  __int64 v25; // rax
  FxObject *v26; // rcx
  _FX_DRIVER_GLOBALS *v27; // rax
  PIRP v28; // r11
  _IRP *m_Irp; // rdx
  _IO_STACK_LOCATION *v30; // r8
  unsigned __int8 v31; // al
  void *MasterIrp; // rax
  FxObject *v33; // rdx
  unsigned __int16 m_ObjectSize; // ax
  char *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // r12d
  unsigned __int8 v39; // al
  FxRequest *v40; // rbx
  char m_ObjectFlags; // al
  KIRQL v42; // bl
  unsigned __int8 v43; // r8
  unsigned int m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *v45; // rcx
  __int64 v47; // r8
  _FX_DRIVER_GLOBALS *v48; // rcx
  int m_CompletionState; // eax
  signed __int32 v50; // r10d
  unsigned int v51; // r10d
  unsigned __int64 v52; // r14
  FxDeviceBase *v53; // rcx
  unsigned __int64 v54; // rcx
  int v55; // eax
  unsigned __int8 v56; // dl
  __int64 v57; // r8
  char _a3; // r10
  __int64 v59; // r14
  int v60; // esi
  FxDeviceBase *v61; // rcx
  const void *globals; // rcx
  _FX_DRIVER_GLOBALS *v63; // rdx
  bool v64; // zf
  _LIST_ENTRY *v65; // rcx
  FxDeviceBase *v66; // rdi
  unsigned __int64 v67; // rdi
  FxDeviceBase *v68; // rax
  const void *v69; // rax
  _FX_DRIVER_GLOBALS *v70; // rdx
  int v71; // eax
  int v72; // eax
  int v73; // eax
  const void *v74; // rax
  _LIST_ENTRY *Blink; // rcx
  FxVerifierLock *v76; // rcx
  _FX_DRIVER_GLOBALS *v77; // r10
  const char *v78; // r8
  const void *v79; // rdx
  const void *v80; // rax
  const void *v81; // rax
  unsigned __int8 v82; // r8
  _FX_DRIVER_GLOBALS *v83; // rdx
  unsigned __int8 v84; // r8
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  int level; // [rsp+48h] [rbp-30h]
  FxObject *Parent; // [rsp+50h] [rbp-28h]
  void *PPObject; // [rsp+58h] [rbp-20h] BYREF
  FxRequest *Request; // [rsp+60h] [rbp-18h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+68h] [rbp-10h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+40h]
  unsigned __int8 PreviousIrql; // [rsp+C0h] [rbp+48h] BYREF
  PIRP v93; // [rsp+C8h] [rbp+50h] BYREF
  char v94; // [rsp+D0h] [rbp+58h]
  FxRequest *ReservedRequest; // [rsp+D8h] [rbp+60h] BYREF

  v93 = Irp;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = DispatchContext;
  if ( DispatchContext == &this->m_DynamicDispatchInfoListHead )
  {
LABEL_2:
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    v9 = this->m_DispatchTable[MajorFunction];
    if ( v9 )
    {
      m_CxDeviceInfo = v9->m_CxDeviceInfo;
      if ( m_CxDeviceInfo )
        p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      else
        p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
      Request = (FxRequest *)p_IoInCallerContextCallback;
LABEL_6:
      if ( this->m_Filter
        && !p_IoInCallerContextCallback->m_Method
        && v9 == this->m_DefaultQueue
        && !FxIoQueue::IsIoEventHandlerRegistered(v9, (_WDF_REQUEST_TYPE)MajorFunction) )
      {
        goto $Forward_0;
      }
      v94 = 0;
      PreviousIrql = v9 && v9->m_SupportForwardProgress;
      if ( KeGetCurrentIrql() <= 1u )
      {
        KeEnterCriticalRegion();
        v94 = 1;
      }
      if ( v9 && (v12 = v9->m_CxDeviceInfo) != 0LL )
        p_RequestAttributes = (_WDF_EXECUTION_LEVEL *)&v12->RequestAttributes;
      else
        p_RequestAttributes = &this->m_DeviceBase[2].m_ExecutionLevel;
      m_DeviceBase = this->m_DeviceBase;
      v15 = 0LL;
      Parent = m_DeviceBase;
      v16 = 0LL;
      ReservedRequest = 0LL;
      v17 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
      m_Globals = m_DeviceBase->m_Globals;
      PPObject = m_Globals;
      if ( v17 && *(_WORD *)(v17 + 8) == 4354 && *(_BYTE *)(v17 + 1451) )
      {
        VerifierLock = (FxVerifierLock *)&m_DeviceBase[2].m_SpinLock;
        v20 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v20 )
          v20 = (FX_POOL_TRACKER *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&VerifierLock->m_Mutex.m_Lock.Count)(
                                     *((unsigned int *)&VerifierLock->m_OldIrql + 1),
                                     *((unsigned int *)&VerifierLock->m_Mutex.m_DbgFlagIsInitialized + 1),
                                     *(unsigned int *)&VerifierLock->m_Mutex.m_DbgFlagIsInitialized);
      }
      else
      {
        p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
        ++HIDWORD(m_DeviceBase[2].m_ParentObject);
        v20 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
        if ( !v20 )
        {
          ++LODWORD(p_m_SpinLock[1].m_Lock);
          v20 = (FX_POOL_TRACKER *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&p_m_SpinLock[3].m_DbgFlagIsInitialized)(
                                     *((unsigned int *)&p_m_SpinLock[2].m_DbgFlagIsInitialized + 1),
                                     HIDWORD(p_m_SpinLock[2].m_Lock),
                                     LODWORD(p_m_SpinLock[2].m_Lock));
        }
        m_Globals = PPObject;
      }
      if ( !v20 )
        goto LABEL_152;
      if ( m_Globals[264] )
      {
        p_Flink = &v20[1].Link.Flink;
        FxPoolInsertNonPagedAllocateTracker(
          (FX_POOL *)((char *)PPObject + 104),
          v20,
          Parent[5].m_SpinLock.m_Lock,
          *((_DWORD *)PPObject + 17),
          retaddr);
      }
      else
      {
        p_Flink = &v20->Link.Flink;
      }
      v22 = PPObject;
      *p_Flink = v20;
      v23 = (FxRequest *)(p_Flink + 2);
      p_Flink[1] = v22;
      if ( p_RequestAttributes )
        p_m_ParentObject = (char *)p_RequestAttributes;
      else
        p_m_ParentObject = (char *)&Parent[5].m_ParentObject;
      if ( v22[320] )
      {
        memset(v23, 0, 0x20uLL);
        *(_DWORD *)(&v23->m_ObjectState + 1) = 1146058822;
        v23 = (FxRequest *)((char *)v23 + 32);
      }
      v23[1].m_Globals = 0LL;
      *(_QWORD *)&v23[1].m_ObjectFlags = 0LL;
      v23[1].m_ChildListHead.Flink = 0LL;
      v23[1].m_ChildListHead.Blink = 0LL;
      *(_QWORD *)&v23[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
      *(_QWORD *)&v23[1].m_Type = v23;
      if ( p_m_ParentObject )
      {
        v25 = *((_QWORD *)p_m_ParentObject + 6);
        if ( v25 )
        {
          v47 = *((_QWORD *)p_m_ParentObject + 5);
          if ( !v47 )
            v47 = *(_QWORD *)(v25 + 16);
          memset(&v23[1].m_SpinLock.m_Lock, 0, (v47 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v23[1].m_ChildListHead.Blink = (_LIST_ENTRY *)*((_QWORD *)p_m_ParentObject + 6);
      }
      if ( !v23 )
      {
LABEL_152:
        v38 = -1073741670;
        WPP_IFR_SF_d(Parent->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
        goto LABEL_153;
      }
      v26 = Parent;
      v23->m_Globals = Parent->m_Globals;
      v23->__vftable = (FxRequest_vtbl *)&FxObject::`vftable';
      *(_DWORD *)&v23->m_Type = 24121352;
      v23->m_SpinLock.m_Lock = 0LL;
      v23->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v23->m_Refcnt = 1;
      *(_DWORD *)&v23->m_ObjectFlags = 0x10000;
      v23->m_ParentObject = 0LL;
      v23->m_ChildListHead.Blink = &v23->m_ChildListHead;
      v23->m_ChildListHead.Flink = &v23->m_ChildListHead;
      v23->m_ChildEntry.Blink = &v23->m_ChildEntry;
      v23->m_ChildEntry.Flink = &v23->m_ChildEntry;
      v27 = v23->m_Globals;
      v23->m_DisposeSingleEntry.Next = 0LL;
      v23->m_DeviceBase = 0LL;
      if ( v27->FxVerifierOn )
      {
        FxObject::Vf_VerifyConstruct(v23, (_FX_DRIVER_GLOBALS *)&FxObject::`vftable', 0);
        v26 = Parent;
      }
      v23->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
      v23->m_NPLock.m_Lock = 0LL;
      v23->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v23->m_ObjectFlags) < 0 )
      {
        v70 = v23->m_Globals;
        if ( v70->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v70, v23);
          v26 = Parent;
          v23[-1].m_ForwardProgressQueue = (FxIoQueue *)VerifierLock;
        }
      }
      v28 = v93;
      v23->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
      v23->m_Irp.m_Irp = v28;
      v23->m_CancelRoutine.m_Cancel = 0LL;
      v23->m_CompletionRoutine.m_Completion = 0LL;
      *(_WORD *)&v23->m_TargetFlags = 0;
      v23->m_CanComplete = 1;
      v23->m_Target = 0LL;
      v23->m_TargetCompletionContext = 0LL;
      v23->m_Completed = v23->m_Irp.m_Irp == 0LL;
      v23->m_Canceled = 0;
      v23->m_PriorityBoost = 0;
      v23->m_RequestContext = 0LL;
      v23->m_Timer = 0LL;
      v23->m_CsqContext.Irp = (_IRP *)&v23->120;
      v23->m_ListEntry.Flink = (_LIST_ENTRY *)&v23->120;
      v23->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v23->m_SystemBufferOffset = 216LL;
      v23->m_IrpQueue = 0LL;
      v23->m_IrpCompletionReferenceCount = 0;
      v23->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v23->m_OutputBufferOffset = 232;
      v23->m_CompletionState = 0;
      v23->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)&FxRequestSystemBuffer::`vftable';
      v23->m_SystemBuffer.m_Buffer = 0LL;
      v23->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)&FxRequestOutputBuffer::`vftable';
      v23->m_OutputBuffer.m_Buffer = 0LL;
      v23->m_IoQueue = 0LL;
      v23->m_PowerStopState = 0;
      v23->m_OwnerListEntry.Blink = &v23->m_OwnerListEntry;
      v23->m_OwnerListEntry.Flink = &v23->m_OwnerListEntry;
      v23->m_OwnerListEntry2.Blink = &v23->m_OwnerListEntry2;
      v23->m_OwnerListEntry2.Flink = &v23->m_OwnerListEntry2;
      v23->m_ForwardProgressList.Blink = &v23->m_ForwardProgressList;
      v23->m_ForwardProgressList.Flink = &v23->m_ForwardProgressList;
      v23->__vftable = (FxRequest_vtbl *)&FxRequestFromLookaside::`vftable';
      v23->m_Presented = 0;
      *(_WORD *)&v23->m_Reserved = 0;
      v23->m_ForwardProgressQueue = 0LL;
      v23->m_InternalContext = 0LL;
      v23->m_DeviceBase = v26->m_DeviceBase;
      m_Irp = v23->m_Irp.m_Irp;
      v30 = m_Irp->Tail.Overlay.CurrentStackLocation;
      v31 = v30->MajorFunction;
      if ( v30->MajorFunction != 14 )
      {
        if ( v31 < 3u )
          goto LABEL_42;
        if ( v31 <= 4u )
        {
          if ( HIDWORD(v26[2].__vftable) == 1 )
          {
            if ( m_Irp->RequestorMode )
              goto LABEL_42;
            v23->m_SystemBuffer.m_Buffer = m_Irp->UserBuffer;
            goto LABEL_38;
          }
          if ( HIDWORD(v26[2].__vftable) != 2 )
            goto LABEL_42;
          goto LABEL_108;
        }
        if ( v31 != 15 )
          goto LABEL_42;
      }
      if ( (v30->Parameters.Read.ByteOffset.LowPart & 3) == 0 )
      {
        v23->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
        MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
        goto LABEL_37;
      }
      if ( (v30->Parameters.Read.ByteOffset.LowPart & 3) != 1 && (v30->Parameters.Read.ByteOffset.LowPart & 3) != 2 )
      {
        if ( (v30->Parameters.Read.ByteOffset.LowPart & 3) != 3 )
          goto LABEL_38;
        if ( v30->MajorFunction != 15 && m_Irp->RequestorMode )
          goto LABEL_42;
        v23->m_SystemBuffer.m_Buffer = v30->Parameters.CreatePipe.Parameters;
        MasterIrp = m_Irp->UserBuffer;
LABEL_37:
        v23->m_OutputBuffer.m_Buffer = MasterIrp;
LABEL_38:
        if ( v23->m_SystemBuffer.m_Buffer )
          v23->m_RequestBaseStaticFlags |= 1u;
        if ( v23->m_OutputBuffer.m_Buffer )
          v23->m_RequestBaseStaticFlags |= 2u;
LABEL_42:
        if ( v26->m_Globals->FxRequestParentOptimizationOn )
        {
          v33 = 0LL;
          PPObject = 0LL;
          if ( !v23->m_ObjectSize )
          {
            v38 = -1073741816;
LABEL_151:
            WPP_IFR_SF_d(v26->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v38);
            FxObject::DeleteFromFailedCreate(v23);
LABEL_153:
            v28 = v93;
LABEL_58:
            v39 = PreviousIrql;
            if ( PreviousIrql )
            {
              if ( v38 < 0 )
                goto LABEL_158;
              if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
              {
                v71 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, v16);
                v28 = v93;
                v38 = v71;
              }
              v39 = PreviousIrql;
            }
            if ( v38 >= 0 )
            {
              if ( !v39 )
              {
LABEL_61:
                v40 = Request;
                if ( Request && Request->__vftable && !v16->m_Reserved )
                {
                  v16->m_InternalContext = v9;
                  v48 = this->m_Globals;
                  v28->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                  if ( v48->FxVerifierOn )
                    FxRequestBase::SetVerifierFlags(v16, 33);
                  if ( v16->m_Completed )
                  {
                    if ( v16->m_ObjectSize )
                      v74 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v74 = 0LL;
                    WPP_IFR_SF_q(v16->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v74);
                    FxVerifierDbgBreakPoint(v16->m_Globals);
                  }
                  else
                  {
                    m_CompletionState = v16->m_CompletionState;
                    v16->m_CompletionState = -126;
                    if ( !m_CompletionState )
                    {
                      v50 = _InterlockedExchangeAdd(&v16->m_Refcnt, 1u);
                      v16 = ReservedRequest;
                      v51 = v50 + 1;
                      if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0 )
                      {
                        Blink = ReservedRequest[-1].m_ForwardProgressList.Blink;
                        if ( Blink )
                          FxTagTracker::UpdateTagHistory(
                            (FxTagTracker *)Blink,
                            (void *)0x74617453,
                            1812,
                            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                            TagAddRef,
                            v51);
                      }
                    }
                  }
                  v16->Release(
                    v16,
                    (void *)1952543827,
                    1740,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
                  v16->m_Presented = 1;
                  if ( v16->m_ObjectSize )
                    v52 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
                  else
                    v52 = 0LL;
                  v53 = this->m_DeviceBase;
                  if ( v53->m_ObjectSize )
                    v54 = (unsigned __int64)v53 ^ 0xFFFFFFFFFFFFFFF8uLL;
                  else
                    v54 = 0LL;
                  if ( v40->__vftable )
                    ((void (__fastcall *)(unsigned __int64, unsigned __int64))v40->__vftable)(v54, v52);
                  goto LABEL_72;
                }
                m_ObjectFlags = v9->m_ObjectFlags;
                Request = v16;
                if ( m_ObjectFlags < 0 && (v76 = (FxVerifierLock *)v9[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
                {
                  FxVerifierLock::Lock(v76, (unsigned __int8 *)&v93, (unsigned __int8)WPP_FxRequest_cpp_Traceguids);
                  v42 = (unsigned __int8)v93;
                }
                else
                {
                  v42 = KeAcquireSpinLockRaiseToDpc(&v9->m_NPLock.m_Lock);
                  LOBYTE(v93) = v42;
                }
                if ( v16->m_Reserved )
                  FxObject::AddRef(
                    v16,
                    (void *)0x50647746,
                    2286,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                m_QueueState = v9->m_QueueState;
                if ( (m_QueueState & 1) == 0 )
                {
                  v77 = v9->m_Globals;
                  v38 = -1073741436;
                  if ( v77->FxVerboseOn )
                  {
                    v78 = "power stopping (Drain) in progress,";
                    if ( (m_QueueState & 0x10000) == 0 )
                      v78 = &id;
                    if ( v16->m_ObjectSize )
                      v79 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v79 = 0LL;
                    if ( v9->m_ObjectSize )
                      v80 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v80 = 0LL;
                    WPP_IFR_SF_qLsqd(v77, 5u, (unsigned int)v78, 0x27u, _a1, v80, m_QueueState, v78, v79, -1073741436);
                  }
                  FxNonPagedObject::Unlock(v9, v42, v43);
                  v16->m_Irp.m_Irp->IoStatus.Information = 0LL;
                  FxRequest::Complete(v16, -1073741436);
                  v16->Release(
                    v16,
                    (void *)1886220099,
                    2313,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                  goto LABEL_73;
                }
                v45 = v9->m_Globals;
                if ( v45->FxVerboseOn )
                {
                  if ( v9->m_ObjectSize )
                    v81 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v81 = 0LL;
                  if ( v16->m_ObjectSize )
                    v15 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  WPP_IFR_SF_qq(v45, 5u, 0xDu, 0x28u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v15, v81);
                }
                if ( v16->m_Globals->FxVerifierIO )
                {
                  FxNonPagedObject::Lock(v16, &PreviousIrql, v43);
                  v83 = v16->m_Globals;
                  if ( v83->FxVerifierOn )
                    FxRequest::Vf_VerifyRequestIsNotCompleted(v16, v83);
                  FxNonPagedObject::Unlock(v16, PreviousIrql, v82);
                }
                v16->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                if ( v16->m_Reserved )
                {
                  if ( v9->m_Dispatching )
                  {
                    FxIoQueue::InsertNewRequestLocked(v9, &Request, (unsigned __int8)v93);
                    FxNonPagedObject::Unlock(v9, (unsigned __int8)v93, v84);
                    goto LABEL_72;
                  }
                  v16 = ReservedRequest;
                  v42 = (unsigned __int8)v93;
                }
                FxIoQueue::DispatchEvents(v9, v42, v16);
LABEL_72:
                v38 = 259;
LABEL_73:
                if ( v94 )
                  KeLeaveCriticalRegion();
                return v38;
              }
              if ( FxIoQueue::InvokeAllocateResourcesCallback(v9, v16) >= 0 )
              {
                v28 = v93;
                goto LABEL_61;
              }
              FxRequest::FreeRequest(v16);
              ReservedRequest = 0LL;
              v73 = FxIoQueue::GetReservedRequest(v9, v93, &ReservedRequest);
              v38 = v73;
              if ( v73 == 259 )
                goto LABEL_73;
              v28 = v93;
              if ( v73 < 0 )
                goto LABEL_168;
              goto LABEL_163;
            }
LABEL_158:
            if ( this->m_Filter && !v9 )
              goto LABEL_168;
            if ( !v39 )
            {
              WPP_IFR_SF_d(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, v38);
              v28 = v93;
              goto LABEL_168;
            }
            v72 = FxIoQueue::GetReservedRequest(v9, v28, &ReservedRequest);
            v38 = v72;
            if ( v72 == 259 )
              goto LABEL_73;
            v28 = v93;
            if ( v72 < 0 )
            {
LABEL_168:
              v28->IoStatus.Status = v38;
              v28->IoStatus.Information = 0LL;
              IofCompleteRequest(v28, 0);
              goto LABEL_73;
            }
LABEL_163:
            v16 = ReservedRequest;
            goto LABEL_61;
          }
          if ( !p_RequestAttributes )
          {
LABEL_56:
            v23->m_ObjectFlags |= 8u;
            v38 = 0;
LABEL_57:
            v16 = v23;
            ReservedRequest = v23;
            goto LABEL_58;
          }
          if ( *((_DWORD *)p_RequestAttributes + 6) == 2 )
          {
            FxObject::MarkPassiveCallbacks(v23, ObjectLock);
            v33 = (FxObject *)PPObject;
            v28 = v93;
          }
          if ( *((_QWORD *)p_RequestAttributes + 4) )
          {
            FxObjectHandleGetPtr(v23->m_Globals, *((_QWORD *)p_RequestAttributes + 4), 0x1000u, &PPObject);
            v33 = (FxObject *)PPObject;
            v28 = v93;
          }
          if ( !v33 )
          {
LABEL_50:
            m_ObjectSize = v23->m_ObjectSize;
            if ( m_ObjectSize )
              v35 = (char *)v23 + m_ObjectSize;
            else
              v35 = 0LL;
            v36 = *((_QWORD *)p_RequestAttributes + 2);
            if ( v36 )
              *((_QWORD *)v35 + 3) = v36;
            v37 = *((_QWORD *)p_RequestAttributes + 1);
            if ( v37 )
            {
              *((_QWORD *)v35 + 2) = v37;
              v23->m_ObjectFlags |= 0x400u;
            }
            goto LABEL_56;
          }
          v38 = FxObject::AssignParentObject(v23, v33);
          if ( v38 >= 0 )
          {
            v28 = v93;
            goto LABEL_50;
          }
        }
        else
        {
          v38 = FxObject::Commit(v23, (_WDF_OBJECT_ATTRIBUTES *)p_RequestAttributes, 0LL, v26, 0);
        }
        if ( v38 >= 0 )
        {
          v28 = v93;
          goto LABEL_57;
        }
        v26 = Parent;
        goto LABEL_151;
      }
LABEL_108:
      v23->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
      goto LABEL_38;
    }
    p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
    v64 = this->m_InCallerContextCallback.m_Method == 0LL;
    Request = (FxRequest *)&this->m_InCallerContextCallback;
    if ( !v64 )
      goto LABEL_6;
    if ( this->m_Filter )
    {
$Forward_0:
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    v60 = -1073741808;
    v68 = this->m_DeviceBase;
    if ( v68->m_ObjectSize )
      v69 = (const void *)((unsigned __int64)v68 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v69 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xDu, 0xFu, WPP_FxPkgIo_cpp_Traceguids, v69, (__int64)Irp, -1073741808);
    goto $CompleteIrp;
  }
  v55 = FxIrpDynamicDispatchInfo::Mj2Index(Irp->Tail.Overlay.CurrentStackLocation->MajorFunction);
  v59 = v55;
  if ( v55 >= 4 )
  {
    v60 = -1073741811;
    v61 = this->m_DeviceBase;
    if ( v61->m_ObjectSize )
      globals = (const void *)((unsigned __int64)v61 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      v56,
      0xDu,
      0xEu,
      WPP_FxPkgIo_cpp_Traceguids,
      Irp,
      _a3,
      *(unsigned __int8 *)(v57 + 1),
      globals,
      level);
    FxVerifierDbgBreakPoint(this->m_Globals);
    goto $CompleteIrp;
  }
  v63 = this->m_Globals;
  if ( v63->FxVerifierOn )
  {
    v60 = FxPkgIo::Vf_VerifyDispatchContext(this, v63, v4);
    if ( v60 < 0 )
    {
$CompleteIrp:
      Irp->IoStatus.Status = v60;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v60;
    }
  }
  while ( 1 )
  {
    v64 = v4[v59 + 1].Flink == 0LL;
    v65 = v4;
    v4 = v4->Flink;
    if ( !v64 )
      break;
    if ( v4 == p_m_DynamicDispatchInfoListHead )
      goto LABEL_2;
  }
  v66 = this->m_DeviceBase;
  if ( v66->m_ObjectSize )
    v67 = (unsigned __int64)v66 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v67 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _LIST_ENTRY *, _IRP *, unsigned __int64))v65[v59 + 1].Flink)(
           v67,
           Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
           v65[v59 + 1].Blink,
           Irp,
           (unsigned __int64)v4 | 1);
}
