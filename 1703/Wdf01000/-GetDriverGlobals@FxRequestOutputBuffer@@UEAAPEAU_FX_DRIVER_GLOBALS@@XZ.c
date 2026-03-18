/*
 * XREFs of ?GetDriverGlobals@FxRequestOutputBuffer@@UEAAPEAU_FX_DRIVER_GLOBALS@@XZ @ 0x1C0012530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxRequestOutputBuffer_vtbl *__fastcall FxRequestOutputBuffer::GetDriverGlobals(FxRequestOutputBuffer *this)
{
  return this[-16].__vftable;
}
