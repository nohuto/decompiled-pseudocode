/*
 * XREFs of ?Release@DWMFocusedInputTarget@@WBI@EAAKXZ @ 0x18001D980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::Release(__int64 a1)
{
  return DWMCursorBroker::Release((DWMCursorBroker *)(a1 - 24));
}
