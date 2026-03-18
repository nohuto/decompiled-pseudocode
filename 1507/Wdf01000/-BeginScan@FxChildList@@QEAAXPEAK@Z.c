/*
 * XREFs of ?BeginScan@FxChildList@@QEAAXPEAK@Z @ 0x1C001DB48
 * Callers:
 *     imp_WdfChildListBeginScan @ 0x1C002F120 (imp_WdfChildListBeginScan.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 */

void __fastcall FxChildList::BeginScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // rdi
  KIRQL v4; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *p_m_ModificationListHead; // rbx
  _LIST_ENTRY *j; // rax
  const void *_a1; // rax

  p_m_ListLock = &this->m_ListLock;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  KeClearEvent(&this->m_ScanEvent.m_Event);
  ++this->m_ScanCount;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xBu, WPP_FxChildList_cpp_Traceguids, _a1, this->m_ScanCount);
  }
  for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    LOBYTE(i[5].Flink) = 0;
  p_m_ModificationListHead = &this->m_ModificationListHead;
  for ( j = p_m_ModificationListHead->Flink; j != p_m_ModificationListHead; j = j->Flink )
    LOBYTE(j[2].Blink) = 0;
  KeReleaseSpinLock(p_m_ListLock, v4);
}
