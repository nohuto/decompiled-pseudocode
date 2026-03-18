/*
 * XREFs of ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C003D920
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0001DA8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ??0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z @ 0x1C00054AC (--0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0005734 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C003AEE8 (FxAllocateFromNPagedLookasideList.c)
 */

__int64 __fastcall FxNPagedLookasideList::Allocate(FxNPagedLookasideList *this, FxMemoryObject **PPMemory)
{
  FxMemoryObject *v2; // rbx
  FX_POOL_TRACKER *v5; // rax
  FX_POOL **inited; // rax
  FxMemoryBufferFromLookaside *v7; // rax
  FxMemoryObject *v8; // rax

  v2 = 0LL;
  if ( !PPMemory )
    return 3221225485LL;
  *PPMemory = 0LL;
  v5 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  if ( !v5 )
    return 3221225626LL;
  inited = FxLookasideList::InitObjectAlloc(this, v5);
  v7 = (FxMemoryBufferFromLookaside *)FxObjectAndHandleHeaderInit(
                                        this->m_Globals,
                                        inited,
                                        ((LOWORD(this->m_BufferSize) + 15) & 0xFFF0u) + 128,
                                        &this->m_MemoryAttributes,
                                        FxObjectTypeExternal);
  if ( v7 )
  {
    FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v7, this->m_Globals, this, this->m_BufferSize);
    v2 = v8;
  }
  *PPMemory = v2;
  return 0LL;
}
