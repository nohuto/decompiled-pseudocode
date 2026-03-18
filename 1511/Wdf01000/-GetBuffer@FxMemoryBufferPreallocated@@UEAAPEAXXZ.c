/*
 * XREFs of ?GetBuffer@FxMemoryBufferPreallocated@@UEAAPEAXXZ @ 0x1C00096F0
 * Callers:
 *     imp_WdfMemoryCreateFromLookaside @ 0x1C00353E0 (imp_WdfMemoryCreateFromLookaside.c)
 *     imp_WdfInterruptSynchronize @ 0x1C0035560 (imp_WdfInterruptSynchronize.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0035610 (imp_WdfIoQueueRetrieveNextRequest.c)
 * Callees:
 *     <none>
 */

_FX_DRIVER_GLOBALS *__fastcall FxMemoryBufferPreallocated::GetBuffer(FxMemoryBufferFromPool *this)
{
  return this->m_Globals;
}
