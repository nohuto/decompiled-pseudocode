/*
 * XREFs of ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00557FC
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0006D50 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequest::PostProcessSendAndForget(FxRequest *this)
{
  FxRequestCompletionState m_CompletionState; // edx
  FxIoQueue *m_IoQueue; // r8

  this->m_Irp.m_Irp = 0LL;
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  this->m_CompletionState = 0;
  if ( this->m_Reserved )
  {
    this->m_Completed = 1;
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
  }
  else
  {
    FxRequest::PostProcessCompletion(this, m_CompletionState, m_IoQueue);
  }
}
