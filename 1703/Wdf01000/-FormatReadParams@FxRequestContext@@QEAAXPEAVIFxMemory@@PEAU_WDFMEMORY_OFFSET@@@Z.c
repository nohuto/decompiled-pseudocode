/*
 * XREFs of ?FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00A37D4
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C0085FA0 (FxIoTargetFormatIo.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestContext::FormatReadParams(
        FxRequestContext *this,
        IFxMemory *ReadMemory,
        _WDFMEMORY_OFFSET *ReadOffsets)
{
  this->m_CompletionParams.Type = WdfRequestTypeRead;
  if ( ReadMemory )
    this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)ReadMemory->GetHandle(ReadMemory);
  if ( ReadOffsets )
    this->m_CompletionParams.Parameters.Write.Offset = ReadOffsets->BufferOffset;
  else
    this->m_CompletionParams.Parameters.Write.Offset = 0LL;
}
