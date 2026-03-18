/*
 * XREFs of ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C0008F80
 * Callers:
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEAD@Z @ 0x1C0069F80 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEAD@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00233F4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C006C180 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C006E8B4 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C006FFF4 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxObject::Release(FxObject *this, void *Tag, __int64 Line, char *File)
{
  unsigned __int32 v5; // ebx
  unsigned __int16 m_ObjectFlags; // cx
  _LIST_ENTRY *v7; // r14
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rsi
  void (__fastcall *v10)(unsigned __int64, void *, __int64, char *); // rax
  void (__fastcall *v11)(unsigned __int64, void *, __int64, char *); // rax
  unsigned __int16 v12; // ax
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi
  _LIST_ENTRY *Flink; // rcx

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Flink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v5 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v5 )
  {
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      if ( (m_ObjectFlags & 0x80u) != 0 )
      {
        v7 = this[-1].m_ChildEntry.Flink;
        if ( v7 )
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_ChildEntry.Flink);
      }
      else
      {
        v7 = 0LL;
      }
      m_ObjectSize = this->m_ObjectSize;
      if ( m_ObjectSize && (this->m_ObjectFlags & 8) != 0 )
      {
        for ( i = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
        {
          v10 = (void (__fastcall *)(unsigned __int64, void *, __int64, char *))i[2];
          if ( v10 )
          {
            v10((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[2] = 0LL;
          }
          v11 = (void (__fastcall *)(unsigned __int64, void *, __int64, char *))i[3];
          if ( v11 )
          {
            v11((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[3] = 0LL;
          }
        }
        v12 = this->m_ObjectSize;
        LOBYTE(Tag) = 1;
        if ( v12 )
        {
          v13 = (FxObject_vtbl **)((char *)&this->__vftable + v12);
          if ( v13 )
          {
            do
            {
              v14 = (_QWORD *)v13[1];
              if ( !(_BYTE)Tag )
                FxPoolFree(v13);
              LOBYTE(Tag) = 0;
              v13 = v14;
            }
            while ( v14 );
          }
        }
      }
      if ( v7 )
      {
        this[-1].m_ChildEntry.Flink = 0LL;
        FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v7, (unsigned int)Tag);
      }
      ((void (__fastcall *)(FxObject *, void *, __int64, char *))this->SelfDestruct)(this, Tag, Line, File);
    }
  }
  return v5;
}
