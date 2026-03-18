/*
 * XREFs of ?Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0077F90
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0079038 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall FxNPagedLookasideList::Initialize(
        FxNPagedLookasideList *this,
        unsigned __int64 BufferSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  int v4; // ebx

  if ( BufferSize <= 0xFFFF )
  {
    v4 = FxLookasideList::InitializeLookaside(this, BufferSize, 0x80u, MemoryAttributes);
    if ( v4 >= 0 )
      ExInitializeNPagedLookasideList(
        &this->m_ObjectLookaside,
        0LL,
        0LL,
        ExDefaultNonPagedPoolType,
        this->m_MemoryObjectSize,
        this->m_PoolTag,
        0);
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return (unsigned int)v4;
}
