/*
 * XREFs of ?Release@MouseProcessor@@WLA@EAAKXZ @ 0x180059DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return MobileCursor::Release((MobileCursor *)(a1 - 176));
}
