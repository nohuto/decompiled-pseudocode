/*
 * XREFs of ?AddRef@DWMCursorBroker@@WBA@EAAKXZ @ 0x18001D9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::AddRef(__int64 a1)
{
  return DWMFocusedInputTarget::AddRef((DWMFocusedInputTarget *)(a1 - 16));
}
