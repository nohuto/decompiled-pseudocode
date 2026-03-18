/*
 * XREFs of ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C0078660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPagedLookasideListFromPool::ReclaimPool(FxPagedLookasideListFromPool *this, _SLIST_ENTRY *Pool)
{
  _SLIST_ENTRY *v2; // rsi
  _SLIST_ENTRY *Next; // rbx
  _SLIST_ENTRY *v5; // rcx
  _SLIST_ENTRY **v6; // rax
  _PAGED_LOOKASIDE_LIST *p_m_PoolLookaside; // rbx
  void (__fastcall *FreeEx)(void *, _LOOKASIDE_LIST_EX *); // rax

  v2 = Pool;
  if ( this->m_BufferSize >= 0x1000 )
  {
    p_m_PoolLookaside = &this->m_PoolLookaside;
  }
  else
  {
    if ( this->m_Globals->FxPoolTrackingOn )
    {
      Next = Pool[-1].Next;
      ExAcquireFastMutex((PFAST_MUTEX)(&Next[1].Next[2].Next + 1));
      v5 = Next->Next;
      v6 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
      if ( *(&Next->Next->Next + 1) != Next || *v6 != Next )
        __fastfail(3u);
      *v6 = v5;
      *((_QWORD *)&v5->Next + 1) = v6;
      *((_QWORD *)&Next[1].Next[7].Next + 1) -= Next[2].Next;
      --HIDWORD(Next[1].Next[8].Next);
      ExReleaseFastMutex((PFAST_MUTEX)(&Next[1].Next[2].Next + 1));
    }
    v2 = v2[-1].Next;
    p_m_PoolLookaside = &this->m_PoolLookaside;
  }
  ++p_m_PoolLookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&p_m_PoolLookaside->L.ListHead) < p_m_PoolLookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&p_m_PoolLookaside->L.ListHead, v2);
  }
  else
  {
    FreeEx = p_m_PoolLookaside->L.FreeEx;
    ++p_m_PoolLookaside->L.FreeMisses;
    ((void (__fastcall *)(_SLIST_ENTRY *))FreeEx)(v2);
  }
}
