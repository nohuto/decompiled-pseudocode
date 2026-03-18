/*
 * XREFs of ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C0083650
 * Callers:
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C001F684 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0082170 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 * Callees:
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0069D70 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 */

void __fastcall FxIoQueue::FreeAllReservedRequests(FxIoQueue *this, unsigned __int8 Verify)
{
  KIRQL v3; // di
  _LIST_ENTRY *p_m_ReservedRequestList; // rdx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v6; // r8

  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  while ( 1 )
  {
    p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
    if ( p_m_ReservedRequestList->Flink == p_m_ReservedRequestList )
      break;
    Flink = p_m_ReservedRequestList->Flink;
    v6 = p_m_ReservedRequestList->Flink->Flink;
    if ( p_m_ReservedRequestList->Flink->Blink != p_m_ReservedRequestList || v6->Blink != Flink )
      __fastfail(3u);
    p_m_ReservedRequestList->Flink = v6;
    v6->Blink = p_m_ReservedRequestList;
    FxRequest::FreeRequest((FxRequest *)&Flink[-20]);
  }
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v3);
}
