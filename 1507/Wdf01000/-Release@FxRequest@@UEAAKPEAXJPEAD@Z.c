/*
 * XREFs of ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C0004430
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C00750D0 (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0077A28 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C007A914 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C007BC9C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0097FA0 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::Release(FxRequest *this, void *Tag, __int64 Line, char *File)
{
  unsigned __int8 m_CanComplete; // r12
  bool v6; // si
  unsigned __int8 m_Reserved; // r14
  unsigned __int32 v8; // ebp
  unsigned __int16 m_ObjectFlags; // cx
  _LIST_ENTRY *v11; // r13
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rdi
  void (__fastcall *v14)(unsigned __int64, void *, __int64, char *); // rax
  void (__fastcall *v15)(unsigned __int64, void *, __int64, char *); // rax
  unsigned __int16 v16; // ax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  _LIST_ENTRY *Blink; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *v22; // rax
  FxRequestCompletionState m_CompletionState; // esi
  FxIoQueue *m_IoQueue; // rdi
  _IRP *m_Irp; // rcx
  CCHAR m_PriorityBoost; // dl
  FxRequest *v27; // rcx

  m_CanComplete = this->m_CanComplete;
  v6 = this->m_IrpAllocation == 0;
  m_Reserved = this->m_Reserved;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_ForwardProgressList.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Blink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v8 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v8 )
  {
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      if ( (m_ObjectFlags & 0x200) != 0 )
      {
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a2 = 0LL;
          WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xBu);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 11;
      }
      v22 = this->m_Globals;
      this->m_ObjectState = 11;
      FxDisposeList::Add(v22->Driver->m_DisposeList, this);
    }
    else
    {
      if ( (m_ObjectFlags & 0x80u) != 0 )
      {
        v11 = this[-1].m_ForwardProgressList.Blink;
        if ( v11 )
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_ForwardProgressList.Blink);
      }
      else
      {
        v11 = 0LL;
      }
      m_ObjectSize = this->m_ObjectSize;
      if ( m_ObjectSize && (this->m_ObjectFlags & 8) != 0 )
      {
        for ( i = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
        {
          v14 = (void (__fastcall *)(unsigned __int64, void *, __int64, char *))i[2];
          if ( v14 )
          {
            v14((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[2] = 0LL;
          }
          v15 = (void (__fastcall *)(unsigned __int64, void *, __int64, char *))i[3];
          if ( v15 )
          {
            v15((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[3] = 0LL;
          }
        }
        v16 = this->m_ObjectSize;
        LOBYTE(Tag) = 1;
        if ( v16 )
        {
          v17 = (FxRequest_vtbl **)((char *)&this->__vftable + v16);
          if ( v17 )
          {
            do
            {
              v18 = (_QWORD *)v17[1];
              if ( !(_BYTE)Tag )
                FxPoolFree(v17);
              LOBYTE(Tag) = 0;
              v17 = v18;
            }
            while ( v18 );
          }
        }
      }
      if ( v11 )
      {
        this[-1].m_ForwardProgressList.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v11, (unsigned int)Tag);
      }
      ((void (__fastcall *)(FxRequest *, void *, __int64, char *))this->SelfDestruct)(this, Tag, Line, File);
    }
  }
  if ( m_Reserved && v8 == 1 && this->m_Completed )
  {
    FxIoQueue::ReturnReservedRequest(this->m_ForwardProgressQueue, this);
  }
  else if ( !v6 && m_CanComplete && v8 == 1 && this->m_Completed )
  {
    m_CompletionState = this->m_CompletionState;
    m_IoQueue = this->m_IoQueue;
    m_Irp = this->m_Irp.m_Irp;
    m_PriorityBoost = this->m_PriorityBoost;
    this->m_CompletionState = 0;
    this->m_IoQueue = 0LL;
    this->m_Irp.m_Irp = 0LL;
    IofCompleteRequest(m_Irp, m_PriorityBoost);
    FxRequest::PostProcessCompletionForDriverRequest(v27, m_CompletionState, m_IoQueue);
  }
  return v8;
}
