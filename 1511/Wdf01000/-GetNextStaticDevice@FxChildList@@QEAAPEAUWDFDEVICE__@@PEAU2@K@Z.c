/*
 * XREFs of ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C000F718
 * Callers:
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C000F650 (imp_WdfFdoRetrieveNextStaticChild.c)
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall FxChildList::GetNextStaticDevice(FxChildList *this, WDFDEVICE__ *PreviousDevice, char Flags)
{
  unsigned __int64 *p_m_ListLock; // r15
  bool v6; // si
  unsigned __int64 v8; // rbx
  KIRQL v9; // r10
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *Blink; // r8
  int Flink; // edx
  _LIST_ENTRY *v14; // rax
  WDFDEVICE__ *v15; // rax
  _LIST_ENTRY *v16; // rbx
  _LIST_ENTRY *j; // rcx
  _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // rbx
  _LIST_ENTRY *v20; // rdx
  WDFDEVICE__ *v21; // rdx

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
              v16 = Blink->Blink;
              if ( WORD1(v16->Blink) )
                v8 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v8 = 0LL;
              if ( v8 )
                goto $Done_5;
              break;
            }
          }
          v14 = Blink->Blink;
          if ( WORD1(v14->Blink) )
            v15 = (WDFDEVICE__ *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v15 = 0LL;
          if ( v15 == PreviousDevice )
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
          v18 = j[-1].Flink;
          if ( v6 && LODWORD(j[1].Flink) == 1 )
          {
            v19 = v18->Blink;
            if ( WORD1(v19->Blink) )
              v8 = (unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL;
            else
              v8 = 0LL;
            break;
          }
          v20 = v18->Blink;
          if ( WORD1(v20->Blink) )
            v21 = (WDFDEVICE__ *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v21 = 0LL;
          if ( v21 == PreviousDevice )
            v6 = 1;
        }
      }
    }
  }
$Done_5:
  KeReleaseSpinLock(p_m_ListLock, v9);
  return (WDFDEVICE__ *)v8;
}
