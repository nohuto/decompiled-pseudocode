/*
 * XREFs of ?AddRef@FxMemoryObject@@UEAAKPEAXJPEAD@Z @ 0x1C000E780
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxMemoryObject::AddRef(FxMemoryObject *this, void *Tag, int Line, char *File)
{
  unsigned int RefCount; // ebx
  FxTagTracker *v6; // rcx

  RefCount = _InterlockedIncrement((volatile signed __int32 *)(&this[-1].m_ObjectState + 1));
  if ( SLOBYTE(this[-1].m_ChildListHead.Blink) < 0 )
  {
    v6 = (FxTagTracker *)this[-2].IFxMemory::__vftable;
    if ( v6 )
      FxTagTracker::UpdateTagHistory(v6, Tag, Line, File, TagAddRef, RefCount);
  }
  return RefCount;
}
