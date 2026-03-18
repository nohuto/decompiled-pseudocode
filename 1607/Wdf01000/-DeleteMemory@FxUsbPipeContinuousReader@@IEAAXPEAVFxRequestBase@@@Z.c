/*
 * XREFs of ?DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00015FC
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0001628 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C0088D24 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUsbPipeContinuousReader::DeleteMemory(FxUsbPipeContinuousReader *this, FxRequestBase *Request)
{
  FxRequestContext *m_RequestContext; // rcx
  IFxMemory *m_RequestMemory; // rcx

  m_RequestContext = Request->m_RequestContext;
  if ( m_RequestContext )
  {
    m_RequestMemory = m_RequestContext->m_RequestMemory;
    if ( m_RequestMemory )
      m_RequestMemory->Delete(m_RequestMemory);
  }
}
