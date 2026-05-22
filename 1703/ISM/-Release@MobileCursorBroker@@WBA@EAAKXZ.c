/*
 * XREFs of ?Release@MobileCursorBroker@@WBA@EAAKXZ @ 0x18001DA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileCursorBroker::Release(__int64 a1)
{
  return DWMCursorBroker::Release((DWMCursorBroker *)(a1 - 16));
}
