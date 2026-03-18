/*
 * XREFs of ?AddRefOverride@FxObject@@UEAAKGPEAXJPEAD@Z @ 0x1C0060580
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxObject::AddRefOverride(FxObject *this, unsigned __int16 Offset, void *Tag, int Line, char *File)
{
  unsigned int RefCount; // ebx
  _LIST_ENTRY *Flink; // rcx

  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
    Flink = 0LL;
  else
    Flink = this[-1].m_ChildEntry.Flink;
  if ( Flink )
    FxTagTracker::UpdateTagHistory((FxTagTracker *)Flink, Tag, Line, File, TagAddRef, RefCount);
  return RefCount;
}
