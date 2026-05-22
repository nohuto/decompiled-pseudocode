/*
 * XREFs of ?Release@MouseProcessor@@WLI@EAAKXZ @ 0x180059DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return MobileCursor::Release((MobileCursor *)(a1 - 184));
}
