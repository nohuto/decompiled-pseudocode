/*
 * XREFs of ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00083C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00233F4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0069E6C (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C006C180 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C006E8B4 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C006FFF4 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0083A3C (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
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
  FxRequestCompletionState m_CompletionState; // esi
  FxIoQueue *m_IoQueue; // rdi
  _IRP *m_Irp; // rcx
  CCHAR m_PriorityBoost; // dl
  FxRequest *v24; // rcx

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
      FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
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
    FxRequest::PostProcessCompletionForDriverRequest(v24, m_CompletionState, m_IoQueue);
  }
  return v8;
}
