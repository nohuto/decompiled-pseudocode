/*
 * XREFs of ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1C00A3640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C002CC18 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

FxTransactionedEntry *__fastcall FxRelatedDeviceList::ProcessAdd(
        FxRelatedDeviceList *this,
        FxTransactionedEntry *NewEntry)
{
  _LIST_ENTRY *Flink; // rax
  FxRelatedDeviceList *v3; // r10
  _LIST_ENTRY *v4; // rdx
  FxTransactionedEntry *v5; // rcx
  FxTransactionedEntry *result; // rax
  __int64 v7; // r9
  unsigned int v8; // r8d

  Flink = this->m_TransactionHead.Flink;
  v3 = this;
  if ( Flink == &this->m_TransactionHead )
  {
LABEL_5:
    v5 = 0LL;
    while ( 1 )
    {
      result = FxTransactionedList::GetNextEntryLocked(v3, v5);
      v5 = result;
      if ( !result )
        break;
      if ( result[1].m_ListLink.Flink == *(_LIST_ENTRY **)(v7 + 48) )
        return (FxTransactionedEntry *)3221226026LL;
    }
  }
  else
  {
    v4 = NewEntry[1].m_ListLink.Flink;
    while ( Flink[3].Flink != v4 )
    {
      Flink = Flink->Flink;
      if ( Flink == &this->m_TransactionHead )
        goto LABEL_5;
    }
    v8 = 0;
    if ( LODWORD(Flink[2].Flink) == 2 )
      return (FxTransactionedEntry *)(unsigned int)-1073741270;
    return (FxTransactionedEntry *)v8;
  }
  return result;
}
