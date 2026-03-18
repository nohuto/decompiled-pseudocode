/*
 * XREFs of ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0078500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0079038 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall FxPagedLookasideListFromPool::Initialize(
        FxPagedLookasideListFromPool *this,
        unsigned __int64 BufferSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  unsigned __int64 v5; // rbx
  int v6; // ebp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 v9; // r9
  ULONG v10; // r9d
  unsigned __int64 Size; // [rsp+20h] [rbp-28h]
  unsigned int Tag; // [rsp+28h] [rbp-20h]

  if ( BufferSize < 0x1000 )
  {
    m_Globals = this->m_Globals;
    v5 = BufferSize + 16;
    if ( BufferSize + 16 < BufferSize )
    {
      v9 = 10;
    }
    else
    {
      if ( !m_Globals->FxPoolTrackingOn )
        goto LABEL_3;
      if ( BufferSize + 80 >= BufferSize + 16 )
      {
        v5 = BufferSize + 80;
        goto LABEL_3;
      }
      v9 = 11;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v9, WPP_FxPoolInlines_hpp_Traceguids, -1073741675);
    return 3221225621LL;
  }
  v5 = BufferSize;
LABEL_3:
  v6 = FxLookasideList::InitializeLookaside(this, 0, 0x88u, MemoryAttributes);
  if ( v6 >= 0 )
  {
    v10 = ExDefaultNonPagedPoolType;
    Tag = this->m_PoolTag;
    Size = this->m_MemoryObjectSize;
    this->m_BufferSize = BufferSize;
    this->m_RawBufferSize = v5;
    ExInitializeNPagedLookasideList(&this->m_ObjectLookaside, 0LL, 0LL, v10, Size, Tag, 0);
    ExInitializePagedLookasideList(&this->m_PoolLookaside, 0LL, 0LL, 0, this->m_RawBufferSize, this->m_PoolTag, 0);
  }
  return (unsigned int)v6;
}
