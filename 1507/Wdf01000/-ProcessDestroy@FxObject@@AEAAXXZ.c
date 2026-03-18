/*
 * XREFs of ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0015D30
 * Callers:
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z @ 0x1C0012A20 (-Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C007B988 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C007A914 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C007BC9C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 */

void __fastcall FxObject::ProcessDestroy(FxObject *this, unsigned int a2)
{
  _LIST_ENTRY *Flink; // rbp
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rdi
  void (__fastcall *v6)(unsigned __int64); // rax
  void (__fastcall *v7)(unsigned __int64); // rax
  unsigned __int16 v8; // ax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_ChildEntry.Flink);
  }
  else
  {
    Flink = 0LL;
  }
  m_ObjectSize = this->m_ObjectSize;
  if ( m_ObjectSize && (this->m_ObjectFlags & 8) != 0 )
  {
    for ( i = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      v6 = (void (__fastcall *)(unsigned __int64))i[2];
      if ( v6 )
      {
        v6((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        i[2] = 0LL;
      }
      v7 = (void (__fastcall *)(unsigned __int64))i[3];
      if ( v7 )
      {
        v7((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        i[3] = 0LL;
      }
    }
    v8 = this->m_ObjectSize;
    LOBYTE(a2) = 1;
    if ( v8 )
    {
      v9 = (FxObject_vtbl **)((char *)&this->__vftable + v8);
      if ( v9 )
      {
        do
        {
          v10 = (_QWORD *)v9[1];
          if ( !(_BYTE)a2 )
            FxPoolFree(v9);
          LOBYTE(a2) = 0;
          v9 = v10;
        }
        while ( v10 );
      }
    }
  }
  if ( Flink )
  {
    this[-1].m_ChildEntry.Flink = 0LL;
    FxTagTracker::`scalar deleting destructor'((FxTagTracker *)Flink, a2);
  }
  this->SelfDestruct(this);
}
