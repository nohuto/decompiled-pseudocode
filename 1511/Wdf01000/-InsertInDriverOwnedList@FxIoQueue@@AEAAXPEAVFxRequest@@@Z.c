/*
 * XREFs of ?InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0055F88
 * Callers:
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueue::InsertInDriverOwnedList(FxIoQueue *this, FxRequest *Request)
{
  _LIST_ENTRY *p_m_OwnerListEntry2; // rdx
  _LIST_ENTRY *p_m_DriverOwned; // rcx
  _LIST_ENTRY *Blink; // rax

  ++this->m_DriverIoCount;
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  p_m_DriverOwned = &this->m_DriverOwned;
  Blink = p_m_DriverOwned->Blink;
  p_m_OwnerListEntry2->Flink = p_m_DriverOwned;
  p_m_OwnerListEntry2->Blink = Blink;
  if ( Blink->Flink != p_m_DriverOwned )
    __fastfail(3u);
  Blink->Flink = p_m_OwnerListEntry2;
  p_m_DriverOwned->Blink = p_m_OwnerListEntry2;
}
