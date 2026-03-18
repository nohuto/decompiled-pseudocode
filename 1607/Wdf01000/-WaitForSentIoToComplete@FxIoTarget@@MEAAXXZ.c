/*
 * XREFs of ?WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ @ 0x1C0084700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxIoTarget::WaitForSentIoToComplete(FxIoTarget *this)
{
  FxCREvent::EnterCRAndWaitAndLeave(&this->m_SentIoEvent);
}
