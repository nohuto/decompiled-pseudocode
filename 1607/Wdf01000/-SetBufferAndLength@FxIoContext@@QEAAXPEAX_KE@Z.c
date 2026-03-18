/*
 * XREFs of ?SetBufferAndLength@FxIoContext@@QEAAXPEAX_KE@Z @ 0x1C006402C
 * Callers:
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085774 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxIoContext::SetBufferAndLength(
        FxIoContext *this,
        void *Buffer,
        unsigned __int64 BufferLength,
        unsigned __int8 CopyBackToBuffer)
{
  _QWORD *m_BufferToFree; // rax

  m_BufferToFree = this->m_BufferToFree;
  this->m_BufferToFree = Buffer;
  this->m_BufferToFreeLength = BufferLength;
  this->m_CopyBackToBuffer = CopyBackToBuffer;
  if ( m_BufferToFree )
    FxPoolFree(m_BufferToFree);
}
