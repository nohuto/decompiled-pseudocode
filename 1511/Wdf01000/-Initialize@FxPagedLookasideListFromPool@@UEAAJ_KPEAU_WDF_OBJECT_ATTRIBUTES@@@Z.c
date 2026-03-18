/*
 * XREFs of ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C006CA20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C001D128 (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C006D114 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall FxPagedLookasideListFromPool::Initialize(
        FxPagedLookasideListFromPool *this,
        unsigned __int64 BufferSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  int v8; // edi
  ULONG v9; // r9d
  unsigned __int64 Size; // [rsp+20h] [rbp-38h]
  unsigned int Tag; // [rsp+28h] [rbp-30h]
  unsigned __int64 rawBufferSize; // [rsp+68h] [rbp+10h] BYREF

  if ( BufferSize < 0x1000 )
  {
    result = FxPoolAddHeaderSize(this->m_Globals, BufferSize, &rawBufferSize);
    if ( (int)result < 0 )
      return result;
    v6 = rawBufferSize;
  }
  else
  {
    v6 = BufferSize;
  }
  v8 = FxLookasideList::InitializeLookaside(this, 0, 0x88u, MemoryAttributes);
  if ( v8 >= 0 )
  {
    v9 = ExDefaultNonPagedPoolType;
    Tag = this->m_PoolTag;
    Size = this->m_MemoryObjectSize;
    this->m_BufferSize = BufferSize;
    this->m_RawBufferSize = v6;
    ExInitializeNPagedLookasideList(&this->m_ObjectLookaside, 0LL, 0LL, v9, Size, Tag, 0);
    ExInitializePagedLookasideList(&this->m_PoolLookaside, 0LL, 0LL, 0, this->m_RawBufferSize, this->m_PoolTag, 0);
  }
  return (unsigned int)v8;
}
