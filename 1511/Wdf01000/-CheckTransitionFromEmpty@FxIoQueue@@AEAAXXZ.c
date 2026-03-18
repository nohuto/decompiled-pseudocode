/*
 * XREFs of ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000EC00
 * Callers:
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000AF2C (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000EA8C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C008306C (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000EBC0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 */

void __fastcall FxIoQueue::CheckTransitionFromEmpty(FxIoQueue *this)
{
  if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    FxIoQueue::SetTransitionFromEmpty(this);
}
