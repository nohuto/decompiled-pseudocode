/*
 * XREFs of ?Release@MobileCursorBroker@@WCA@EAAKXZ @ 0x18001D9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileCursorBroker::Release(__int64 a1)
{
  return DWMCursorBroker::Release((DWMCursorBroker *)(a1 - 32));
}
