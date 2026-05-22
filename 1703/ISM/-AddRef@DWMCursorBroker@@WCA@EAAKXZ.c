/*
 * XREFs of ?AddRef@DWMCursorBroker@@WCA@EAAKXZ @ 0x18001DA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::AddRef(__int64 a1)
{
  return DWMFocusedInputTarget::AddRef((DWMFocusedInputTarget *)(a1 - 32));
}
