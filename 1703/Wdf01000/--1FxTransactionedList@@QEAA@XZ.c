/*
 * XREFs of ??1FxTransactionedList@@QEAA@XZ @ 0x1C0085958
 * Callers:
 *     ??1FxDevice@@UEAA@XZ @ 0x1C007D2C4 (--1FxDevice@@UEAA@XZ.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C0096194 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C009A3F8 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C009A634 (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxTransactionedList::~FxTransactionedList(FxTransactionedList *this)
{
  bool v1; // zf
  _LIST_ENTRY *p_m_ListHead; // rdi
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *v6; // rax
  _LIST_ENTRY *v7; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_m_TransactionHead; // rbx
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // rax

  v1 = this->m_DeleteOnRemove == 0;
  this->__vftable = (FxTransactionedList_vtbl *)FxTransactionedList::`vftable';
  if ( !v1 )
  {
    p_m_ListHead = &this->m_ListHead;
    while ( p_m_ListHead->Flink != p_m_ListHead )
    {
      Flink = p_m_ListHead->Flink;
      v5 = p_m_ListHead->Flink->Flink;
      if ( p_m_ListHead->Flink->Blink != p_m_ListHead || v5->Blink != Flink )
        __fastfail(3u);
      p_m_ListHead->Flink = v5;
      v5->Blink = p_m_ListHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      if ( LODWORD(Flink[2].Flink) == 3 )
      {
        v6 = Flink + 1;
        v7 = Flink[1].Flink;
        Blink = Flink[1].Blink;
        if ( v7->Blink != &Flink[1] || Blink->Flink != v6 )
          __fastfail(3u);
        Blink->Flink = v7;
        v7->Blink = Blink;
        Flink[1].Blink = Flink + 1;
        v6->Flink = v6;
        ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))Flink[2].Blink->Flink[1].Flink)(
          Flink[2].Blink,
          Flink,
          90LL,
          "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
      }
      ((void (__fastcall *)(_LIST_ENTRY *))Flink[2].Blink->Flink[3].Flink)(Flink[2].Blink);
    }
    p_m_TransactionHead = &this->m_TransactionHead;
    while ( p_m_TransactionHead->Flink != p_m_TransactionHead )
    {
      v10 = p_m_TransactionHead->Flink;
      v11 = p_m_TransactionHead->Flink->Flink;
      if ( p_m_TransactionHead->Flink->Blink != p_m_TransactionHead || v11->Blink != v10 )
        __fastfail(3u);
      p_m_TransactionHead->Flink = v11;
      v11->Blink = p_m_TransactionHead;
      v10->Blink = v10;
      v10->Flink = v10;
      ((void (__fastcall *)(_LIST_ENTRY *))v10[1].Blink->Flink[3].Flink)(v10[1].Blink);
    }
  }
}
