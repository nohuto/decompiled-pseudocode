/*
 * XREFs of ?Release@MouseProcessor@@WMA@EAAKXZ @ 0x180059D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return MobileCursor::Release((MobileCursor *)(a1 - 192));
}
