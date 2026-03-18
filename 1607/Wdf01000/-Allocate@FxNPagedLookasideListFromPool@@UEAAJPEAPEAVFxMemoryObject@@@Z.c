/*
 * XREFs of ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C007AA80
 * Callers:
 *     <none>
 * Callees:
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0011DA4 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C0037B64 (FxAllocateFromNPagedLookasideList.c)
 *     ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C007B798 (--0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z.c)
 *     ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C007B7D0 (--2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUT.c)
 */

__int64 __fastcall FxNPagedLookasideListFromPool::Allocate(
        FxNPagedLookasideListFromPool *this,
        FxMemoryObject **PPMemory)
{
  FX_POOL_TRACKER *v4; // rax
  FxMemoryObject *v5; // rdi
  FX_POOL **inited; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  PSLIST_ENTRY Buffer; // r14
  FxMemoryBufferFromPoolLookaside *v11; // rax
  FxMemoryObject *v12; // rax

  v4 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  v5 = 0LL;
  if ( !v4 )
    return 3221225626LL;
  inited = FxLookasideList::InitObjectAlloc(this, v4);
  Buffer = FxAllocateFromNPagedLookasideList(&this->m_PoolLookaside, v8);
  if ( !Buffer )
  {
    this->Reclaim(this, (FxMemoryBufferFromLookaside *)inited);
    return 3221225626LL;
  }
  v11 = (FxMemoryBufferFromPoolLookaside *)FxMemoryBufferFromPoolLookaside::operator new(
                                             v9,
                                             this->m_Globals,
                                             inited,
                                             &this->m_MemoryAttributes);
  if ( v11 )
  {
    FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(
      v11,
      this->m_Globals,
      this,
      this->m_BufferSize,
      Buffer);
    v5 = v12;
  }
  *PPMemory = v5;
  return 0LL;
}
