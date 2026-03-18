/*
 * XREFs of ?BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C0022454
 * Callers:
 *     imp_WdfFdoLockStaticChildListForIteration @ 0x1C0030660 (imp_WdfFdoLockStaticChildListForIteration.c)
 *     imp_WdfChildListBeginIteration @ 0x1C0037A50 (imp_WdfChildListBeginIteration.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 */

void __fastcall FxChildList::BeginIteration(FxChildList *this, _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  unsigned __int64 *p_m_ListLock; // rsi
  KIRQL v5; // bp
  int _a2; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rbx

  p_m_ListLock = &this->m_ListLock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Iterator->Reserved[0] = &this->m_DescriptionListHead;
  if ( (Iterator->Flags & 4) != 0 )
    Iterator->Reserved[1] = (void *)1;
  KeClearEvent(&this->m_ScanEvent.m_Event);
  _a2 = ++this->m_ScanCount;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0x11u, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
}
