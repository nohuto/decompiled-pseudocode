/*
 * XREFs of ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C008CCD4
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008D164 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C008D988 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C008DAF0 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C001ABDC (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C002F60C (-Cancel@FxRequestBase@@QEAAEXZ.c)
 */

void __fastcall FxUsbPipeContinuousReader::CancelRepeaters(FxUsbPipeContinuousReader *this)
{
  int v2; // edi
  FxUsbPipeRepeatReader *m_Readers; // rsi
  FxUsbPipe *m_Pipe; // r9
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v7; // r9

  KeEnterCriticalRegion();
  v2 = 0;
  if ( this->m_NumReaders )
  {
    m_Readers = this->m_Readers;
    do
    {
      FxRequestBase::Cancel(m_Readers->Request);
      m_Pipe = this->m_Pipe;
      m_ObjectSize = m_Pipe->m_ObjectSize;
      m_Globals = m_Pipe->m_Globals;
      v7 = (void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v7 = 0LL;
      _FX_DRIVER_GLOBALS::WaitForSignal(
        m_Globals,
        &this->m_Readers[v2].ReadCompletedEvent,
        "waiting for continuous reader to finish, WDFUSBPIPE",
        v7,
        m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
        1);
      ++m_Readers;
      ++v2;
    }
    while ( v2 < this->m_NumReaders );
  }
  KeLeaveCriticalRegion();
}
