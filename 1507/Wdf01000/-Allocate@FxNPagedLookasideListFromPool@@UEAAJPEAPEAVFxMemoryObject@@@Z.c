/*
 * XREFs of ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0077E80
 * Callers:
 *     <none>
 * Callees:
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0078F24 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C00792AC (--0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z.c)
 *     ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0079300 (--2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUT.c)
 */

__int64 __fastcall FxNPagedLookasideListFromPool::Allocate(
        FxNPagedLookasideListFromPool *this,
        FxMemoryObject **PPMemory)
{
  _NPAGED_LOOKASIDE_LIST *p_m_ObjectLookaside; // rdi
  PSLIST_ENTRY v5; // rax
  FxMemoryObject *v6; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  FxMemoryBufferFromLookaside *inited; // r14
  unsigned __int64 v13; // rcx
  PSLIST_ENTRY Buffer; // rbp
  __int64 v15; // rdx
  void *(__fastcall *v16)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  FxMemoryBufferFromPoolLookaside *v19; // rax
  FxMemoryObject *v20; // rax

  p_m_ObjectLookaside = &this->m_ObjectLookaside;
  ++this->m_ObjectLookaside.L.TotalAllocates;
  v5 = ExpInterlockedPopEntrySList(&this->m_ObjectLookaside.L.ListHead);
  v6 = 0LL;
  if ( !v5 )
  {
    Size = p_m_ObjectLookaside->L.Size;
    AllocateEx = p_m_ObjectLookaside->L.AllocateEx;
    Tag = p_m_ObjectLookaside->L.Tag;
    Type = (unsigned int)p_m_ObjectLookaside->L.Type;
    ++p_m_ObjectLookaside->L.AllocateMisses;
    v5 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
    if ( !v5 )
      return 3221225626LL;
  }
  inited = (FxMemoryBufferFromLookaside *)FxLookasideList::InitObjectAlloc(this, v5);
  ++this->m_PoolLookaside.L.TotalAllocates;
  Buffer = ExpInterlockedPopEntrySList(&this->m_PoolLookaside.L.ListHead);
  if ( !Buffer )
  {
    v15 = this->m_PoolLookaside.L.Size;
    v16 = this->m_PoolLookaside.L.AllocateEx;
    v17 = this->m_PoolLookaside.L.Tag;
    v18 = (unsigned int)this->m_PoolLookaside.L.Type;
    ++this->m_PoolLookaside.L.AllocateMisses;
    Buffer = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))v16)(v18, v15, v17);
    if ( !Buffer )
    {
      this->Reclaim(this, inited);
      return 3221225626LL;
    }
  }
  v19 = (FxMemoryBufferFromPoolLookaside *)FxMemoryBufferFromPoolLookaside::operator new(
                                             v13,
                                             this->m_Globals,
                                             inited,
                                             &this->m_MemoryAttributes);
  if ( v19 )
  {
    FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(
      v19,
      this->m_Globals,
      this,
      this->m_BufferSize,
      Buffer);
    v6 = v20;
  }
  *PPMemory = v6;
  return 0LL;
}
