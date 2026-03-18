/*
 * XREFs of ?FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C009E9BC
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C0081B00 (FxIoTargetFormatIo.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestContext::FormatWriteParams(
        FxRequestContext *this,
        IFxMemory *WriteMemory,
        _WDFMEMORY_OFFSET *WriteOffsets)
{
  this->m_CompletionParams.Type = WdfRequestTypeWrite;
  if ( WriteMemory )
    this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)WriteMemory->GetHandle(WriteMemory);
  if ( WriteOffsets )
    this->m_CompletionParams.Parameters.Write.Offset = WriteOffsets->BufferOffset;
  else
    this->m_CompletionParams.Parameters.Write.Offset = 0LL;
}
