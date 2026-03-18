/*
 * XREFs of ?Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z @ 0x1C0002810
 * Callers:
 *     ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEAD@Z @ 0x1C0036DF0 (-Release@FxMemoryObject@@WGI@EAAKPEAXJPEAD@Z.c)
 * Callees:
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0009360 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00233F4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C006C180 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxMemoryObject::Release(FxMemoryObject *this, void *Tag, int Line, char *File)
{
  unsigned __int32 v5; // ebx
  unsigned __int16 m_ObjectFlags; // ax
  _SINGLE_LIST_ENTRY *Next; // rcx

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
    FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
    FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    return v5;
  }
  FxObject::ProcessDestroy(this);
  return 0LL;
}
