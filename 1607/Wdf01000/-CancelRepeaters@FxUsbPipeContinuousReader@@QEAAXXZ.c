/*
 * XREFs of ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C0088FA8
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0089414 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C0089C34 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C0089D00 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0018068 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C002D814 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 */

void __fastcall FxUsbPipeContinuousReader::CancelRepeaters(FxUsbPipeContinuousReader *this)
{
  int v2; // esi
  FxUsbPipeRepeatReader *m_Readers; // rdi
  FxUsbPipe *m_Pipe; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v6; // r9

  KeEnterCriticalRegion();
  v2 = 0;
  if ( this->m_NumReaders )
  {
    m_Readers = this->m_Readers;
    do
    {
      FxRequestBase::Cancel(m_Readers->Request);
      m_Pipe = this->m_Pipe;
      m_Globals = m_Pipe->m_Globals;
      if ( m_Pipe->m_ObjectSize )
        v6 = (void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v6 = 0LL;
      _FX_DRIVER_GLOBALS::WaitForSignal(
        m_Globals,
        &this->m_Readers[v2++].ReadCompletedEvent,
        "waiting for continuous reader to finish, WDFUSBPIPE",
        v6,
        m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
        1);
      ++m_Readers;
    }
    while ( v2 < this->m_NumReaders );
  }
  KeLeaveCriticalRegion();
}
