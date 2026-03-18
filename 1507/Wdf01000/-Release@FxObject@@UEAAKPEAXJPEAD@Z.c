/*
 * XREFs of ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C00048C0
 * Callers:
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEAD@Z @ 0x1C0075430 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEAD@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0077A28 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C007A914 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C007BC9C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
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
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // r15
  _FX_DRIVER_GLOBALS *v19; // rax

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Flink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
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
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 11;
    }
    v19 = this->m_Globals;
    this->m_ObjectState = 11;
    FxDisposeList::Add(v19->Driver->m_DisposeList, this);
    return 0LL;
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
    return 0LL;
  }
}
