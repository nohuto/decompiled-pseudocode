/*
 * XREFs of ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C000EA54
 * Callers:
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000EA8C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0056278 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C008306C (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueue::RemoveFromDriverOwnedList(FxIoQueue *this, FxRequest *Request)
{
  _LIST_ENTRY *p_m_OwnerListEntry2; // rdx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rax

  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = p_m_OwnerListEntry2->Flink;
  Blink = p_m_OwnerListEntry2->Blink;
  if ( p_m_OwnerListEntry2->Flink->Blink != p_m_OwnerListEntry2 || Blink->Flink != p_m_OwnerListEntry2 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_m_OwnerListEntry2->Blink = p_m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  --this->m_DriverIoCount;
}
