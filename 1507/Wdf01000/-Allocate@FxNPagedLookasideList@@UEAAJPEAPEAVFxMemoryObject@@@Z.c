/*
 * XREFs of ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0077DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0022F90 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0078F24 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z @ 0x1C0079214 (--0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z.c)
 */

__int64 __fastcall FxNPagedLookasideList::Allocate(FxNPagedLookasideList *this, FxMemoryObject **PPMemory)
{
  FxMemoryObject *v2; // rdi
  _NPAGED_LOOKASIDE_LIST *p_m_ObjectLookaside; // rbx
  PSLIST_ENTRY v7; // rax
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  FxObject *inited; // rax
  FxMemoryBufferFromLookaside *v13; // rax
  FxMemoryObject *v14; // rax

  v2 = 0LL;
  if ( !PPMemory )
    return 3221225485LL;
  p_m_ObjectLookaside = &this->m_ObjectLookaside;
  *PPMemory = 0LL;
  ++this->m_ObjectLookaside.L.TotalAllocates;
  v7 = ExpInterlockedPopEntrySList(&this->m_ObjectLookaside.L.ListHead);
  if ( !v7 )
  {
    Size = p_m_ObjectLookaside->L.Size;
    AllocateEx = p_m_ObjectLookaside->L.AllocateEx;
    Tag = p_m_ObjectLookaside->L.Tag;
    Type = (unsigned int)p_m_ObjectLookaside->L.Type;
    ++p_m_ObjectLookaside->L.AllocateMisses;
    v7 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
    if ( !v7 )
      return 3221225626LL;
  }
  inited = (FxObject *)FxLookasideList::InitObjectAlloc(this, v7);
  v13 = (FxMemoryBufferFromLookaside *)FxObjectAndHandleHeaderInit(
                                         this->m_Globals,
                                         inited,
                                         ((LOWORD(this->m_BufferSize) + 15) & 0xFFF0u) + 128,
                                         &this->m_MemoryAttributes,
                                         FxObjectTypeExternal);
  if ( v13 )
  {
    FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v13, this->m_Globals, this, this->m_BufferSize);
    v2 = v14;
  }
  *PPMemory = v2;
  return 0LL;
}
