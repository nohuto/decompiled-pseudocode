/*
 * XREFs of ?Release@DWMCursor@@W7EAAKXZ @ 0x180005590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::Release(__int64 a1)
{
  return PTPProcessor::Release((PTPProcessor *)(a1 - 8));
}
