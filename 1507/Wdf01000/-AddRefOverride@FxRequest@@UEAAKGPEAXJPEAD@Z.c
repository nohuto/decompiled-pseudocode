/*
 * XREFs of ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEAD@Z @ 0x1C0074F90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C0074F10 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::AddRefOverride(FxRequest *this, __int64 Offset, void *Tag, int Line, char *File)
{
  unsigned int RefCount; // ebx
  _LIST_ENTRY *Blink; // rcx

  if ( (_WORD)Offset )
  {
    FxRequest::AddIrpReference(this, Offset, 0);
    return 2LL;
  }
  else
  {
    RefCount = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      Blink = 0LL;
    else
      Blink = this[-1].m_ForwardProgressList.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Blink, Tag, Line, File, TagAddRef, RefCount);
    return RefCount;
  }
}
