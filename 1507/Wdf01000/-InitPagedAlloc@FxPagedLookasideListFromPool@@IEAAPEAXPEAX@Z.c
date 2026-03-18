/*
 * XREFs of ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C00783E8
 * Callers:
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0078260 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C00333C0 (memset.c)
 */

char *__fastcall FxPagedLookasideListFromPool::InitPagedAlloc(FxPagedLookasideListFromPool *this, char *Alloc)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char *v5; // rsi
  FX_POOL *p_FxPoolFrameworks; // rdi
  unsigned __int64 m_RawBufferSize; // r14
  FX_POOL **Blink; // rcx
  unsigned __int64 PagedBytes; // rdx
  unsigned int PagedAllocations; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  m_Globals = this->m_Globals;
  memset(Alloc, 0, this->m_RawBufferSize);
  if ( m_Globals->FxPoolTrackingOn )
  {
    v5 = Alloc + 64;
    *((_QWORD *)Alloc + 9) = m_Globals;
    p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
    *((_QWORD *)Alloc + 8) = Alloc;
    m_RawBufferSize = this->m_RawBufferSize;
    *((_DWORD *)Alloc + 6) = this->m_PoolTag;
    *((_DWORD *)Alloc + 10) = 1;
    *((_QWORD *)Alloc + 2) = p_FxPoolFrameworks;
    *((_QWORD *)Alloc + 4) = m_RawBufferSize;
    *((_QWORD *)Alloc + 6) = retaddr;
    ExAcquireFastMutex(&p_FxPoolFrameworks->PagedLock.m_Lock);
    Blink = (FX_POOL **)p_FxPoolFrameworks->PagedHead.Blink;
    *(_QWORD *)Alloc = &p_FxPoolFrameworks->PagedHead;
    *((_QWORD *)Alloc + 1) = Blink;
    if ( *Blink != (FX_POOL *)&p_FxPoolFrameworks->PagedHead )
      __fastfail(3u);
    *Blink = (FX_POOL *)Alloc;
    p_FxPoolFrameworks->PagedHead.Blink = (_LIST_ENTRY *)Alloc;
    p_FxPoolFrameworks->PagedBytes += m_RawBufferSize;
    ++p_FxPoolFrameworks->PagedAllocations;
    PagedBytes = p_FxPoolFrameworks->PagedBytes;
    PagedAllocations = p_FxPoolFrameworks->PagedAllocations;
    if ( PagedBytes > p_FxPoolFrameworks->PeakPagedBytes )
      p_FxPoolFrameworks->PeakPagedBytes = PagedBytes;
    if ( PagedAllocations > p_FxPoolFrameworks->PeakPagedAllocations )
      p_FxPoolFrameworks->PeakPagedAllocations = PagedAllocations;
    ExReleaseFastMutex(&p_FxPoolFrameworks->PagedLock.m_Lock);
  }
  else
  {
    v5 = Alloc;
    *(_QWORD *)Alloc = Alloc;
    *((_QWORD *)Alloc + 1) = m_Globals;
  }
  return v5 + 16;
}
