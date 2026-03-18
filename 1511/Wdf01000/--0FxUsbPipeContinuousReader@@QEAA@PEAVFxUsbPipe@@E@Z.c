/*
 * XREFs of ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C007F310
 * Callers:
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0080290 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0031F98 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

void __fastcall FxUsbPipeContinuousReader::FxUsbPipeContinuousReader(
        FxUsbPipeContinuousReader *this,
        FxUsbPipe *Pipe,
        unsigned __int8 NumReaders)
{
  this->m_NumReaders = NumReaders;
  this->m_NumFailedReaders = 0;
  `vector constructor iterator'(
    (char *)this->m_Readers,
    0x78uLL,
    1,
    (void *(__fastcall *)(void *))FxUsbPipeRepeatReader::FxUsbPipeRepeatReader);
  this->m_WorkItem = 0LL;
  this->m_WorkItemRerunContext = 0LL;
  this->m_WorkItemFlags = 0;
  this->m_Lookaside = 0LL;
  this->m_WorkItemThread = 0LL;
  *(_WORD *)&this->m_WorkItemQueued = 0;
  this->m_Pipe = Pipe;
  this->m_TargetDevice = Pipe->m_TargetDevice;
  memset(this->m_Readers, 0, 120LL * this->m_NumReaders);
}
