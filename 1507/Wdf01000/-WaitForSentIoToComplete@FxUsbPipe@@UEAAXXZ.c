/*
 * XREFs of ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C0091A00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C00905E8 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 */

void __fastcall FxUsbPipe::WaitForSentIoToComplete(FxUsbPipe *this)
{
  const void *v1; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v5; // r10
  const void *v6; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx

  v1 = 0LL;
  if ( this->m_Reader )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxUsbPipe_cpp_Traceguids, _a1);
    }
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_Reader->m_WorkItem->m_WorkItemCompleted);
    v5 = this->m_Globals;
    if ( v5->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v6 = 0LL;
      WPP_IFR_SF_qd(v5, 5u, 0xEu, 0x1Au, WPP_FxUsbPipe_cpp_Traceguids, v6, this->m_Reader->m_NumReaders);
    }
    FxUsbPipeContinuousReader::CancelRepeaters(this->m_Reader);
  }
  v7 = this->m_Globals;
  if ( v7->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      v1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(v7, 5u, 0xEu, 0x1Bu, WPP_FxUsbPipe_cpp_Traceguids, v1);
  }
  FxCREvent::EnterCRAndWaitAndLeave(&this->m_SentIoEvent);
}
