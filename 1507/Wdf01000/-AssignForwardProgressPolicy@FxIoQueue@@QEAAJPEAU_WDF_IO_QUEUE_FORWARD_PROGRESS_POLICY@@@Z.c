/*
 * XREFs of ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C000CA34
 * Callers:
 *     imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1C000A5A0 (imp_WdfIoQueueAssignForwardProgressPolicy.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C000B7D0 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C0097DE4 (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 */

__int64 __fastcall FxIoQueue::AssignForwardProgressPolicy(
        FxIoQueue *this,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *Policy)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v4; // esi
  _FXIO_FORWARD_PROGRESS_CONTEXT *v6; // rax
  unsigned int v7; // edi
  _LIST_ENTRY *p_m_ReservedRequestList; // rax
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *p_m_PendedIrpList; // rax
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rax
  unsigned __int8 v12; // dl
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *p_m_ForwardProgressList; // rdx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v17; // cl
  unsigned __int16 v18; // r9
  unsigned int v19; // ebx
  _LIST_ENTRY *Caller; // [rsp+38h] [rbp+0h]
  FxRequest *pRequest; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = 0;
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)Policy, 0xBu) )
  {
    v17 = 0;
    while ( this->m_PkgIo->m_DispatchTable[v17] != this )
    {
      if ( ++v17 > 0x1Bu )
      {
        v18 = 12;
        v19 = -1073741811;
        goto LABEL_14;
      }
    }
  }
  v6 = (_FXIO_FORWARD_PROGRESS_CONTEXT *)FxPoolAllocator(
                                           m_Globals,
                                           (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                                           ExDefaultNonPagedPoolType,
                                           0x68uLL,
                                           m_Globals->Tag,
                                           Caller);
  this->m_FwdProgContext = v6;
  if ( v6 )
  {
    memset(v6, 0, sizeof(_FXIO_FORWARD_PROGRESS_CONTEXT));
    v7 = 0;
    this->m_FwdProgContext->m_Policy = Policy->ForwardProgressReservedPolicy;
    this->m_FwdProgContext->m_NumberOfReservedRequests = Policy->TotalForwardProgressRequests;
    this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method = Policy->EvtIoAllocateResourcesForReservedRequest;
    this->m_FwdProgContext->m_IoResourcesAllocate.Method = Policy->EvtIoAllocateRequestResources;
    this->m_FwdProgContext->m_IoExamineIrp.Method = Policy->ForwardProgressReservePolicySettings.Policy.ExaminePolicy.EvtIoWdmIrpForForwardProgress;
    p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
    p_m_ReservedRequestList->Blink = p_m_ReservedRequestList;
    p_m_ReservedRequestList->Flink = p_m_ReservedRequestList;
    p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList;
    p_m_ReservedRequestInUseList->Blink = p_m_ReservedRequestInUseList;
    p_m_ReservedRequestInUseList->Flink = p_m_ReservedRequestInUseList;
    p_m_PendedIrpList = &this->m_FwdProgContext->m_PendedIrpList;
    p_m_PendedIrpList->Blink = p_m_PendedIrpList;
    p_m_PendedIrpList->Flink = p_m_PendedIrpList;
    m_FwdProgContext = this->m_FwdProgContext;
    m_FwdProgContext->m_PendedReserveLock.m_Lock = 0LL;
    m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 1;
    if ( this->m_FwdProgContext->m_NumberOfReservedRequests )
    {
      while ( 1 )
      {
        v4 = FxIoQueue::AllocateReservedRequest(this, &pRequest);
        if ( v4 < 0 )
          break;
        v13 = &this->m_FwdProgContext->m_ReservedRequestList;
        p_m_ForwardProgressList = &pRequest->m_ForwardProgressList;
        Blink = this->m_FwdProgContext->m_ReservedRequestList.Blink;
        pRequest->m_ForwardProgressList.Flink = v13;
        p_m_ForwardProgressList->Blink = Blink;
        if ( Blink->Flink != v13 )
          __fastfail(3u);
        Blink->Flink = p_m_ForwardProgressList;
        ++v7;
        v13->Blink = p_m_ForwardProgressList;
        if ( v7 >= this->m_FwdProgContext->m_NumberOfReservedRequests )
          goto LABEL_7;
      }
      FxIoQueue::FreeAllReservedRequests(this, v12);
      this->m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 0;
      FxPoolFree(this->m_FwdProgContext);
      this->m_FwdProgContext = 0LL;
    }
    else
    {
LABEL_7:
      this->m_SupportForwardProgress = 1;
    }
    return (unsigned int)v4;
  }
  else
  {
    v19 = -1073741670;
    v18 = 13;
LABEL_14:
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, v18, WPP_FxIoQueueKm_cpp_Traceguids, v19);
    return v19;
  }
}
