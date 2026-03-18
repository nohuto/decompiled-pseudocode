/*
 * XREFs of ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0078F24
 * Callers:
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0077DA0 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0077E80 (-Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0078260 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C00333C0 (memset.c)
 */

char *__fastcall FxLookasideList::InitObjectAlloc(FxLookasideList *this, char *Alloc)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char *v5; // r14
  FX_POOL *p_FxPoolFrameworks; // rdi
  unsigned __int64 m_BufferSize; // rbp
  KIRQL v8; // r8
  FX_POOL **Blink; // rdx
  unsigned __int64 NonPagedBytes; // rdx
  unsigned int NonPagedAllocations; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  m_Globals = this->m_Globals;
  memset(Alloc, 0, this->m_MemoryObjectSize);
  if ( m_Globals->FxPoolTrackingOn )
  {
    v5 = Alloc + 64;
    *((_QWORD *)Alloc + 9) = m_Globals;
    p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
    *((_QWORD *)Alloc + 8) = Alloc;
    m_BufferSize = this->m_BufferSize;
    *((_DWORD *)Alloc + 6) = this->m_PoolTag;
    *((_DWORD *)Alloc + 10) = ExDefaultNonPagedPoolType;
    *((_QWORD *)Alloc + 6) = retaddr;
    *((_QWORD *)Alloc + 2) = p_FxPoolFrameworks;
    *((_QWORD *)Alloc + 4) = m_BufferSize;
    v8 = KeAcquireSpinLockRaiseToDpc(&p_FxPoolFrameworks->NonPagedLock.m_Lock);
    Blink = (FX_POOL **)p_FxPoolFrameworks->NonPagedHead.Blink;
    *(_QWORD *)Alloc = &p_FxPoolFrameworks->NonPagedHead;
    *((_QWORD *)Alloc + 1) = Blink;
    if ( *Blink != (FX_POOL *)&p_FxPoolFrameworks->NonPagedHead )
      __fastfail(3u);
    *Blink = (FX_POOL *)Alloc;
    p_FxPoolFrameworks->NonPagedHead.Blink = (_LIST_ENTRY *)Alloc;
    p_FxPoolFrameworks->NonPagedBytes += m_BufferSize;
    ++p_FxPoolFrameworks->NonPagedAllocations;
    NonPagedBytes = p_FxPoolFrameworks->NonPagedBytes;
    NonPagedAllocations = p_FxPoolFrameworks->NonPagedAllocations;
    if ( NonPagedBytes > p_FxPoolFrameworks->PeakNonPagedBytes )
      p_FxPoolFrameworks->PeakNonPagedBytes = NonPagedBytes;
    if ( NonPagedAllocations > p_FxPoolFrameworks->PeakNonPagedAllocations )
      p_FxPoolFrameworks->PeakNonPagedAllocations = NonPagedAllocations;
    KeReleaseSpinLock(&p_FxPoolFrameworks->NonPagedLock.m_Lock, v8);
  }
  else
  {
    v5 = Alloc;
    *(_QWORD *)Alloc = Alloc;
    *((_QWORD *)Alloc + 1) = m_Globals;
  }
  return v5 + 16;
}
