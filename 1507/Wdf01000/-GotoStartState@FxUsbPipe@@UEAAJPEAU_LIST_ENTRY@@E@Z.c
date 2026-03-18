/*
 * XREFs of ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0090FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0014700 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0090948 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

__int64 __fastcall FxUsbPipe::GotoStartState(FxUsbPipe *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  int started; // edi
  FxUsbPipeContinuousReader *m_Reader; // rax
  int v7; // esi
  __int64 result; // rax
  int v9; // r15d
  FxUsbPipeContinuousReader *v10; // rcx
  __int64 v11; // r14
  FxRequest *Request; // rsi
  unsigned int RefCount; // edx
  FxTagTracker *Blink; // rcx
  _LIST_ENTRY *v15; // rax
  _LIST_ENTRY *v16; // rsi

  started = FxIoTarget::GotoStartState(this, RequestListHead, Lock);
  m_Reader = this->m_Reader;
  if ( !m_Reader || started < 0 || m_Reader->m_ReadersSubmitted )
    return (unsigned int)started;
  v7 = 0;
  if ( !m_Reader->m_NumReaders )
  {
LABEL_7:
    v9 = 0;
    this->m_Reader->m_NumFailedReaders = 0;
    v10 = this->m_Reader;
    if ( v10->m_NumReaders )
    {
      v11 = 0LL;
      do
      {
        Request = v10->m_Readers[v11].Request;
        Request->m_Target = this;
        RefCount = _InterlockedIncrement(&Request->m_Refcnt);
        if ( SLOBYTE(Request->m_ObjectFlags) >= 0 )
          Blink = 0LL;
        else
          Blink = (FxTagTracker *)Request[-1].m_ForwardProgressList.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            Blink,
            this,
            1191,
            "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp",
            TagAddRef,
            RefCount);
        _InterlockedIncrement(&this->m_Reader->m_Pipe->m_IoCount);
        v15 = RequestListHead->Blink;
        v16 = (_LIST_ENTRY *)&Request->120;
        v16->Flink = RequestListHead;
        v16->Blink = v15;
        if ( v15->Flink != RequestListHead )
          __fastfail(3u);
        v15->Flink = v16;
        RequestListHead->Blink = v16;
        KeClearEvent(&this->m_Reader->m_Readers[v9].ReadCompletedEvent.m_Event);
        v10 = this->m_Reader;
        ++v9;
        ++v11;
      }
      while ( v9 < v10->m_NumReaders );
    }
    this->m_Reader->m_ReadersSubmitted = 1;
    return (unsigned int)started;
  }
  while ( 1 )
  {
    result = FxUsbPipeContinuousReader::FormatRepeater(this->m_Reader, &this->m_Reader->m_Readers[v7]);
    started = result;
    if ( (int)result < 0 )
      return result;
    if ( ++v7 >= this->m_Reader->m_NumReaders )
      goto LABEL_7;
  }
}
