/*
 * XREFs of ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0089800
 * Callers:
 *     <none>
 * Callees:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0001628 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C002AE30 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 */

__int64 __fastcall FxUsbPipe::GotoStartState(FxUsbPipe *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  int started; // ebp
  int v6; // edi
  FxUsbPipeContinuousReader *m_Reader; // rax
  int v8; // ebx
  __int64 result; // rax
  FxUsbPipeContinuousReader *v10; // rcx
  __int64 v11; // r14
  FxObject *Request; // rbx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_m_Globals; // rbx

  started = FxIoTarget::GotoStartState(this, RequestListHead, Lock);
  v6 = 0;
  m_Reader = this->m_Reader;
  if ( !m_Reader || started < 0 || m_Reader->m_ReadersSubmitted )
    return (unsigned int)started;
  v8 = 0;
  if ( !m_Reader->m_NumReaders )
  {
LABEL_7:
    this->m_Reader->m_NumFailedReaders = 0;
    v10 = this->m_Reader;
    if ( v10->m_NumReaders )
    {
      v11 = 0LL;
      do
      {
        Request = v10->m_Readers[v11].Request;
        Request[1].m_SpinLock.m_Lock = (unsigned __int64)this;
        FxObject::AddRef(Request, this, 1191, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
        _InterlockedIncrement(&this->m_Reader->m_Pipe->m_IoCount);
        Blink = RequestListHead->Blink;
        p_m_Globals = (_LIST_ENTRY *)&Request[1].m_Globals;
        if ( Blink->Flink != RequestListHead )
          __fastfail(3u);
        p_m_Globals->Blink = Blink;
        p_m_Globals->Flink = RequestListHead;
        Blink->Flink = p_m_Globals;
        RequestListHead->Blink = p_m_Globals;
        KeClearEvent(&this->m_Reader->m_Readers[v6].ReadCompletedEvent.m_Event);
        v10 = this->m_Reader;
        ++v6;
        ++v11;
      }
      while ( v6 < v10->m_NumReaders );
    }
    this->m_Reader->m_ReadersSubmitted = 1;
    return (unsigned int)started;
  }
  while ( 1 )
  {
    result = FxUsbPipeContinuousReader::FormatRepeater(this->m_Reader, &this->m_Reader->m_Readers[v8]);
    started = result;
    if ( (int)result < 0 )
      return result;
    if ( ++v8 >= this->m_Reader->m_NumReaders )
      goto LABEL_7;
  }
}
