/*
 * XREFs of ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C0014900
 * Callers:
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C0014830 (imp_WdfFdoRetrieveNextStaticChild.c)
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall FxChildList::GetNextStaticDevice(FxChildList *this, WDFDEVICE__ *PreviousDevice, char Flags)
{
  unsigned __int64 *p_m_ListLock; // r14
  bool v6; // di
  unsigned __int64 v8; // rbx
  KIRQL v9; // r10
  _LIST_ENTRY *i; // rdx
  _LIST_ENTRY *Blink; // r9
  int Flink; // ecx
  _LIST_ENTRY *v14; // rcx
  __int16 v15; // ax
  WDFDEVICE__ *v16; // rcx
  _LIST_ENTRY *v17; // rbx
  __int16 v18; // ax
  _LIST_ENTRY *j; // rdx
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *v21; // rbx
  __int16 v22; // dx
  _LIST_ENTRY *v23; // rcx
  __int16 v24; // ax
  WDFDEVICE__ *v25; // rcx

  p_m_ListLock = &this->m_ListLock;
  v6 = PreviousDevice == 0LL;
  v8 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( this->m_ScanCount )
  {
    if ( (Flags & 1) != 0 )
    {
      for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
      {
        if ( !BYTE2(i[5].Flink) )
        {
          Blink = i[1].Blink;
          if ( v6 )
          {
            if ( (Flink = (int)i[1].Flink, Flink == 2)
              || (Flags & 2) != 0 && (unsigned int)(Flink - 3) <= 1
              || (Flags & 4) != 0 && Flink == 1 )
            {
              v17 = Blink->Blink;
              v18 = WORD1(v17->Blink);
              v8 = (unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL;
              if ( !v18 )
                v8 = 0LL;
              if ( v8 )
                goto $Done_5;
              break;
            }
          }
          v14 = Blink->Blink;
          v15 = WORD1(v14->Blink);
          v16 = (WDFDEVICE__ *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v15 )
            v16 = 0LL;
          if ( v16 == PreviousDevice )
            v6 = 1;
        }
      }
    }
    if ( (Flags & 4) != 0 )
    {
      for ( j = this->m_ModificationListHead.Flink; j != &this->m_ModificationListHead; j = j->Flink )
      {
        if ( !BYTE2(j[2].Blink) )
        {
          v20 = j[-1].Flink;
          if ( v6 && LODWORD(j[1].Flink) == 1 )
          {
            v21 = v20->Blink;
            v22 = WORD1(v21->Blink);
            v8 = (unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !v22 )
              v8 = 0LL;
            break;
          }
          v23 = v20->Blink;
          v24 = WORD1(v23->Blink);
          v25 = (WDFDEVICE__ *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v24 )
            v25 = 0LL;
          if ( v25 == PreviousDevice )
            v6 = 1;
        }
      }
    }
  }
$Done_5:
  KeReleaseSpinLock(p_m_ListLock, v9);
  return (WDFDEVICE__ *)v8;
}
