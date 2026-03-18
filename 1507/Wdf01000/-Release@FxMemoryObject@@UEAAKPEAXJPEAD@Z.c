/*
 * XREFs of ?Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z @ 0x1C0012A20
 * Callers:
 *     ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEAD@Z @ 0x1C0033580 (-Release@FxMemoryObject@@WGI@EAAKPEAXJPEAD@Z.c)
 * Callees:
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0015D30 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0077A28 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 */

__int64 __fastcall FxMemoryObject::Release(FxMemoryObject *this, void *Tag, int Line, char *File)
{
  unsigned __int32 v5; // ebx
  unsigned __int16 m_ObjectFlags; // cx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *v11; // rax

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Next = this[-1].m_DisposeSingleEntry.Next;
    if ( Next )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Next, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v5 = _InterlockedDecrement(&this->m_Refcnt);
  if ( v5 )
    return v5;
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
  {
    if ( (m_ObjectFlags & 0x200) != 0 )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a2 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xBu);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_BufferSize) - 16) = 11;
    }
    v11 = this->m_Globals;
    this->m_ObjectState = 11;
    FxDisposeList::Add(v11->Driver->m_DisposeList, this);
    return v5;
  }
  FxObject::ProcessDestroy(this);
  return 0LL;
}
