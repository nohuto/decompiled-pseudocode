/*
 * XREFs of ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C007E970
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0001DA8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0005734 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C003AEE8 (FxAllocateFromNPagedLookasideList.c)
 *     ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C007F9E0 (--0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z.c)
 */

__int64 __fastcall FxNPagedLookasideListFromPool::Allocate(
        FxNPagedLookasideListFromPool *this,
        FxMemoryObject **PPMemory)
{
  FX_POOL_TRACKER *v4; // rax
  FxMemoryObject *v5; // rdi
  FX_POOL **inited; // rbp
  unsigned __int64 v8; // rdx
  PSLIST_ENTRY v9; // r14
  FxMemoryBufferFromPoolLookaside *v10; // rax
  FxMemoryObject *v11; // rax

  v4 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  v5 = 0LL;
  if ( !v4 )
    return 3221225626LL;
  inited = FxLookasideList::InitObjectAlloc(this, v4);
  v9 = FxAllocateFromNPagedLookasideList(&this->m_PoolLookaside, v8);
  if ( !v9 )
  {
    this->Reclaim(this, (FxMemoryBufferFromLookaside *)inited);
    return 3221225626LL;
  }
  v10 = (FxMemoryBufferFromPoolLookaside *)FxObjectAndHandleHeaderInit(
                                             this->m_Globals,
                                             inited,
                                             0x90u,
                                             &this->m_MemoryAttributes,
                                             FxObjectTypeExternal);
  if ( v10 )
  {
    FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(v10, this->m_Globals, this, this->m_BufferSize, v9);
    v5 = v11;
  }
  *PPMemory = v5;
  return 0LL;
}
