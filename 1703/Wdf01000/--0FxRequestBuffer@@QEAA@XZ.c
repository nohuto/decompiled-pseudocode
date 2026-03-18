/*
 * XREFs of ??0FxRequestBuffer@@QEAA@XZ @ 0x1C00035F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBuffer::FxRequestBuffer(FxRequestBuffer *this)
{
  this->DataType = FxRequestBufferUnspecified;
  this->u.Memory = 0uLL;
  this->u.RefMdl.Mdl = 0LL;
}
